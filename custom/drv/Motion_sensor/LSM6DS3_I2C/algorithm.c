/*****************************************************************************
* File Name          : algorithm.c
* Author             : Hongtao
* Version            : v9.5
* Date               : 28/11/2019
* Description        : algorithm for fall detection
*
* HISTORY:
* Date               |	Modification                    |	Author
* 15/02/2019         |	Initial Revision                |	Young
* 05/08/2019         |  Cleared useless files           | Frank
* 12/08/2019         |  Renamed buffers                 | Frank
* 20/08/2019         |  Sampling rate: 208Hz            | Hongtao
* 02/09/2019         |  Parameters opitimization        | Hongtao
* 20/10/2019         |  Adapted to ST s3tr sensor       | Hongtao
* 26/11/2019         |  Added peak analysis fucntion    | Hongtao
********************************************************************************/
#include "algorithm.h"
#include "lsm6ds3.h"
#include <string.h>
#include <math.h>
#include "lsm6ds3_i2c_operation.h"
#include "kal_public_api.h"
#include "dcl.h"
#include "kal_trace.h"
#include "kal_release.h"
#include "drv_comm.h"
#include "kal_general_types.h"
#include "kal_public_defs.h"
#include "MMIDataType.h"
#include "algorithm.h"
#include "intrCtrl.h"
#include "QueueGprot_Int.h"
#include "stack_config.h"
#include "stack_ltlcom.h"
#include "stack_common.h"
#include "stack_msgs.h"
#include "app_ltlcom.h"         /* Task message communiction */
#include "task_config.h"        /* Task creation */

#if defined(PRINT_RAW_DATA_TEST_MODE)
volatile int32_t raw_data_index = 0;
double test_acc_data_x,test_acc_data_y,test_acc_data_z,test_gyro_data_x,test_gyro_data_y,test_gyro_data_z,test_gyro_magn,max_test_gyro_magn;
void get_test_raw_data(double* acc_x,double* acc_y,double* acc_z,double* gyro_x,double* gyro_y,double* gyro_z,double* gyro_magn,double* max_gyro_magn)
{
	*acc_x = test_acc_data_x;
	*acc_y = test_acc_data_y;
	*acc_z = test_acc_data_z;
	*gyro_x = test_gyro_data_x;
	*gyro_y = test_gyro_data_y;
	*gyro_z = test_gyro_data_z;
	*gyro_magn = test_gyro_magn;
	*max_gyro_magn = max_test_gyro_magn;
}
#endif

S32 LSM6DS3_bus_write(uint8_t wire_type, uint8_t reg_addr, uint8_t* reg_data, uint16_t data_len)
{
	S32 iError = 0;

	iError = lsm6ds3_i2c_send(LSM6DS3TR_C_I2C_ADD_L, reg_addr, reg_data, data_len);
	return iError;
}

S32 LSM6DS3_bus_read(uint8_t wire_type, uint8_t reg_addr, uint8_t* reg_data, uint16_t data_len)
{
	S32 iError = 0;

	iError = lsm6ds3_i2c_receive(LSM6DS3TR_C_I2C_ADD_L, reg_addr, reg_data, data_len);
	return iError;
}

void LSM6DS3_delay_msek(U32 msek)
{
    /*Here you can write your own delay routine*/
    kal_sleep_task(msek/KAL_MILLISECS_PER_TICK+1);
}

/*--------------------------------------------------------------------------*
 *  By using lsm6ds3 the following structure parameter can be accessed
 *  Bus write function pointer: platform_write
 *  Bus read function pointer: platform_read
 *  Delay function pointer: delay_msec
 *  I2C address: dev_addr
 *--------------------------------------------------------------------------*/
S32 lsm6ds3_wire_connection_routine(uint8_t wire_type)
{
    S32 iError = STATUS_OK;


    if(wire_type >= LSM6DS3_WIRE_TYPE_MAX) return STATUS_INVALID_CTRL_DATA;
    switch(wire_type)
    {
    	case LSM6DS3_WIRE_TYPE_I2C:
    		iError = lsm6ds3_i2c_configure(LSM6DS3TR_C_I2C_ADD_L, 400);

			lsm6ds3.write_reg = LSM6DS3_bus_write;
			lsm6ds3.read_reg = LSM6DS3_bus_read;
    		break;

    	case LSM6DS3_WIRE_TYPE_SPI:
    		//reserved for SPI wire connection way
    		break;

    	default:
    		break;
    }
    return iError;
}

// Declare fifo functions
static float angle_analyse_fifo(void);
static float gyroscope_analyse_fifo(void);
static float fall_verification_fifo(void);
static float fall_verification_multi_fifo(void);
static float fall_verification_fifo_skip(void);
uint8_t algorithm_analyse_fifo(void);
static float acceleration_analyse_fifo(void);

S32 init_lsm6ds3_reset(void)
{
	S32 error = STATUS_OK;
	U8 rst;
	
	//software reset,gyr and acc in power down mode
	error = lsm6ds3tr_c_reset_set(&lsm6ds3, PROPERTY_ENABLE);
	if(error!= STATUS_OK) return error;
	do {
		lsm6ds3tr_c_reset_get(&lsm6ds3, &rst);
	} while (rst);

	//set acc and gry full-scale
	error = lsm6ds3tr_c_xl_full_scale_set(&lsm6ds3, LSM6DS3TR_C_2g);
	if(error!= STATUS_OK) return error;

	error = lsm6ds3tr_c_gy_full_scale_set(&lsm6ds3, LSM6DS3TR_C_250dps);
	if(error!= STATUS_OK) return error;

	//enable block data update
	error = lsm6ds3tr_c_block_data_update_set(&lsm6ds3, PROPERTY_ENABLE);
	if(error!= STATUS_OK) return error;

	lsm6ds3tr_c_tap_detection_on_z_set(&lsm6ds3, PROPERTY_ENABLE);
	lsm6ds3tr_c_tap_detection_on_y_set(&lsm6ds3, PROPERTY_ENABLE);
	lsm6ds3tr_c_tap_detection_on_x_set(&lsm6ds3, PROPERTY_ENABLE);
	lsm6ds3tr_c_4d_mode_set(&lsm6ds3, PROPERTY_ENABLE);
	lsm6ds3tr_c_tap_threshold_x_set(&lsm6ds3, FIFO_TAP_SENS);
	lsm6ds3tr_c_tap_quiet_set(&lsm6ds3, 1);
	lsm6ds3tr_c_tap_shock_set(&lsm6ds3, 2);
	lsm6ds3tr_c_tap_mode_set(&lsm6ds3, LSM6DS3TR_C_ONLY_SINGLE);
	lsm6ds3tr_c_all_sources_get(&lsm6ds3, &all_source);

	//Enable interrupt generation on INT1 pin
  	lsm6ds3tr_c_pin_int1_route_get(&lsm6ds3, &int_1_reg);
	int_1_reg.int1_single_tap = PROPERTY_ENABLE;
	//int_1_reg.int1_fth= PROPERTY_ENABLE;
	lsm6ds3tr_c_pin_int1_route_set(&lsm6ds3, int_1_reg);

	//Set FIFO watermark to a multiple of a pattern
  	pattern_len = 6;
	pattern_numbers = ACC_GYRO_FIFO_BUF_LEN;
  	lsm6ds3tr_c_fifo_watermark_set(&lsm6ds3, pattern_numbers*pattern_len);
	lsm6ds3tr_c_fifo_stop_on_wtm_set(&lsm6ds3, PROPERTY_ENABLE);

	//Set FIFO mode to Stream mode
  	lsm6ds3tr_c_fifo_mode_set(&lsm6ds3, LSM6DS3TR_C_STREAM_TO_FIFO_MODE);
  	//lsm6ds3tr_c_fifo_mode_set(&lsm6ds3, LSM6DS3TR_C_BYPASS_TO_STREAM_MODE);

	//Set FIFO sensor decimator
	lsm6ds3tr_c_fifo_xl_batch_set(&lsm6ds3, LSM6DS3TR_C_FIFO_XL_NO_DEC);
	lsm6ds3tr_c_fifo_gy_batch_set(&lsm6ds3, LSM6DS3TR_C_FIFO_GY_NO_DEC);

	//Set ODR FIFO
  	lsm6ds3tr_c_fifo_data_rate_set(&lsm6ds3, LSM6DS3TR_C_FIFO_208Hz);

	//Set XL and Gyro Output Data Rate:
  	lsm6ds3tr_c_xl_data_rate_set(&lsm6ds3, LSM6DS3TR_C_XL_ODR_833Hz);
	lsm6ds3tr_c_gy_data_rate_set(&lsm6ds3, LSM6DS3TR_C_GY_ODR_833Hz);

	return STATUS_OK;
}

void lsm6ds3_fall_turn_on(void)
{
	kal_prompt_trace(MOD_ABM, "lsm6ds3_fall_turn_on");
	
	init_lsm6ds3_reset();
}

void lsm6ds3_fall_turn_off(void)
{
	kal_prompt_trace(MOD_ABM, "lsm6ds3_fall_turn_off");
	
	//Set ODR FIFO
  	lsm6ds3tr_c_fifo_data_rate_set(&lsm6ds3, LSM6DS3TR_C_FIFO_DISABLE);

	//Set XL and Gyro Output Data Rate:
  	lsm6ds3tr_c_xl_data_rate_set(&lsm6ds3, LSM6DS3TR_C_XL_ODR_OFF);
	lsm6ds3tr_c_gy_data_rate_set(&lsm6ds3, LSM6DS3TR_C_GY_ODR_OFF);
}

S32 init_lsm6ds3(void)
{
	S32 error = STATUS_OK;
	U8 device_id;

	//init I2C
	error = (lsm6ds3_wire_connection_routine(LSM6DS3_WIRE_TYPE_I2C));
	if(error!= STATUS_OK) return error;

	//read device id
	error = lsm6ds3tr_c_device_id_get(&lsm6ds3, &device_id);
	kal_prompt_trace(MOD_ABM, "init_lsm6ds3 device_id:%x", device_id);
	if (device_id != LSM6DS3TR_C_ID) return STATUS_DEVICE_NOT_EXIST;

	error = init_lsm6ds3_step();
	if(error!= STATUS_OK) return error;
	
	error = init_lsm6ds3_reset();
	if(error!= STATUS_OK) return error;
	
	return STATUS_OK;
}

S32 get_lsm6ds3_fifo_acceleration_angular_rate_data_s16(S16 *acceleration_mg, S16 *angular_rate_mdps)
{
	uint16_t num = 0;
	uint16_t num_pattern = 0;
	volatile uint16_t acc_magn = 0;
	uint8_t waterm = 0;
	uint16_t i = 0;
	uint16_t j = 0;
	uint16_t k = 0;
	uint16_t l = 0;
	S32 error;

	fifo_stem_flag = true;

	error = lsm6ds3tr_c_fifo_wtm_flag_get(&lsm6ds3, &waterm);
	kal_prompt_trace(MOD_ABM,"001 error:%d, waterm:%d", error,waterm);
	if(error!=STATUS_OK) return STATUS_FAIL;
	if(waterm)
	{
		error = lsm6ds3tr_c_fifo_data_level_get(&lsm6ds3, &num);
		kal_prompt_trace(MOD_ABM,"002 error:%d, num:%d", error,num);
		if(error!=STATUS_OK) return error;

		num_pattern = num/pattern_len;
		kal_prompt_trace(MOD_ABM,"003 num_pattern:%d, pattern_len:%d", num_pattern,pattern_len);
		while (num_pattern-- > 0)
		{
			lsm6ds3tr_c_fifo_raw_data_get(&lsm6ds3, data_raw_angular_rate.u8bit, 3*sizeof(int16_t));

			// *angular_rate_mdps = lsm6ds3tr_c_from_fs250dps_to_mdps(data_raw_angular_rate.i16bit[0]);
			// *(angular_rate_mdps+1) = lsm6ds3tr_c_from_fs250dps_to_mdps(data_raw_angular_rate.i16bit[1]);
			// *(angular_rate_mdps+2) = lsm6ds3tr_c_from_fs250dps_to_mdps(data_raw_angular_rate.i16bit[2]);

			*angular_rate_mdps = data_raw_angular_rate.i16bit[0];
			*(angular_rate_mdps+1) = data_raw_angular_rate.i16bit[1];
			*(angular_rate_mdps+2) = data_raw_angular_rate.i16bit[2];

			lsm6ds3tr_c_fifo_raw_data_get(&lsm6ds3, data_raw_acceleration.u8bit, 3*sizeof(int16_t));

			// *acceleration_mg = lsm6ds3tr_c_from_fs2g_to_mg(data_raw_acceleration.i16bit[0]);
			// *(acceleration_mg+1) = lsm6ds3tr_c_from_fs2g_to_mg(data_raw_acceleration.i16bit[1]);
			// *(acceleration_mg+2) = lsm6ds3tr_c_from_fs2g_to_mg(data_raw_acceleration.i16bit[2]);

			*acceleration_mg = data_raw_acceleration.i16bit[0];
			*(acceleration_mg+1) = data_raw_acceleration.i16bit[1];
			*(acceleration_mg+2) = data_raw_acceleration.i16bit[2];

			acc_x_buffer_a[num_pattern]= acceleration_mg[0];
			acc_y_buffer_a[num_pattern]= acceleration_mg[1];
			acc_z_buffer_a[num_pattern]= acceleration_mg[2];
			gyro_x_buffer_a[num_pattern] = angular_rate_mdps[0];
			gyro_y_buffer_a[num_pattern] = angular_rate_mdps[1];
			gyro_z_buffer_a[num_pattern] = angular_rate_mdps[2];
			//buf_a_ptr++;
			buf_counter++; // 1    681+340

			// acc_magn = sqrt(pow(acc_x_buffer_a[num_pattern], 2)+ pow(acc_y_buffer_a[num_pattern], 2) + pow(acc_z_buffer_a[num_pattern], 2));

			kal_prompt_trace(MOD_ABM,"BufA_No: %d, Buf_Ptr: %d, ACC: %d, %d, %d, GYR: %d, %d, %d", num_pattern, buf_counter, // 340   680+340
							acc_x_buffer_a[num_pattern], acc_y_buffer_a[num_pattern], acc_z_buffer_a[num_pattern],
							gyro_x_buffer_a[num_pattern], gyro_y_buffer_a[num_pattern], gyro_z_buffer_a[num_pattern]);

			if(buf_counter >= ACC_GYRO_FIFO_BUF_LEN  && buf_counter < ACC_GYRO_FIFO_BUF_LEN*2)
			{
				//buf_a_ptr = 0;
				uint16_t i_r = ACC_GYRO_FIFO_BUF_LEN-1; // reversed index
				for (i=0; i<ACC_GYRO_FIFO_BUF_LEN; i++)
				{ 
					//patterns are stored in reverse order from bufferA
					acc_x_hist_buffer[i_r]= acc_x_buffer_a[i];
					acc_y_hist_buffer[i_r]= acc_y_buffer_a[i];
					acc_z_hist_buffer[i_r]= acc_z_buffer_a[i];
					gyro_x_hist_buffer[i_r] = gyro_x_buffer_a[i];
					gyro_y_hist_buffer[i_r] = gyro_y_buffer_a[i];
					gyro_z_hist_buffer[i_r] = gyro_z_buffer_a[i];
					//buf_hist_ptr++;
					buf_counter++;

					kal_prompt_trace(MOD_ABM,"History_Buf: %d, Buf_Ptr: %d, ACC: %d, %d, %d, GYRO: %d, %d, %d", 
												i_r, buf_counter, // 341 -> 680
												acc_x_hist_buffer[i_r], acc_y_hist_buffer[i_r], acc_z_hist_buffer[i_r],
												gyro_x_hist_buffer[i_r], gyro_y_hist_buffer[i_r], gyro_z_hist_buffer[i_r]);
					i_r--;
				}
				
				lsm6ds3tr_c_pin_int1_route_get(&lsm6ds3, &int_1_reg);
				int_1_reg.int1_fth = PROPERTY_ENABLE;
				lsm6ds3tr_c_pin_int1_route_set(&lsm6ds3, int_1_reg);
			}
			
			//if(buf_hist_ptr>=340){
			if(buf_counter >= ACC_GYRO_FIFO_BUF_LEN*3 && buf_counter < ACC_GYRO_FIFO_BUF_LEN*4)
			{
				uint16_t j_r = ACC_GYRO_FIFO_BUF_LEN-1; // reversed index

				for(j=0; j<ACC_GYRO_FIFO_BUF_LEN; j++)
				{
					acc_x_cur_buffer[j_r] = acc_x_buffer_a[j];
					acc_y_cur_buffer[j_r] = acc_y_buffer_a[j];
					acc_z_cur_buffer[j_r] = acc_z_buffer_a[j];
					gyro_x_cur_buffer[j_r] = gyro_x_buffer_a[j];
					gyro_y_cur_buffer[j_r] = gyro_y_buffer_a[j];
					gyro_z_cur_buffer[j_r] = gyro_z_buffer_a[j];

					//buf_cur_ptr++;
					buf_counter++; // 680+340+340

					kal_prompt_trace(MOD_ABM,"Current_Buf: %d, Buf_Ptr: %d, ACC: %d, %d, %d, GYRO: %d, %d, %d", 
												j_r, buf_counter, // 680+340 -> 680+680
												acc_x_cur_buffer[j_r], acc_y_cur_buffer[j_r], acc_z_cur_buffer[j_r],
												gyro_x_cur_buffer[j_r], gyro_y_cur_buffer[j_r], gyro_z_cur_buffer[j_r]);

					j_r--;
				}
			}
			
			//if(buf_counter>=1360){
			//	buf_counter = 0;
			//}
			if(buf_counter >= ACC_GYRO_FIFO_BUF_LEN*5 && buf_counter < ACC_GYRO_FIFO_BUF_LEN*6)
			{
				//buf_cur_ptr = 0;

				uint16_t k_r = ACC_GYRO_FIFO_BUF_LEN-1; // reversed index

				for(k=0; k<ACC_GYRO_FIFO_BUF_LEN; k++)
				{
					acc_x_veri_buffer[k_r] = acc_x_buffer_a[k];
					acc_y_veri_buffer[k_r] = acc_y_buffer_a[k];
					acc_z_veri_buffer[k_r] = acc_z_buffer_a[k];
					gyro_x_veri_buffer[k_r] = gyro_x_buffer_a[k];
					gyro_y_veri_buffer[k_r] = gyro_y_buffer_a[k];
					gyro_z_veri_buffer[k_r] = gyro_z_buffer_a[k];

					buf_counter++;

					kal_prompt_trace(MOD_ABM,"Verification_Buf: %d, Buf_Ptr: %d, ACC: %d, %d, %d, GYRO: %d, %d, %d", 
												k_r, buf_counter,
												acc_x_veri_buffer[k_r], acc_y_veri_buffer[k_r], acc_z_veri_buffer[k_r],
												gyro_x_veri_buffer[k_r], gyro_y_veri_buffer[k_r], gyro_z_veri_buffer[k_r]);
					k_r--;
				}
			}

			if(buf_counter >= ACC_GYRO_FIFO_BUF_LEN*7 && buf_counter < ACC_GYRO_FIFO_BUF_LEN*8)
			{
				//buf_cur_ptr = 0;

				uint16_t l_r = ACC_GYRO_FIFO_BUF_LEN-1; // reversed index

				for(k=0; l<ACC_GYRO_FIFO_BUF_LEN; l++)
				{
					acc_x_veri_buffer_1[l_r] = acc_x_buffer_a[l];
					acc_y_veri_buffer_1[l_r] = acc_y_buffer_a[l];
					acc_z_veri_buffer_1[l_r] = acc_z_buffer_a[l];
					gyro_x_veri_buffer_1[l_r] = gyro_x_buffer_a[l];
					gyro_y_veri_buffer_1[l_r] = gyro_y_buffer_a[l];
					gyro_z_veri_buffer_1[l_r] = gyro_z_buffer_a[l];

					buf_counter++;

					kal_prompt_trace(MOD_ABM,"Verification_Buf: %d, Buf_Ptr: %d, ACC: %d, %d, %d, GYRO: %d, %d, %d", 
												l_r, buf_counter,
												acc_x_veri_buffer_1[l_r], acc_y_veri_buffer_1[l_r], acc_z_veri_buffer_1[l_r],
												gyro_x_veri_buffer_1[l_r], gyro_y_veri_buffer_1[l_r], gyro_z_veri_buffer_1[l_r]);
					l_r--;
				}
			}

			if(buf_counter >= ACC_GYRO_FIFO_BUF_LEN*8)
			{
				buf_counter = 0;

				// ang = angle_analyse_fifo();

				// kal_prompt_trace(MOD_ABM,"angle: %d", ang);
				// algorithm_analyse_fifo();

				fifo_stem_flag = false;
				break;
			}
		}
		lsm6ds3tr_c_fifo_mode_set(&lsm6ds3, LSM6DS3TR_C_BYPASS_MODE);
		//stop getting data if historic, current and verification buffers full at first time
		if(fifo_stem_flag)
			lsm6ds3tr_c_fifo_mode_set(&lsm6ds3, LSM6DS3TR_C_STREAM_TO_FIFO_MODE);
		else
			init_lsm6ds3_reset();

		#if defined(PRINT_RAW_DATA_TEST_MODE)
		{
			uint8_t test_buff[128] = {0};

			test_acc_data_x = acceleration_mg[0]/1000.0;
			test_acc_data_y = acceleration_mg[1]/1000.0;
			test_acc_data_z = acceleration_mg[2]/1000.0;

			test_gyro_data_x = angular_rate_mdps[0]/1000.0;
			test_gyro_data_y = angular_rate_mdps[1]/1000.0;
			test_gyro_data_z = angular_rate_mdps[2]/1000.0;

			test_gyro_magn = sqrt(pow(test_gyro_data_x,2)+pow(test_gyro_data_y,2)+pow(test_gyro_data_z,2));
			if(test_gyro_magn>max_test_gyro_magn)
			{
				max_test_gyro_magn = test_gyro_magn;
			}
		}
		#endif
	
		return STATUS_OK;
	}
	return STATUS_FAIL;
}

//do we need this function? to decide.
S32 config_lsm6ds3_stop(void)
{
	S32 error = STATUS_OK;
	U8 device_id, rst,temp_val;

	lsm6ds3tr_c_int1_route_t int_1_reg;

	//read device id
	error = lsm6ds3tr_c_device_id_get(&lsm6ds3, &device_id);
	kal_prompt_trace(MOD_ABM, "YOUNG TEST:DBG error of get_device_id and device id  are:""%d,%x", error,device_id);
	if (device_id != LSM6DS3TR_C_ID) return STATUS_DEVICE_NOT_EXIST;

	//enable block data update
	error = lsm6ds3tr_c_block_data_update_set(&lsm6ds3, PROPERTY_ENABLE);
	kal_prompt_trace(MOD_ABM, "YOUNG TEST:DBG error of block_data_update  is:""%d", error);
	if(error!= STATUS_OK) return error;

	//set acc and gry full-scale
	error = lsm6ds3tr_c_xl_full_scale_set(&lsm6ds3, LSM6DS3TR_C_2g);
	kal_prompt_trace(MOD_ABM, "YOUNG TEST:DBG error of set_acc_full_scale is:""%d", error);
	if(error!= STATUS_OK) return error;
	error = lsm6ds3tr_c_gy_full_scale_set(&lsm6ds3, LSM6DS3TR_C_250dps);
	kal_prompt_trace(MOD_ABM, "YOUNG TEST:DBG error of set_gry_full_scale is:""%d", error);
	if(error!= STATUS_OK) return error;

	//set acc and gry data rate
	error = lsm6ds3tr_c_xl_data_rate_set(&lsm6ds3, LSM6DS3TR_C_XL_ODR_OFF);
	kal_prompt_trace(MOD_ABM, "YOUNG TEST:DBG error of set_acc_data_rate  is:""%d", error);
	if(error!= STATUS_OK) return error;
	error = lsm6ds3tr_c_gy_data_rate_set(&lsm6ds3, LSM6DS3TR_C_GY_ODR_OFF);
	kal_prompt_trace(MOD_ABM, "YOUNG TEST:DBG error of set_gry_data_rate  is:""%d", error);
	if(error!= STATUS_OK) return error;

	//set int1 for acc and gry data ready
	error = lsm6ds3tr_c_pin_int1_route_get(&lsm6ds3, &int_1_reg);
	kal_prompt_trace(MOD_ABM, "YOUNG TEST:DBG error of get_int1_route  is:""%d", error);
	if(error!= STATUS_OK) return error;
	int_1_reg.int1_drdy_g = PROPERTY_ENABLE;
	int_1_reg.int1_drdy_xl = PROPERTY_ENABLE;
	error = lsm6ds3tr_c_pin_int1_route_set(&lsm6ds3, int_1_reg);
	kal_prompt_trace(MOD_ABM, "YOUNG TEST:DBG error of set_int1_route  is:""%d", error);
	if(error!= STATUS_OK) return error;


	//read registers
	error = lsm6ds3tr_c_read_reg(&lsm6ds3, LSM6DS3TR_C_CTRL3_C, &temp_val, 1);
	kal_prompt_trace(MOD_ABM, "YOUNG TEST:DBG error and LSM6DS3_CTRL3_C  are:""%d,%x", error,temp_val);

	temp_val = 0;
	error = lsm6ds3tr_c_read_reg(&lsm6ds3, LSM6DS3TR_C_CTRL1_XL, &temp_val, 1);
	kal_prompt_trace(MOD_ABM, "YOUNG TEST:DBG error and LSM6DS3_CTRL1_XL  are:""%d,%x", error,temp_val);

	temp_val = 0;
	error = lsm6ds3tr_c_read_reg(&lsm6ds3, LSM6DS3TR_C_CTRL2_G, &temp_val, 1);
	kal_prompt_trace(MOD_ABM, "YOUNG TEST:DBG error and LSM6DS3_CTRL2_G  are:""%d,%x", error,temp_val);

	temp_val = 0;
	error = lsm6ds3tr_c_read_reg(&lsm6ds3, LSM6DS3TR_C_INT1_CTRL, &temp_val, 1);
	kal_prompt_trace(MOD_ABM, "YOUNG TEST:DBG error and LSM6DS3_INT1_CTRL  are:""%d,%x", error,temp_val);

	temp_val = 0;
	error = lsm6ds3tr_c_read_reg(&lsm6ds3, LSM6DS3TR_C_WHO_AM_I, &temp_val, 1);
	kal_prompt_trace(MOD_ABM, "YOUNG TEST:DBG error and LSM6DS3_WHO_AM_I  are:""%d,%x", error,temp_val);

	return STATUS_OK;

}

void lsm6ds3_data_handler(void)
{
    volatile int16_t acc_data_s16[3] = {0}, gyro_data_s16[3] = {0};
    volatile int result = 0;
	S32 error = STATUS_OK;

    error = get_lsm6ds3_fifo_acceleration_angular_rate_data_s16(acc_data_s16, gyro_data_s16); //prints buffer A
	if(error!=STATUS_OK)
		return;

#if 1
    //result = algo_analyse(acc_data_s16, gyro_data_s16);
    // result = algorithm_analyse(acc_data_s16, gyro_data_s16);
	if(!fifo_stem_flag) result = algorithm_analyse_fifo();
	
    if(result)
    {
    #ifdef FALL_DETECT_TEST_MODE
        //ls6d_fall_detect_mmi_req();
        ls6d_fall_detect_upl_data_req();
	#endif
		fall_triggering_msg_hdlr();
    }

#else //  fall detect delay 30s
    if(lsm6ds3_int_stop == KAL_TRUE)
    {
     stop_lsm6ds3++;
    }

    if(stop_lsm6ds3 >416*30)
    {
        stop_lsm6ds3 =0;
        lsm6ds3_int_stop = KAL_FALSE;
    }

    dfsdfdsf = dfsdfdsf%5000;
    dfsdfdsf++;

    if(lsm6ds3_int_gen)
    {
        //kal_prompt_trace(MOD_ABM,"Angular rate: [%d][%d][%d] \r\n",(int16_t)(gyro_data_s16[0]*500/28571.43f),(int16_t)(gyro_data_s16[1]*500/28571.43f),(int16_t)(gyro_data_s16[2]*500/28571.43f));
        //lsm6ds3_data = algorithm_analyse(acc_data_s16, gyro_data_s16);
        if(lsm6ds3_int_stop == KAL_FALSE)
        {
            result = algorithm_analyse(acc_data_s16, gyro_data_s16);
						//result = algo_analyse(acc_data_s16, gyro_data_s16);
						//kal_prompt_trace(MOD_UEM,"fall_result:%d\r\n",result);
            if(result)//(lsm6ds3_data.result)
            {
                fall_index++;
                lsm6ds3_int_stop = KAL_TRUE;
                dbg_print("fall_index %d %d %d\r\n",fall_index,result,lsm6ds3_int_stop);
                //memset(&lsm6ds3_data_temp,0x0,sizeof(algo_result_ret_value));
                //memcpy(&lsm6ds3_data_temp,&lsm6ds3_data,sizeof(algo_result_ret_value));
                //kal_prompt_trace( MOD_ABM,"lsm6ds3_data_temp_result %d\r\n",lsm6ds3_data_temp.result);
                //ls6d_screen_display();
                ls6d_fall_detect_mmi_req();
            }
        }

    }
#endif
}

/**@brief Function for storing data into buffer A before suspicous event.
 */
static void store_data_buffer_a(int16_t *acc_data, int16_t *gyro_data)
{
	volatile int16_t *ptr_acc_data, *ptr_gyro_data;

	ptr_acc_data = acc_data;
	ptr_gyro_data = gyro_data;

	acc_x_data_buffer_a[buf_a_ptr]=*(ptr_acc_data+X_axis);		//int16_t x axis of acc
	acc_y_data_buffer_a[buf_a_ptr]=*(ptr_acc_data+Y_axis);		//int16_t y axis of acc
	acc_z_data_buffer_a[buf_a_ptr]=*(ptr_acc_data+Z_axis);		//int16_t z axis of acc
	gyro_x_data_buffer_a[buf_a_ptr]=*(ptr_gyro_data+X_axis);		//int16_t x axis of gyro
	gyro_y_data_buffer_a[buf_a_ptr]=*(ptr_gyro_data+Y_axis);		//int16_t y axis of gyro
	gyro_z_data_buffer_a[buf_a_ptr]=*(ptr_gyro_data+Z_axis);		//int16_t z axis of gyro

	//kal_prompt_trace(MOD_ABM,"buf_a_ptr:%d, acc_data:%x %x %x, gyr_data:%x %x %x", buf_a_ptr,
	//	acc_x_data_buffer_a[buf_a_ptr], acc_y_data_buffer_a[buf_a_ptr], acc_z_data_buffer_a[buf_a_ptr],
	//	gyro_x_data_buffer_a[buf_a_ptr], gyro_y_data_buffer_a[buf_a_ptr], gyro_z_data_buffer_a[buf_a_ptr]);

	//buf_a_ptr++;								//buffer pointer add one

	if(buf_a_ptr >= ACC_GYRO_DATA_BUF_LEN) 		//need to overwritten buffer A
	{
		buf_a_ptr = 0;							//set buffer pointer to zero
		buf_a_overwrt_flag = 1;					//overwritten flag set to one
	}
}


/**@brief Function for storing one frame data into buffer B after suspicous event.
 */
static void store_one_frame_data_buffer_b(int16_t *acc_data, int16_t *gyro_data, uint16_t data_index)
{
	volatile int16_t *ptr_acc_data, *ptr_gyro_data;

	ptr_acc_data = acc_data;			//acc data pointer
	ptr_gyro_data = gyro_data;			//gyro data pointer

	//acc_x_data_buffer_b[data_index]=*(ptr_acc_data+X_axis);
	//acc_y_data_buffer_b[data_index]=*(ptr_acc_data+Y_axis);
	//acc_z_data_buffer_b[data_index]=*(ptr_acc_data+Z_axis);
	//gyro_x_data_buffer_b[data_index]=*(ptr_gyro_data+X_axis);
	//gyro_y_data_buffer_b[data_index]=*(ptr_gyro_data+Y_axis);
	//gyro_z_data_buffer_b[data_index]=*(ptr_gyro_data+Z_axis);
}

static void store_data_buffer_c(int16_t *acc_data, uint16_t data_index)
{
    volatile int16_t *ptr_acc_data;

    ptr_acc_data = acc_data;            //acc data pointer

    acc_x_data_buffer_c[data_index]=*(ptr_acc_data+X_axis);
    acc_y_data_buffer_c[data_index]=*(ptr_acc_data+Y_axis);
    acc_z_data_buffer_c[data_index]=*(ptr_acc_data+Z_axis);
}

/**@brief Function for getting maximum gyroscope magnitude accroding to buffer B after suspicious event.
 *
 * @return maximum gyroscope magnitude in float.
 */
static float gyroscope_analyse(void)
{
    volatile uint16_t i;
    volatile float max_gyro_magn_square = 0;
  volatile float average = 0, std_deviation = 0, variance = 0;
  volatile float gyro_magn_square[250] = {0};
    /*
    * Compute Gyroscope's Magnitude for all data after fall
    */
    for(i=0;i<250;i++)
    {
    gyro_magn_square[i] = pow(get_gyro_magn(gyro_y_data_buffer_b[i]),2)+pow(get_gyro_magn(gyro_z_data_buffer_b[i]),2);
    // gyro_magn_square = pow(get_gyro_magn(gyro_y_data_buffer_b[i]),2)+pow(get_gyro_magn(gyro_z_data_buffer_b[i]),2);
/*      gyro_magn_square = sqrt(get_gyro_magn(gyro_x_data_buffer_b[i]) * get_gyro_magn(gyro_x_data_buffer_b[i])\
        +get_gyro_magn(gyro_y_data_buffer_b[i]) * get_gyro_magn(gyro_y_data_buffer_b[i])\
        +get_gyro_magn(gyro_z_data_buffer_b[i]) * get_gyro_magn(gyro_z_data_buffer_b[i]));*/
        if(gyro_magn_square[i] > max_gyro_magn_square) max_gyro_magn_square = gyro_magn_square[i];  //get the maximum gyroscope magnitude square
    if(i>98) average += gyro_magn_square[i];
    }

  average /= 150;

  for(i=99;i<250;i++)
  {
    variance += pow((gyro_magn_square[i]-average),2);
  }
  std_deviation = sqrt(variance/(float)150);

  if(std_deviation < STD_SVMG_SECOND_STAGE)
  {
    return std_deviation;
  }
  else
  {
    return (sqrt(max_gyro_magn_square));        //do once sqrt() to get gyroscope magnitude
  }
//  return max_gyro_magn_square;
}

static float peak_analysis(void){

  volatile uint16_t i;
  volatile uint16_t j;
  // volatile float peak_analysis_array[ACC_GYRO_DATA_BUF_LEN *2] = {0};
  peak_number = 0;

  for(i=0; i<(ACC_GYRO_DATA_BUF_LEN * 2 + VERIFY_DATA_BUF_LEN); i++){
    if(i < ACC_GYRO_DATA_BUF_LEN){
      peak_analysis_array[i] = pow(get_acc_magn(acc_x_data_buffer_a[i]),2)
                             + pow(get_acc_magn(acc_y_data_buffer_a[i]),2)
                             + pow(get_acc_magn(acc_z_data_buffer_a[i]),2);
    }
    else if(i >= ACC_GYRO_DATA_BUF_LEN && i < (ACC_GYRO_DATA_BUF_LEN *2))
    {
      peak_analysis_array[i] = pow(get_acc_magn(acc_x_data_buffer_b[i-ACC_GYRO_DATA_BUF_LEN]),2)
                             + pow(get_acc_magn(acc_y_data_buffer_b[i-ACC_GYRO_DATA_BUF_LEN]),2)
                             + pow(get_acc_magn(acc_z_data_buffer_b[i-ACC_GYRO_DATA_BUF_LEN]),2);
    }
    else{
      peak_analysis_array[i] = pow(get_acc_magn(acc_x_data_buffer_c[i-(ACC_GYRO_DATA_BUF_LEN * 2)]),2)
                             + pow(get_acc_magn(acc_y_data_buffer_c[i-(ACC_GYRO_DATA_BUF_LEN * 2)]),2)
                             + pow(get_acc_magn(acc_z_data_buffer_c[i-(ACC_GYRO_DATA_BUF_LEN * 2)]),2);
    }
  }
}


/**@brief Function for getting angle accroding to buffer A and buffer B after suspicious event.
 *
 * @return angle(degree) in float.
 */
static float angle_analyse(void)
{
	volatile float angle_degree=0,avg_index=50;
	volatile float start_avg_accel_x=0,start_avg_accel_y=0,start_avg_accel_z=0;
	volatile float end_avg_accel_x=0, end_avg_accel_y=0, end_avg_accel_z=0;
	volatile float num=0,denom=0;
	volatile double angle=0;
	volatile uint16_t i;



	//get start index acc data in buffer A start
		if(buf_a_overwrt_flag)		//overwirtten
		{
			if(buf_a_ptr >= 150)
			{
				for(i=buf_a_ptr - 150;i<buf_a_ptr - 150 + 50;i++)
				{
					start_avg_accel_x +=acc_x_data_buffer_a[i];
					start_avg_accel_y +=acc_y_data_buffer_a[i];
					start_avg_accel_z +=acc_z_data_buffer_a[i];
				}
			}
			else if((buf_a_ptr>100) && (buf_a_ptr<150))
			{
				for(i=0;i<buf_a_ptr - 100 ;i++)
				{
					start_avg_accel_x +=acc_x_data_buffer_a[i];
					start_avg_accel_y +=acc_y_data_buffer_a[i];
					start_avg_accel_z +=acc_z_data_buffer_a[i];
				}
				for(i=ACC_GYRO_DATA_BUF_LEN - (150 -buf_a_ptr);i< ACC_GYRO_DATA_BUF_LEN;i++)
				{
					start_avg_accel_x +=acc_x_data_buffer_a[i];
					start_avg_accel_y +=acc_y_data_buffer_a[i];
					start_avg_accel_z +=acc_z_data_buffer_a[i];
				}
			}
			else  //  (buf_a_ptr<=150)
			{
				for(i=ACC_GYRO_DATA_BUF_LEN - (150 -buf_a_ptr);i< ACC_GYRO_DATA_BUF_LEN - (150 -buf_a_ptr) + 50;i++)
				{
					start_avg_accel_x +=acc_x_data_buffer_a[i];
					start_avg_accel_y +=acc_y_data_buffer_a[i];
					start_avg_accel_z +=acc_z_data_buffer_a[i];
				}
			}
		}
		else			//not overwirtten
		{
			if(buf_a_ptr > 50)		//last 50 frames data
			{
				for(i=buf_a_ptr - 50;i<buf_a_ptr;i++)
				{
					start_avg_accel_x +=acc_x_data_buffer_a[i];
					start_avg_accel_y +=acc_y_data_buffer_a[i];
					start_avg_accel_z +=acc_z_data_buffer_a[i];
				}
			}
			else
			{
				for(i=0;i<buf_a_ptr;i++)
				{
					start_avg_accel_x +=acc_x_data_buffer_a[i];
					start_avg_accel_y +=acc_y_data_buffer_a[i];
					start_avg_accel_z +=acc_z_data_buffer_a[i];
				}
				avg_index = buf_a_ptr;
			}
		}



 //get start index acc data in buffer A end

	start_avg_accel_x /=avg_index;										//get average for each axis
	start_avg_accel_y /=avg_index;
	start_avg_accel_z /=avg_index;

	start_avg_accel_x = get_acc_magn(start_avg_accel_x);			//get acc magnitude
	start_avg_accel_y = get_acc_magn(start_avg_accel_y);
	start_avg_accel_z = get_acc_magn(start_avg_accel_z);

	for(i=1050;i>1000;i--)
	{
		end_avg_accel_x +=acc_x_data_buffer_b[i];
		end_avg_accel_y +=acc_y_data_buffer_b[i];
		end_avg_accel_z +=acc_z_data_buffer_b[i];
	}
	end_avg_accel_x /=50.0f;										//get average for each axis
	end_avg_accel_y /=50.0f;
	end_avg_accel_z /=50.0f;

	end_avg_accel_x = get_acc_magn(end_avg_accel_x);				//get acc magnitude
	end_avg_accel_y = get_acc_magn(end_avg_accel_y);
	end_avg_accel_z = get_acc_magn(end_avg_accel_z);

	num= (start_avg_accel_x*end_avg_accel_x) + (start_avg_accel_y*end_avg_accel_y) + (start_avg_accel_z*end_avg_accel_z);
	denom= (pow(start_avg_accel_x,2) + pow(start_avg_accel_y,2) + pow(start_avg_accel_z,2)) * (pow(end_avg_accel_x,2)+pow(end_avg_accel_y,2)+pow(end_avg_accel_z,2));
	angle=acos(num/sqrt(denom));

	angle_degree=angle *(180.0f/3.14159265f);						//get angle in degree

	return angle_degree;
}

/**@brief Function for getting input degree according to angle or gyroscope magnitude.
 *
 * @return input degree in float.
 */
static float get_input_degree(float x, float a, float b, float c, float d)
{
	volatile float re_val=0;

	if (d == b)					 // Rshoulder
	{
		if (x >= b) 			 		re_val = 1;
		else if (x > a && x < b) 		re_val = (x - a) / (b - a);
		else if (x <= a)		 		re_val = 0;
	}
	else if (d == c)			 // Triangle
	{
		if (x <= a)				 		re_val = 0;
		else if (x == b)     	 		re_val = 1;
		else if (x < b)			 		re_val = (x - a) / (b - a);
		else if (x >= c)		 		re_val = 0;
		else if (x > b)			 		re_val = (c - x) / (c - b);
	}
	else if (d == a)			 //Lshoulder
	{
		if (x <= c)				 		re_val = 1;
		else if (x > c && x < d) 		re_val = (d - x) / (d - c);
		else if (x >= d)		 		re_val = 0;
	}
	else re_val = 0;
	return re_val;
}

/**@brief Function for getting weight according to memship.
 *
 * @return weight in uint8_t.
 */
static uint8_t get_output_from_memship(uint8_t memship)
{
	if 		(memship == LOW_MS)    return WEIGHT_VALUE_10;
	else if (memship == MEDIUM_MS) return WEIGHT_VALUE_30;
	else if (memship == HIGH_MS)   return WEIGHT_VALUE_50;
	else return 0;
}

/**@brief Function for getting fuzzy output.
 *
 * @return fuzzy analysis output in float.
 */
static float fuzzy_analyse(float angle, float max_gyro_magn)
{
	volatile uint8_t i=0;
	volatile float fire_strength[9];
	volatile float sum_firestrenths = 0;
	volatile float output_value=0;

	volatile float low_angle_degree=0, medium_angle_degree=0, high_angle_degree=0;
	volatile float low_gyro_magnitude_degree=0, medium_gyro_magnitude_degree=0, high_gyro_magnitude_degree=0;
	volatile float current_angle = angle;  // should compute this value continously from sensor
	volatile float current_max_gyro_magn = max_gyro_magn;

	//===================================================1-Fuzzification
	low_angle_degree =    get_input_degree(current_angle, MEDIUM_ANGLE, 0, LOW_ANGLE, MEDIUM_ANGLE);
	medium_angle_degree = get_input_degree(current_angle, LOW_ANGLE, MEDIUM_ANGLE, HIGH_ANGLE, HIGH_ANGLE);
	high_angle_degree =   get_input_degree(current_angle, MEDIUM_ANGLE, HIGH_ANGLE, 0, HIGH_ANGLE);

	low_gyro_magnitude_degree =    get_input_degree(current_max_gyro_magn, MEDIUM_GYRO_MAGNITUDE, 0, LOW_GYRO_MAGNITUDE, MEDIUM_GYRO_MAGNITUDE);
	medium_gyro_magnitude_degree = get_input_degree(current_max_gyro_magn, LOW_GYRO_MAGNITUDE, MEDIUM_GYRO_MAGNITUDE, HIGH_GYRO_MAGNITUDE, HIGH_GYRO_MAGNITUDE);
	high_gyro_magnitude_degree =   get_input_degree(current_max_gyro_magn, MEDIUM_GYRO_MAGNITUDE, HIGH_GYRO_MAGNITUDE, 0, HIGH_GYRO_MAGNITUDE);

	//===================================================2-Fire Strength
	fire_strength[0] = min(low_angle_degree   , low_gyro_magnitude_degree);
	fire_strength[1] = min(low_angle_degree   , medium_gyro_magnitude_degree);
	fire_strength[2] = min(low_angle_degree   , high_gyro_magnitude_degree);
	fire_strength[3] = min(medium_angle_degree, low_gyro_magnitude_degree);
	fire_strength[4] = min(medium_angle_degree, medium_gyro_magnitude_degree);
	fire_strength[5] = min(medium_angle_degree, high_gyro_magnitude_degree);
	fire_strength[6] = min(high_angle_degree  , low_gyro_magnitude_degree);
	fire_strength[7] = min(high_angle_degree  , medium_gyro_magnitude_degree);
	fire_strength[8] = min(high_angle_degree  , high_gyro_magnitude_degree);

	//======================================================3- linguistic and numric output
	for (i = 0; i < 9; i++)
	{
		output_value += fire_strength[i] * get_output_from_memship(suspicion_rules[i][2]);
		sum_firestrenths += fire_strength[i];
	}

	output_value /= sum_firestrenths;
	return output_value;
}

/**@brief Function for clear buffer B when verification needed and do it before verification.
 */
static void clear_acc_data_buf_when_verify(void)
{
	volatile uint16_t i;
	for(i=0;i<ACC_GYRO_DATA_BUF_LEN;i++)
	{
		acc_x_data_buffer_b[i] = 0;		//set zero
		acc_y_data_buffer_b[i] = 0;
		acc_z_data_buffer_b[i] = 0;
	}
}

/**@brief Function for storing one frame acc data for verification.
 */
static void get_one_frame_acc_data_to_verify(int16_t *acc_data, uint16_t data_index)
{
	volatile int16_t *ptr_acc_data;

	ptr_acc_data = acc_data;

	acc_x_data_buffer_b[data_index]=*(ptr_acc_data+X_axis);
	acc_y_data_buffer_b[data_index]=*(ptr_acc_data+Y_axis);
	acc_z_data_buffer_b[data_index]=*(ptr_acc_data+Z_axis);
}

/**@brief Function for getting fall verification result.
 *
 * @return std_deviation in float.
 */
static float fall_verification(void)
{
	volatile uint16_t i;
	volatile float std_deviation = 0, variance=0,average = 0;

	memset(verify_acc_magn,0x00,VERIFY_DATA_BUF_LEN);
	//compute acc magnitude
	for(i=0;i<VERIFY_DATA_BUF_LEN;i++)
	{
		verify_acc_magn[i] = sqrt(pow(get_acc_magn(acc_x_data_buffer_b[i]),2)+ pow(get_acc_magn(acc_y_data_buffer_b[i]),2) + pow(get_acc_magn(acc_z_data_buffer_b[i]),2));
		average += (verify_acc_magn[i] - average)/(i+1);
	}

	//compute variance and standard deviation to a base 0.5g
	for(i=0;i<VERIFY_DATA_BUF_LEN;i++)
	{
		variance += pow((verify_acc_magn[i]-average),2);
	}
	std_deviation = sqrt(variance/(float)VERIFY_DATA_BUF_LEN);

	return std_deviation;
}

/**@brief Function for algorithm init.
 * @input trigger_thres: trigger threshold, f_out_thres: fuzzy output threshold, vari_thres: standard deviation threshold.
 * @return 1: init success.
 */
bool algorithm_init(double sensitivity)
{
	volatile uint16_t i;

#ifndef PRINT_RAW_DATA_TEST_MODE
	kal_prompt_trace(MOD_ABM, "algorithm_init author_check_success:%d", author_check_success);
	if(author_check_success == false)	//it has no author check,return false!
		return false;
#endif

	for(i=0;i<ACC_GYRO_DATA_BUF_LEN;i++)
	{
		acc_x_data_buffer_a[i] = 0;		//clear buffer A
		acc_y_data_buffer_a[i] = 0;
		acc_z_data_buffer_a[i] = 0;
		gyro_x_data_buffer_a[i] = 0;
		gyro_y_data_buffer_a[i] = 0;
		gyro_z_data_buffer_a[i] = 0;

		acc_x_data_buffer_b[i] = 0;		//clear buffer B
		acc_y_data_buffer_b[i] = 0;
		acc_z_data_buffer_b[i] = 0;
		gyro_x_data_buffer_b[i] = 0;
		gyro_y_data_buffer_b[i] = 0;
		gyro_z_data_buffer_b[i] = 0;
	}
	buf_a_ptr = 0;
	buf_a_overwrt_flag = 0;
	buf_str_sm = STATE_NONE;

	// vari_thres_g = sensitivity;
	return 1;
}

void lsm6ds3_algorithm_init(void)
{
	double sensitivity;

	init_lsm6ds3();
	sensitivity = get_fall_detection_sensitivity_para();
	algorithm_init(sensitivity);
}

/**@brief Function for algorithm analysis.
 * @input acc_data: acc data(one frame) pointer, gyro_data: gyro data(one frame) pointer.
 * @return algorithm analysis result, refer to algo_result_ret_value.
 */
uint8_t algorithm_analyse(int16_t *acc_data, int16_t *gyro_data)
{
	volatile int16_t i;
	volatile int16_t *ptr_acc_data, *ptr_gry_data;
	volatile float  std_devi=0;
	static volatile float  acc_magn_square=0, cur_angle=0, cur_max_gyro_magn=0, fuzzy_output=0;
	static volatile uint16_t data_frame_index = 0, very_data_frame_index = 0;
	volatile uint8_t result = 0;

	ptr_acc_data = acc_data, ptr_gry_data = gyro_data;

#if defined(PRINT_RAW_DATA_TEST_MODE)
{
	uint8_t test_buff[128] = {0};

	test_acc_data_x = get_acc_magn(ptr_acc_data[0]);
	test_acc_data_y = get_acc_magn(ptr_acc_data[1]);
	test_acc_data_z = get_acc_magn(ptr_acc_data[2]);

	test_gyro_data_x = get_gyro_magn(ptr_gry_data[0]);
	test_gyro_data_y = get_gyro_magn(ptr_gry_data[1]);
	test_gyro_data_z = get_gyro_magn(ptr_gry_data[2]);

	test_gyro_magn = sqrt(pow(test_gyro_data_x,2)+pow(test_gyro_data_y,2)+pow(test_gyro_data_z,2));
	if(test_gyro_magn>max_test_gyro_magn){
		max_test_gyro_magn = test_gyro_magn;
		}
	kal_prompt_trace(MOD_ABM,"AX:%d,Ay:%d,Az:%d,gx:%d,gy:%d,gz:%d", ptr_acc_data[0],ptr_acc_data[1],ptr_acc_data[2],ptr_gry_data[0],ptr_gry_data[1],ptr_gry_data[2]);
	sprintf(test_buff,"gyro_magn:%.2f",test_gyro_magn);
	kal_prompt_trace(MOD_ABM,"%s",test_buff);

	raw_data_index++;
	raw_data_index = 0;

#ifdef FALL_DETECT_TEST_MODE
	ls6d_fall_detect_mmi_req();
#endif
}

#else

#ifndef FALL_DETECT_TEST_MODE
	if(!author_check_success)
		return  result;
#endif

	if(buf_str_sm == STATE_NONE) 									//algorithm is inited already
	{
		buf_a_ptr=0;buf_a_overwrt_flag=0;
		acc_magn_square=0, cur_angle=0, cur_max_gyro_magn=0, fuzzy_output=0;data_frame_index=0;very_data_frame_index=0;
		buf_str_sm = STATE_STORE_BUF_A;
	}

	else if(buf_str_sm == STATE_STORE_BUF_A) 							//store data into buffer A continously state
	{
		//store_data_buffer_a(ptr_acc_data, ptr_gry_data);
		//for(i = 340; i > 0; i--){
		acc_magn_square = pow(acc_x_buffer_a[i], 2)+ pow(acc_y_buffer_a[i], 2) + pow(acc_z_buffer_a[i], 2);
		//	}
		if( acc_magn_square > pow(trigger_thres_g,2)) 					//if acc magnitude exceed trigger_thers_g, now is 3g
		{
			buf_str_sm = STATE_STORE_BUF_B;							//turn to buffer B storing
			data_frame_index = 0;
			cur_max_gyro_magn=0;
			cur_angle=0;
			fuzzy_output=0;
		}
	}
	else if(buf_str_sm == STATE_STORE_BUF_B)							//store data into buffer B continously state
	{
		store_one_frame_data_buffer_b(ptr_acc_data, ptr_gry_data, data_frame_index);
		data_frame_index++;
		if(data_frame_index >= ACC_GYRO_DATA_BUF_LEN)					//already store 1500 frames data
		{
		#if defined(FALL_DETECT_TEST_MODE)
			volatile char test_buffer[128] = {0};  // frank_shao for test  start
		#endif

			data_frame_index = 0;
			cur_max_gyro_magn=gyroscope_analyse();						//calculate maximum gyroscope magnitude
			cur_angle=angle_analyse();									//calculate angle
			fuzzy_output = fuzzy_analyse(cur_angle, cur_max_gyro_magn);	//fuzzy analyse
      		// frank_shao for test  start
		#if defined(FALL_DETECT_TEST_MODE)
			//sprintf(test_buffer,"cur_max_gyro_magn:%f,cur_angle:%f,fuzzy_output:%f\r\n",cur_max_gyro_magn,cur_angle,fuzzy_output);
			//dbg_print("%s",test_buffer);
			real_acc_magn_square = acc_magn_square;
			real_fuzzy_output = fuzzy_output;
			real_std_devi =  std_devi;
			real_angle = cur_angle;
			real_max_gyro_magn = cur_max_gyro_magn;
			fall_data_index++;
			ls6d_fall_detect_mmi_req();
		#endif
			// frank_shao add
			if((cur_max_gyro_magn > MAX_GYROSCOPE_THRESHOLD) && (cur_angle > MAX_ANGLE_THRESHOLD))   // max gyroscope threshold  and max angle
			{
				// frank_shao for test  end
				if(fuzzy_output > f_out_thres_g)							//if fuzzy output exceed f_out_thres_g, now is 45
				{
					buf_str_sm = STATE_STORE_BUF_VRY;						//turn to fall verification
					clear_acc_data_buf_when_verify();						//clear acc data in buffer B for store new data
					very_data_frame_index = 0;
				}
				else
				{
					//result = SUSPICOUS_ENENT;								//fuzzy output not exceed f_out_thres_g, so detect result is just suspicious event
					buf_str_sm = STATE_NONE;								//turn to storing buffer A state
				}
			}
			else
			{
				buf_str_sm = STATE_NONE;								//turn to storing buffer A state
			}
		}
	}
	else if(buf_str_sm == STATE_STORE_BUF_VRY)							//fall verification state
	{
		get_one_frame_acc_data_to_verify(ptr_acc_data, very_data_frame_index);
		very_data_frame_index++;
		if( very_data_frame_index >= VERIFY_DATA_BUF_LEN)				//already store 1000 frames acc data
		{
		#if defined(FALL_DETECT_TEST_MODE)
			volatile char test_buffer[128] = {0};  // frank_shao for test  start
		#endif
      		std_devi = fall_verification();
      	#if defined(FALL_DETECT_TEST_MODE)
			real_std_devi =  std_devi;
			//sprintf(test_buffer,"std_devi:%f\r\n",std_devi);
			//dbg_print("%s",test_buffer);
			ls6d_fall_detect_mmi_req();
		#endif
			if(std_devi < vari_thres_g)			{
				result=1;//result = FALL_DOWN;				//if standard deviation less than vari_thres_g, now is 0.5g, detect result is fall down, if not, detect result is fall down not reach standard deviation
			}
			//else 						result = FALL_DOWN_NOT_REACH_STD;
			buf_str_sm = STATE_NONE;									//turn to storing buffer A state
		}

	}
#endif

	return result;
}

void set_tri_fo_std_thres(double tri_thr, double fo_thr, double std_thr)
{
	trigger_thres_g = tri_thr;		//set thresholds
	f_out_thres_g   = fo_thr;
	vari_thres_g    = std_thr;
}

void get_tri_fo_std_thres(double *tri_thr, double *fo_thr, double *std_thr)
{
	*tri_thr = trigger_thres_g;
	*fo_thr = f_out_thres_g;
	*std_thr = vari_thres_g;
}

#if defined(FALL_DETECT_TEST_MODE)
void get_real_tri_fo_std_thres(double *tri_thr, double *fo_thr, double *std_thr, double *angle, double *svmg,uint32_t *index)
{
	*tri_thr = real_acc_magn_square;
	*fo_thr = real_fuzzy_output;
	*std_thr = real_std_devi;
	*angle = real_angle;
	*svmg = real_max_gyro_magn;
	*index = fall_data_index;
}
#endif

/****************************************************************************
* description:
*	Get the sensor model and algorithm library version
* param:
*  hardware: [out] the hardware infor if get successful
*  software:[out] the software infor if get successful
* retval:
*  1:success  0:fail
* author:
*  xie biao 2019-12-19
****************************************************************************/
BOOL fall_detection_get_infor(char *hardware, char *software)
{
	U8 device_id;
	S32 error = 0;

	if(hardware == NULL || software == NULL)
		return FALSE;

	error = lsm6ds3tr_c_device_id_get(&lsm6ds3, &device_id);	
	kal_prompt_trace(MOD_ABM, "august_fall_detection_get_infor error:%d, device_id:%x", error,device_id);
	if(error != 0 || device_id != LSM6DS3TR_C_ID)
		return FALSE;

	strcpy(hardware, DEVICE_VERSION);
	strcpy(software, ALGORITHM_VERSION);
	return TRUE;
}

/*******************************************************************************************************
* description:
*	Get the string in the buffer by check the separator
* param:
*  inbuffer: [in] The source buffer that include the string we want to find.
*  outbuffer: [OUT] The dest buffer that we want
*  sign:[in] the end key char of the string that we need find in the source buffer.
*  index:[in] the index number of the key char in the source string
* retval:
*  true: It was found
*  false: It wasn't found
* author:
*  xie biao 2019-12-19
*******************************************************************************************************/
BOOL get_parameter_in_strbuffer(char *inbuffer, char *outbuffer, char *sign, int index)
{
	U32 i,j=0;
	char *ptr1,*ptr2=NULL;

	if(inbuffer == NULL || outbuffer == NULL || sign == NULL || index == 0)
		return NULL;

	ptr1 = inbuffer;
	while(1)
	{
		ptr2 = strstr(ptr1, sign);
		if(ptr2 != NULL)
		{
			j++;
			if(j == index)
			{
				memcpy(outbuffer, ptr1, ptr2-ptr1);
				return TRUE;
			}
			else
			{
				ptr1 = ptr2+strlen(sign);
				ptr2 = NULL;
			}
		}
		else
		{
			return FALSE;
		}
	}
}

/*******************************************************************************************************
* description:
*	Verify the device is or not authorized
* param:
*  ID: [in] Chip ID of the device
*  IMEI:[in] IMEI of the device
*  buf:[in] Authorization data obtained by the device from the server,
*           sample:
*				chip id+IMEI+ok+key+crc
*					MT2503A_SN1234567&355287000480974&1&FE07
*				chip id+IMEI+err+key+crc
*					MT2503A_SN1234567&355287000480974&-2&FE07
*  len:[in] Authorization data lenth
* retval:
*  1:success;
*  -1: Data format error;
*  -2: Data CRC verification failed;
*  -3: Chip id is out of range;
*  -4: IMEI is out of range;
*  -5: The validity period has expired
*  -6: Illegal use of chip ID
*  -7: Illegal use of IMEI
* author:
*  xie biao 2019-12-19
*******************************************************************************************************/
S8 fall_detection_author_check(char *ID, char *IMEI, char *buf, U32 len)
{
	U8 data,crc = 0;
	U32 i = 0;
	U8 buffer[256] = {0};
	U8 idbuf[128] = {0};
	U8 imeibuf[32] = {0};
	U8 retbuf[10] = {0};
	int result;

	if(buf == NULL || len == 0)
		return -1;											//buf is empty

	kal_prompt_trace(MOD_ABM, "fall_detection_author_check len:%d, buf:%s",	len,buf);

	len = len/2;
	while(i<len)
	{
		U8 tmphex;
		
		if(*buf >= '0' && *buf <= '9')
			tmphex = *buf - 48;
		else
			tmphex = 0x0a + (*buf - 'a');

		buffer[i] = tmphex;
		buf++;

		if(*buf >= '0' && *buf <= '9')
			tmphex = *buf - 48;
		else
			tmphex = 0x0a + (*buf - 'a');

		buffer[i] = (buffer[i]<<4) + tmphex;
		buf++;
		i++;
	}
	
	kal_prompt_trace(MOD_ABM, "fall_detection_author_check len:%d, buffer:%02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x",
								len,buffer[0],buffer[1],buffer[2],buffer[3],buffer[4],buffer[5],buffer[6],buffer[7],buffer[8],buffer[9],buffer[10],buffer[11],buffer[12]);
	for(i=0;i<len-1;i++)
	{
		data = buffer[i];
		crc = crc^data;
    	crc = CRC8Table[crc];						//CRC check from tab
	}
	crc = crc^0x00;									//CRC calc

	if(crc != buffer[len-1])							//CRC check error
	{
		kal_prompt_trace(MOD_ABM, "check crc error crc:%02x, buffer[end]:%02x", crc, buffer[len-1]);
		return -2;
	}

	//kal_prompt_trace(MOD_ABM, "fall_detection_author_check key:%02x", buffer[len-2]);
	for(i=0;i<len-2;i++)
	{
		buffer[i] = buffer[i]^buffer[len-2];							//buffer decoding
	}

	buffer[len-1] = 0x00;
	buffer[len-2] = 0x00;

	//kal_prompt_trace(MOD_ABM, "fall_detection_author_check buffer:%s", buffer);

	if(!get_parameter_in_strbuffer(buffer, idbuf, "&", 1))		//don't find chip ID
		return -1;
	if(strcmp(idbuf, ID) != 0)								//chip id check error
	{
		kal_prompt_trace(MOD_ABM, "fall_detection_author_check idbuf:%s, ID:%s", idbuf, ID);
		return -6;
	}

	if(!get_parameter_in_strbuffer(buffer, imeibuf, "&", 2))	//don't find IMEI
		return -1;
	if(strcmp(imeibuf, IMEI) != 0)							//IMEI check error
	{
		kal_prompt_trace(MOD_ABM, "fall_detection_author_check imeibuf:%s, IMEI:%s", imeibuf, IMEI);
		return -7;
	}

	if(!get_parameter_in_strbuffer(buffer, retbuf, "&", 3))	//don't find result
		return -1;
	result = atoi(retbuf);
	kal_prompt_trace(MOD_ABM, "fall_detection_author_check retbuf:%s, result:%d", retbuf, result);
	switch(result)
	{
	case 1:
		kal_prompt_trace(MOD_ABM, "fall_detection_author_check check: ok!");
		author_check_success = true;
		return 1;
	case -1:
		kal_prompt_trace(MOD_ABM, "fall_detection_author_check check: Data format erro!");
		return -1;
	case -2:
		kal_prompt_trace(MOD_ABM, "fall_detection_author_check check: Data CRC verification failed!");
		return -2;
	case -3:
		kal_prompt_trace(MOD_ABM, "fall_detection_author_check check: Chip id is out of range!");
		return -3;
	case -4:
		kal_prompt_trace(MOD_ABM, "fall_detection_author_check check: IMEI is out of range!");
		return -4;
	case -5:
		kal_prompt_trace(MOD_ABM, "fall_detection_author_check check: The validity period has expired!");
		return -5;
	case -6:
		kal_prompt_trace(MOD_ABM, "fall_detection_author_check check: Illegal use of chip ID!");
		return -6;
	case -7:
		kal_prompt_trace(MOD_ABM, "fall_detection_author_check check: Illegal use of IMEI!");
		return -7;
	default:
		kal_prompt_trace(MOD_ABM, "fall_detection_author_check check: Unkonw erro!");
		return -1;
	}
}

void author_data_decode(U8 *buffer, U32 *buflen)
{
	U8 key,crc=0;
	U32 i,tick;

	kal_prompt_trace(MOD_ABM, "author_data_decode begin buffer:%s, buflen:%d", buffer, *buflen);

	/* Set random seed */
    kal_get_time(&tick);
	srand((unsigned int)tick);
	key = rand()%0xff;
	if(key == 0)
		key = 0x31;

	kal_prompt_trace(MOD_ABM, "author_data_decode 001 key:%02x", key);

	for(i=0;i<(*buflen);i++)
	{
		buffer[i] = buffer[i]^key;
	}

	buffer[(*buflen)] = key;
	(*buflen)++;

	for(i=0;i<*buflen;i++)
	{
		crc = crc^buffer[i];
    	crc = CRC8Table[crc];
	}
	crc = crc^0x00;
	kal_prompt_trace(MOD_ABM, "author_data_decode 002 crc:%02x", crc);

	buffer[*buflen] = crc;
	(*buflen)++;

	kal_prompt_trace(MOD_ABM, "author_data_decode end buf:%02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x",
							buffer[0],buffer[1],buffer[2],buffer[3],buffer[4],buffer[5],buffer[6],
							buffer[7],buffer[8],buffer[9],buffer[10],buffer[11],buffer[12]);
}

void author_data_encode(void)
{
	U8 str_hard[128] = {0};
	U8 str_soft[128] = {0};
	U8 strques[128] = {0};
	U32 len;
	S8 ret;

	if(fall_detection_get_infor(str_hard, str_soft))
	{
		kal_prompt_trace(MOD_ABM, "author_data_encode get ok! str_hard:%s, str_soft:%s", str_hard, str_soft);
	}
	else
	{
		kal_prompt_trace(MOD_ABM, "author_data_encode get error");
	}

	strcpy(strques, "MT2503A_SN1234567&355755000000109&1&");
	len = strlen("MT2503A_SN1234567&355755000000109&1&");

	author_data_decode(strques, &len);

	ret = fall_detection_author_check("MT2503A_SN1234567", "355755000000109", strques, len);
}

// FIFO algorithm
static float angle_analyse_fifo(void)
{
	volatile float angle_degree=0,avg_index=50;
	volatile float start_avg_accel_x=0,start_avg_accel_y=0,start_avg_accel_z=0;
	volatile float end_avg_accel_x=0, end_avg_accel_y=0, end_avg_accel_z=0;
	volatile float num=0,denom=0;
	volatile double angle=0;
	volatile uint16_t i;

	for(i = ACC_GYRO_FIFO_BUF_LEN-150; i < ACC_GYRO_FIFO_BUF_LEN-150+avg_index; i++ )
	{
		start_avg_accel_x += acc_x_hist_buffer[i];
		start_avg_accel_y += acc_y_hist_buffer[i];
		start_avg_accel_z += acc_z_hist_buffer[i];
	}

	start_avg_accel_x /=avg_index;										//get average for each axis
	start_avg_accel_y /=avg_index;
	start_avg_accel_z /=avg_index;

	start_avg_accel_x = get_acc_magn(start_avg_accel_x);			//get acc magnitude
	start_avg_accel_y = get_acc_magn(start_avg_accel_y);
	start_avg_accel_z = get_acc_magn(start_avg_accel_z);

	for(i = ACC_GYRO_FIFO_BUF_LEN-avg_index; i < ACC_GYRO_FIFO_BUF_LEN; i++)
	{
		end_avg_accel_x += acc_x_cur_buffer[i];
		end_avg_accel_y += acc_y_cur_buffer[i];
		end_avg_accel_z += acc_z_cur_buffer[i];
	}

	end_avg_accel_x /=avg_index;										//get average for each axis
	end_avg_accel_y /=avg_index;
	end_avg_accel_z /=avg_index;

	end_avg_accel_x = get_acc_magn(end_avg_accel_x);			//get acc magnitude
	end_avg_accel_y = get_acc_magn(end_avg_accel_y);
	end_avg_accel_z = get_acc_magn(end_avg_accel_z);

	num= (start_avg_accel_x*end_avg_accel_x) + (start_avg_accel_y*end_avg_accel_y) + (start_avg_accel_z*end_avg_accel_z);
	denom= (pow(start_avg_accel_x,2) + pow(start_avg_accel_y,2) + pow(start_avg_accel_z,2)) * (pow(end_avg_accel_x,2)+pow(end_avg_accel_y,2)+pow(end_avg_accel_z,2));
	angle=acos(num/sqrt(denom));

	angle_degree=angle *(180.0f/3.14159265f);						//get angle in degree

	return angle_degree;

}

static float acceleration_analyse_fifo(void)
{
	volatile uint16_t i;
	volatile float acc_magn_square = 0, max_acc_magn_square = 0;
	/*
	* Compute Accelerometer's Magnitude
	*/
	for(i=0;i<ACC_GYRO_FIFO_BUF_LEN*2;i++)
	{
		//acc magnitude square to avoid sqrt() call to save time.
		if(i<ACC_GYRO_FIFO_BUF_LEN)
		{
			acc_magn_square = pow(get_acc_magn(acc_x_hist_buffer[i]),2)+pow(get_acc_magn(acc_y_hist_buffer[i]),2)+pow(get_acc_magn(acc_z_hist_buffer[i]),2);
		}
		else
		{
			acc_magn_square = pow(get_acc_magn(acc_x_cur_buffer[i-ACC_GYRO_FIFO_BUF_LEN]),2)+pow(get_acc_magn(acc_y_cur_buffer[i-ACC_GYRO_FIFO_BUF_LEN]),2)+pow(get_acc_magn(acc_z_cur_buffer[i-ACC_GYRO_FIFO_BUF_LEN]),2);
		}
		
		if(acc_magn_square > max_acc_magn_square) max_acc_magn_square = acc_magn_square;	//get the maximum acc magnitude square

	}
	return max_acc_magn_square;		//do once sqrt() to get acc magnitude
}


static float gyroscope_analyse_fifo(void)
{
	volatile uint16_t i;
	volatile float gyro_magn_square = 0, max_gyro_magn_square = 0;
	/*
	* Compute Gyroscope's Magnitude for all data after fall
	*/
	for(i=0;i<ACC_GYRO_FIFO_BUF_LEN*2;i++)
	{
		if(i < ACC_GYRO_FIFO_BUF_LEN)
		{
			//gyroscope magnitude square to avoid sqrt() call to save time.
			// gyro_magn_square = pow(get_gyro_magn(gyro_x_cur_buffer[i]),2)+pow(get_gyro_magn(gyro_y_cur_buffer[i]),2)+pow(get_gyro_magn(gyro_z_cur_buffer[i]),2);
			gyro_magn_square = pow(get_gyro_magn(gyro_y_hist_buffer[i]),2)+pow(get_gyro_magn(gyro_z_hist_buffer[i]),2);
		}
		else
		{
			gyro_magn_square = pow(get_gyro_magn(gyro_y_cur_buffer[i-ACC_GYRO_FIFO_BUF_LEN]),2)+pow(get_gyro_magn(gyro_z_cur_buffer[i-ACC_GYRO_FIFO_BUF_LEN]),2);
		}
		
		if(gyro_magn_square > max_gyro_magn_square) max_gyro_magn_square = gyro_magn_square;	//get the maximum gyroscope magnitude square
		
	}
	// return (sqrt(max_gyro_magn_square));		//do once sqrt() to get gyroscope magnitude
	return sqrt(max_gyro_magn_square);		//do once sqrt() to get gyroscope magnitude

}

static float fall_verification_multi_fifo(void)
{
	volatile uint16_t i;
	volatile float std_deviation = 0, variance=0,average = 0;

	memset(verify_acc_magn,0x00,VERIFY_DATA_BUF_LEN);
	//compute acc magnitude
	for(i=0;i<VERIFY_DATA_BUF_LEN*2;i++)
	{
		if(i<VERIFY_DATA_BUF_LEN) 
		{
			verify_acc_magn[i] = sqrt(pow(get_acc_magn(acc_x_veri_buffer[i]),2)+ pow(get_acc_magn(acc_y_veri_buffer[i]),2) + pow(get_acc_magn(acc_z_veri_buffer[i]),2));
		}
		else 
		{
			verify_acc_magn[i] = sqrt(pow(get_acc_magn(acc_x_veri_buffer_1[i-VERIFY_DATA_BUF_LEN]),2)
							     + pow(get_acc_magn(acc_y_veri_buffer_1[i-VERIFY_DATA_BUF_LEN]),2) 
								 + pow(get_acc_magn(acc_z_veri_buffer_1[i-VERIFY_DATA_BUF_LEN]),2));
		}
		average += verify_acc_magn[i];
	}
	
	average /= (float)(VERIFY_DATA_BUF_LEN*2);
	
	//compute variance and standard deviation to a base 0.5g
	for(i=0;i<VERIFY_DATA_BUF_LEN*2;i++)
	{
		variance += pow((verify_acc_magn[i]-average),2);
	}
	std_deviation = sqrt(variance /(float)(VERIFY_DATA_BUF_LEN*2));

	return std_deviation;
}

static float fall_verification_fifo(void)
{
	volatile uint16_t i;
	volatile float std_deviation = 0, variance=0,average = 0;

	memset(verify_acc_magn,0x00,VERIFY_DATA_BUF_LEN);
	//compute acc magnitude
	for(i=0;i<VERIFY_DATA_BUF_LEN;i++)
	{
		verify_acc_magn[i] = sqrt(pow(get_acc_magn(acc_x_veri_buffer[i]),2)+ pow(get_acc_magn(acc_y_veri_buffer[i]),2) + pow(get_acc_magn(acc_z_veri_buffer[i]),2));
		average += verify_acc_magn[i];
	}

	average /= (float)VERIFY_DATA_BUF_LEN;

	//compute variance and standard deviation to a base 0.5g
	for(i=0;i<VERIFY_DATA_BUF_LEN;i++)
	{
		variance += pow((verify_acc_magn[i]-average),2);
	}
	std_deviation = sqrt(variance/(float)VERIFY_DATA_BUF_LEN);

	return std_deviation;
}

static float fall_verification_fifo_skip(void)
{
	volatile uint16_t i;
	volatile float std_deviation = 0, variance=0,average = 0;

	memset(verify_acc_magn,0x00,VERIFY_DATA_BUF_LEN);
	//compute acc magnitude
	for(i=0;i<VERIFY_DATA_BUF_LEN;i++)
	{
		verify_acc_magn[i] = sqrt(pow(get_acc_magn(acc_x_veri_buffer_1[i]),2)+ pow(get_acc_magn(acc_y_veri_buffer_1[i]),2) + pow(get_acc_magn(acc_z_veri_buffer_1[i]),2));
		average += verify_acc_magn[i];
	}

	average /= (float)VERIFY_DATA_BUF_LEN;

	//compute variance and standard deviation to a base 0.5g
	for(i=0;i<VERIFY_DATA_BUF_LEN;i++)
	{
		variance += pow((verify_acc_magn[i]-average),2);
	}
	std_deviation = sqrt(variance/(float)(VERIFY_DATA_BUF_LEN));

	return std_deviation;
}

uint8_t algorithm_analyse_fifo(void)
{
	volatile float  std_devi=0;
	static volatile float  acc_magn_square=0, cur_angle=0, cur_max_gyro_magn=0, cur_fuzzy_output=0;
	static volatile uint16_t data_frame_index = 0, very_data_frame_index = 0;
	volatile uint8_t result = 0;
	static U8 test_check_count = 10;
	
#ifndef FALL_DETECT_TEST_MODE
	kal_prompt_trace(MOD_ABM, "author_check_success:%d, test_check_count:%d", author_check_success, test_check_count);
	if(!author_check_success && (test_check_count == 0))
	 	return  result;
#endif

	acc_magn_square = acceleration_analyse_fifo(); 
	cur_angle = angle_analyse_fifo();
	cur_max_gyro_magn = gyroscope_analyse_fifo();

	cur_fuzzy_output = fuzzy_analyse(cur_angle, cur_max_gyro_magn);

	// if(cur_fuzzy_output > FUZZY_OUT_THRES_DEF)
	// {
		std_devi = fall_verification_fifo_skip();
		if(std_devi <STD_VARIANCE_THRES_DEF)
		{
			result = 1;
		}
	// }

	// for test only

	if(cur_fuzzy_output <= FUZZY_OUT_THRES_DEF) result = 0;
	if(acc_magn_square <= ACC_MAGN_TRIGGER_THRES_DEF) result = 0;

	// for test only

	#if defined(FALL_DETECT_TEST_MODE)
		//sprintf(test_buffer,"cur_max_gyro_magn:%f,cur_angle:%f,fuzzy_output:%f\r\n",cur_max_gyro_magn,cur_angle,fuzzy_output);
		//dbg_print("%s",test_buffer);

		real_acc_magn_square = acc_magn_square;
		real_fuzzy_output = cur_fuzzy_output;
		real_std_devi =  std_devi;
		real_angle = cur_angle;
		real_max_gyro_magn = cur_max_gyro_magn;
		// fall_data_index++;
		ls6d_fall_detect_mmi_req();
	#endif

	if(result)
	{
		if(test_check_count > 0)
			test_check_count--;
	}

	kal_prompt_trace(MOD_ABM, "angle:%d, SVMG:%d, fuzzy:%d, std:%d,", cur_angle, cur_max_gyro_magn, cur_fuzzy_output, std_devi);
	return result;
}
