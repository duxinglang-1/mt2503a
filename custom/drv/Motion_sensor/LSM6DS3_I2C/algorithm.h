/*****************************************************************************
* File Name          : fall_detect_algorithm.h
* Author             : Young
* Version            : v1.0
* Date               : 12/05/2019
* Description        : head file for fall detection algorithm
*
* HISTORY:
* Date               |	Modification                    |	Author
* 12/05/2019         |	Initial Revision                |	Young

********************************************************************************/
#ifndef ALGORITHM_H__
#define ALGORITHM_H__

#include <stdint.h>
#include <stdbool.h>
#include <math.h>
#include "kal_general_types.h"
#include "MMIDataType.h"
#include "lsm6ds3.h"

lsm6ds3tr_c_ctx_t lsm6ds3;
lsm6ds3tr_c_int1_route_t int_1_reg;
lsm6ds3tr_c_int2_route_t int_2_reg;
lsm6ds3tr_c_all_sources_t all_source;

// fifo tap sensitivity hex

#define FIFO_TAP_SENS 0x16

// frank_shao add for test mode
#define FALL_DETECT_TEST_MODE
#define PRINT_RAW_DATA_TEST_MODE

//define sensor and algorithm version
#define DEVICE_VERSION 		"LSM6DS3TR_C"
#define ALGORITHM_VERSION	"AD_1600_MT03_V10.1"

//define interface type
#define	LSM6DS3_WIRE_TYPE_I2C		1
#define	LSM6DS3_WIRE_TYPE_SPI		2
#define	LSM6DS3_WIRE_TYPE_MAX		3

//define low, medium, high memership
#define LOW_MS       	1
#define MEDIUM_MS	    2
#define HIGH_MS      	3

//define the memberships of Angle input
#define LOW_ANGLE			  15
#define MEDIUM_ANGLE		40
#define HIGH_ANGLE			80

//define the memberships of Gyroscope's Magnitude input
#define LOW_GYRO_MAGNITUDE 		80
#define MEDIUM_GYRO_MAGNITUDE	180
#define HIGH_GYRO_MAGNITUDE		300

//define weight value
#define	WEIGHT_VALUE_10		 10
#define	WEIGHT_VALUE_30		 30
#define	WEIGHT_VALUE_50		 50

#define	ACC_GYRO_DATA_BUF_LEN		400
#define ACC_GYRO_FIFO_BUF_LEN   340
#define	VERIFY_DATA_BUF_LEN			340

//define default thresholds
#define ACC_MAGN_TRIGGER_THRES_DEF 	9.0f 	 // for acc trigger
#define FUZZY_OUT_THRES_DEF			45.0f	 // for fuzzy output
#define STD_SVMG_SECOND_STAGE   12.0f
#define STD_VARIANCE_THRES_DEF		0.05f  	 // for Standard Deviation

#define PEAKS_NO_THRES  8  //number of peaks threshold
#define PEAK_THRES 11.0f

#define MAX_GYROSCOPE_THRESHOLD 200  //max gyroscope threshold
#define MAX_ANGLE_THRESHOLD  40

//define function from raw int16_t to magnitude for acc and gyro data
//not required at current configuration, to delete and modify the code in future.
#define	get_acc_magn(x) 			(((float)x)*2.0f/32768.0f)		//-+2g
#define	get_gyro_magn(x) 			(((float)x)*250.0f/28571.43f)	//-+250dps

//define minimum function
#define min(a,b) ((a)<(b)?(a):(b))

static axis3bit16_t data_raw_acceleration;
static axis3bit16_t data_raw_angular_rate;

static float acceleration_mg[3];
static float angular_rate_mdps[3];

volatile int fall_index = 0;
int stop_lsm6ds3 = 0;
uint16_t pattern_len, pattern_numbers;

kal_bool lsm6ds3_int_gen = KAL_TRUE;
kal_bool lsm6ds3_int_stop = KAL_FALSE;

typedef enum {
  X_axis,
  Y_axis,
  Z_axis
}axis_type;

//state machine for collection data for buffer A or B.
typedef enum {
  STATE_NONE,
  STATE_STORE_BUF_A,
  STATE_STORE_BUF_B,
  STATE_STORE_BUF_VRY,
}data_buf_sel_sm;

volatile uint16_t buf_a_ptr = 0;
volatile uint16_t buf_counter = 0;
volatile uint16_t buf_hist_ptr = 0;
volatile uint16_t buf_cur_ptr = 0;
volatile uint16_t buf_veri_ptr = 0;

volatile bool buf_hist_flag = 0;
volatile bool buf_cur_flag = 0;
volatile bool buf_veri_flag = 0;

volatile bool fifo_stem_flag = true;

volatile bool buf_a_overwrt_flag = 0;
volatile double trigger_thres_g = ACC_MAGN_TRIGGER_THRES_DEF, f_out_thres_g = FUZZY_OUT_THRES_DEF, vari_thres_g = STD_VARIANCE_THRES_DEF;
volatile data_buf_sel_sm buf_str_sm = STATE_NONE;

volatile int16_t	acc_x_data_buffer_a[ACC_GYRO_DATA_BUF_LEN] = {0}, acc_y_data_buffer_a[ACC_GYRO_DATA_BUF_LEN] = {0}, acc_z_data_buffer_a[ACC_GYRO_DATA_BUF_LEN] = {0};
volatile int16_t	gyro_x_data_buffer_a[ACC_GYRO_DATA_BUF_LEN] = {0}, gyro_y_data_buffer_a[ACC_GYRO_DATA_BUF_LEN] = {0}, gyro_z_data_buffer_a[ACC_GYRO_DATA_BUF_LEN] = {0};
volatile int16_t	acc_x_data_buffer_b[ACC_GYRO_DATA_BUF_LEN] = {0}, acc_y_data_buffer_b[ACC_GYRO_DATA_BUF_LEN] = {0}, acc_z_data_buffer_b[ACC_GYRO_DATA_BUF_LEN] = {0};
volatile int16_t	gyro_x_data_buffer_b[ACC_GYRO_DATA_BUF_LEN] = {0}, gyro_y_data_buffer_b[ACC_GYRO_DATA_BUF_LEN] = {0}, gyro_z_data_buffer_b[ACC_GYRO_DATA_BUF_LEN] = {0};

//to test fifo data storage into buffer
volatile int16_t	acc_x_buffer_a[ACC_GYRO_FIFO_BUF_LEN] = {0}, acc_y_buffer_a[ACC_GYRO_FIFO_BUF_LEN] = {0}, acc_z_buffer_a[ACC_GYRO_FIFO_BUF_LEN] = {0};
volatile int16_t	gyro_x_buffer_a[ACC_GYRO_FIFO_BUF_LEN] = {0}, gyro_y_buffer_a[ACC_GYRO_FIFO_BUF_LEN] = {0}, gyro_z_buffer_a[ACC_GYRO_FIFO_BUF_LEN] = {0};

volatile int16_t	acc_x_hist_buffer[ACC_GYRO_FIFO_BUF_LEN] = {0}, acc_y_hist_buffer[ACC_GYRO_FIFO_BUF_LEN] = {0}, acc_z_hist_buffer[ACC_GYRO_FIFO_BUF_LEN] = {0};
volatile int16_t	gyro_x_hist_buffer[ACC_GYRO_FIFO_BUF_LEN] = {0}, gyro_y_hist_buffer[ACC_GYRO_FIFO_BUF_LEN] = {0}, gyro_z_hist_buffer[ACC_GYRO_FIFO_BUF_LEN] = {0};

volatile int16_t	acc_x_cur_buffer[ACC_GYRO_FIFO_BUF_LEN] = {0}, acc_y_cur_buffer[ACC_GYRO_FIFO_BUF_LEN] = {0}, acc_z_cur_buffer[ACC_GYRO_FIFO_BUF_LEN] = {0};
volatile int16_t	gyro_x_cur_buffer[ACC_GYRO_FIFO_BUF_LEN] = {0}, gyro_y_cur_buffer[ACC_GYRO_FIFO_BUF_LEN] = {0}, gyro_z_cur_buffer[ACC_GYRO_FIFO_BUF_LEN] = {0};

volatile int16_t	acc_x_veri_buffer[ACC_GYRO_FIFO_BUF_LEN] = {0}, acc_y_veri_buffer[ACC_GYRO_FIFO_BUF_LEN] = {0}, acc_z_veri_buffer[ACC_GYRO_FIFO_BUF_LEN] = {0};
volatile int16_t	gyro_x_veri_buffer[ACC_GYRO_FIFO_BUF_LEN] = {0}, gyro_y_veri_buffer[ACC_GYRO_FIFO_BUF_LEN] = {0}, gyro_z_veri_buffer[ACC_GYRO_FIFO_BUF_LEN] = {0};

volatile int16_t	acc_x_veri_buffer_1[ACC_GYRO_FIFO_BUF_LEN] = {0}, acc_y_veri_buffer_1[ACC_GYRO_FIFO_BUF_LEN] = {0}, acc_z_veri_buffer_1[ACC_GYRO_FIFO_BUF_LEN] = {0};
volatile int16_t	gyro_x_veri_buffer_1[ACC_GYRO_FIFO_BUF_LEN] = {0}, gyro_y_veri_buffer_1[ACC_GYRO_FIFO_BUF_LEN] = {0}, gyro_z_veri_buffer_1[ACC_GYRO_FIFO_BUF_LEN] = {0};


volatile float verify_acc_magn[VERIFY_DATA_BUF_LEN*2] = {0};
volatile int16_t    acc_x_data_buffer_c[VERIFY_DATA_BUF_LEN] = {0}, acc_y_data_buffer_c[VERIFY_DATA_BUF_LEN] = {0}, acc_z_data_buffer_c[VERIFY_DATA_BUF_LEN] = {0};


volatile int16_t peak_number = 0;
volatile float peak_analysis_array[ACC_GYRO_DATA_BUF_LEN *2 + VERIFY_DATA_BUF_LEN] = {0};

// frank_shao for test
#if defined(FALL_DETECT_TEST_MODE)
volatile float  real_acc_magn_square=0, real_std_devi=0, real_fuzzy_output=0,real_angle =0,real_max_gyro_magn = 0;
static volatile uint32_t fall_data_index = 0;
#endif

volatile uint8_t suspicion_rules[9][3] =
{
  LOW_MS     , LOW_MS     , LOW_MS    ,
  LOW_MS     , MEDIUM_MS  , LOW_MS    ,
  LOW_MS     , HIGH_MS    , LOW_MS    ,
  MEDIUM_MS  , LOW_MS     , LOW_MS    ,
  MEDIUM_MS  , MEDIUM_MS  , MEDIUM_MS ,
  MEDIUM_MS  , HIGH_MS    , HIGH_MS ,
  HIGH_MS    , LOW_MS     , LOW_MS    ,
  HIGH_MS    , MEDIUM_MS  , MEDIUM_MS ,
  HIGH_MS    , HIGH_MS    , HIGH_MS
};

BOOL author_check_success = false;

static U8 CRC8Table[256] = //Polynomial 0x07(x8+x2+x+1)
{
 0x00,0x07,0x0e,0x09,0x1c,0x1b,0x12,0x15,0x38,0x3f,0x36,0x31,0x24,0x23,0x2a,0x2d,
 0x70,0x77,0x7e,0x79,0x6c,0x6b,0x62,0x65,0x48,0x4f,0x46,0x41,0x54,0x53,0x5a,0x5d,
 0xe0,0xe7,0xee,0xe9,0xfc,0xfb,0xf2,0xf5,0xd8,0xdf,0xd6,0xd1,0xc4,0xc3,0xca,0xcd,
 0x90,0x97,0x9e,0x99,0x8c,0x8b,0x82,0x85,0xa8,0xaf,0xa6,0xa1,0xb4,0xb3,0xba,0xbd,
 0xc7,0xc0,0xc9,0xce,0xdb,0xdc,0xd5,0xd2,0xff,0xf8,0xf1,0xf6,0xe3,0xe4,0xed,0xea,
 0xb7,0xb0,0xb9,0xbe,0xab,0xac,0xa5,0xa2,0x8f,0x88,0x81,0x86,0x93,0x94,0x9d,0x9a,
 0x27,0x20,0x29,0x2e,0x3b,0x3c,0x35,0x32,0x1f,0x18,0x11,0x16,0x03,0x04,0x0d,0x0a,
 0x57,0x50,0x59,0x5e,0x4b,0x4c,0x45,0x42,0x6f,0x68,0x61,0x66,0x73,0x74,0x7d,0x7a,
 0x89,0x8e,0x87,0x80,0x95,0x92,0x9b,0x9c,0xb1,0xb6,0xbf,0xb8,0xad,0xaa,0xa3,0xa4,
 0xf9,0xfe,0xf7,0xf0,0xe5,0xe2,0xeb,0xec,0xc1,0xc6,0xcf,0xc8,0xdd,0xda,0xd3,0xd4,
 0x69,0x6e,0x67,0x60,0x75,0x72,0x7b,0x7c,0x51,0x56,0x5f,0x58,0x4d,0x4a,0x43,0x44,
 0x19,0x1e,0x17,0x10,0x05,0x02,0x0b,0x0c,0x21,0x26,0x2f,0x28,0x3d,0x3a,0x33,0x34,
 0x4e,0x49,0x40,0x47,0x52,0x55,0x5c,0x5b,0x76,0x71,0x78,0x7f,0x6a,0x6d,0x64,0x63,
 0x3e,0x39,0x30,0x37,0x22,0x25,0x2c,0x2b,0x06,0x01,0x08,0x0f,0x1a,0x1d,0x14,0x13,
 0xae,0xa9,0xa0,0xa7,0xb2,0xb5,0xbc,0xbb,0x96,0x91,0x98,0x9f,0x8a,0x8d,0x84,0x83,
 0xde,0xd9,0xd0,0xd7,0xc2,0xc5,0xcc,0xcb,0xe6,0xe1,0xe8,0xef,0xfa,0xfd,0xf4,0xf3
 };

//void algorithm_init(double sensitivity);
uint8_t algorithm_analyse(int16_t *acc_data_an, int16_t *gyro_data_an);
typedef struct {
	volatile float svma;
	volatile float svmg;
	volatile float cal_angle;
	volatile float f_out;
	volatile float std_devi;
	volatile double trigger_thres, f_out_thres, vari_thres;
	volatile uint8_t result;
}algo_result_ret_value;
algo_result_ret_value lsm6ds3_data;
algo_result_ret_value lsm6ds3_data_temp;

extern void battery_low_screen_ext();
extern void pedometer_draw_main_screen();
#if defined(FALL_DETECT_TEST_MODE)
extern void ls6d_fall_detect_mmi_req(void);
extern void ls6d_fall_detect_upl_data_req(void);
#endif
extern void fall_triggering_msg_hdlr(void);
extern S32 init_lsm6ds3(void);
extern S32 init_lsm6ds3_step(void);
extern kal_uint16 get_lsm6ds3_step(void);
extern int32_t lsm6ds3tr_c_write_reg(lsm6ds3tr_c_ctx_t* ctx, uint8_t reg, uint8_t* data,uint16_t len);
extern algo_result_ret_value lsm6ds3_data;
extern algo_result_ret_value lsm6ds3_data_temp;

extern S32 init_lsm6ds3(void);
extern BOOL fall_detection_get_infor(char *hardware, char *software);
extern S8 fall_detection_author_check(char *ID, char *IMEI, char *buf, U32 len);
extern double get_fall_detection_sensitivity_para(void);

//kal_bool algorithm_init(kal_bool set_flag, double tri_thr, double fo_thr, double vari_thr);
//algo_result_ret_value algorithm_analyse(int16_t* acc_data, int16_t* gyro_data);
//extern S32 config_lsm6ds3(void);
//extern S32 get_lsm6ds3_device_id(uint8_t *buff);
//extern S32 get_lsm6ds3_acceleration_angular_rate_data_s16(S16 *acc_data, S16 *gyro_data);
#endif