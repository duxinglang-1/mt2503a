/*****************************************************************************
* File Name          : Algorithm_config.c
* Author             : XieBiao
* Version            : v1.0
* Date               : 02/06/2020
* Description        : fall detection sensitinity settings
*
* HISTORY:
* Date               |	Modification                    |	Author
* 06/02/2020         |	Initial Revision                |	XieBiao
********************************************************************************/
#include "kal_trace.h"
#include "kal_general_types.h"
#include "MMIDataType.h"
#include "lsm6ds3.h"
#include "dcl.h"

#define FALL_SENSITIVITY_PARA 0.05f

extern const unsigned char LSM6DS3_EINT_NO;
extern lsm6ds3tr_c_ctx_t lsm6ds3;

extern void lsm6ds3_algorithm_init(void);
extern void lsm6ds3_data_handler(void);
extern void lsm6ds3_fall_turn_on(void);
extern void lsm6ds3_fall_turn_off(void);

double get_fall_detection_sensitivity_para(void)
{
	return FALL_SENSITIVITY_PARA;
}

void fall_triggering_msg_hdlr(void)
{
	kal_prompt_trace(MOD_ABM, "fall is triggering!");
}

S32 init_lsm6ds3_step(void)
{
	S32 error = STATUS_OK;
	U8 temp[2] = {0};

	temp[0]=0x80;
	error = lsm6ds3tr_c_write_reg(&lsm6ds3, LSM6DS3TR_C_INT1_CTRL, temp, 1);
	kal_prompt_trace(MOD_ABM, "LSM6DS3_INT1_CTRL:%d", error);
	temp[0]=0x40;
	error = lsm6ds3tr_c_write_reg(&lsm6ds3, LSM6DS3TR_C_TAP_CFG, temp, 1);
	kal_prompt_trace(MOD_ABM, "LSM6DS3_TAP_CFG:%d", error);
	temp[0]=0x3c;
	error = lsm6ds3tr_c_write_reg(&lsm6ds3, LSM6DS3TR_C_CTRL10_C, temp, 1);
	kal_prompt_trace(MOD_ABM, "LSM6DS3_CTRL10_C:%d", error);

	return STATUS_OK;
}

kal_uint16 get_lsm6ds3_step(void)
{
	S32 error;
	U8 temp_val1,temp_val2;
	U16 val;

	temp_val1 = 0;
	error = lsm6ds3tr_c_read_reg(&lsm6ds3, LSM6DS3TR_C_STEP_COUNTER_L, &temp_val1, 1);

	temp_val2 = 0;
	error = lsm6ds3tr_c_read_reg(&lsm6ds3, LSM6DS3TR_C_STEP_COUNTER_H, &temp_val2, 1);

	kal_prompt_trace(MOD_ABM, "LSM6DS3_STEP_COUNTER_L:%d, %x", error, temp_val1);
	kal_prompt_trace(MOD_ABM, "LSM6DS3_STEP_COUNTER_H:%d, %x", error, temp_val2);

	val = ((kal_uint16)temp_val2<<8)|((kal_uint16)temp_val1);
	kal_prompt_trace(MOD_ABM, "LSM6DS3_STEP_COUNTER:%x", val);

	return val;
}

void LSM6DS3_DATA_READY_HISR(void)
{
	kal_prompt_trace(MOD_ABM, "LSM6DS3_DATA_READY_HISR");
	
	lsm6ds3_data_handler();
}

void lsm6ds3_main_init(void)
{
	lsm6ds3_algorithm_init();

	EINT_Set_HW_Debounce(LSM6DS3_EINT_NO, 0);
	EINT_Registration(LSM6DS3_EINT_NO, KAL_TRUE, KAL_TRUE, LSM6DS3_DATA_READY_HISR, KAL_TRUE);
}

