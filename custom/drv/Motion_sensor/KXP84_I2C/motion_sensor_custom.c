/*****************************************************************************
*  Copyright Statement:
*  -------------------- 
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2005
*  
*  BY OPENING THIS FILE, BUYER HEREBY UNEQUIVOCALLY ACKNOWLEDGES AND AGREES
*  THAT THE SOFTWARE/FIRMWARE AND ITS DOCUMENTATIONS ("MEDIATEK SOFTWARE")
*  RECEIVED FROM MEDIATEK AND/OR ITS REPRESENTATIVES ARE PROVIDED TO BUYER ON
*  AN "AS-IS" BASIS ONLY. MEDIATEK EXPRESSLY DISCLAIMS ANY AND ALL WARRANTIES,
*  EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE IMPLIED WARRANTIES OF
*  MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE OR NONINFRINGEMENT.
*  NEITHER DOES MEDIATEK PROVIDE ANY WARRANTY WHATSOEVER WITH RESPECT TO THE
*  SOFTWARE OF ANY THIRD PARTY WHICH MAY BE USED BY, INCORPORATED IN, OR
*  SUPPLIED WITH THE MEDIATEK SOFTWARE, AND BUYER AGREES TO LOOK ONLY TO SUCH
*  THIRD PARTY FOR ANY WARRANTY CLAIM RELATING THERETO. MEDIATEK SHALL ALSO
*  NOT BE RESPONSIBLE FOR ANY MEDIATEK SOFTWARE RELEASES MADE TO BUYER'S
*  SPECIFICATION OR TO CONFORM TO A PARTICULAR STANDARD OR OPEN FORUM.
*
*  BUYER'S SOLE AND EXCLUSIVE REMEDY AND MEDIATEK'S ENTIRE AND CUMULATIVE
*  LIABILITY WITH RESPECT TO THE MEDIATEK SOFTWARE RELEASED HEREUNDER WILL BE,
*  AT MEDIATEK'S OPTION, TO REVISE OR REPLACE THE MEDIATEK SOFTWARE AT ISSUE,
*  OR REFUND ANY SOFTWARE LICENSE FEES OR SERVICE CHARGE PAID BY BUYER TO
*  MEDIATEK FOR SUCH MEDIATEK SOFTWARE AT ISSUE. 
*
*  THE TRANSACTION CONTEMPLATED HEREUNDER SHALL BE CONSTRUED IN ACCORDANCE
*  WITH THE LAWS OF THE STATE OF CALIFORNIA, USA, EXCLUDING ITS CONFLICT OF
*  LAWS PRINCIPLES.  ANY DISPUTES, CONTROVERSIES OR CLAIMS ARISING THEREOF AND
*  RELATED THERETO SHALL BE SETTLED BY ARBITRATION IN SAN FRANCISCO, CA, UNDER
*  THE RULES OF THE INTERNATIONAL CHAMBER OF COMMERCE (ICC).
*
*****************************************************************************/

/*****************************************************************************
 *
 * Filename:
 * ---------
 *    motion_sensor_custom.c
 *
 * Project:
 * --------
 *   Maui_Software
 *
 * Description:
 * ------------
 *   This Module is for motion sensor driver.
 *
 * Author:
 * -------
 * -------
 * 
 *============================================================================
 *             HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/
#if defined(MOTION_SENSOR_SUPPORT)
#include "kal_release.h"
#include "custom_config.h" 
#include "gpio_sw.h"
#include "drv_comm.h"
#include "eint.h"
#include "motion_sensor.h"
#include "motion_sensor_hw_define.h"
#include "motion_sensor_custom.h"   
#include "motion_sensor_i2c.h"
    
kal_uint16 motion_data;

/*customizaton function pointer*/
MotionSensor_customize_function_struct ms_custom_func=
{
     ms_get_data,
     acc_sensor_get_5bytes,
     acc_sensor_init,
     acc_sensor_pwr_up,
     acc_sensor_pwr_down,
     acc_sensor_read_int_status,
     acc_sensor_clear_int_status,
     acc_sensor_configure_low_g,
     acc_sensor_configure_high_g,
     KXP84_query_gesture,
     KXP84_get_sensor_params,
     NULL
};   
/*customizaton data*/
MotionSensor_custom_data_struct  ms_custom_data_def = 
{          
   /*X axis*/
   ACC_0G_X,   
   ACC_1G_X,
	ACC_MINUS1G_X,     
	/*Y axis*/
	ACC_0G_Y,   
   ACC_1G_Y,
	ACC_MINUS1G_Y,     
	/*Z axis*/
	ACC_0G_Z,   
   ACC_1G_Z,
	ACC_MINUS1G_Z,
	/*support interrupt or not*/
	MOTION_SENSOR_INT_SUPPORT,
	MOTION_SENSOR_INT_LEVEL,
	MOTION_SENSOR_INT/*channel*/    
};	
/*
* FUNCTION                                                            
*	acc_sensor_read_int_status
*
* DESCRIPTION                                                           
*   	This function is to read interrupt status
*
* CALLS  
*
* PARAMETERS
*  None
*	 
* RETURNS
*	None
*/
void acc_sensor_read_int_status(kal_bool *low_g, kal_bool *high_g)
{
   kal_uint8 int_status;       
   int_status=motion_sensor_read_control(MOTION_SENSOR_CTRL_REGA);    
   *low_g=int_status&MOTION_SENSOR_LOW_G_MASK;
   *high_g=int_status&MOTION_SENSOR_HIGH_G_MASK;
   #ifdef ACC_KAL_DEBUG
   dbg_printWithTime("INT status = %d\r\n", int_status);                 
   #endif
}
/*
* FUNCTION                                                            
*	acc_sensor_clear_int_status
*
* DESCRIPTION                                                           
*   	This function is to clear interrupt
*
* CALLS  
*
* PARAMETERS
*  None
*	
* RETURNS
*	None
*/
void acc_sensor_clear_int_status(void)
{
   acc_sensor_pwr_down();
   acc_sensor_pwr_up();   
}
/*Customization functin*/ 
/*
* FUNCTION                                                            
*	acc_sensor_get_5bytes
*
* DESCRIPTION                                                           
*   	This function is to get ADC value in every axis
*
* CALLS  
*
* PARAMETERS
*	x_adc: ADC value in X-axis
*	y_adc: ADC value in Y-axis
*	z_adc: ADC value in Z-axis
*
* RETURNS
*	None
*/ 
//kal_uint16 acc_start, acc_end;	
void acc_sensor_get_5bytes(kal_uint16 *x_adc, kal_uint16 *y_adc, kal_uint16 *z_adc)
{	         
   /*x axis*/      
   *x_adc=motion_sensor_read_data(MOTION_SENSOR_XOUT_H);   
      
   /*y axis*/      
   *y_adc=motion_sensor_read_data(MOTION_SENSOR_YOUT_H);
      
   /*z axis*/      
   *z_adc=motion_sensor_read_data(MOTION_SENSOR_ZOUT_H);   
}
/*
* FUNCTION                                                            
*	acc_sensor_pwr_up
*
* DESCRIPTION                                                           
*   	This function is to power up acceleration module
*
* CALLS  
*
* PARAMETERS
*  None
*	
* RETURNS
*	None
*/    
void acc_sensor_pwr_up(void)
{         
   motion_sensor_write_data(0, MOTION_SENSOR_CTRL_REGC);
          
   motion_sensor_write_data(0xf, MOTION_SENSOR_CTRL_REGB);
         
   /*read*/      
   motion_data=motion_sensor_read_control(MOTION_SENSOR_CTRL_REGB);   	
   
}
/*
* FUNCTION                                                            
*	acc_sensor_pwr_down 
*
* DESCRIPTION                                                           
*   	This function is to power down acceleration
*
* CALLS  
*
* PARAMETERS
*	None
*	
* RETURNS
*	None
*/ 
void acc_sensor_pwr_down(void)
{   
   motion_sensor_write_data(0xff, MOTION_SENSOR_CTRL_REGC);      
   motion_sensor_write_data(0xff, MOTION_SENSOR_CTRL_REGB);      
}
/*
* FUNCTION                                                            
*	acc_sensor_configure_high_g
*
* DESCRIPTION                                                           
*   	This function is to configure debounce time and threshold of high-g
*
* CALLS  
*
* PARAMETERS
*  None
*	
* RETURNS
*	None
*/     
void acc_sensor_configure_low_g(kal_uint32 debounce, kal_uint32 threshold)
{
   threshold=threshold/20;
   debounce=debounce<<5;
   /*threshold*/      
   motion_sensor_write_data(threshold, MOTION_SENSOR_FF_INT);
      
   /*debounce time*/
   motion_sensor_write_data(debounce, MOTION_SENSOR_FF_DELAY);
         
   /*read*/        
   motion_data=motion_sensor_read_control(MOTION_SENSOR_FF_INT);   	
   
   motion_data=motion_sensor_read_control(MOTION_SENSOR_FF_DELAY);   	
      
}   
/*
* FUNCTION                                                            
*	acc_sensor_configure_high_g
*
* DESCRIPTION                                                           
*   	This function is to configure debounce time and threshold of high-g
*
* CALLS  
*
* PARAMETERS
*  None
*	
* RETURNS
*	None
*/    
void acc_sensor_configure_high_g(kal_uint32 debounce, kal_uint32 threshold)
{
   threshold=threshold/20;
   debounce=debounce<<5;
   /*threshold*/
    motion_sensor_write_data(threshold, MOTION_SENSOR_MOT_INT);
      
   /*debounce time*/
    motion_sensor_write_data(debounce, MOTION_SENSOR_MOT_DELAY);   
   
   /*read*/                
   motion_data=motion_sensor_read_control(MOTION_SENSOR_MOT_INT);   	
   
   motion_data=motion_sensor_read_control(MOTION_SENSOR_MOT_DELAY);   	      
}   
/*
* FUNCTION                                                            
*	acc_hisr
*
* DESCRIPTION                                                           
*   	This function is interrupt handler
*
* CALLS  
*
* PARAMETERS
*  None
*	
* RETURNS
*	None
*/    
void acc_hisr(void)
{
   kal_uint32 savedMask;
   savedMask = SaveAndSetIRQMask();
   acc_sensor_read_int_status(NULL, NULL);
   acc_sensor_clear_int_status();
   RestoreIRQMask(savedMask);
}   

/*
* FUNCTION                                                            
*	acc_sensor_init
*
* DESCRIPTION                                                           
*   	This function is to initialize acceleration module
*
* CALLS  
*
* PARAMETERS
*	None
*	
* RETURNS
*	None
*/ 

void acc_sensor_init(void)
{  
   #ifndef __CUST_NEW__	
   GPIO_ModeSetup(MS_I2C_CLK_PIN,0x0);
	GPIO_ModeSetup(MS_I2C_DATA_PIN,0x0);
   GPIO_ModeSetup(MS_I2C_CS_PIN,   0x0);   
   GPIO_ModeSetup(MS_I2C_RESET_PIN, 0x0);      
   GPIO_ModeSetup(MS_I2C_ADDR_PIN, 0x0);      
      
   GPIO_InitIO(OUTPUT,MS_I2C_CLK_PIN);   
   GPIO_InitIO(OUTPUT,MS_I2C_CS_PIN); 
   GPIO_InitIO(OUTPUT,MS_I2C_RESET_PIN);    
   GPIO_InitIO(OUTPUT,MS_I2C_ADDR_PIN);     
   #endif /* __CUST_NEW__ */
   GPIO_WriteIO(1,MS_I2C_RESET_PIN);
   GPIO_WriteIO(0,MS_I2C_RESET_PIN);
   GPIO_WriteIO(1,MS_I2C_CS_PIN);
   GPIO_WriteIO(1,MS_I2C_ADDR_PIN);
      
	SET_MS_CLK_HIGH;
	SET_MS_DATA_HIGH;
	SET_MS_CLK_OUTPUT;
	SET_MS_DATA_OUTPUT;	
   #ifndef __CUST_NEW__      
   GPIO_ModeSetup(36, 0x3);   
   #endif
   #if 0		
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
   #endif              
}

/*return sensor support gesture*/
kal_bool KXP84_query_gesture(kal_uint16 ms_gest_type)
{
	switch(ms_gest_type)
		{
			//only 3-axis sensor can support Flip gesture, 2-axis not support, return false.
			case MS_FLIP:
				return KAL_TRUE;
				
			default:
				return KAL_FALSE;
		}
}

kal_bool KXP84_get_sensor_params(kal_uint16 ms_params_type, MotionSensorQueryStruct *ms_params)
{
	kal_uint32 tilt_status;
	
	switch(ms_params_type)
		{
			case MS_ACC_DATA_RESOLUTION:				
				ms_params->curr_val = (1 * 1000)/(ACC_1G_X - ACC_0G_X);
				kal_prompt_trace(MOD_ENG,"MS_ACC_DATA_RESOLUTION: curr_val = %x, max_val = %x, min_val = %x",ms_params->curr_val, ms_params->max_val, ms_params->min_val);
				return KAL_TRUE;
				
			default:
				return KAL_FALSE;
		}
}
/*
* FUNCTION                                                            
*	ms_get_data
*
* DESCRIPTION                                                           
*   	This function is to get customization data
*
* CALLS  
*
* PARAMETERS
*	None
*	
* RETURNS
*	customization data
*/ 
MotionSensor_custom_data_struct *ms_get_data(void) 
{
   extern kal_uint8 custom_eint_get_channel(eint_channel_type type);
   ms_custom_data_def.int_chan=custom_eint_get_channel(motion_senosr_eint_chann);
   return (&ms_custom_data_def);
}      
/*
* FUNCTION                                                            
*	ms_GetFunc
*
* DESCRIPTION                                                           
*   	This function is to enable to customization function pointer
*
* CALLS  
*
* PARAMETERS
*	None 
*	
* RETURNS
*	function pointer
*/  
MotionSensor_customize_function_struct *ms_GetFunc(void)
{   
   return (&ms_custom_func);  
} 
#ifdef ACC_KAL_DEBUG
/*the following are test functions*/
kal_uint8 acce_test_flag=0;
void accele_test(void)
{
	if(acce_test_flag==0)
	{		
		motion_sensor_init();
		acce_test_flag=1;		
		motion_sensor_power(KAL_TRUE);
	}		
	else
	{	
	   motion_sensor_sample(KAL_TRUE);
	}   	  
}
/*
* FUNCTION                                                            
*	acc_test_cb
*
* DESCRIPTION                                                           
*   	This function is to test function for motion sensor
*
* CALLS  
*
* PARAMETERS
*	enable: enable or disable
*	
* RETURNS 
*	None 
*/ 	 
void acc_test_cb(void *parameter, Motion_Sensor_BuffState_enum state)
{
   MotionSensorDataStruct  acc_data;      
   
   while(motion_sensor_get_data(&acc_data))
   {
      dbg_printWithTime("X, Y, Z ACC = %d,%d,%d\r\n", acc_data.x_acc, acc_data.y_acc, acc_data.z_acc);                 
   }      
}    
#endif
#endif