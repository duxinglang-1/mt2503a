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
 *   isp_feature.c
 *
 * Project:
 * --------
 *   All
 *
 * Description:
 * ------------
 *   
 *
 * Author:
 * -------
 * -------
 *
 ****************************************************************************
 *============================================================================
 *             HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

#include "kal_release.h"
#include "cal_if.h"

#include "isp_comm_def.h"
#include "cpll.h"

#include "isp_if.h"
#include "aaa_process.h"
#include "sensor_comm_def.h"
#include "isp_cct_feature.h"
#include "isp_comm_if.h"
#include "mm_power_ctrl.h"
#include "mmsys_pwrmgr.h"
#include "drv_features.h"
#include "upll_ctrl.h"

#if defined(__RF_DESENSE_TEST__)
#include "rf_desense_test.h"
#endif

#if defined(__MM_DCM_SUPPORT__)
#pragma arm section code = "DYNAMIC_CODE_CAMCAL_ROCODE", rodata = "DYNAMIC_CODE_CAMCAL_ROCODE"
#endif

ISP_FEATURE_CUSTOM_DRIVER_FEATURE_CTRL_FUN_STRUCT CustomDriverFunc;
IMAGE_SENSOR_GET_SENSOR_INFO_STRUCT SensorInfo1;
ISP_FEATURE_GET_OUTPUT_RESOLUTION_IN_STRUCT IspGlobalInfo=
{ISP_IDLE_STATE,KAL_FALSE,KAL_FALSE,KAL_FALSE,0,ISP_MAX_DIGITAL_ZOOM_STEP, ISP_MAX_DIGITAL_ZOOM_FACTOR,0,0,0,0,0,0,0};
ISP_FEATURE_GET_DIGITAL_ZOOM_RESOLUTION_OUT_STRUCT IspDigitalZoomResolution;
kal_uint32 IspCpllOutClk;
ISP_DATA_FORMAT_ENUM IspInputDataFormat;
#if defined(__ISP_CAPTURE_MODE_BEST_SHOT_SUPPORT__)
ISP_BSS_INFO_STRUCT IspBssInfoData;
#endif
IMAGE_SENSOR_DATA_OUT_FORMAT_ENUM SensorCaptureDataFormat;

kal_uint32 BackupRegCam0550h=0x5a5a5a5a;
kal_uint16 IspGrabWidth,IspGrabHeight,IspGrabStartX,IspGrabStartY;
kal_uint16 IspResultWindowWidth=1,IspResultWindowHeight=1,IspResultWindowStartX,IspResultWindowStartY;
kal_uint16 IspResultWindowStartXBak,IspResultWindowStartYBak;
kal_uint32 IspZoomResultWindowWidth=1,IspZoomResultWindowHeight=1;
kal_uint32 IspHorizontalZoomPixel,IspVerticalZoomPixel;
kal_uint32 IspPreviewZoomHorizontalFactor,IspPreviewZoomVerticalFactor;

#if defined (__AUTO_SCENE_DETECT_SUPPORT__)
#if defined (YUV_MAIN_CAMERA)
#define YUV_EVDELTA_THRESHOLD  10
SENSOR_AE_AWB_REF_STRUCT IspSensorAeAwbRef;
kal_uint8   PreYUVAeEv;
#endif
extern void IspSetAsdCompensation(P_ISP_CAMERA_SCENE_COMPENSATION_STRUCT pIspSceneCompensation);
#endif
#if defined(__ISP_SERIAL_SENSOR_SUPPORT__)
extern void IspSerialInfInit(void);
extern void IspSerialInfSetSize(P_SERIAL_SENSOR_INFO_OUT_STRUCT para, kal_uint32 check_code);
extern void IspSerialInfDeinit(void);
#endif
#if defined(AF_SUPPORT)
kal_bool IspAFkeyRelease = KAL_TRUE;
#endif

extern MM_ERROR_CODE_ENUM CctFeatureControl(kal_uint32 FeatureId, void *pIspParaIn, void *pIspParaOut);

/*************************************************************************
* FUNCTION
*    SetIspDrivingCurrent
*
* DESCRIPTION
*    set isp driving current
*
* PARAMETERS
*    current: enum of driving current
*
* RETURNS
*    None
*
*************************************************************************/

kal_uint8 IspDrivingValueTable[ISP_DRIVING_NO]=
{    // 2ma,  4ma,  6ma,  8ma,  0ma
#if(defined(DRV_ISP_MT6268_HW_SUPPORT))
        0x2,  0x1,  0x1,  0x3,  0x0
#elif(defined(DRV_ISP_MT6236_HW_SUPPORT))
        0x4,  0x2,  0x6,  0x1,  0x0
#elif(defined(DRV_ISP_MT6276_HW_SUPPORT))
        0x2,  0x4,  0x6,  0x7,  0x0
#elif(defined(MT6250)||defined(MT6260))
        0x0,  0x0,  0x0,  0x1,  0x0
#else  // MT6261, MT2501 , MT2502
        0x0,  0x0,  0x0,  0x0,  0x0
#endif
};


void SetIspDrivingCurrent(kal_uint8 Current)
{
    kal_uint32 SaveIrqMask;
    kal_uint16 CurrentValue=0;

    if(Current>=ISP_DRIVING_NO) 
        Current = ISP_DRIVING_8MA;
    CurrentValue = IspDrivingValueTable[Current];
    SaveIrqMask=SaveAndSetIRQMask();

#if(defined(DRV_ISP_MT6268_HW_SUPPORT) ||defined(DRV_ISP_MT6236_HW_SUPPORT) ||defined(DRV_ISP_MT6276_HW_SUPPORT) || defined(MT6250) || defined(MT6260)||defined(MT6261))
    SET_ISP_MCLK_DRIVING(CurrentValue);
#else//toDo
    if (CurrentValue <= ISP_DRIVING_NO)
    {
        CurrentValue = ISP_DRIVING_8MA;
    }
#endif

   RestoreIRQMask(SaveIrqMask);

}	/* SetIspDrivingCurrent() */

kal_uint32 SetIspMasterClk(kal_uint32 Freq)
{
    kal_uint32 OutputFreq,temp;
    
#if (defined(__ISP_CPLL_SUPPORT__))
#if (defined(MT6256)||defined(MT6255))

    SET_CMOS_RISING_EDGE(0);
    ENABLE_CAMERA_TG_CLK_48M;
    if(Freq == 0)
    {
        DISABLE_CAMERA_CLOCK_OUTPUT_TO_CMOS   ;  // disable mclk output (ATV case)
    }
    else if(Freq == 13000000)
    {
        SET_CPLL_208M;
        SET_TG_OUTPUT_CLK_DIVIDER(15);
        SET_CMOS_FALLING_EDGE(7);
    }
    else if(Freq == 26000000)
    {
        SET_CPLL_208M;
        SET_TG_OUTPUT_CLK_DIVIDER(7);
        SET_CMOS_FALLING_EDGE(4);
    }
    else if(Freq == 52000000)
    {
        SET_CPLL_208M;
        SET_TG_OUTPUT_CLK_DIVIDER(3);
        SET_CMOS_FALLING_EDGE(2);
    }
    else if(Freq == 12000000)
    {
        SET_CPLL_96M;
        SET_TG_OUTPUT_CLK_DIVIDER(7);
        SET_CMOS_FALLING_EDGE(3);
    }
    else if(Freq == 24000000)
    {
        SET_CPLL_96M;
        SET_TG_OUTPUT_CLK_DIVIDER(3);
        SET_CMOS_FALLING_EDGE(2);
    }
    else if(Freq == 48000000)
    {
        SET_CPLL_96M;
        SET_TG_OUTPUT_CLK_DIVIDER(1);
        SET_CMOS_FALLING_EDGE(1);
    }
    else
    {
        ASSERT(0); //mclk not support
    }
    OutputFreq = Freq;
    //SET_CAMERA_MCLK_SRC_SYSTEM_CLK;

#endif
#elif (defined(__ISP_UPLL_SUPPORT__))
    // if the target MCLK is near 48M UPLL, then use UPLL clk,
    // else use system clk to generate MCLK
    UPLL_Enable(UPLL_OWNER_ISP);



    #if defined(MT6261)

//    SET_CPLL_PWR_ON;

    temp = *((volatile unsigned int *) (0xA0010100));
	*((volatile unsigned int *) (0xA0010100)) = temp|0x00000100; //POWERFUL_DIV_EN3=1 (reg[A0010100]bit 8 ��1)
	
	temp = *((volatile unsigned int *) (0xA001011C));
	temp = temp & 0xFFFFFE7F;
	*((volatile unsigned int *) (0xA001011C)) = temp|0x00000100;//0x0000D101;//�]�wreg[A001011C]bit [8:7] ��2 

	temp = *((volatile unsigned int *) (0xA0010320));	
	*((volatile unsigned int *) (0xA0010320)) = temp|0x00000400;//0x00000400;//�]�wreg[A0010320]bit 10 ��1

	  ENABLE_CAMERA_TG_CLK_48M;
	
	// default 312MHZ
	
	  if(Freq == 0)
	  {
		  DISABLE_CAMERA_CLOCK_OUTPUT_TO_CMOS	;  // disable mclk output (ATV case)
	  }
	  else if(Freq == 26000000)
	  {
		  SET_TG_OUTPUT_CLK_DIVIDER(11);
		  SET_CMOS_FALLING_EDGE(6);
	  }
	  else if(Freq == 52000000)
	  {
		  SET_TG_OUTPUT_CLK_DIVIDER(5);
		  SET_CMOS_FALLING_EDGE(3);
	  }
	  else if(Freq == 48000000)
	  { 
	  	temp = *((volatile unsigned int *) (0xA0010100));
		  *((volatile unsigned int *) (0xA0010100)) = temp&0xFFFFFEFF; //POWERFUL_DIV_EN3=0 (reg[A0010100]bit 8 ��0)   
		  temp = *((volatile unsigned int *) (0xA001011C)); 
		  *((volatile unsigned int *) (0xA001011C)) = temp&0xFFFFFE7F;//0x0000D001;//�]�wreg[A001011C]bit [8:7] ��0
		  *((volatile unsigned int *) (0xA0010320)) = 0x00000400;//�]�wreg[A0010320]bit 10 ��1
		  
		  SET_TG_OUTPUT_CLK_DIVIDER(0);
		  SET_CMOS_FALLING_EDGE(0);
	  }	  
	  else if(Freq == 24000000)
	  {
		  SET_TG_OUTPUT_CLK_DIVIDER(12);
		  SET_CMOS_FALLING_EDGE(6);
	  }
	  else
	  {
		  ASSERT(0); //mclk not support
	  }
    SET_CMOS_RISING_EDGE(0);
	ENABLE_CAMERA_TG2_CLK_48M;

  #elif defined(MT6260)
    if(Freq == 0)
    {
        DISABLE_CAMERA_CLOCK_OUTPUT_TO_CMOS   ;  // disable mclk output (ATV case)
    }
    else if(Freq == 13000000)
    {
        DISABLE_CAMERA_TG_CLK_48M;
        // default 166MHZ
        SET_TG_OUTPUT_CLK_DIVIDER(12);
        SET_CMOS_FALLING_EDGE(6);
    }
    else if(Freq == 26000000)
    {
        DISABLE_CAMERA_TG_CLK_48M;
        // default 166MHZ
        SET_TG_OUTPUT_CLK_DIVIDER(5);
        SET_CMOS_FALLING_EDGE(3);
    }
    else if(Freq == 52000000)
    {
        // default 166MHZ
        DISABLE_CAMERA_TG_CLK_48M;
        SET_TG_OUTPUT_CLK_DIVIDER(2);
        SET_CMOS_FALLING_EDGE(1);
    }
    else if(Freq == 12000000)
    {
        mm_enable_power(MMPWRMGR_CAM48);
        ENABLE_CAMERA_TG_CLK_48M;
        SET_TG_OUTPUT_CLK_DIVIDER(3);
        SET_CMOS_FALLING_EDGE(2);
    }
    else if(Freq == 24000000)
    {
        mm_enable_power(MMPWRMGR_CAM48);
        ENABLE_CAMERA_TG_CLK_48M;
        SET_TG_OUTPUT_CLK_DIVIDER(1);
        SET_CMOS_FALLING_EDGE(1);
    }
    else if(Freq == 48000000)
    {
        mm_enable_power(MMPWRMGR_CAM48);
        ENABLE_CAMERA_TG_CLK_48M;
        SET_TG_OUTPUT_CLK_DIVIDER(0);
        SET_CMOS_FALLING_EDGE(0);
    }
    else
    {
        ASSERT(0); //mclk not support
    }

  #elif defined(MT6250)
    if(Freq == 0)
    {
        DISABLE_CAMERA_CLOCK_OUTPUT_TO_CMOS   ;  // disable mclk output (ATV case)
    }
    else if(Freq == 13000000)
    {
        DISABLE_CAMERA_TG_CLK_48M;
      #if defined(__EMI_CLK_130MHZ__)
        SET_TG_OUTPUT_CLK_DIVIDER(9);
        SET_CMOS_FALLING_EDGE(5);
      #else // default 104MHZ
        SET_TG_OUTPUT_CLK_DIVIDER(7);
        SET_CMOS_FALLING_EDGE(4);
      #endif
    }
    else if(Freq == 26000000)
    {
        DISABLE_CAMERA_TG_CLK_48M;
      #if defined(__EMI_CLK_130MHZ__)
        SET_TG_OUTPUT_CLK_DIVIDER(4);
        SET_CMOS_FALLING_EDGE(2);
        SET_SENSOR_CLKFL_POL_HIGH; // sensor clock divider auxiliary
      #else // default 104MHZ
        SET_TG_OUTPUT_CLK_DIVIDER(3);
        SET_CMOS_FALLING_EDGE(2);
      #endif
    }
    else if(Freq == 52000000)
    {
      #if defined(__EMI_CLK_130MHZ__)
        mm_enable_power(MMPWRMGR_CAM48);
        ENABLE_CAMERA_TG_CLK_48M; // cannot output 52Mhz, 48Mhz instead
        SET_TG_OUTPUT_CLK_DIVIDER(0);
        SET_CMOS_FALLING_EDGE(0);
      #else // default 104MHZ
        DISABLE_CAMERA_TG_CLK_48M;
        SET_TG_OUTPUT_CLK_DIVIDER(1);
        SET_CMOS_FALLING_EDGE(1);
      #endif
    }
    else if(Freq == 12000000)
    {
        mm_enable_power(MMPWRMGR_CAM48);
        ENABLE_CAMERA_TG_CLK_48M;
        SET_TG_OUTPUT_CLK_DIVIDER(3);
        SET_CMOS_FALLING_EDGE(2);
    }
    else if(Freq == 24000000)
    {
        mm_enable_power(MMPWRMGR_CAM48);
        ENABLE_CAMERA_TG_CLK_48M;
        SET_TG_OUTPUT_CLK_DIVIDER(1);
        SET_CMOS_FALLING_EDGE(1);
    }
    else if(Freq == 48000000)
    {
        mm_enable_power(MMPWRMGR_CAM48);
        ENABLE_CAMERA_TG_CLK_48M;
        SET_TG_OUTPUT_CLK_DIVIDER(0);
        SET_CMOS_FALLING_EDGE(0);
    }
    else
    {
        ASSERT(0); //mclk not support
    }
  #else // MT6252
    if(Freq == 0)
    {
        DISABLE_CAMERA_CLOCK_OUTPUT_TO_CMOS   ;  // disable mclk output (ATV case)
    }
    else if(Freq == 13000000)
    {
        DISABLE_CAMERA_TG_CLK_48M;
        SET_TG_OUTPUT_CLK_DIVIDER(3);
        SET_CMOS_FALLING_EDGE(2);
    }
    else if(Freq == 26000000)
    {
        DISABLE_CAMERA_TG_CLK_48M;
        SET_TG_OUTPUT_CLK_DIVIDER(1);
        SET_CMOS_FALLING_EDGE(1);
    }
    else if(Freq == 52000000)
    {
        DISABLE_CAMERA_TG_CLK_48M;
        SET_TG_OUTPUT_CLK_DIVIDER(0);
        SET_CMOS_FALLING_EDGE(0);
    }
    else if(Freq == 12000000)
    {
        ENABLE_CAMERA_TG_CLK_48M;
        SET_TG_OUTPUT_CLK_DIVIDER(3);
        SET_CMOS_FALLING_EDGE(2);
    }
    else if(Freq == 24000000)
    {
        ENABLE_CAMERA_TG_CLK_48M;
        SET_TG_OUTPUT_CLK_DIVIDER(1);
        SET_CMOS_FALLING_EDGE(1);
    }
    else if(Freq == 48000000)
    {
        ENABLE_CAMERA_TG_CLK_48M;
        SET_TG_OUTPUT_CLK_DIVIDER(0);
        SET_CMOS_FALLING_EDGE(0);
    }
    else
    {
        ASSERT(0); //mclk not support
    }
  #endif
    OutputFreq = Freq;

    //SET_CAMERA_MCLK_SRC_SYSTEM_CLK;
#endif
    IspCpllOutClk = OutputFreq;
    ENABLE_CAMERA_PIXEL_CLKIN_ENABLE;

    return OutputFreq;
} /* SetIspMasterClk() */

void IspSetTg(CAL_SCENARIO_ENUM ScenarioId, P_IMAGE_SENSOR_GET_SENSOR_INFO_STRUCT pSensorInfo)
{
    MM_ERROR_CODE_ENUM ErrorCode=MM_ERROR_NONE;
    IMAGE_SENSOR_HW_DEPENDENT_STRUCT  SensorHwDependData;
    kal_uint32 TargetMclk;

    if (KAL_TRUE==pSensorInfo->PixelClkInv)
    {
        ENABLE_CAMERA_SENSOR_CLKIN_MONITOR;
        ENABLE_CAMERA_PIXEL_CLK_INV;
    }
    else
    {
        DISABLE_CAMERA_SENSOR_CLKIN_MONITOR;
        DISABLE_CAMERA_PIXEL_CLK_INV;
    }

    if (POLARITY_HIGH==pSensorInfo->PixelClkPolarity)
    {
        SET_CMOS_CLOCK_POLARITY_HIGH;
    }
    else
    {
        SET_CMOS_CLOCK_POLARITY_LOW;
    }

    if (POLARITY_HIGH==pSensorInfo->HsyncPolarity)
    {
        SET_HSYNC_POLARITY_HIGH;
    }
    else
    {
        SET_HSYNC_POLARITY_LOW;
    }

    if (POLARITY_HIGH==pSensorInfo->VsyncPolarity)
    {
        SET_VSYNC_POLARITY_HIGH;
    }
    else
    {
        SET_VSYNC_POLARITY_LOW;
    }

    {
        switch(pSensorInfo->PreviewNormalDataFormat)
        {

            case IMAGE_SENSOR_DATA_OUT_FORMAT_UYVY:
                DISABLE_SWAP_Y;
                DISABLE_SWAP_CBCR;
            break;
            case IMAGE_SENSOR_DATA_OUT_FORMAT_VYUY:
                DISABLE_SWAP_Y;
                ENABLE_SWAP_CBCR;
            break;
            case IMAGE_SENSOR_DATA_OUT_FORMAT_YUYV:
                ENABLE_SWAP_Y;
                DISABLE_SWAP_CBCR;
            break;
            case IMAGE_SENSOR_DATA_OUT_FORMAT_YVYU:
                ENABLE_SWAP_Y;
                ENABLE_SWAP_CBCR;
            break;
        }
    }

    ErrorCode = pfImageSensor->SensorFeatureCtrl(IMAGE_SENSOR_FEATURE_GET_HW_DEPENDENT_SETTING, NULL,   
                                     (void *) &SensorHwDependData, sizeof(IMAGE_SENSOR_HW_DEPENDENT_STRUCT), &SensorFeatureParaOutLen);        
    if(MM_ERROR_SENSOR_FEATURE_NOT_SUPPORT != ErrorCode)
    {
        if(DATA_PIN_CONNECT_BIT7_0 == SensorHwDependData.DataPinConnection)
        {
            SET_CAMERA_DATAPIN_7_0;
        }
        else
        {
            SET_CAMERA_DATAPIN_9_2;//default 
        }
        SetIspDrivingCurrent(SensorHwDependData.IspDrivingCurrent);//update for platform(project) dependent
    }

    switch(ScenarioId)
    {
        case CAL_SCENARIO_CAMERA_STILL_CAPTURE:
            TargetMclk = pSensorInfo->CaptureMclkFreq;
        break;
        case CAL_SCENARIO_VIDEO:
    #ifdef __MEDIA_VT__
/* under construction !*/
    #endif
            TargetMclk = pSensorInfo->VideoMclkFreq;
        break;
        default:
            TargetMclk = pSensorInfo->PreviewMclkFreq;
        break;
    }

    SetIspMasterClk(TargetMclk);
    #if defined(__RF_DESENSE_TEST__)
    if (RF_DESENSE_MODE_CAMERA_FH == rf_desense_get_curr_mode())
    {
        DISABLE_CAMERA_TG_CLK_48M;
        kal_trace(TRACE_INFO,ISP_RFDESENSE_FH_ENABLE);		        
    }
    #endif

} /* IspSetTg() */

void InitIspHw(P_IMAGE_SENSOR_GET_SENSOR_INFO_STRUCT pSensorInfo)
{
#if  defined(__SERIAL_SENSOR_V1_SUPPORT__)
    MM_ERROR_CODE_ENUM ErrorCode=MM_ERROR_NONE;
    SERIAL_SENSOR_INFO_IN_STRUCT SerialSensorInfoIn;
    SERIAL_SENSOR_INFO_OUT_STRUCT SerialSensorInfoOut;
	
	memset(&SerialSensorInfoOut, 0, sizeof(SerialSensorInfoOut));
#endif
    mm_enable_power(MMPWRMGR_ISP);//power on isp reg first
    //SensorCaptureDataFormat = pSensorInfo->CaptureDataFormat;
#if  defined(__SERIAL_SENSOR_V1_SUPPORT__)

    mm_enable_power(MMPWRMGR_CAM104M);
    if(pSensorInfo->SensorIf == IMAGE_SENSOR_IF_SERIAL) 
    {
        mm_enable_power(MMPWRMGR_PAD2CAM);
        ErrorCode = pfImageSensor->SensorFeatureCtrl(IMAGE_SENSOR_FEATURE_GET_SERIAL_SENSOR_INFO,  (void *) &SerialSensorInfoIn,   
                                     (void *) &SerialSensorInfoOut, sizeof(SERIAL_SENSOR_INFO_OUT_STRUCT), &SensorFeatureParaOutLen);        
        if(MM_ERROR_SENSOR_FEATURE_NOT_SUPPORT != ErrorCode)
        {
            IspSerialInfInit();
            IspSerialInfSetSize(&SerialSensorInfoOut , 0x00);
        }//else
            //ASSERT(0);
    }
    else
    {
        mm_disable_power(MMPWRMGR_PAD2CAM);
    }
#endif
    {
        IspInputDataFormat=ISP_YUV_SUPPORT;
        if ((pSensorInfo->PreviewNormalDataFormat >= IMAGE_SENSOR_DATA_OUT_FORMAT_CbYCrY) &&
            (pSensorInfo->PreviewNormalDataFormat <= IMAGE_SENSOR_DATA_OUT_FORMAT_YCrYCb))
        {
            SET_CAMERA_INPUT_TYPE(INPUT_YCbCr);
        }
        else if ((pSensorInfo->PreviewNormalDataFormat == IMAGE_SENSOR_DATA_OUT_FORMAT_RGB565))
        {
            SET_CAMERA_INPUT_TYPE(INPUT_RGB);
        }
        else/* UYVY,VYUY,YUYV,YVYU,JPEG */
        {
            SET_CAMERA_INPUT_TYPE(INPUT_YUV422);
        }
    }

#if defined(MIPI_SENSOR_SUPPORT)
    if (IMAGE_SENSOR_IF_MIPI==SensorInfo1.SensorIf)
    {
        mm_enable_power(MMPWRMGR_CSI2);
        
        SET_GLOBAL_SHUTTER_STROBE_INITIAL_HIGH;//for MIPI switch CSI2 not need to wait delay
        DISABLE_GLOBAL_SHUTTER_CONTROL;//for MIPI switch CSI2 not need to wait delay
        ENABLE_PHY_BIAS_CIRCUIT;
    }
#endif

    IspSetTg(CAL_SCENARIO_CAMERA_PREVIEW, pSensorInfo);
    
    ENABLE_CAMERA_TG_PHASE_COUNTER;
    
    if ((pSensorInfo->IsSensorDriverCtrlMclk == KAL_TRUE) || (pSensorInfo->PreviewMclkFreq == 0))
    {
        DISABLE_CAMERA_CLOCK_OUTPUT_TO_CMOS;
    }
    else
    {
        ENABLE_CAMERA_CLOCK_OUTPUT_TO_CMOS;
    }

} /* InitIspHw() */

void DeinitIspHw(P_IMAGE_SENSOR_GET_SENSOR_INFO_STRUCT pSensorInfo)
{

#if defined( __RF_DESENSE_TEST__)
    return;
#endif

#if  defined(__SERIAL_SENSOR_V1_SUPPORT__)
    if(pSensorInfo->SensorIf == IMAGE_SENSOR_IF_SERIAL) 
    {
        IspSerialInfDeinit();
    }
    mm_disable_power(MMPWRMGR_CAM104M);
    mm_disable_power(MMPWRMGR_PAD2CAM);
#endif

    SET_CMOS_FALLING_EDGE(0);   /* Set MCLK to Low */
    DISABLE_CAMERA_TG_PHASE_COUNTER;
    DISABLE_CAMERA_CLOCK_OUTPUT_TO_CMOS;

    SET_CPLL_PWR_DOWN;

    mm_disable_power(MMPWRMGR_ISP);
    mm_disable_power(MMPWRMGR_CAM48);
#if defined(MIPI_SENSOR_SUPPORT)
    if (IMAGE_SENSOR_IF_MIPI==SensorInfo1.SensorIf)
    {
        mm_disable_power(MMPWRMGR_CSI2);
        DISABLE_PHY_BIAS_CIRCUIT;

    }
#endif

} /* DeinitIspHw() */

void IspGrabSizeConfig(P_ISP_FEATURE_GET_OUTPUT_RESOLUTION_IN_STRUCT pParaIn)
{
#if (defined(ISP_SUPPORT))
    kal_uint16 TargetWidth, TargetHeight;
    kal_uint32 temp_isp_grab_width, temp_isp_grab_height;

    /***********Need horizontal and vertical factor? ************************/    

    IspGrabWidth= (pParaIn->SensorImageWidth )&0xFFFE ;

#if (defined(MT6256))
    if ((ISP_PREVIEW_STATE==pParaIn->IspState) || (ISP_MPEG4_ENCODE_STATE==pParaIn->IspState) ||
        (ISP_MJPEG_ENCODE_STATE==pParaIn->IspState))
    {
        IspGrabHeight=(pParaIn->SensorImageHeight-1)&0xFFFE;
    }
    else
#endif
    {
        IspGrabHeight=(pParaIn->SensorImageHeight)&0xFFFE ;
    }
    IspGrabStartX=pParaIn->SensorImageGrabStartX;
    IspGrabStartY=pParaIn->SensorImageGrabStartY;
    TargetWidth=pParaIn->TargetWidth;
    TargetHeight=pParaIn->TargetHeight;

    /* Config grab window as result window and disable result window.
           For webcam using AE done and it's affected by isp done which related with result window */
    {
        SET_YUV_TG_GRAB_PIXEL(IspGrabStartX,IspGrabWidth);/*width after demosaic*/
        SET_YUV_TG_GRAB_LINE(IspGrabStartY,IspGrabHeight);/*height after demosaic*/
    }

    /* calculate result window */
    if ((TargetWidth * IspGrabHeight) >= (TargetHeight * IspGrabWidth))
    {   /* x limit */
        temp_isp_grab_height=(IspGrabWidth * TargetHeight/TargetWidth)&0xFFFE;
        temp_isp_grab_width=IspGrabWidth;
    }
    else
    {   /* y limit */
        temp_isp_grab_width=(IspGrabHeight * TargetWidth/TargetHeight)&0xFFFE;
        temp_isp_grab_height=IspGrabHeight;
    }
#if defined(__ATV_SUPPORT__)
    if(CurrentCameraId == CAL_CAMERA_SOURCE_MATV)
    {
        temp_isp_grab_width=IspGrabWidth;
        temp_isp_grab_height=IspGrabHeight;
    }
#endif
    IspResultWindowWidth=temp_isp_grab_width;
    IspResultWindowHeight=temp_isp_grab_height;
    IspResultWindowStartX = ((IspGrabWidth - IspResultWindowWidth)>>1)&0xFFFE;
    IspResultWindowStartY = ((IspGrabHeight - IspResultWindowHeight)>>1)&0xFFFE;

    /* disable ISP subsumple */
    DISABLE_VERTICAL_SUB_SAMPLE;
    DISABLE_HORIZONTAL_SUB_SAMPLE;

    /* enable and config ISP result window */
    ENABLE_RESULT_WINDOW_GRAB;

    SET_RESULT_WINDOW_GRAB_PIXEL(IspResultWindowStartX,IspResultWindowWidth);
    SET_RESULT_WINDOW_GRAB_LINE(IspResultWindowStartY,IspResultWindowHeight);
    IspResultWindowStartXBak = IspResultWindowStartX;
    IspResultWindowStartYBak = IspResultWindowStartY;
#endif  // ISP_SUPPORT
}	/* IspGrabSizeConfig() */


void IspDigitalZoomStepCalculation(kal_uint32 MaxZoomFactor,kal_uint8 TotalZoomStep,
                                   kal_uint32 GrabWidthWithoutZoom,
                                   kal_uint32 GrabHeightWithoutZoom)
{
#if (defined(ISP_SUPPORT))
    IspHorizontalZoomPixel=((GrabWidthWithoutZoom<<10) -((GrabWidthWithoutZoom<<10) *100/MaxZoomFactor))/TotalZoomStep;	// no rounding
    IspVerticalZoomPixel  =((GrabHeightWithoutZoom<<10)-((GrabHeightWithoutZoom<<10)*100/MaxZoomFactor))/TotalZoomStep;
#endif
}   /* IspDigitalZoomStepCalculation() */


void IspDigitalZoomConfig(ISP_OPERATION_STATE_ENUM IspState,
    CAL_CAMERA_DIGITAL_ZOOM_TYPE_ENUM DzType,
    kal_uint8 ZoomStep,  const kal_uint16 *pZoomFactorListTable,
                          P_ISP_FEATURE_GET_OUTPUT_RESOLUTION_OUT_STRUCT pParaOut)
{
#if (defined(ISP_SUPPORT))

#ifdef __JPEG_SENSOR_SUPPORT__
    kal_uint16 TmpZoomFactor=100;

    if(DzType == CAM_DZ_TYPE_LIST)
    {
        ASSERT(ZoomStep<=IspGlobalInfo.TotalZoomStep);
        TmpZoomFactor = *(pZoomFactorListTable+ZoomStep);
        ASSERT(TmpZoomFactor>=100);
    }
#endif
    //#if (defined(__ISP_CROP_WINDOW_SUPPORT__))
    switch (IspState)
    {
        case ISP_PREVIEW_STATE:
        case ISP_MPEG4_ENCODE_STATE:
        case ISP_CAPTURE_WEBCAM_STATE:
            if(IspGlobalInfo.TotalZoomStep!=ZoomStep)
            {
            #ifdef __JPEG_SENSOR_SUPPORT__
                if(DzType == CAM_DZ_TYPE_LIST)
                {
                    IspZoomResultWindowWidth=IspResultWindowWidth*100/TmpZoomFactor;
                    IspZoomResultWindowHeight=IspResultWindowHeight*100/TmpZoomFactor;
                }
                else
            #endif
                {
                    IspZoomResultWindowWidth=IspResultWindowWidth-((ZoomStep*IspHorizontalZoomPixel)>>10);
                    IspZoomResultWindowHeight=IspResultWindowHeight-((ZoomStep*IspVerticalZoomPixel)>>10);
                }
            }
            else    // max step
            {
                IspZoomResultWindowWidth=IspResultWindowWidth*100/IspGlobalInfo.MaxZoomFactor;
                IspZoomResultWindowHeight=IspResultWindowHeight*100/IspGlobalInfo.MaxZoomFactor;
            }

            if(ZoomStep==0)
            {
                IspResultWindowStartX=IspResultWindowStartXBak;
                IspResultWindowStartY=IspResultWindowStartYBak;
            }
            else
            {
                IspResultWindowStartX=IspResultWindowStartXBak + ((IspResultWindowWidth - IspZoomResultWindowWidth)>>1);
                IspResultWindowStartY=IspResultWindowStartYBak + ((IspResultWindowHeight - IspZoomResultWindowHeight)>>1);
            }

            IspZoomResultWindowWidth&= 0xFFFE;
            IspZoomResultWindowHeight&= 0xFFFE;
            SET_RESULT_WINDOW_GRAB_PIXEL(IspResultWindowStartX,IspZoomResultWindowWidth);
            SET_RESULT_WINDOW_GRAB_LINE(IspResultWindowStartY,IspZoomResultWindowHeight);
            IspPreviewZoomHorizontalFactor = IspGetDigitalZoomFactor();
            IspPreviewZoomVerticalFactor = IspGetDigitalZoomVerticalFactor();
        break;

        case ISP_CAPTURE_JPEG_STATE:
            IspZoomResultWindowWidth = IspResultWindowWidth * 100 / IspPreviewZoomHorizontalFactor;
            IspZoomResultWindowHeight = IspResultWindowHeight * 100 / IspPreviewZoomVerticalFactor;

            IspResultWindowStartX=IspResultWindowStartXBak + ((IspResultWindowWidth - IspZoomResultWindowWidth)>>1);
            IspResultWindowStartY=IspResultWindowStartYBak + ((IspResultWindowHeight - IspZoomResultWindowHeight)>>1);

            /* The rotator input width must be 8-multiple due to clip enable (tite mode for MT6260) */
            IspZoomResultWindowWidth&= 0xFFF8;//0xFFFE;
            IspZoomResultWindowHeight&= 0xFFFE;
            SET_RESULT_WINDOW_GRAB_PIXEL(IspResultWindowStartX,IspZoomResultWindowWidth);
            SET_RESULT_WINDOW_GRAB_LINE(IspResultWindowStartY,IspZoomResultWindowHeight);
        break;

        default:
        break;
    }

    //IspZoomResultWindowWidth = IspResultWindowWidth;
    //IspZoomResultWindowHeight = IspResultWindowHeight;

    pParaOut->IspOutWidth=IspGrabWidth;
    pParaOut->IspOutHeight=IspGrabHeight;
    DISABLE_RESULT_WINDOW_GRAB;

#endif
}	/* IspDigitalZoomConfig() */

/*============================================================================*/
/*                   BSS Interface               */
/*============================================================================*/
void IspBssConfig(MULTISHOT_INFO_ENUM MultishotInfo)
{
}

kal_uint8 IspGetBssResult(kal_uint8 SnapshotIndex, kal_uint32 JpegLength)
{
    return 0;
}

#if defined (YUV_MAIN_CAMERA) && defined (__AUTO_SCENE_DETECT_SUPPORT__)        

/* LUT for gain & dEv */
#define ASD_LOG2_LUT_RATIO_BASE 256
#define ASD_LOG2_LUT_NO 101
#define ASD_LOG2_LUT_CENTER 0

const kal_uint32 ASD_LOG2_LUT_RATIO[ASD_LOG2_LUT_NO]={
256,/* 0 */
274, 294, 315, 338, 362, 388, 416, 446, 478, 512,/* 0.1~1.0 */
549, 588, 630, 676, 724, 776, 832, 891, 955, 1024,/* 1.1~2.0 */
1097, 1176, 1261, 1351, 1448, 1552, 1663, 1783, 1911, 2048,/* 2.1~3.0 */
2195, 2353, 2521, 2702, 2896, 3104, 3327, 3566, 3822, 4096,/* 3.1~4.0 */
4390, 4705, 5043, 5405, 5793, 6208, 6654, 7132, 7643, 8192,/* 4.1~5.0 */
8780, 9410, 10086, 10809, 11585, 12417, 13308, 14263, 15287, 16384,/* 5.1~6.0 */
17560, 18820, 20171, 21619, 23170, 24834, 26616, 28526, 30574, 32768,/* 6.1~7.0 */
35120, 37640, 40342, 43238, 46341, 49667, 53232, 57052, 61147, 65536,/* 7.1~8.0 */
70240, 75281, 80864, 86475, 92682, 99334, 106464, 114105, 122295, 131072,/* 8.1~9.0 */
140479, 150562, 161369, 172951, 185364, 198668, 212927, 228210, 244589, 262144/* 9.1~10.0 */
};

kal_uint32 IspLog2Func(kal_uint32 numerator, kal_uint32 denominator)
{
    kal_uint32 temp_p;
    kal_int32 x;
    kal_uint32 *p_LOG2_LUT_RATIO = (kal_uint32*)(&ASD_LOG2_LUT_RATIO[0]);
    
    temp_p = numerator*p_LOG2_LUT_RATIO[ASD_LOG2_LUT_CENTER];

    if (temp_p>denominator*ASD_LOG2_LUT_RATIO_BASE)
    {
        for (x=ASD_LOG2_LUT_CENTER; x<ASD_LOG2_LUT_NO; x++)
        {
            temp_p = denominator*p_LOG2_LUT_RATIO[x];
        
            if (temp_p>=numerator*ASD_LOG2_LUT_RATIO_BASE)
            {
                if ((temp_p -numerator*ASD_LOG2_LUT_RATIO_BASE) > (numerator*ASD_LOG2_LUT_RATIO_BASE-denominator*p_LOG2_LUT_RATIO[x-1]))
                {
                     return x-1;
                }
                else
                {
                     return x; 
                }
            }
            else if (x==ASD_LOG2_LUT_NO-1)
            {
                return (ASD_LOG2_LUT_NO-1);
            }
        }
    }
    return ASD_LOG2_LUT_CENTER;
}

#define ASD_ABS(val) (((val) < 0) ? -(val) : (val))
#if 0
/* under construction !*/
/* under construction !*/
#endif

void IspYUVSensorAeInfoCalculate(P_SENSOR_AE_CUR_STRUCT pAeAwbcur, P_ISP_CAMERA_INFO_AE_STRUCT pAeInfo)
{
    if ((IspSensorAeAwbRef.SensorAERef.AeRefLV05Shutter*IspSensorAeAwbRef.SensorAERef.AeRefLV05Gain)<=(pAeAwbcur->AeCurShutter*pAeAwbcur->AeCurGain))
    {
        pAeInfo->AeEv =  50;//0*80/IspSensorAeAwbRef.SensorLV05LV13EVRef+50;		
    }
    else
    {
       pAeInfo->AeEv = IspLog2Func((IspSensorAeAwbRef.SensorAERef.AeRefLV05Shutter*IspSensorAeAwbRef.SensorAERef.AeRefLV05Gain),                                                       (pAeAwbcur->AeCurShutter*pAeAwbcur->AeCurGain)) *80/IspSensorAeAwbRef.SensorLV05LV13EVRef+50;
    }

    if (pAeInfo->AeEv > 150) // EV range from 50 ~150
    {
        pAeInfo->AeEv = 150;
    }

    if (ASD_ABS(PreYUVAeEv-pAeInfo->AeEv) <= YUV_EVDELTA_THRESHOLD)	
    {
         pAeInfo->AeIsStable =KAL_TRUE;    
    }
    else
    {
         pAeInfo->AeIsStable =KAL_FALSE;        
    }

    PreYUVAeEv = pAeInfo->AeEv;    		
#if 0
/* under construction !*/
/* under construction !*/
#endif	
}
#endif

MM_ERROR_CODE_ENUM IspCameraFeatureCtrl(kal_uint32 FeatureId, void *pIspParaIn,
                                  void *pIspParaOut, kal_uint32 IspParaOutLen,
                                  kal_uint32 *pRealIspParaOutLen)
{
    MM_ERROR_CODE_ENUM ErrorCode=MM_ERROR_NONE;
    P_CAL_FEATURE_CTRL_STRUCT pCameraFeatureIn=(P_CAL_FEATURE_CTRL_STRUCT) pIspParaIn;
    P_CAL_FEATURE_CTRL_STRUCT pCameraFeatureOut=(P_CAL_FEATURE_CTRL_STRUCT) pIspParaOut;
    P_CAL_CAMERA_DIGITAL_ZOOM_OUT_STRUCT pCameraDzOut=pCameraFeatureOut->FeatureInfo.FeatureStructured.pCamDzOutPara;

    #if defined(AF_SUPPORT)
    extern kal_bool IspWaitAFResult;
    extern SENSOR_AF_DELAY_STRUCT IspAFQueryDelay;
    kal_int8 i=0;
    kal_uint32 ZoomFactor = 100;
    #endif

    // for camera HAL UT only
    P_CAL_FEATURE_TYPE_ENUM_STRUCT pCamFeatureEnum=(P_CAL_FEATURE_TYPE_ENUM_STRUCT) &(pCameraFeatureOut->FeatureInfo.FeatureEnum);
    // for camera HAL UT only
    kal_uint8 TmpItemCount;

    if (CAL_FEATURE_SET_OPERATION==pCameraFeatureIn->FeatureCtrlCode)
    {
        switch (FeatureId)
        {
            case CAL_FEATURE_CAMERA_DIGITAL_ZOOM:
                //IspSetImageSetting(CAL_FEATURE_CAMERA_DIGITAL_ZOOM,pCameraFeatureIn->FeatureSetValue);
                break;

            case CAL_FEATURE_CAMERA_CONTRAST:
            case CAL_FEATURE_CAMERA_SATURATION:
            case CAL_FEATURE_CAMERA_SHARPNESS:
            case CAL_FEATURE_CAMERA_WB:
            case CAL_FEATURE_CAMERA_EV_VALUE:
            case CAL_FEATURE_CAMERA_IMAGE_EFFECT:
            case CAL_FEATURE_CAMERA_BANDING_FREQ:
                IspSetImageSetting(FeatureId,pCameraFeatureIn->FeatureSetValue);
                break;
            case CAL_FEATURE_CAMERA_SCENE_MODE:
            case CAL_FEATURE_CAMERA_AE_METERING_MODE:
            #if (defined(LED_FLASHLIGHT_SUPPORT)||defined(LED_ONOFF_SUPPORT))
            case CAL_FEATURE_CAMERA_FLASH_MODE:
                IspOperationSetting(FeatureId, pCameraFeatureIn->FeatureSetValue);
                break;
            #endif
            #if defined(AF_SUPPORT)
            case CAL_FEATURE_CAMERA_AF_KEY:
                if(ISP_YUV_SUPPORT == IspInputDataFormat)
                {
                    pfImageSensor->SensorFeatureCtrl(CAL_FEATURE_CAMERA_AF_KEY, pCameraFeatureIn, &IspAFQueryDelay, sizeof(IspAFQueryDelay), pRealIspParaOutLen);
                    if (CAM_AF_ONE_TIME == pCameraFeatureIn->FeatureSetValue)
                    {
                        IspWaitAFResult = KAL_TRUE;
                        IspAFkeyRelease = KAL_FALSE;
                    }
                    else if (CAM_AF_RELEASE == pCameraFeatureIn->FeatureSetValue)
                    {
                        IspWaitAFResult = KAL_FALSE;
                        IspAFkeyRelease = KAL_TRUE;
                        IspAFQueryDelay.type = DELAYFRAME;
                        IspAFQueryDelay.count = 0;
                    }
                }
                else
                {
                    IspOperationSetting(CAL_FEATURE_CAMERA_AF_KEY, pCameraFeatureIn->FeatureSetValue);
                }
                break;

            case CAL_FEATURE_CAMERA_AF_OPERATION_MODE:
                if(ISP_YUV_SUPPORT == IspInputDataFormat)
                {
                    pfImageSensor->SensorFeatureCtrl(CAL_FEATURE_CAMERA_AF_OPERATION_MODE, pCameraFeatureIn, pCameraFeatureOut, IspParaOutLen, pRealIspParaOutLen);
                }
                else
                {
                    IspOperationSetting(CAL_FEATURE_CAMERA_AF_OPERATION_MODE, pCameraFeatureIn->FeatureSetValue);			
                }
                break;

            case CAL_FEATURE_CAMERA_AF_RANGE_CONTROL:
                if(ISP_YUV_SUPPORT == IspInputDataFormat)
                {
                    pfImageSensor->SensorFeatureCtrl(CAL_FEATURE_CAMERA_AF_RANGE_CONTROL, pCameraFeatureIn, pCameraFeatureOut, IspParaOutLen, pRealIspParaOutLen);
                }
                else
                {
                    IspOperationSetting(CAL_FEATURE_CAMERA_AF_RANGE_CONTROL, pCameraFeatureIn->FeatureSetValue);		
                }
                break;
            #endif

            default:
                break;
        }
    }
    else if (CAL_FEATURE_QUERY_OPERATION==pCameraFeatureIn->FeatureCtrlCode)
    {
        switch (FeatureId)
        {
            case CAL_FEATURE_CAMERA_DIGITAL_ZOOM:
                pCameraFeatureOut->FeatureType=CAL_FEATURE_TYPE_STRUCTURED;
                pCameraDzOut->DzType=CAM_DZ_TYPE_RANGE;
                pCameraDzOut->TotalZoomSteps=ISP_MAX_DIGITAL_ZOOM_STEP;
                pCameraDzOut->MaxZoomFactor=ISP_MAX_DIGITAL_ZOOM_FACTOR;    // depend on chips
            break;

            #if defined(AF_SUPPORT) 
            case CAL_FEATURE_CAMERA_AF_RANGE_CONTROL:
                if(ISP_YUV_SUPPORT == IspInputDataFormat)
                {
                    pfImageSensor->SensorFeatureCtrl(CAL_FEATURE_CAMERA_AF_RANGE_CONTROL, pCameraFeatureIn, pCameraFeatureOut, IspParaOutLen, pRealIspParaOutLen);
                }
                else
                {
                    pCameraFeatureOut->FeatureType=CAL_FEATURE_TYPE_ENUMERATE;
                    pCameraFeatureOut->FeatureOperationSupport = CAL_FEATURE_SET_OPERATION|
                                                             CAL_FEATURE_GET_OPERATION|
                                                             CAL_FEATURE_QUERY_OPERATION;
                    pCameraFeatureOut->FeatureModeSupport = CAL_FEATURE_CAMERA_SUPPORT;
                    #if defined(AF_SUPPORT)
                    pCamFeatureEnum->IsSupport = KAL_TRUE;
                    pCamFeatureEnum->ItemCount = 3;
                    pCamFeatureEnum->SupportItem[0] = CAM_AF_RANGE_AUTO;
                    pCamFeatureEnum->SupportItem[1] = CAM_AF_RANGE_MACRO;
                    pCamFeatureEnum->SupportItem[2] = CAM_AF_RANGE_LANDSCAPE;
                    #else
                    pCamFeatureEnum->IsSupport = KAL_FALSE;
                    pCamFeatureEnum->ItemCount = 0;
                    #endif
                }
            break;

            case CAL_FEATURE_CAMERA_AF_OPERATION_MODE:
                if(ISP_YUV_SUPPORT == IspInputDataFormat)
                {
                    pfImageSensor->SensorFeatureCtrl(CAL_FEATURE_CAMERA_AF_OPERATION_MODE, pCameraFeatureIn, pCameraFeatureOut, IspParaOutLen, pRealIspParaOutLen);
                }
                else
                {
                    pCameraFeatureOut->FeatureType=CAL_FEATURE_TYPE_ENUMERATE;
                    pCameraFeatureOut->FeatureOperationSupport = CAL_FEATURE_SET_OPERATION|
                                                             CAL_FEATURE_GET_OPERATION|
                                                             CAL_FEATURE_QUERY_OPERATION;
                    pCameraFeatureOut->FeatureModeSupport = CAL_FEATURE_CAMERA_SUPPORT;
                    #if defined(AF_SUPPORT)
                    pCamFeatureEnum->IsSupport = KAL_TRUE;
                    if (CAL_CAMERA_MODE_VIDEO == pCameraFeatureIn->CameraMode)
                    {
                        pCamFeatureEnum->ItemCount = 3;
                        pCamFeatureEnum->SupportItem[0] = CAM_AF_OFF;
                        pCamFeatureEnum->SupportItem[1] = CAM_AF_SINGLE_ZONE;
                        pCamFeatureEnum->SupportItem[2] = CAM_AF_CONTINUOUS;
                    }
                    else
                    {
                        pCamFeatureEnum->ItemCount = 5;
                        pCamFeatureEnum->SupportItem[0] = CAM_AF_OFF;
                        pCamFeatureEnum->SupportItem[1] = CAM_AF_SINGLE_ZONE;
                        pCamFeatureEnum->SupportItem[2] = CAM_AF_MULTI5_ZONE;
                        pCamFeatureEnum->SupportItem[3] = CAM_AF_CONTINUOUS;
                        pCamFeatureEnum->SupportItem[4] = CAM_AF_MANUAL_MODE;
                    }
                    #else
                    pCamFeatureEnum->IsSupport = KAL_FALSE;
                    pCamFeatureEnum->ItemCount = 0;
                    #endif
                }
            break;
            #endif //if(defined(AF_SUPPORT))	

            case CAL_FEATURE_CAMERA_STILL_CAPTURE_MODE:
                pCameraFeatureOut->FeatureType=CAL_FEATURE_TYPE_ENUMERATE;
                pCameraFeatureOut->FeatureOperationSupport = CAL_FEATURE_SET_OPERATION|
                                                             CAL_FEATURE_GET_OPERATION|
                                                             CAL_FEATURE_QUERY_OPERATION;
                pCameraFeatureOut->FeatureModeSupport = CAL_FEATURE_CAMERA_SUPPORT;
                pCamFeatureEnum->IsSupport = KAL_TRUE;
                TmpItemCount = 0;
                pCamFeatureEnum->SupportItem[TmpItemCount++] = CAM_STILL_CAPTURE_NORMAL;
                #if defined(__ISP_CAPTURE_MODE_CONT_SHOT_SUPPORT__)
                pCamFeatureEnum->SupportItem[TmpItemCount++] = CAM_STILL_CAPTURE_CONT_SHOT;
                #endif
                #if defined(__ISP_CAPTURE_MODE_BURST_SHOT_SUPPORT__)
                pCamFeatureEnum->SupportItem[TmpItemCount++] = CAM_STILL_CAPTURE_BURST_SHOT;
                #endif
                #if defined(__ISP_CAPTURE_MODE_EV_BRACKET_SUPPORT__)
                if(ISP_RAW_SUPPORT == IspInputDataFormat)
                pCamFeatureEnum->SupportItem[TmpItemCount++] = CAM_STILL_CAPTURE_EV_BRACKETING;
                #endif
                #if defined(__ISP_CAPTURE_MODE_ADD_FRAME_SUPPORT__)
                if(CurrentSensorInfo.CaptureDataFormat != IMAGE_SENSOR_DATA_OUT_FORMAT_JPEG)
                pCamFeatureEnum->SupportItem[TmpItemCount++] = CAM_STILL_CAPTURE_ADD_FRAME;
                #endif                

                /* Post-Process Related Capture Mode Support */
                #if defined(__SMILE_SHUTTER_SUPPORT__)
                pCamFeatureEnum->SupportItem[TmpItemCount++] = CAM_STILL_CAPTURE_SMILE_SHOT;
                #endif
                #if (defined(__PANORAMA_VIEW_SUPPORT__)||defined(__AUTOCAP_PANORAMA_SUPPORT__))
                pCamFeatureEnum->SupportItem[TmpItemCount++] = CAM_STILL_CAPTURE_PANO_VIEW;
                #endif
                #if defined(__HIGH_DYNAMIC_RANGE_SUPPORT__)
                pCamFeatureEnum->SupportItem[TmpItemCount++] = CAM_STILL_CAPTURE_HDR;
                #endif
                #if defined(__PP_OPTION_TBD__)
                pCamFeatureEnum->SupportItem[TmpItemCount++] = CAM_STILL_CAPTURE_AUTO_RAMA;
                #endif
                #if defined(__ZERO_SHUTTER_DELAY_SUPPORT__)
                pCamFeatureEnum->SupportItem[TmpItemCount++] = CAM_STILL_CAPTURE_ZSD;
                #endif
                #if defined(__AUTO_SCENE_DETECT_SUPPORT__)
                pCamFeatureEnum->SupportItem[TmpItemCount++] = CAM_STILL_CAPTURE_ASD;
                #endif

                pCamFeatureEnum->ItemCount = TmpItemCount;
            break;

            case CAL_FEATURE_CAMERA_STILL_CAPTURE_SIZE:
            break;
           default:
            break;
        }
    }
    else if (CAL_FEATURE_GET_OPERATION==pCameraFeatureIn->FeatureCtrlCode)
    {
        switch(FeatureId)
        {
            case CAL_FEATURE_CAMERA_GET_FRAME_RATE:
                pCameraFeatureOut->FeatureModeSupport = CAL_FEATURE_CAMERA_SUPPORT;      
                pCameraFeatureOut->FeatureCurrentValue = IspCurrentFrameRate;
                break;
            case CAL_FEATURE_CAMERA_GET_BSS_RESULT:
                break;
            #if defined(AF_SUPPORT)
            case CAL_FEATURE_CAMERA_GET_AF_ZONE:
                if(ISP_YUV_SUPPORT == IspInputDataFormat)
                {    
                    pfImageSensor->SensorFeatureCtrl(CAL_FEATURE_CAMERA_GET_AF_ZONE, pCameraFeatureIn, pCameraFeatureOut, IspParaOutLen, pRealIspParaOutLen);
                    #if 0 // de-feature the AF frame enlarge while zoom in
/* under construction !*/
                    #endif
                    ZoomFactor = 100;
                    for (i=0;i<5;i++)
                    {
                        //limit Zoom in AF Zone
                        //Camera Mode
                        if (ISP_PREVIEW_STATE == IspOperationState)
                        {
                            pCameraFeatureOut->FeatureInfo.FeatureStructured.pCamGetAfZoneOutPara->AfZoneLcd[i].H 
                                = (ZoomFactor/100)*pCameraFeatureOut->FeatureInfo.FeatureStructured.pCamGetAfZoneOutPara->AfZoneIsp[i].H*CalPreviewInfo.DisplayImageHeight/IspGlobalInfo.SensorImageHeight;
                            pCameraFeatureOut->FeatureInfo.FeatureStructured.pCamGetAfZoneOutPara->AfZoneLcd[i].W 
                                = (ZoomFactor/100)*pCameraFeatureOut->FeatureInfo.FeatureStructured.pCamGetAfZoneOutPara->AfZoneIsp[i].W*CalPreviewInfo.DisplayImageWidth/IspGlobalInfo.SensorImageWidth;
                            pCameraFeatureOut->FeatureInfo.FeatureStructured.pCamGetAfZoneOutPara->AfZoneLcd[i].X 
                                = CalPreviewInfo.DisplayImageWidth/2+(ZoomFactor/100)*(pCameraFeatureOut->FeatureInfo.FeatureStructured.pCamGetAfZoneOutPara->AfZoneIsp[i].X*CalPreviewInfo.DisplayImageWidth/IspGlobalInfo.SensorImageWidth-CalPreviewInfo.DisplayImageWidth/2);
                            pCameraFeatureOut->FeatureInfo.FeatureStructured.pCamGetAfZoneOutPara->AfZoneLcd[i].Y 
                                = CalPreviewInfo.DisplayImageHeight/2+(ZoomFactor/100)*(pCameraFeatureOut->FeatureInfo.FeatureStructured.pCamGetAfZoneOutPara->AfZoneIsp[i].Y*CalPreviewInfo.DisplayImageHeight/IspGlobalInfo.SensorImageHeight-CalPreviewInfo.DisplayImageHeight/2);
                            
                            if ((pCameraFeatureOut->FeatureInfo.FeatureStructured.pCamGetAfZoneOutPara->AfZoneLcd[i].X<pCameraFeatureOut->FeatureInfo.FeatureStructured.pCamGetAfZoneOutPara->AfZoneLcd[i].W/2+CalPreviewInfo.DisplayImageWidth/16) 
                             || (pCameraFeatureOut->FeatureInfo.FeatureStructured.pCamGetAfZoneOutPara->AfZoneLcd[i].X+pCameraFeatureOut->FeatureInfo.FeatureStructured.pCamGetAfZoneOutPara->AfZoneLcd[i].W/2>CalPreviewInfo.DisplayImageWidth-CalPreviewInfo.DisplayImageWidth/16)
                             || (pCameraFeatureOut->FeatureInfo.FeatureStructured.pCamGetAfZoneOutPara->AfZoneLcd[i].Y<pCameraFeatureOut->FeatureInfo.FeatureStructured.pCamGetAfZoneOutPara->AfZoneLcd[i].H/2+CalPreviewInfo.DisplayImageHeight/16) 
                             || (pCameraFeatureOut->FeatureInfo.FeatureStructured.pCamGetAfZoneOutPara->AfZoneLcd[i].Y+pCameraFeatureOut->FeatureInfo.FeatureStructured.pCamGetAfZoneOutPara->AfZoneLcd[i].H/2>CalPreviewInfo.DisplayImageHeight-CalPreviewInfo.DisplayImageHeight/16))
                            {
                                if ((CalPreviewInfo.DisplayImageWidth/2 == pCameraFeatureOut->FeatureInfo.FeatureStructured.pCamGetAfZoneOutPara->AfZoneLcd[i].X)
                                  &&(CalPreviewInfo.DisplayImageHeight/2 == pCameraFeatureOut->FeatureInfo.FeatureStructured.pCamGetAfZoneOutPara->AfZoneLcd[i].Y))
                                {
                                    pCameraFeatureOut->FeatureInfo.FeatureStructured.pCamGetAfZoneOutPara->AfZoneLcd[i].H = CalPreviewInfo.DisplayImageHeight*7/8;
                                    pCameraFeatureOut->FeatureInfo.FeatureStructured.pCamGetAfZoneOutPara->AfZoneLcd[i].W = CalPreviewInfo.DisplayImageWidth*7/8;
                                    pCameraFeatureOut->FeatureInfo.FeatureStructured.pCamGetAfZoneOutPara->AfZoneLcd[i].X = CalPreviewInfo.DisplayImageWidth/2;
                                    pCameraFeatureOut->FeatureInfo.FeatureStructured.pCamGetAfZoneOutPara->AfZoneLcd[i].Y = CalPreviewInfo.DisplayImageHeight/2;
                                }
                                else
                                {
                                    pCameraFeatureOut->FeatureInfo.FeatureStructured.pCamGetAfZoneOutPara->AfZoneLcd[i].H = 0;
                                    pCameraFeatureOut->FeatureInfo.FeatureStructured.pCamGetAfZoneOutPara->AfZoneLcd[i].W = 0;
                                    pCameraFeatureOut->FeatureInfo.FeatureStructured.pCamGetAfZoneOutPara->AfZoneLcd[i].X = 0;
                                    pCameraFeatureOut->FeatureInfo.FeatureStructured.pCamGetAfZoneOutPara->AfZoneLcd[i].Y = 0;
                                }  
                            }
                        }
                        //Video Mode
                        else
                        {
                            pCameraFeatureOut->FeatureInfo.FeatureStructured.pCamGetAfZoneOutPara->AfZoneLcd[i].H 
                                = (ZoomFactor/100)*pCameraFeatureOut->FeatureInfo.FeatureStructured.pCamGetAfZoneOutPara->AfZoneIsp[i].H*CalVideoInfo.DisplayImageHeight/IspGlobalInfo.SensorImageHeight;
                            pCameraFeatureOut->FeatureInfo.FeatureStructured.pCamGetAfZoneOutPara->AfZoneLcd[i].W 
                                = (ZoomFactor/100)*pCameraFeatureOut->FeatureInfo.FeatureStructured.pCamGetAfZoneOutPara->AfZoneIsp[i].W*CalVideoInfo.DisplayImageWidth/IspGlobalInfo.SensorImageWidth;
                            pCameraFeatureOut->FeatureInfo.FeatureStructured.pCamGetAfZoneOutPara->AfZoneLcd[i].X 
                                = CalVideoInfo.DisplayImageWidth/2+(ZoomFactor/100)*(pCameraFeatureOut->FeatureInfo.FeatureStructured.pCamGetAfZoneOutPara->AfZoneIsp[i].X*CalVideoInfo.DisplayImageWidth/IspGlobalInfo.SensorImageWidth-CalVideoInfo.DisplayImageWidth/2);
                            pCameraFeatureOut->FeatureInfo.FeatureStructured.pCamGetAfZoneOutPara->AfZoneLcd[i].Y 
                                = CalVideoInfo.DisplayImageHeight/2+(ZoomFactor/100)*(pCameraFeatureOut->FeatureInfo.FeatureStructured.pCamGetAfZoneOutPara->AfZoneIsp[i].Y*CalVideoInfo.DisplayImageHeight/IspGlobalInfo.SensorImageHeight-CalVideoInfo.DisplayImageHeight/2);
                            
                            if ((pCameraFeatureOut->FeatureInfo.FeatureStructured.pCamGetAfZoneOutPara->AfZoneLcd[i].X<pCameraFeatureOut->FeatureInfo.FeatureStructured.pCamGetAfZoneOutPara->AfZoneLcd[i].W/2+CalVideoInfo.DisplayImageWidth/16) 
                             || (pCameraFeatureOut->FeatureInfo.FeatureStructured.pCamGetAfZoneOutPara->AfZoneLcd[i].X+pCameraFeatureOut->FeatureInfo.FeatureStructured.pCamGetAfZoneOutPara->AfZoneLcd[i].W/2>CalVideoInfo.DisplayImageWidth-CalVideoInfo.DisplayImageWidth/16)
                             || (pCameraFeatureOut->FeatureInfo.FeatureStructured.pCamGetAfZoneOutPara->AfZoneLcd[i].Y<pCameraFeatureOut->FeatureInfo.FeatureStructured.pCamGetAfZoneOutPara->AfZoneLcd[i].H/2+CalVideoInfo.DisplayImageHeight/16) 
                             || (pCameraFeatureOut->FeatureInfo.FeatureStructured.pCamGetAfZoneOutPara->AfZoneLcd[i].Y+pCameraFeatureOut->FeatureInfo.FeatureStructured.pCamGetAfZoneOutPara->AfZoneLcd[i].H/2>CalVideoInfo.DisplayImageHeight-CalVideoInfo.DisplayImageHeight/16))
                            {
                                //Center Zone limit to MAX Zone size
                                if ((CalVideoInfo.DisplayImageWidth/2 == pCameraFeatureOut->FeatureInfo.FeatureStructured.pCamGetAfZoneOutPara->AfZoneLcd[i].X)
                                  &&(CalVideoInfo.DisplayImageHeight/2 == pCameraFeatureOut->FeatureInfo.FeatureStructured.pCamGetAfZoneOutPara->AfZoneLcd[i].Y))
                                {
                                    pCameraFeatureOut->FeatureInfo.FeatureStructured.pCamGetAfZoneOutPara->AfZoneLcd[i].H = CalVideoInfo.DisplayImageHeight*7/8;
                                    pCameraFeatureOut->FeatureInfo.FeatureStructured.pCamGetAfZoneOutPara->AfZoneLcd[i].W = CalVideoInfo.DisplayImageWidth*7/8;
                                    pCameraFeatureOut->FeatureInfo.FeatureStructured.pCamGetAfZoneOutPara->AfZoneLcd[i].X = CalVideoInfo.DisplayImageWidth/2;
                                    pCameraFeatureOut->FeatureInfo.FeatureStructured.pCamGetAfZoneOutPara->AfZoneLcd[i].Y = CalVideoInfo.DisplayImageHeight/2;
                                }
                                else
                                {
                                    pCameraFeatureOut->FeatureInfo.FeatureStructured.pCamGetAfZoneOutPara->AfZoneLcd[i].H = 0;
                                    pCameraFeatureOut->FeatureInfo.FeatureStructured.pCamGetAfZoneOutPara->AfZoneLcd[i].W = 0;
                                    pCameraFeatureOut->FeatureInfo.FeatureStructured.pCamGetAfZoneOutPara->AfZoneLcd[i].X = 0;
                                    pCameraFeatureOut->FeatureInfo.FeatureStructured.pCamGetAfZoneOutPara->AfZoneLcd[i].Y = 0;
                                }  
                            }
                        }
                    }
                }
                break;
            #endif
            default:
                break;
        }
    }
    return ErrorCode;
}   /* IspCameraFeatureCtrl() */


MM_ERROR_CODE_ENUM IspEmFeatureCtrl(kal_uint32 FeatureId, void *pIspParaIn, void *pIspParaOut)
{
    MM_ERROR_CODE_ENUM ErrorCode=MM_ERROR_NONE;

    return ErrorCode;
}


MM_ERROR_CODE_ENUM IspFeatureCtrl(kal_uint32 FeatureId, void *pIspParaIn,
                                  void *pIspParaOut, kal_uint32 IspParaOutLen,
                                  kal_uint32 *pRealIspParaOutLen)
{
    MM_ERROR_CODE_ENUM ErrorCode=MM_ERROR_NONE;
    P_ISP_FEATURE_GET_OUTPUT_RESOLUTION_IN_STRUCT pIspGetOutResParaIn;
    IMAGE_SENSOR_COMM_DATA_STRUCT SensorCommData;
    #if (defined(__PANORAMA_VIEW_SUPPORT__)||defined(__AUTOCAP_PANORAMA_SUPPORT__)||defined(__ZERO_SHUTTER_DELAY_SUPPORT__))	
    #if defined(EXIF_SUPPORT)
    exif_cam_para_struct* exif_cam_para_ptr;
    #endif
    #endif	

    if ((FeatureId>CAL_FEATURE_CAMERA_BEGIN) &&
        (FeatureId<=CAL_FEATURE_CAMERA_END))
    {   // the camera features that comes from upper layer of CAL
        // the data structure of pIspParaIn and pIspParaOut would be CAL_FEATURE_CTRL_STRUCT
        ErrorCode=IspCameraFeatureCtrl(FeatureId, pIspParaIn, pIspParaOut, IspParaOutLen,pRealIspParaOutLen);
    }
    else
    {   // the features come from CAL.
    switch (FeatureId)
    {
        #if (defined(__PANORAMA_VIEW_SUPPORT__)||defined(__AUTOCAP_PANORAMA_SUPPORT__)||defined(__ZERO_SHUTTER_DELAY_SUPPORT__))
        case ISP_FEATURE_UPDATE_EXIF_INFO:
        #if (defined(EXIF_SUPPORT))
        /* config exif header here to update bracketing setting & has recorded dz when exit_preview */
        exif_cam_para_ptr=exif_get_cam_para_struct();
        exif_get_MTK_para_struct();
        ExifIspTargetWidth = ((P_ISP_CAMERA_UPDATE_EXIF_INFO_STRUCT)pIspParaIn)->ImageTargetWidth;
        ExifIspTargetHeight =  ((P_ISP_CAMERA_UPDATE_EXIF_INFO_STRUCT)pIspParaIn)->ImageTargetHeight;
        ExifOrientation = ((P_ISP_CAMERA_UPDATE_EXIF_INFO_STRUCT)pIspParaIn)->StillImageExifOrientation;
        ExifUpdateCamParaStruct(exif_cam_para_ptr);
        #endif
        break;
        #endif

        case ISP_FEATURE_DISABLE_VIEWFINDER:
            IspDisableViewFinder();
        break;
        case ISP_FEATURE_SET_TG:
            IspSetTg(((P_ISP_FEATURE_SET_TG_STRUCT)pIspParaIn)->ScenarioId,
                     ((P_ISP_FEATURE_SET_TG_STRUCT)pIspParaIn)->pSensorInfo);
        break;
        case ISP_FEATURE_GET_OUTPUT_RESOLUTION:
            pIspGetOutResParaIn = (P_ISP_FEATURE_GET_OUTPUT_RESOLUTION_IN_STRUCT) pIspParaIn;
            memcpy(&IspGlobalInfo, pIspGetOutResParaIn, sizeof(ISP_FEATURE_GET_OUTPUT_RESOLUTION_IN_STRUCT));
        #if (defined(__JPEG_SENSOR_SUPPORT__))	
            if((IMAGE_SENSOR_DATA_OUT_FORMAT_JPEG == CurrentSensorInfo.CaptureDataFormat)&&((pIspGetOutResParaIn->IspState==ISP_PREVIEW_STATE)||(pIspGetOutResParaIn->IspState==ISP_CAPTURE_JPEG_STATE)))
            {
                IspGlobalInfo.MaxZoomFactor=CurrentDzInfo.MaxZoomFactor;
                IspGlobalInfo.TotalZoomStep=CurrentDzInfo.TotalZoomSteps;
            }else
        #endif
            {
                IspGlobalInfo.MaxZoomFactor=ISP_MAX_DIGITAL_ZOOM_FACTOR;
                IspGlobalInfo.TotalZoomStep=ISP_MAX_DIGITAL_ZOOM_STEP;
            }
            IspGrabSizeConfig(pIspParaIn);
            IspDigitalZoomStepCalculation(IspGlobalInfo.MaxZoomFactor, IspGlobalInfo.TotalZoomStep,
                                          IspResultWindowWidth, IspResultWindowHeight);
            IspDigitalZoomConfig(pIspGetOutResParaIn->IspState, 	pIspGetOutResParaIn->DzType,
                                 pIspGetOutResParaIn->ZoomStep, pIspGetOutResParaIn->pZoomFactorListTable,
                                 (P_ISP_FEATURE_GET_OUTPUT_RESOLUTION_OUT_STRUCT) pIspParaOut);

        break;
        case ISP_FEATURE_GET_CURRENT_ZOOM_INFO:
            ((P_ISP_FEATURE_CURRENT_ZOOM_INFO_STRUCT)pIspParaOut)->CurrentZoomStep=IspGlobalInfo.ZoomStep;
            ((P_ISP_FEATURE_CURRENT_ZOOM_INFO_STRUCT)pIspParaOut)->MaxZoomFactor=IspGlobalInfo.MaxZoomFactor;
            ((P_ISP_FEATURE_CURRENT_ZOOM_INFO_STRUCT)pIspParaOut)->TotalZoomStep=IspGlobalInfo.TotalZoomStep;
            ((P_ISP_FEATURE_CURRENT_ZOOM_INFO_STRUCT)pIspParaOut)->CurrentZoomFactor=IspGetDigitalZoomFactor();
        break;
        case ISP_FEATURE_GET_DIGITAL_ZOOM_RESOLUTION:
            IspDigitalZoom(((P_ISP_FEATURE_GET_DIGITAL_ZOOM_RESOLUTION_IN_STRUCT)pIspParaIn)->DzType,
            ((P_ISP_FEATURE_GET_DIGITAL_ZOOM_RESOLUTION_IN_STRUCT)pIspParaIn)->ZoomStep,
            ((P_ISP_FEATURE_GET_DIGITAL_ZOOM_RESOLUTION_IN_STRUCT)pIspParaIn)->pZoomFactorListTable,
            &IspDigitalZoomResolution);
            memcpy(pIspParaOut, &IspDigitalZoomResolution, sizeof(ISP_FEATURE_GET_DIGITAL_ZOOM_RESOLUTION_OUT_STRUCT));

        break;
        case ISP_FEATURE_INIT_HW:
            InitIspHw((P_IMAGE_SENSOR_GET_SENSOR_INFO_STRUCT) pIspParaIn);
            kal_mem_cpy(&SensorInfo1, (P_IMAGE_SENSOR_GET_SENSOR_INFO_STRUCT) pIspParaIn,
                        sizeof(IMAGE_SENSOR_GET_SENSOR_INFO_STRUCT));
        break;
        case ISP_FEATURE_DEINIT_HW:
            DeinitIspHw((P_IMAGE_SENSOR_GET_SENSOR_INFO_STRUCT) pIspParaIn);
        break;
        case ISP_FEATURE_SET_CUSTOM_DRIVER_FEATURE_CTRL_FUNC:
            kal_mem_cpy(&CustomDriverFunc, (P_ISP_FEATURE_CUSTOM_DRIVER_FEATURE_CTRL_FUN_STRUCT) pIspParaIn,
                        sizeof(ISP_FEATURE_CUSTOM_DRIVER_FEATURE_CTRL_FUN_STRUCT));
            kal_mem_cpy(&SensorInfo1, ((P_ISP_FEATURE_CUSTOM_DRIVER_FEATURE_CTRL_FUN_STRUCT) pIspParaIn)->pSensorInfo,
                        sizeof(IMAGE_SENSOR_GET_SENSOR_INFO_STRUCT));

            /// Bin added for init IspInputDataFormat in an early enough place
            {
                IspInputDataFormat=ISP_YUV_SUPPORT;
            }

            if (CAL_CAMERA_SOURCE_MAIN==CustomDriverFunc.CameraId)
            {
            #if defined(WEBCAM_SUPPORT)
                pIspWebcamAttrValues = IspMainWebcamAttrValues;
                IspWebcamInit();
            #endif
            }
            #if (defined(DUAL_CAMERA_SUPPORT))
            else if (CAL_CAMERA_SOURCE_SUB==CustomDriverFunc.CameraId)
            {
            #if defined(WEBCAM_SUPPORT)
                pIspWebcamAttrValues = IspSubWebcamAttrValues;
                IspWebcamInit();
            #endif
            }
            #endif
        break;
        #if defined(WEBCAM_SUPPORT)
        case CAL_FEATURE_WEBCAM_GET_ATTR:            
        case CAL_FEATURE_WEBCAM_SET_ATTR:    
            ErrorCode=IspWebcamFeatureCtrl(FeatureId, pIspParaIn, pIspParaOut, IspParaOutLen);
        break;
        #endif
        
        case ISP_FEATURE_SET_FACE_INFO:
        break;
        
        case ISP_FEATURE_SET_AE_BYPASS:
            SensorCommData.FeatureValue = (*(kal_bool *)pIspParaIn);
            {
                pfImageSensor->SensorFeatureCtrl(IMAGE_SENSOR_FEATURE_SET_AE_BYPASS, &SensorCommData, NULL, 0, &SensorFeatureParaOutLen);        
            }
        break;

        case ISP_FEATURE_SET_AWB_BYPASS:
            SensorCommData.FeatureValue = (*(kal_bool *)pIspParaIn);
            {
                ErrorCode = pfImageSensor->SensorFeatureCtrl(IMAGE_SENSOR_FEATURE_SET_AWB_BYPASS, &SensorCommData, NULL, 0, &SensorFeatureParaOutLen);                        
            }
        break;
#if (defined(__AUTOCAP_PANORAMA_SUPPORT__))
        case ISP_FEATURE_SET_AE_LIMIT_ENABLE:
            if(ISP_YUV_SUPPORT == IspInputDataFormat)
            {
                //ASSERT(0); /* not support */
            }
        break;
        case ISP_FEATURE_GET_CAPTURE_EV_IDX:
            {
                //ASSERT(0); /* not support */
                *((kal_uint8*)pIspParaOut) = 0;
            }
        break;
#endif  /* defined(__AUTOCAP_PANORAMA_SUPPORT__) */         
        case ISP_FEATURE_SET_AF_BYPASS:
        #if (AF_SUPPORT)
            SensorCommData.FeatureValue = (*(kal_bool *)pIspParaIn);
            if(ISP_YUV_SUPPORT == IspInputDataFormat)
            {
               ErrorCode = pfImageSensor->SensorFeatureCtrl(IMAGE_SENSOR_FEATURE_SET_AF_BYPASS, &SensorCommData, NULL, 0, &SensorFeatureParaOutLen);
            }
        #endif
        break;

        case ISP_FEATURE_RESET_AF:
        #if (AF_SUPPORT)
            if(ISP_YUV_SUPPORT == IspInputDataFormat)
            {
               // TBD                       
            }
        #endif
        break;
        
        case ISP_FEATURE_SET_CAPTURE_FORMAT :
            //pfImageSensor->SensorFeatureCtrl(IMAGE_SENSOR_FEATURE_GET_CAPTURE_FORMAT, pCameraDzIn, &CaptureInfoOut, FeatureOutLen, pRealFeatureOutLen);
            SensorCaptureDataFormat = ((P_IMAGE_SENSOR_CAPTURE_FORMAT_STRUCT)pIspParaIn)->DataType;
        break;

          case ISP_FEATURE_CONFIG_3A_BEFORE_SENSOR_SWITCH_CAPTURE:
            #if defined(LED_FLASHLIGHT_SUPPORT)
            if(ISP_YUV_SUPPORT == IspInputDataFormat)
            {
                if ((MULTISHOT_FALSE==((P_ISP_FEATURE_CONFIG_3A_BEFORE_CAPTURE_STRUCT)pIspParaIn)->MultishotInfo)||
                    (MULTISHOT_FIRST==((P_ISP_FEATURE_CONFIG_3A_BEFORE_CAPTURE_STRUCT)pIspParaIn)->MultishotInfo))
                {

                    /// should always call IspYuvFlashlightConfig() before IspYuvFlashlightPrestrobeProcess(), 
                    /// because IspYuvFlashlightConfig() will determine if the IspYuvFlashlightPrestrobeProcess() is necessary
                    IspYuvFlashlightConfig((P_ISP_FEATURE_CONFIG_3A_BEFORE_CAPTURE_STRUCT)pIspParaIn);
                    IspYuvFlashlightPrestrobeProcess();             
                }
            }
            #endif
        break;
        
        case ISP_FEATURE_STOP_FLASHLIGHT_PROCESS_AFTER_CAPTURE_DONE:
        #if defined(LED_FLASHLIGHT_SUPPORT)
            if(ISP_YUV_SUPPORT == IspInputDataFormat)
            {
                IspYuvFlashlightMainStrobeProcess(KAL_FALSE);
            }
        #endif
        break;

        case ISP_FEATURE_SET_3A_REF:
        #if defined (YUV_MAIN_CAMERA) && defined (__AUTO_SCENE_DETECT_SUPPORT__)        
            if(ISP_YUV_SUPPORT == IspInputDataFormat)
            {
               kal_mem_cpy(&IspSensorAeAwbRef, ((P_SENSOR_AE_AWB_REF_STRUCT) pIspParaIn),sizeof(SENSOR_AE_AWB_REF_STRUCT));

               IspSensorAeAwbRef.SensorLV05LV13EVRef =IspLog2Func((IspSensorAeAwbRef.SensorAERef.AeRefLV05Shutter*IspSensorAeAwbRef.SensorAERef.AeRefLV05Gain),
                                                                                                          (IspSensorAeAwbRef.SensorAERef.AeRefLV13Shutter*IspSensorAeAwbRef.SensorAERef.AeRefLV13Gain));
               #if 0   
/* under construction !*/
/* under construction !*/
               #endif
            }
        #endif
        break;

        case ISP_FEATURE_GET_3A_REF:
        #if defined (__AUTO_SCENE_DETECT_SUPPORT__)
            if(ISP_YUV_SUPPORT == IspInputDataFormat)
            {
                #if defined (YUV_MAIN_CAMERA)
                ((P_ISP_CAMERA_AWB_AF_REF_STRUCT) pIspParaOut)->AaaInfoFromRaw = KAL_FALSE;
                ((P_ISP_CAMERA_AWB_AF_REF_STRUCT) pIspParaOut)->AwbRefD65Rgain = IspSensorAeAwbRef.SensorAwbGainRef.AwbRefD65Rgain;
                ((P_ISP_CAMERA_AWB_AF_REF_STRUCT) pIspParaOut)->AwbRefD65Bgain = IspSensorAeAwbRef.SensorAwbGainRef.AwbRefD65Bgain;
                ((P_ISP_CAMERA_AWB_AF_REF_STRUCT) pIspParaOut)->AwbRefCwfRgain = IspSensorAeAwbRef.SensorAwbGainRef.AwbRefD65Rgain;
                ((P_ISP_CAMERA_AWB_AF_REF_STRUCT) pIspParaOut)->AwbRefCwfBgain = IspSensorAeAwbRef.SensorAwbGainRef.AwbRefCWFBgain;
                ((P_ISP_CAMERA_AWB_AF_REF_STRUCT) pIspParaOut)->AfTblParam = NULL;
                // Init YUV EV
                PreYUVAeEv = 0;
                #endif
            }
        #endif
        break;

        case ISP_FEATURE_GET_3A_INFO:
        #if defined (__AUTO_SCENE_DETECT_SUPPORT__)
            if(ISP_YUV_SUPPORT == IspInputDataFormat)
            {
                #if defined (YUV_MAIN_CAMERA)
                SENSOR_AE_AWB_CUR_STRUCT Sensor_Ae_Awb_Cur;
                ISP_CAMERA_INFO_AE_STRUCT Ae_info;
                ErrorCode = pfImageSensor->SensorFeatureCtrl(IMAGE_SENSOR_FEATURE_GET_SHUTTER_GAIN_AWB_GAIN, NULL, &Sensor_Ae_Awb_Cur, sizeof(SENSOR_AE_AWB_CUR_STRUCT), &SensorFeatureParaOutLen);
                if (MM_ERROR_SENSOR_FEATURE_NOT_SUPPORT != ErrorCode)
                {
                    ((P_ISP_CAMERA_INFO_3A_STRUCT) pIspParaOut)->AwbCurRgain = Sensor_Ae_Awb_Cur.SensorAwbGainCur.AwbCurRgain;
                    ((P_ISP_CAMERA_INFO_3A_STRUCT) pIspParaOut)->AwbCurBgain = Sensor_Ae_Awb_Cur.SensorAwbGainCur.AwbCurBgain;
                    IspYUVSensorAeInfoCalculate(&Sensor_Ae_Awb_Cur.SensorAECur,&Ae_info);
                    ((P_ISP_CAMERA_INFO_3A_STRUCT) pIspParaOut)->AeIsStable = Ae_info.AeIsStable;
                    ((P_ISP_CAMERA_INFO_3A_STRUCT) pIspParaOut)->AeEv = Ae_info.AeEv;					
                    ((P_ISP_CAMERA_INFO_3A_STRUCT) pIspParaOut)->AeFaceEnhanceEv = 0; // yuv not applied face enhance ev
                }
                #endif
            }
        #endif
        break;

        case ISP_FEATURE_SET_SCENE_COMPENSATION:
        #if defined (__AUTO_SCENE_DETECT_SUPPORT__)
            IspSetAsdCompensation((P_ISP_CAMERA_SCENE_COMPENSATION_STRUCT) pIspParaIn);
        #endif
        break;

        default:
            ErrorCode = MM_ERROR_SENSOR_FEATURE_NOT_SUPPORT;
        break;
    }
    }

    return ErrorCode;
} /* IspFeatureCtrl() */

#if defined(__MM_DCM_SUPPORT__)
#pragma arm section code, rodata
#endif


