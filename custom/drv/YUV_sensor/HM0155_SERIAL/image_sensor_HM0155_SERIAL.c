/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2010
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
 *   image_sensor_HM0155_SERIAL.c
 *
 * Project:
 * --------
 *   Maui_sw
 *
 * Description:
 * ------------
 *   Image sensor driver function_11A&11B
 *
 * Author:
 * -------
 * -------
 *
 *============================================================================
 *             HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
 * removed!
 *
 * removed!
 *
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 *
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/
#include "drv_comm.h"
#include "isp_comm_if.h"
#include "camera_sccb.h"
#include "image_sensor.h"
#include "cal_comm_def.h"
#include "isp_if.h"

static struct
{
    kal_bool BypassAe;
    kal_bool BypassAwb;
    kal_bool CapState; /* KAL_TRUE: in capture state, else in preview state */
    kal_bool PvMode; /* KAL_TRUE: preview size output, else full size output */
    kal_uint8 BandingFreq; /* HM0155_SERIAL_50HZ or HM0155_SERIAL_60HZ for 50Hz/60Hz */
    kal_uint32 InternalClock; /* internal clock which using process pixel(for exposure) */
    kal_uint32 Pclk; /* output clock which output to baseband */
    kal_uint32 Gain; /* base on 0x40 */
    kal_uint32 Shutter; /* unit is (linelength / internal clock) s */
    kal_uint32 FrameLength; /* total line numbers in one frame(include dummy line) */
    kal_uint32 LineLength; /* total pixel numbers in one line(include dummy pixel) */
    IMAGE_SENSOR_INDEX_ENUM SensorIdx;
    sensor_data_struct *NvramData;
} HM0155_SERIALSensor;

//#define HM0155_SERIAL_SET_PAGE0 CamWriteCmosSensor(0xfe , 0x00)
//#define HM0155_SERIAL_SET_PAGE1 CamWriteCmosSensor(0xfe , 0x01)
kal_bool HM0155_SERIAL_CAM_BANDING_50HZ = KAL_FALSE;

#ifdef HM0155_SERIAL_LOAD_FROM_T_FLASH
/*************************************************************************
* FUNCTION
*  HM0155_SERIAL_Initialize_from_T_Flash
*
* DESCRIPTION
*  Read the initialize setting from t-flash or user disk to speed up image quality tuning.
*
* PARAMETERS
*  None
*
* RETURNS
*  kal_uint8 - 0 : Load setting fail, 1 : Load setting successfully.
*
*************************************************************************/
static kal_uint8 HM0155_SERIAL_Initialize_from_T_Flash()
{
#include <stdlib.h>
#include "med_utility.h"
#include "fs_type.h"

#if HM0155_SERIAL_I2C_ADDR_BITS == CAMERA_SCCB_16BIT
    #define HM0155_SERIAL_REG_SKIP    0x08
#else
    #define HM0155_SERIAL_REG_SKIP    0x06
#endif
#if HM0155_SERIAL_I2C_DATA_BITS == CAMERA_SCCB_16BIT
    #define HM0155_SERIAL_VAL_SKIP    0x08
#else
    #define HM0155_SERIAL_VAL_SKIP    0x06
#endif
  
    /* 0 - Initial value, 1 - Register, 2 - Delay, 3 - End of setting. */
    #define HM0155_SERIAL_OP_CODE_INI    0x00    /* Initial value. */
    #define HM0155_SERIAL_OP_CODE_REG    0x01    /* Register */
    #define HM0155_SERIAL_OP_CODE_DLY    0x02    /* Delay */
    #define HM0155_SERIAL_OP_CODE_END    0x03    /* End of initial setting. */

    typedef struct
    {
        kal_uint16 init_reg;
        kal_uint16 init_val;  /* Save the register value and delay tick */
        kal_uint8 op_code;    /* 0 - Initial value, 1 - Register, 2 - Delay, 3 - End of setting. */
    } HM0155_SERIAL_initial_set_struct;
  
    static HM0155_SERIAL_initial_set_struct HM0155_SERIAL_Init_Reg[1000];
    static WCHAR HM0155_SERIAL_set_file_name[256] = {0};
    FS_HANDLE fp = -1;        /* Default, no file opened. */
    kal_uint8 *data_buff = NULL;
    kal_uint8 *curr_ptr = NULL;
    kal_uint32 file_size = 0;
    kal_uint32 bytes_read = 0;
    kal_uint32 i = 0, j = 0;
    kal_uint8 func_ind[3] = {0};  /* REG or DLY */
    
    kal_mem_cpy(HM0155_SERIAL_set_file_name, L"C:\\HM0155_SERIAL_Initialize_Setting.Bin", sizeof(L"C:\\HM0155_SERIAL_Initialize_Setting.Bin"));
    
    /* Search the setting file in all of the user disk. */
    curr_ptr = (kal_uint8 *)HM0155_SERIAL_set_file_name;
    while (fp < 0)
    {
        if ((*curr_ptr >= 'c' && *curr_ptr <= 'z') || (*curr_ptr >= 'C' && *curr_ptr <= 'Z'))
        {
            fp = FS_Open(HM0155_SERIAL_set_file_name, FS_READ_ONLY);
            if (fp >= 0)
            {
                break; /* Find the setting file. */
            }
            *curr_ptr = *curr_ptr + 1;
        }
        else
        {
            break ;
        }
    }
    if (fp < 0)    /* Error handle */
    {
        HM0155_SERIAL_TRACE("!!! Warning, Can't find the initial setting file!!!");
        return 0;
    }
    
    FS_GetFileSize(fp, &file_size);
    if (file_size < 20)
    {
        HM0155_SERIAL_TRACE("!!! Warning, Invalid setting file!!!");
        return 0;      /* Invalid setting file. */
    }
    
    data_buff = med_alloc_ext_mem(file_size);
    if (data_buff == NULL)
    {
        HM0155_SERIAL_TRACE("!!! Warning, Memory not enoughed...");
        return 0;        /* Memory not enough */
    }
    FS_Read(fp, data_buff, file_size, &bytes_read);
    
    /* Start parse the setting witch read from t-flash. */
    curr_ptr = data_buff;
    while (curr_ptr < (data_buff + file_size))
    {
        while ((*curr_ptr == ' ') || (*curr_ptr == '\t'))/* Skip the Space & TAB */
            curr_ptr++;
        if (((*curr_ptr) == '/') && ((*(curr_ptr + 1)) == '*'))
        {
            while (!(((*curr_ptr) == '*') && ((*(curr_ptr + 1)) == '/')))
            {
                curr_ptr++;    /* Skip block comment code. */
            }
            while (!((*curr_ptr == 0x0D) && (*(curr_ptr+1) == 0x0A)))
            {
                curr_ptr++;
            }
            curr_ptr += 2;            /* Skip the enter line */
            continue ;
        }
    
        if (((*curr_ptr) == '/') || ((*curr_ptr) == '{') || ((*curr_ptr) == '}'))    /* Comment line, skip it. */
        {
            while (!((*curr_ptr == 0x0D) && (*(curr_ptr+1) == 0x0A)))
            {
                curr_ptr++;
            }

            curr_ptr += 2;            /* Skip the enter line */

            continue ;
        }
        /* This just content one enter line. */
        if (((*curr_ptr) == 0x0D) && ((*(curr_ptr + 1)) == 0x0A))
        {
            curr_ptr += 2;
            continue ;
        }

        kal_mem_cpy(func_ind, curr_ptr, 3);
        curr_ptr += 4;          /* Skip "REG(" or "DLY(" */
        if (strcmp((const char *)func_ind, "REG") == 0)    /* REG */
        {
            HM0155_SERIAL_Init_Reg[i].op_code = HM0155_SERIAL_OP_CODE_REG;
      
            HM0155_SERIAL_Init_Reg[i].init_reg = strtol((const char *)curr_ptr, NULL, 16);
            curr_ptr += HM0155_SERIAL_REG_SKIP;  /* Skip "0x0000, " */
      
            HM0155_SERIAL_Init_Reg[i].init_val = strtol((const char *)curr_ptr, NULL, 16);
            curr_ptr += HM0155_SERIAL_VAL_SKIP;  /* Skip "0x0000);" */
        }
        else                  /* DLY */
        {
            /* Need add delay for this setting. */
            HM0155_SERIAL_Init_Reg[i].op_code = HM0155_SERIAL_OP_CODE_DLY;
      
            HM0155_SERIAL_Init_Reg[i].init_reg = 0xFF;
            HM0155_SERIAL_Init_Reg[i].init_val = strtol((const char *)curr_ptr, NULL, 10);  /* Get the delay ticks, the delay should less then 50 */
        }
        i++;
    
        /* Skip to next line directly. */
        while (!((*curr_ptr == 0x0D) && (*(curr_ptr+1) == 0x0A)))
        {
            curr_ptr++;
        }
        curr_ptr += 2;
    }

    /* (0xFFFF, 0xFFFF) means the end of initial setting. */
    HM0155_SERIAL_Init_Reg[i].op_code = HM0155_SERIAL_OP_CODE_END;
    HM0155_SERIAL_Init_Reg[i].init_reg = 0xFF;
    HM0155_SERIAL_Init_Reg[i].init_val = 0xFF;
    i++;

    HM0155_SERIAL_TRACE("%d register read...", i - 1);
    med_free_ext_mem((void **)&data_buff);
    FS_Close(fp);

    HM0155_SERIAL_TRACE("Start apply initialize setting.");
    /* Start apply the initial setting to sensor. */
    for (j=0; j<i; j++)
    {
        if (HM0155_SERIAL_Init_Reg[j].op_code == HM0155_SERIAL_OP_CODE_END)  /* End of the setting. */
        {
            break ;
        }
        else if (HM0155_SERIAL_Init_Reg[j].op_code == HM0155_SERIAL_OP_CODE_DLY)
        {
            kal_sleep_task(HM0155_SERIAL_Init_Reg[j].init_val);    /* Delay */
        }
        else if (HM0155_SERIAL_Init_Reg[j].op_code == HM0155_SERIAL_OP_CODE_REG)
        {
            CamWriteCmosSensor(HM0155_SERIAL_Init_Reg[j].init_reg, HM0155_SERIAL_Init_Reg[j].init_val);
        }
        else
        {
            ASSERT(0);
        }
    }
    HM0155_SERIAL_TRACE("%d register applied...", j);
    return 1;  
}
#endif

/*************************************************************************
* FUNCTION
*   HM0155_SERIALSetMirror
*
* DESCRIPTION
*   This function set the mirror to the CMOS sensor
*   IMPORTANT NOTICE:
*     the color should be normal when mirror or flip
*
* PARAMETERS
*   Mirror
*
* RETURNS
*   None
*
* LOCAL AFFECTED
*
*************************************************************************/
static void HM0155_SERIALSetMirror(kal_uint8 Mirror)
{
	// TODO: set mirror&flip here
	switch (Mirror)
	{
		case IMAGE_SENSOR_MIRROR_H:
			CamWriteCmosSensor(0x0006, 0x00);
			break;
		case IMAGE_SENSOR_MIRROR_V:
			CamWriteCmosSensor(0x0006, 0x02);
			break;
		case IMAGE_SENSOR_MIRROR_HV:
			CamWriteCmosSensor(0x0006, 0x01);
			break;
		default:
			CamWriteCmosSensor(0x0006, 0x03);
			break;
	}
}

/*************************************************************************
* FUNCTION
*   HM0155_SERIALSetClock
*
* DESCRIPTION
*   This function set sensor internal clock and output clock
*
* PARAMETERS
*   Clk: internal clock
*
* RETURNS
*   None
*
* LOCAL AFFECTED
*
*************************************************************************/
static void HM0155_SERIALSetClock(kal_uint32 InternalClock)
{
    if (HM0155_SERIALSensor.InternalClock == InternalClock)
    {
        return;
    }
    HM0155_SERIALSensor.InternalClock = InternalClock;
    // TODO: set internal clock(use process pixel) and output clock(ouput to baseband) here
    {
    	 kal_uint8 ClkDiv;
        /* add PLL comment here */
        switch (InternalClock)
        {
		case HM0155_SERIAL_MCLK / 2:
			ClkDiv = 0x00; 
			break; /* pclk = mclk */
		case HM0155_SERIAL_MCLK / 4: 
			ClkDiv = 0x11; 
			break; /* pclk = mclk / 2 */
		case HM0155_SERIAL_MCLK / 8: 
			ClkDiv = 0x32; 
			break; /* pclk = mclk / 4 */
		default: ASSERT(0);
        }
	 //CamWriteCmosSensor(0x0025, ClkDiv);
    }
}

/*************************************************************************
* FUNCTION
*   HM0155_SERIALWriteShutter
*
* DESCRIPTION
*   This function apply shutter to sensor
*
* PARAMETERS
*   Shutter: integration time, unit: (linelength / internal clock) s
*
* RETURNS
*   None
*
* LOCAL AFFECTED
*
*************************************************************************/
static void HM0155_SERIALWriteShutter(kal_uint32 Shutter)
{
    // TODO: set integration time here
	CamWriteCmosSensor(0x0015, Shutter >> 8);
	CamWriteCmosSensor(0x0016, Shutter);    
}

/*************************************************************************
* FUNCTION
*   HM0155_SERIALReadShutter
*
* DESCRIPTION
*   This function get shutter from sensor
*
* PARAMETERS
*   None
*
* RETURNS
*   Shutter: integration time, unit: (linelength / internal clock) s
*
* LOCAL AFFECTED
*
*************************************************************************/
static kal_uint32 HM0155_SERIALReadShutter(void)
{
    // TODO: read integration time here
	return (CamReadCmosSensor(0x0015) << 8)|CamReadCmosSensor(0x0016);
}

/*************************************************************************
* FUNCTION
*   HM0155_SERIALWriteGain
*
* DESCRIPTION
*   This function apply global gain to sensor
*
* PARAMETERS
*   Gain: base on 0x40
*
* RETURNS
*   None
*
* LOCAL AFFECTED
*
*************************************************************************/
static void HM0155_SERIALWriteGain(kal_uint32 Gain)
{
    // TODO: set global gain here
    
}

/*************************************************************************
* FUNCTION
*   HM0155_SERIALReadGain
*
* DESCRIPTION
*   This function get global gain from sensor
*
* PARAMETERS
*   None
*
* RETURNS
*   Gain: base on 0x40
*
* LOCAL AFFECTED
*
*************************************************************************/
static kal_uint32 HM0155_SERIALReadGain(void)
{
    // TODO: read global gain here
    
    return 0x40;
}

/*************************************************************************
* FUNCTION
*   HM0155_SERIALAeEnable
*
* DESCRIPTION
*   disable/enable AE
*
* PARAMETERS
*   Enable
*
* RETURNS
*   None
*
* LOCAL AFFECTED
*
*************************************************************************/
static void HM0155_SERIALAeEnable(kal_bool Enable)
{
	if (HM0155_SERIALSensor.BypassAe)
	{
		Enable = KAL_FALSE;
	}
	
	// TODO: enable or disable AE here
	{
		kal_uint16 temp_ae_reg = CamReadCmosSensor(0x0380);
		if (Enable)
		{
	    		CamWriteCmosSensor(0x0380, (temp_ae_reg | 0x01));
		}
		else
		{
	    		CamWriteCmosSensor(0x0380, (temp_ae_reg & (~0x01))); /* Turn OFF AEC/AGC*/
		}
	}
	CamWriteCmosSensor(0x0000, 0x01);
	CamWriteCmosSensor(0x0100, 0x01);
	CamWriteCmosSensor(0x0101, 0x01);
}

/*************************************************************************
* FUNCTION
*   HM0155_SERIALAwbEnable
*
* DESCRIPTION
*   disable/enable awb
*
* PARAMETERS
*   Enable
*
* RETURNS
*   None
*
* LOCAL AFFECTED
*
*************************************************************************/
static void HM0155_SERIALAwbEnable(kal_bool Enable)
{
	if (HM0155_SERIALSensor.BypassAwb)
	{
		Enable = KAL_FALSE;
	}
	
	// TODO: enable or disable AWB here
	{
		kal_uint16 temp_awb_reg = CamReadCmosSensor(0x0380);
		if (Enable)
		{
	    		CamWriteCmosSensor(0x0380, (temp_awb_reg | 0x02));
		}
		else
		{
	    		CamWriteCmosSensor(0x0380, (temp_awb_reg & (~0x02))); /* Turn OFF AWB*/
		}
	}
	CamWriteCmosSensor(0x0000, 0x01);
	CamWriteCmosSensor(0x0100, 0x01);
	CamWriteCmosSensor(0x0101, 0x01);
}

/*************************************************************************
* FUNCTION
*    HM0155_SERIALSetBandingStep
*
* DESCRIPTION
*    This function set base shutter or banding step to the CMOS sensor
*
* PARAMETERS
*    None
*
* RETURNS
*    None
*
* LOCAL AFFECTED
*
*************************************************************************/
static void HM0155_SERIALSetBandingStep(void)
{
    // TODO: set banding step here
    
}

/*************************************************************************
* FUNCTION
*   HM0155_SERIALSetDummy
*
* DESCRIPTION
*   This function set the dummy pixels(Horizontal Blanking) & dummy lines(Vertical Blanking), it can be
*   used to adjust the frame rate or gain more time for back-end process.
*
* PARAMETERS
*   DummyPixel
*   DummyLine
*
* RETURNS
*   None
*
* LOCAL AFFECTED
*
*************************************************************************/
static void HM0155_SERIALSetDummy(kal_uint32 DummyPixel, kal_uint32 DummyLine)
{
    kal_uint32 LineLength, FrameLength;

    if (HM0155_SERIALSensor.PvMode) /* preview size output mode */
    {
        LineLength = DummyPixel + HM0155_SERIAL_PV_PERIOD_PIXEL_NUMS;
        FrameLength = DummyLine + HM0155_SERIAL_PV_PERIOD_LINE_NUMS;
    }
    else
    {
        LineLength = DummyPixel + HM0155_SERIAL_FULL_PERIOD_PIXEL_NUMS;
        FrameLength = DummyLine + HM0155_SERIAL_FULL_PERIOD_LINE_NUMS;
    }

    // TODO: set linelength/framelength or dummy pixel/line and return right value here
    {
        
    }

    /* config banding step or base shutter */
    if (HM0155_SERIALSensor.PvMode) /* preview size output mode */
    {
        HM0155_SERIALSetBandingStep();
    }
}

/*************************************************************************
* FUNCTION
*   HM0155_SERIALSetMinFps
*
* DESCRIPTION
*   This function calculate & set min frame rate
*
* PARAMETERS
*   Fps: min frame rate, base on HM0155_SERIAL_FPS(x)
*
* RETURNS
*   None
*
* LOCAL AFFECTED
*
*************************************************************************/
static void HM0155_SERIALSetMinFps(kal_uint16 Fps)
{
    // TODO: set max exposure time or max AE index here
    
}

/*************************************************************************
* FUNCTION
*   HM0155_SERIALSetMaxFps
*
* DESCRIPTION
*   This function calculate & set max frame rate
*
* PARAMETERS
*   Fps: max frame rate, base on HM0155_SERIAL_FPS(x)
*
* RETURNS
*   None
*
* LOCAL AFFECTED
*
*************************************************************************/
static void HM0155_SERIALSetMaxFps(kal_uint16 Fps)
{
    kal_uint32 LineLength, FrameLength;

    /* get max line length */
    LineLength = HM0155_SERIALSensor.InternalClock * HM0155_SERIAL_FPS(1) / (Fps * HM0155_SERIAL_PV_PERIOD_LINE_NUMS);
    if (LineLength > HM0155_SERIAL_MAX_PV_LINELENGTH) /* overflow check */
    {
        LineLength = HM0155_SERIAL_MAX_PV_LINELENGTH;
    }
    if (LineLength < HM0155_SERIAL_PV_PERIOD_PIXEL_NUMS)
    {
        LineLength = HM0155_SERIAL_PV_PERIOD_PIXEL_NUMS;
    }

    /* get frame height */
    FrameLength = HM0155_SERIALSensor.InternalClock * HM0155_SERIAL_FPS(1) / (Fps * LineLength);
    if (FrameLength > HM0155_SERIAL_MAX_PV_FRAMELENGTH) /* overflow check */
    {
        FrameLength = HM0155_SERIAL_MAX_PV_FRAMELENGTH;
    }
    if (FrameLength < HM0155_SERIAL_PV_PERIOD_LINE_NUMS)
    {
        FrameLength = HM0155_SERIAL_PV_PERIOD_LINE_NUMS;
    }

    /* limit max frame rate to Fps specified */
    HM0155_SERIALSetDummy(LineLength - HM0155_SERIAL_PV_PERIOD_PIXEL_NUMS, FrameLength - HM0155_SERIAL_PV_PERIOD_LINE_NUMS);
}

/*************************************************************************
* FUNCTION
*   HM0155_SERIALSetVideoFps
*
* DESCRIPTION
*   This function calculate & fix frame rate in video mode
*
* PARAMETERS
*   Fps: target frame rate to fixed, base on HM0155_SERIAL_FPS(x)
*
* RETURNS
*   None
*
* LOCAL AFFECTED
*
*************************************************************************/
static void HM0155_SERIALSetVideoFps(kal_uint16 Fps)
{
    /* limit max frame rate */
    HM0155_SERIALSetMaxFps(Fps);

    // TODO: fix, set max exposure time or max AE index here
    {
        
    }
}

/*************************************************************************
* FUNCTION
*   HM0155_SERIALNightMode
*
* DESCRIPTION
*   This function set night mode to sensor.
*
* PARAMETERS
*   Enable
*
* RETURNS
*   None
*
* LOCAL AFFECTED
*
*************************************************************************/
static void HM0155_SERIALNightMode(kal_bool Enable)
{
    // TODO: set night mode here
    
}

/*************************************************************************
* FUNCTION
*   HM0155_SERIALEv
*
* DESCRIPTION
*   Exposure setting.
*
* PARAMETERS
*   In, Out
*
* RETURNS
*   Error code
*
* LOCAL AFFECTED
*
*************************************************************************/
static MM_ERROR_CODE_ENUM HM0155_SERIALEv(P_CAL_FEATURE_CTRL_STRUCT In, P_CAL_FEATURE_CTRL_STRUCT Out)
{
    if (CAL_FEATURE_QUERY_OPERATION == In->FeatureCtrlCode)
    {
        const P_CAL_FEATURE_TYPE_ENUM_STRUCT Exposure = &Out->FeatureInfo.FeatureEnum;

        Out->FeatureType = CAL_FEATURE_TYPE_ENUMERATE;
        Out->FeatureOperationSupport = CAL_FEATURE_SET_OPERATION|CAL_FEATURE_QUERY_OPERATION;
        Out->FeatureModeSupport = CAL_FEATURE_CAMERA_VIDEO_SUPPORT;
        // TODO: add supported EV enum here
        Exposure->IsSupport = KAL_TRUE;
        Exposure->ItemCount = 9;
        Exposure->SupportItem[0] = CAM_EV_NEG_4_3;
        Exposure->SupportItem[1] = CAM_EV_NEG_3_3;
        Exposure->SupportItem[2] = CAM_EV_NEG_2_3;
        Exposure->SupportItem[3] = CAM_EV_NEG_1_3;
        Exposure->SupportItem[4] = CAM_EV_ZERO;
        Exposure->SupportItem[5] = CAM_EV_POS_1_3;
        Exposure->SupportItem[6] = CAM_EV_POS_2_3;
        Exposure->SupportItem[7] = CAM_EV_POS_3_3;
        Exposure->SupportItem[8] = CAM_EV_POS_4_3;
    }
    else if (CAL_FEATURE_SET_OPERATION == In->FeatureCtrlCode)
    {
    	 // TODO: adjust brightness here
        switch (In->FeatureSetValue)
        {
		case CAM_EV_NEG_4_3:							/* EV -2 */
			CamWriteCmosSensor(0x04C0, 0xC0);
			break;
		case CAM_EV_NEG_3_3:							/* EV -1.5 */
			CamWriteCmosSensor(0x04C0, 0xB0);

			break;
		case CAM_EV_NEG_2_3:							/* EV -1 */
			CamWriteCmosSensor(0x04C0, 0xA0);

			break;
		case CAM_EV_NEG_1_3:							/* EV -0.5 */
			CamWriteCmosSensor(0x04C0, 0x90);

			break;
		case CAM_EV_ZERO:								/* EV 0 */
			CamWriteCmosSensor(0x04C0, 0x80);

			break;
		case CAM_EV_POS_1_3:							/* EV +0.5 */
			CamWriteCmosSensor(0x04C0, 0x10);

			break;
		case CAM_EV_POS_2_3:							/* EV +1 */
			CamWriteCmosSensor(0x04C0, 0x20);

			break;
		case CAM_EV_POS_3_3:							/* EV +1.5 */
			CamWriteCmosSensor(0x04C0, 0x30);

			break;
		case CAM_EV_POS_4_3:							/* EV +2 */
			CamWriteCmosSensor(0x04C0, 0x40);

			break;
		default:
	      return MM_ERROR_SENSOR_FEATURE_NOT_SUPPORT;
        }
    }
    return MM_ERROR_NONE;
}

/*************************************************************************
* FUNCTION
*   HM0155_SERIALContrast
*
* DESCRIPTION
*   Contrast setting.
*
* PARAMETERS
*   In, Out
*
* RETURNS
*   Error code
*
* LOCAL AFFECTED
*
*************************************************************************/
static MM_ERROR_CODE_ENUM HM0155_SERIALContrast(P_CAL_FEATURE_CTRL_STRUCT In, P_CAL_FEATURE_CTRL_STRUCT Out)
{
    if (CAL_FEATURE_QUERY_OPERATION == In->FeatureCtrlCode)
    {
        const P_CAL_FEATURE_TYPE_ENUM_STRUCT Contrast = &Out->FeatureInfo.FeatureEnum;

        Out->FeatureType = CAL_FEATURE_TYPE_ENUMERATE;
        Out->FeatureOperationSupport = CAL_FEATURE_SET_OPERATION|CAL_FEATURE_QUERY_OPERATION;
        Out->FeatureModeSupport = CAL_FEATURE_CAMERA_VIDEO_SUPPORT;
        // TODO: add supported contrast enum here
        Contrast->IsSupport = KAL_TRUE;
        Contrast->ItemCount = 3;
        Contrast->SupportItem[0] = CAM_CONTRAST_HIGH;
        Contrast->SupportItem[1] = CAM_CONTRAST_MEDIUM;
        Contrast->SupportItem[2] = CAM_CONTRAST_LOW;
    }
    else if (CAL_FEATURE_SET_OPERATION == In->FeatureCtrlCode)
    {
        // TODO: adjust contrast here
        switch (In->FeatureSetValue)
        {
        case CAM_CONTRAST_HIGH:
            //CamWriteCmosSensor(0xb3, 0x48);
            break;
        case CAM_CONTRAST_MEDIUM:
            //CamWriteCmosSensor(0xb3, 0x40);
            break;
        case CAM_CONTRAST_LOW:
            //CamWriteCmosSensor(0xb3, 0x38);
            break;
        default:
            return MM_ERROR_SENSOR_FEATURE_NOT_SUPPORT;
        }
    }
    return MM_ERROR_NONE;
}

/*************************************************************************
* FUNCTION
*   HM0155_SERIALSaturation
*
* DESCRIPTION
*   Saturation setting.
*
* PARAMETERS
*   In, Out
*
* RETURNS
*   Error code
*
* LOCAL AFFECTED
*
*************************************************************************/
static MM_ERROR_CODE_ENUM HM0155_SERIALSaturation(P_CAL_FEATURE_CTRL_STRUCT In, P_CAL_FEATURE_CTRL_STRUCT Out)
{
    if (CAL_FEATURE_QUERY_OPERATION == In->FeatureCtrlCode)
    {
        const P_CAL_FEATURE_TYPE_ENUM_STRUCT Saturation = &Out->FeatureInfo.FeatureEnum;

        Out->FeatureType = CAL_FEATURE_TYPE_ENUMERATE;
        Out->FeatureOperationSupport = CAL_FEATURE_SET_OPERATION|CAL_FEATURE_QUERY_OPERATION;
        Out->FeatureModeSupport = CAL_FEATURE_CAMERA_VIDEO_SUPPORT;
        // TODO: add supported saturation enum here
        Saturation->IsSupport = KAL_FALSE;
        //Saturation->ItemCount = 3;
        //Saturation->SupportItem[0] = CAM_SATURATION_HIGH;
        //Saturation->SupportItem[1] = CAM_SATURATION_MEDIUM;
        //Saturation->SupportItem[2] = CAM_SATURATION_LOW;
    }
    else if (CAL_FEATURE_SET_OPERATION == In->FeatureCtrlCode)
    {
        // TODO: adjust saturation here
        //switch (In->FeatureSetValue)
        //{
        //case CAM_SATURATION_HIGH:
            /* add setting here */
        //    break;
        //case CAM_SATURATION_MEDIUM:
            /* add setting here */
        //    break;
        //case CAM_SATURATION_LOW:
            /* add setting here */
        //    break;
        //default:
        //    return MM_ERROR_SENSOR_FEATURE_NOT_SUPPORT;
        //}
    }
    return MM_ERROR_NONE;
}

/*************************************************************************
* FUNCTION
*   HM0155_SERIALSharpness
*
* DESCRIPTION
*   Sharpness setting.
*
* PARAMETERS
*   In, Out
*
* RETURNS
*   Error code
*
* LOCAL AFFECTED
*
*************************************************************************/
static MM_ERROR_CODE_ENUM HM0155_SERIALSharpness(P_CAL_FEATURE_CTRL_STRUCT In, P_CAL_FEATURE_CTRL_STRUCT Out)
{
    if (CAL_FEATURE_QUERY_OPERATION == In->FeatureCtrlCode)
    {
        const P_CAL_FEATURE_TYPE_ENUM_STRUCT Sharpness = &Out->FeatureInfo.FeatureEnum;

        Out->FeatureType = CAL_FEATURE_TYPE_ENUMERATE;
        Out->FeatureOperationSupport = CAL_FEATURE_SET_OPERATION|CAL_FEATURE_QUERY_OPERATION;
        Out->FeatureModeSupport = CAL_FEATURE_CAMERA_VIDEO_SUPPORT;
        // TODO: add supported sharpness enum here
        Sharpness->IsSupport = KAL_FALSE;
        //Sharpness->ItemCount = 3;
        //Sharpness->SupportItem[0] = CAM_SHARPNESS_HIGH;
        //Sharpness->SupportItem[1] = CAM_SHARPNESS_MEDIUM;
        //Sharpness->SupportItem[2] = CAM_SHARPNESS_LOW;
    }
    else if (CAL_FEATURE_SET_OPERATION == In->FeatureCtrlCode)
    {
        // TODO: adjust sharpness here
        //switch (In->FeatureSetValue)
        //{
        //case CAM_SHARPNESS_HIGH:
            /* add setting here */
        //    break;
        //case CAM_SHARPNESS_MEDIUM:
            /* add setting here */
        //    break;
        //case CAM_SHARPNESS_LOW:
            /* add setting here */
        //    break;
        //default:
        //    return MM_ERROR_SENSOR_FEATURE_NOT_SUPPORT;
        //}
    }
    return MM_ERROR_NONE;
}

/*************************************************************************
* FUNCTION
*   HM0155_SERIALWb
*
* DESCRIPTION
*   Wb setting.
*
* PARAMETERS
*   In, Out
*
* RETURNS
*   Error code
*
* LOCAL AFFECTED
*
*************************************************************************/
static MM_ERROR_CODE_ENUM HM0155_SERIALWb(P_CAL_FEATURE_CTRL_STRUCT In, P_CAL_FEATURE_CTRL_STRUCT Out)
{
    if (CAL_FEATURE_QUERY_OPERATION == In->FeatureCtrlCode)
    {
        const P_CAL_FEATURE_TYPE_ENUM_STRUCT Wb = &Out->FeatureInfo.FeatureEnum;

        Out->FeatureType = CAL_FEATURE_TYPE_ENUMERATE;
        Out->FeatureOperationSupport = CAL_FEATURE_SET_OPERATION|CAL_FEATURE_QUERY_OPERATION;
        Out->FeatureModeSupport = CAL_FEATURE_CAMERA_VIDEO_SUPPORT;
        // TODO: add supported manual WB enum here
        Wb->IsSupport = KAL_TRUE;
        Wb->ItemCount = 6;
        Wb->SupportItem[0] = CAM_WB_AUTO;
        Wb->SupportItem[1] = CAM_WB_CLOUD;
        Wb->SupportItem[2] = CAM_WB_DAYLIGHT;
        Wb->SupportItem[3] = CAM_WB_INCANDESCENCE;
        Wb->SupportItem[4] = CAM_WB_FLUORESCENT;
        Wb->SupportItem[5] = CAM_WB_TUNGSTEN;
        
        return MM_ERROR_NONE;
    }
    else if (CAL_FEATURE_SET_OPERATION == In->FeatureCtrlCode)
    {
        // TODO: adjust manual WB here
        switch (In->FeatureSetValue)
	{
		case CAM_WB_AUTO:
			HM0155_SERIALAwbEnable(KAL_TRUE);
			break;
		case CAM_WB_CLOUD:
			HM0155_SERIALAwbEnable(KAL_FALSE);
			CamWriteCmosSensor(0x032D,0x70); 
			CamWriteCmosSensor(0x032E,0x01);
			CamWriteCmosSensor(0x0331,0x08);
			CamWriteCmosSensor(0x0332,0x01);
			break;
		case CAM_WB_DAYLIGHT:
			HM0155_SERIALAwbEnable(KAL_FALSE);
			CamWriteCmosSensor(0x032D,0x60); 
			CamWriteCmosSensor(0x032E,0x01);
			CamWriteCmosSensor(0x0331,0x20);
			CamWriteCmosSensor(0x0332,0x01);

			break;
		case CAM_WB_INCANDESCENCE:
			HM0155_SERIALAwbEnable(KAL_FALSE);
			CamWriteCmosSensor(0x032D,0x70); 
			CamWriteCmosSensor(0x032E,0x01);
			CamWriteCmosSensor(0x0331,0x08);
			CamWriteCmosSensor(0x0332,0x01);

			break;
		case CAM_WB_FLUORESCENT:
			HM0155_SERIALAwbEnable(KAL_FALSE);
			CamWriteCmosSensor(0x032D,0x50); 
			CamWriteCmosSensor(0x032E,0x01);
			CamWriteCmosSensor(0x0331,0x30);
			CamWriteCmosSensor(0x0332,0x01);

			break;
		case CAM_WB_TUNGSTEN:
			HM0155_SERIALAwbEnable(KAL_FALSE);
			CamWriteCmosSensor(0x032D,0x10); 
			CamWriteCmosSensor(0x032E,0x01);
			CamWriteCmosSensor(0x0331,0xA0);
			CamWriteCmosSensor(0x0332,0x01);

			break;
	default:
		return MM_ERROR_SENSOR_FEATURE_NOT_SUPPORT;
	}
    }
	CamWriteCmosSensor(0x0000, 0x01);
	CamWriteCmosSensor(0x0100, 0x01);
	CamWriteCmosSensor(0x0101, 0x01);
    return MM_ERROR_NONE;
}

/*************************************************************************
* FUNCTION
*   HM0155_SERIALEffect
*
* DESCRIPTION
*   Effect setting.
*
* PARAMETERS
*   In, Out
*
* RETURNS
*   Error code
*
* LOCAL AFFECTED
*
*************************************************************************/
static MM_ERROR_CODE_ENUM HM0155_SERIALEffect(P_CAL_FEATURE_CTRL_STRUCT In, P_CAL_FEATURE_CTRL_STRUCT Out)
{
    if (CAL_FEATURE_QUERY_OPERATION == In->FeatureCtrlCode)
    {
        const P_CAL_FEATURE_TYPE_ENUM_STRUCT Effect = &Out->FeatureInfo.FeatureEnum;

        Out->FeatureType = CAL_FEATURE_TYPE_ENUMERATE;
        Out->FeatureOperationSupport = CAL_FEATURE_SET_OPERATION|CAL_FEATURE_QUERY_OPERATION;
        Out->FeatureModeSupport = CAL_FEATURE_CAMERA_VIDEO_SUPPORT;
        // TODO: add supported effect enum here
        Effect->IsSupport = KAL_TRUE;
        Effect->ItemCount = 6;
        Effect->SupportItem[0] = CAM_EFFECT_ENC_NORMAL;
        Effect->SupportItem[1] = CAM_EFFECT_ENC_GRAYSCALE;
        Effect->SupportItem[2] = CAM_EFFECT_ENC_SEPIA;
        Effect->SupportItem[3] = CAM_EFFECT_ENC_SEPIAGREEN;
        Effect->SupportItem[4] = CAM_EFFECT_ENC_SEPIABLUE;
        Effect->SupportItem[5] = CAM_EFFECT_ENC_COLORINV;
        
        return MM_ERROR_NONE;
    }
    else if (CAL_FEATURE_SET_OPERATION == In->FeatureCtrlCode)
    {
        // TODO: adjust effect here
        switch (In->FeatureSetValue)
	{
		case CAM_EFFECT_ENC_NORMAL:
			CamWriteCmosSensor(0x0488, 0x10); 
			CamWriteCmosSensor(0x0486, 0x00); 
			CamWriteCmosSensor(0x0487, 0xFF); 
			break;
		case CAM_EFFECT_ENC_GRAYSCALE:
			CamWriteCmosSensor(0x0488, 0x11); 
			CamWriteCmosSensor(0x0486, 0x80); 
			CamWriteCmosSensor(0x0487, 0x80); 

			break;
		case CAM_EFFECT_ENC_SEPIA:
			CamWriteCmosSensor(0x0488, 0x11); 
			CamWriteCmosSensor(0x0486, 0x60); 
			CamWriteCmosSensor(0x0487, 0xA0); 

			break;
		case CAM_EFFECT_ENC_SEPIAGREEN:
			CamWriteCmosSensor(0x0488, 0x11); 
			CamWriteCmosSensor(0x0486, 0x60); 
			CamWriteCmosSensor(0x0487, 0x60); 

			break;
		case CAM_EFFECT_ENC_SEPIABLUE:
			CamWriteCmosSensor(0x0488, 0x11); 
			CamWriteCmosSensor(0x0486, 0xB0); 
			CamWriteCmosSensor(0x0487, 0x60); 

			break;
		case CAM_EFFECT_ENC_COLORINV:
			CamWriteCmosSensor(0x0488, 0x12); 
			CamWriteCmosSensor(0x0486, 0x00); 
			CamWriteCmosSensor(0x0487, 0xFF); 

			break;
		default:
			return MM_ERROR_SENSOR_FEATURE_NOT_SUPPORT;
	}
    }

	CamWriteCmosSensor(0x0000, 0x01);
	CamWriteCmosSensor(0x0100, 0x01);
	CamWriteCmosSensor(0x0101, 0x01);

	return MM_ERROR_NONE;
}

/*************************************************************************
* FUNCTION
*   HM0155_SERIALStillCaptureSize
*
* DESCRIPTION
*   This function get capture size
*
* PARAMETERS
*   In, Out
*
* RETURNS
*   Error code
*
* LOCAL AFFECTED
*
*************************************************************************/
MM_ERROR_CODE_ENUM HM0155_SERIALStillCaptureSize(P_CAL_FEATURE_CTRL_STRUCT In, P_CAL_FEATURE_CTRL_STRUCT Out)
{
    const P_CAL_FEATURE_TYPE_ENUM_STRUCT CapSize = &Out->FeatureInfo.FeatureEnum;

    if (CAL_FEATURE_QUERY_OPERATION == In->FeatureCtrlCode)
    {
        Out->FeatureType = CAL_FEATURE_TYPE_ENUMERATE;
        Out->FeatureOperationSupport = CAL_FEATURE_QUERY_OPERATION;
        Out->FeatureModeSupport = CAL_FEATURE_CAMERA_SUPPORT;
        CapSize->IsSupport = KAL_TRUE;
        // TODO: add supported capture size enum here
  	CapSize->ItemCount = 3;
  	CapSize->SupportItem[0] = CAM_IMAGE_SIZE_WALLPAPER;
  	CapSize->SupportItem[1] = CAM_IMAGE_SIZE_QVGA;
  	CapSize->SupportItem[2] = CAM_IMAGE_SIZE_VGA;
    }
    return MM_ERROR_NONE;
}

/*************************************************************************
* FUNCTION
*   HM0155_SERIALBanding
*
* DESCRIPTION
*   This function get banding setting
*
* PARAMETERS
*   In, Out
*
* RETURNS
*   Error code
*
* LOCAL AFFECTED
*
*************************************************************************/
static MM_ERROR_CODE_ENUM HM0155_SERIALBanding(P_CAL_FEATURE_CTRL_STRUCT In, P_CAL_FEATURE_CTRL_STRUCT Out)
{
    const P_CAL_FEATURE_TYPE_ENUM_STRUCT Banding = &Out->FeatureInfo.FeatureEnum;

    if (CAL_FEATURE_QUERY_OPERATION == In->FeatureCtrlCode)
    {
        Out->FeatureType = CAL_FEATURE_TYPE_ENUMERATE;
        Out->FeatureOperationSupport = CAL_FEATURE_SET_OPERATION|CAL_FEATURE_QUERY_OPERATION;
        Out->FeatureModeSupport = CAL_FEATURE_CAMERA_VIDEO_SUPPORT;
        Banding->IsSupport = KAL_TRUE;
        Banding->ItemCount = 2;
        Banding->SupportItem[0] = CAM_BANDING_50HZ;
        Banding->SupportItem[1] = CAM_BANDING_60HZ;
    }
    else if (CAL_FEATURE_SET_OPERATION == In->FeatureCtrlCode)
    {
        HM0155_SERIALSensor.BandingFreq = (CAM_BANDING_50HZ == In->FeatureSetValue ? HM0155_SERIAL_50HZ : HM0155_SERIAL_60HZ);
        // TODO: set manual banding here
        {
            if (CAM_BANDING_50HZ == In->FeatureSetValue)
            {
			// based on 24M MCLK 
			CamWriteCmosSensor(0x0120, 0x36);	//	50HZ
		
			HM0155_SERIAL_CAM_BANDING_50HZ = KAL_TRUE;
            }
            else
            {

			CamWriteCmosSensor(0x0120, 0x37);	//	60HZ
			HM0155_SERIAL_CAM_BANDING_50HZ = KAL_FALSE;
            }
        }
    }
	CamWriteCmosSensor(0x0000, 0x01);
	CamWriteCmosSensor(0x0100, 0x01);
	CamWriteCmosSensor(0x0101, 0x01);
    return MM_ERROR_NONE;
}


/*************************************************************************
* FUNCTION
*   HM0155_SERIALSceneMode
*
* DESCRIPTION
*   This function get/set scene mode of sensor.
*
* PARAMETERS
*   IsCam: camera scene mode or not
*   In, Out
*
* RETURNS
*   None
*
* LOCAL AFFECTED
*
*************************************************************************/
static MM_ERROR_CODE_ENUM HM0155_SERIALSceneMode(kal_bool IsCam, P_CAL_FEATURE_CTRL_STRUCT In, P_CAL_FEATURE_CTRL_STRUCT Out)
{
    if (CAL_FEATURE_QUERY_OPERATION == In->FeatureCtrlCode)
    {
        const P_CAL_FEATURE_TYPE_ENUM_STRUCT SceneMode = &Out->FeatureInfo.FeatureEnum;

        Out->FeatureType = CAL_FEATURE_TYPE_ENUMERATE;
        Out->FeatureOperationSupport = CAL_FEATURE_SET_OPERATION|CAL_FEATURE_QUERY_OPERATION;
        Out->FeatureModeSupport = CAL_FEATURE_CAMERA_SUPPORT;
        SceneMode->IsSupport = KAL_TRUE;
        SceneMode->ItemCount = 2;
        if (IsCam)
        {
            SceneMode->SupportItem[0] = CAM_AUTO_DSC;
            SceneMode->SupportItem[1] = CAM_NIGHTSCENE;
        }
        else
        {
            SceneMode->SupportItem[0] = CAM_VIDEO_AUTO;
            SceneMode->SupportItem[1] = CAM_VIDEO_NIGHT;
        }
    }
    return MM_ERROR_NONE;
}

/*************************************************************************
* FUNCTION
*	HM0155_SERIALGammaSelect
*
* DESCRIPTION
*	This function is served for FAE to select the appropriate GAMMA curve.
*
* PARAMETERS
*	None
*
* RETURNS
*	None
*
* GLOBALS AFFECTED
*
*************************************************************************/
static void HM0155_SERIALGammaSelect(kal_uint32 GammaLvl)
{

}

/*************************************************************************
* FUNCTION
*   HM0155_SERIALInitialSetting
*
* DESCRIPTION
*   This function initialize the registers of CMOS sensor
*   IMPORTANT NOTICE:
*     the output format should be YUV422, order: YUYV
*     data output should be at pclk falling edge
*     VSYNC should be low active
*     HSYNC should be hight active
*
* PARAMETERS
*   None
*
* RETURNS
*   None
*
* LOCAL AFFECTED
*
*************************************************************************/
static void HM0155_SERIALInitialSetting(void)
{
		CamWriteCmosSensor(0x0022,0x00);
		CamWriteCmosSensor(0x0011,0x02);
		CamWriteCmosSensor(0x0023,0xFF);
		CamWriteCmosSensor(0x0027,0x30);
		CamWriteCmosSensor(0x002A,0x90);
		CamWriteCmosSensor(0x002B,0x08);
		CamWriteCmosSensor(0x0041,0x1C);
		CamWriteCmosSensor(0x0044,0x02);
		CamWriteCmosSensor(0x0080,0x88);
		CamWriteCmosSensor(0x05E4,0x0C);
		CamWriteCmosSensor(0x05E5,0x00);
		CamWriteCmosSensor(0x05E6,0xF0);
		CamWriteCmosSensor(0x05E7,0x00);
		CamWriteCmosSensor(0x05E8,0x04);
		CamWriteCmosSensor(0x05E9,0x00);
		CamWriteCmosSensor(0x05EA,0x40);
		CamWriteCmosSensor(0x05EB,0x01);
		CamWriteCmosSensor(0x0082,0xAC);
		CamWriteCmosSensor(0x0083,0xFE);
		CamWriteCmosSensor(0x0085,0x5F);
		CamWriteCmosSensor(0x0088,0xC3);
		CamWriteCmosSensor(0x008E,0x40);
		CamWriteCmosSensor(0x008F,0x7F);
		CamWriteCmosSensor(0x011F,0x81);
		CamWriteCmosSensor(0x0120,0x36);
		CamWriteCmosSensor(0x0121,0x81);
		CamWriteCmosSensor(0x0122,0x6F);
		CamWriteCmosSensor(0x0125,0xD1);
		CamWriteCmosSensor(0x0126,0x41);
		CamWriteCmosSensor(0x0138,0x08);
		CamWriteCmosSensor(0x0139,0x0A);
		CamWriteCmosSensor(0x013A,0x08);
		CamWriteCmosSensor(0x013B,0x0C);
		CamWriteCmosSensor(0x015A,0x00);
		CamWriteCmosSensor(0x015B,0x30);
		CamWriteCmosSensor(0x015C,0x18);
		CamWriteCmosSensor(0x015D,0x01);
		CamWriteCmosSensor(0x015F,0x30);
		CamWriteCmosSensor(0x0167,0x0E);
		CamWriteCmosSensor(0x0168,0x03);
		CamWriteCmosSensor(0x01E4,0x0C);
		CamWriteCmosSensor(0x01EF,0x66);
		CamWriteCmosSensor(0x0220,0x00);
		CamWriteCmosSensor(0x0221,0xB4);
		CamWriteCmosSensor(0x0222,0x40);
		CamWriteCmosSensor(0x0223,0x80);
		CamWriteCmosSensor(0x0224,0x8C);
		CamWriteCmosSensor(0x0225,0x00);
		CamWriteCmosSensor(0x0226,0x80);
		CamWriteCmosSensor(0x0227,0x8C);
		CamWriteCmosSensor(0x0229,0x80);
		CamWriteCmosSensor(0x022A,0x80);
		CamWriteCmosSensor(0x022B,0x00);
		CamWriteCmosSensor(0x022C,0x80);
		CamWriteCmosSensor(0x022D,0x0F);
		CamWriteCmosSensor(0x022E,0x0B);
		CamWriteCmosSensor(0x022F,0x0F);
		CamWriteCmosSensor(0x0230,0x10);
		CamWriteCmosSensor(0x0231,0x0F);
		CamWriteCmosSensor(0x0233,0x0F);
		CamWriteCmosSensor(0x0234,0x10);
		CamWriteCmosSensor(0x0235,0xFF);
		CamWriteCmosSensor(0x0236,0xFF);
		CamWriteCmosSensor(0x0237,0x7A);
		CamWriteCmosSensor(0x0238,0x00);
		CamWriteCmosSensor(0x023B,0xFF);
		CamWriteCmosSensor(0x023C,0xFF);
		CamWriteCmosSensor(0x023D,0xFF);
		CamWriteCmosSensor(0x023E,0xFF);
		CamWriteCmosSensor(0x023F,0xB2);
		CamWriteCmosSensor(0x0240,0x00);
		CamWriteCmosSensor(0x0243,0xFF);
		CamWriteCmosSensor(0x0244,0xFF);
		CamWriteCmosSensor(0x0251,0x0B);
		CamWriteCmosSensor(0x0252,0xFF);
		CamWriteCmosSensor(0x0280,0x06);
		CamWriteCmosSensor(0x0282,0x0A);
		CamWriteCmosSensor(0x0284,0x20);
		CamWriteCmosSensor(0x0286,0x4A);
		CamWriteCmosSensor(0x0288,0x56);
		CamWriteCmosSensor(0x028A,0x61);
		CamWriteCmosSensor(0x028C,0x6C);
		CamWriteCmosSensor(0x028E,0x75);
		CamWriteCmosSensor(0x0290,0x7E);
		CamWriteCmosSensor(0x0292,0x86);
		CamWriteCmosSensor(0x0294,0x95);
		CamWriteCmosSensor(0x0296,0xA0);
		CamWriteCmosSensor(0x0298,0xB1);
		CamWriteCmosSensor(0x029A,0xC2);
		CamWriteCmosSensor(0x029C,0xD7);
		CamWriteCmosSensor(0x029E,0x35);
		CamWriteCmosSensor(0x02C0,0x59);
		CamWriteCmosSensor(0x02C1,0x00);
		CamWriteCmosSensor(0x02C2,0xA9);
		CamWriteCmosSensor(0x02C3,0x00);
		CamWriteCmosSensor(0x02C4,0x08);
		CamWriteCmosSensor(0x02C5,0x00);
		CamWriteCmosSensor(0x02C6,0xC8);
		CamWriteCmosSensor(0x02C7,0x07);
		CamWriteCmosSensor(0x02C8,0x66);
		CamWriteCmosSensor(0x02C9,0x07);
		CamWriteCmosSensor(0x02CA,0xD4);
		CamWriteCmosSensor(0x02CB,0x00);
		CamWriteCmosSensor(0x02CC,0xDE);
		CamWriteCmosSensor(0x02CD,0x00);
		CamWriteCmosSensor(0x02CE,0x3E);
		CamWriteCmosSensor(0x02CF,0x07);
		CamWriteCmosSensor(0x02D0,0xEE);
		CamWriteCmosSensor(0x02D1,0x07);
		CamWriteCmosSensor(0x0355,0x4D);
		CamWriteCmosSensor(0x0356,0x9F);
		CamWriteCmosSensor(0x0357,0xEE);
		CamWriteCmosSensor(0x0360,0x04);
		CamWriteCmosSensor(0x0361,0xF0);
		CamWriteCmosSensor(0x0362,0xE0);
		CamWriteCmosSensor(0x0364,0x40);
		CamWriteCmosSensor(0x0381,0x4E);
		CamWriteCmosSensor(0x0382,0x3E);
		CamWriteCmosSensor(0x038A,0x60);
		CamWriteCmosSensor(0x038B,0x0A);
		CamWriteCmosSensor(0x038C,0xD1);
		CamWriteCmosSensor(0x038E,0x46);
		CamWriteCmosSensor(0x038F,0x04);
		CamWriteCmosSensor(0x0390,0x20);
		CamWriteCmosSensor(0x0391,0x01);
		CamWriteCmosSensor(0x0392,0x01);
		CamWriteCmosSensor(0x0393,0xC0);
		CamWriteCmosSensor(0x0394,0x40);
		CamWriteCmosSensor(0x0395,0x21);
		CamWriteCmosSensor(0x03BB,0xFF);
		CamWriteCmosSensor(0x03BC,0xFF);
		CamWriteCmosSensor(0x03BE,0x15);
		CamWriteCmosSensor(0x03BF,0x2E);
		CamWriteCmosSensor(0x03C0,0x2E);
		CamWriteCmosSensor(0x0420,0x00);
		CamWriteCmosSensor(0x0421,0x84);
		CamWriteCmosSensor(0x0422,0x84);
		CamWriteCmosSensor(0x0423,0x84);
		CamWriteCmosSensor(0x0432,0x88);
		CamWriteCmosSensor(0x0465,0x02);
		CamWriteCmosSensor(0x0466,0x04);
		CamWriteCmosSensor(0x047A,0x00);
		CamWriteCmosSensor(0x0480,0x50);
		CamWriteCmosSensor(0x04B0,0x40);
		CamWriteCmosSensor(0x0540,0x00);
		CamWriteCmosSensor(0x0541,0x51);
		CamWriteCmosSensor(0x0542,0x00);
		CamWriteCmosSensor(0x0543,0x61);
		CamWriteCmosSensor(0xFF00,0x00);
		CamWriteCmosSensor(0x0000,0x01);
		CamWriteCmosSensor(0x0100,0x01);
		CamWriteCmosSensor(0x0101,0x01);
		CamWriteCmosSensor(0x0005,0x01);

}

/*************************************************************************
* FUNCTION
*	HM0155_SERIAL_Write_More_Registers
*
* DESCRIPTION
*	This function is served for FAE to modify the necessary Init Regs. Do not modify the regs
*     in init_HM0155_SERIAL() directly.
*
* PARAMETERS
*	None
*
* RETURNS
*	None
*
* GLOBALS AFFECTED
*
*************************************************************************/
void HM0155_SERIALMoreSetting(void)
{
//-----------------Updated By Mormo 2011/05/11 Start-------------//
	//CamWriteCmosSensor(0xfe, 0x00);
	//CamWriteCmosSensor(0x60, 0xe7); 
	//CamWriteCmosSensor(0x6b, 0x55); 	
//-----------------Updated By Mormo 2011/05/11 End-------------//


//-----------------Updated By Mormo 2011/05/19 Start-------------//
	//CamWriteCmosSensor(0xfe, 0x00);
	// daemon add start 
	//CamWriteCmosSensor(0x2e, 0xc0);  // open in_buf 
	//CamWriteCmosSensor(0x46, 0x80); 
	//CamWriteCmosSensor(0x48, 0x02); //Crop Start X
	//CamWriteCmosSensor(0x49, 0x01); 
	//CamWriteCmosSensor(0x4a, 0x40); 
	//CamWriteCmosSensor(0x4b, 0x00); 
	//CamWriteCmosSensor(0x4c, 0xf0); 
	// daemon add end 
//-----------------Updated By Mormo 2011/05/19 End-------------//

//-----------------Updated By Mormo 2011/05/31 Start-------------//
	//CamWriteCmosSensor(0xfe, 0x00);
	//CamWriteCmosSensor(0x2e, 0x40);  // close in_buf 
	//CamWriteCmosSensor(0x08, 0x04);
	//CamWriteCmosSensor(0x48, 0x00); //Crop Start X 0x00
//-----------------Updated By Mormo 2011/05/31 End-------------//
}

/*************************************************************************
* FUNCTION
*   HM0155_SERIALPvSetting
*
* DESCRIPTION
*   This function apply the preview mode setting, normal the preview size is 1/4 of full size.
*   Ex. 2M (1600 x 1200)
*   Preview: 800 x 600 (use sub-sample or binning to acheive it)
*   Full Size: 1600 x 1200 (output every effective pixels.)
*
* PARAMETERS
*   None
*
* RETURNS
*   None
*
* LOCAL AFFECTED
*
*************************************************************************/
static void HM0155_SERIALPvSetting(void)
{
    // TODO: add preview setting here
    
}

/*************************************************************************
* FUNCTION
*   HM0155_SERIALCapSetting
*
* DESCRIPTION
*   This function config capture settting to sensor
*
* PARAMETERS
*   None
*
* RETURNS
*   None
*
* LOCAL AFFECTED
*
*************************************************************************/
static void HM0155_SERIALCapSetting(void)
{
    // TODO: add capture setting here
    
}

/*************************************************************************
* FUNCTION
*   HM0155_SERIALGetSensorInfo
*
* DESCRIPTION
*   This function set sensor infomation
*
* PARAMETERS
*   Info
*
* RETURNS
*   None
*
* LOCAL AFFECTED
*
*************************************************************************/
static void HM0155_SERIALGetSensorInfo(P_IMAGE_SENSOR_GET_SENSOR_INFO_STRUCT Info)
{
    Info->SensorId = HM0155_SERIAL_SENSOR_ID;
    Info->SensorIf = IMAGE_SENSOR_IF_SERIAL;

    /* data format */
    Info->PreviewNormalDataFormat = IMAGE_SENSOR_DATA_OUT_FORMAT_YUYV;
    Info->PreviewHMirrorDataFormat = IMAGE_SENSOR_DATA_OUT_FORMAT_YUYV;
    Info->PreviewVMirrorDataFormat = IMAGE_SENSOR_DATA_OUT_FORMAT_YUYV;
    Info->PreviewHVMirrorDataFormat = IMAGE_SENSOR_DATA_OUT_FORMAT_YUYV;
    Info->CaptureDataFormat = IMAGE_SENSOR_DATA_OUT_FORMAT_YUYV;

    Info->PreviewMclkFreq = 24000000;
    Info->CaptureMclkFreq = 24000000;
    Info->VideoMclkFreq = 24000000;
	
    Info->PreviewWidth = HM0155_SERIAL_IMAGE_SENSOR_PV_WIDTH;
    Info->PreviewHeight = HM0155_SERIAL_IMAGE_SENSOR_PV_HEIGHT;
    Info->FullWidth = HM0155_SERIAL_IMAGE_SENSOR_FULL_WIDTH;
    Info->FullHeight = HM0155_SERIAL_IMAGE_SENSOR_FULL_HEIGHT;
    Info->SensorAfSupport = KAL_FALSE;
    Info->SensorFlashSupport = KAL_FALSE;
    Info->PixelClkPolarity = POLARITY_LOW;

    /* HSYNC/VSYNC polarity */
    Info->HsyncPolarity = POLARITY_LOW; /* actually high active when set POLARITY_LOW */
    Info->VsyncPolarity = POLARITY_LOW;

    // TODO: set isp pclk invert here if needed
    /* isp pclk invert switch */
    Info->PixelClkInv = KAL_FALSE;
}


/*************************************************************************
* FUNCTION
*    HM0155SerialSensorFeatureCtrl
*
* DESCRIPTION
*    This function set sensor feature mode
*
* PARAMETERS
*    id: scenario id
*
* RETURNS
*    error code
*
* LOCAL AFFECTED
*
*************************************************************************/
MM_ERROR_CODE_ENUM HM0155_SERIALGetSerialSensorInfo(P_SERIAL_SENSOR_INFO_IN_STRUCT In,P_SERIAL_SENSOR_INFO_OUT_STRUCT Out)
{
	Out->para_1 = KAL_TRUE; 								/* SCK clock inverse */
	Out->para_2 = 4;	
		
	if (In->ScenarioId == CAL_SCENARIO_CAMERA_STILL_CAPTURE)
	{
		Out->para_3 = HM0155_SERIAL_IMAGE_SENSOR_FULL_WIDTH; 	/* Sensor capture data valid width */
		Out->para_4 = HM0155_SERIAL_IMAGE_SENSOR_FULL_HEIGHT;	/* Sensor capture data valid height */
	}
	else
	{
		Out->para_3 = HM0155_SERIAL_IMAGE_SENSOR_PV_WIDTH; 	/* Sensor preview data valid width */
		Out->para_4 = HM0155_SERIAL_IMAGE_SENSOR_PV_HEIGHT; 	/* Sensor preview data valid height */
	}

	Out->para_5  = 1;//lane number
	Out->para_6  = KAL_FALSE;//DDR supprt
	Out->para_7  = KAL_FALSE;//CRC support


	return MM_ERROR_NONE; 
}


/*************************************************************************
* FUNCTION
*   HM0155_SERIALPowerOn
*
* DESCRIPTION
*   This function apply the power on sequence and read the sensor ID to check if the I2C
*  communication can work or not.
*
* PARAMETERS
*   None
*
* RETURNS
*   Sensor id
*
* LOCAL AFFECTED
*
*************************************************************************/
static kal_uint32 HM0155_SERIALPowerOn(void)
{
    static kal_uint8 HM0155_SERIALI2cAddr[] = {HM0155_SERIAL_WRITE_ID_0,
#if (HM0155_SERIAL_WRITE_ID_1 != 0xFF)
    HM0155_SERIAL_WRITE_ID_1,
#endif
#if (HM0155_SERIAL_WRITE_ID_2 != 0xFF)
    HM0155_SERIAL_WRITE_ID_2,
#endif
#if (HM0155_SERIAL_WRITE_ID_3 != 0xFF)
    HM0155_SERIAL_WRITE_ID_3,
#endif
    };
    kal_uint32 SensorId;
    kal_uint8 i;

    CisModulePowerOn(HM0155_SERIALSensor.SensorIdx, KAL_TRUE);
    CameraSccbOpen(CAMERA_SCCB_SENSOR, HM0155_SERIAL_WRITE_ID_0,
    HM0155_SERIAL_I2C_ADDR_BITS, HM0155_SERIAL_I2C_DATA_BITS, HM0155_SERIAL_HW_I2C_SPEED);
    /* add under line if sensor I2C do not support repeat start */
    //CameraSccbDisWR(CAMERA_SCCB_SENSOR);
    kal_sleep_task(2);
    // TODO: add hardware reset  by spec here
    {
    	//HM0155_SERIAL_SET_PDN_LOW;
  	//kal_sleep_task(1);

	HM0155_SERIAL_SET_PDN_HIGH;
	kal_sleep_task(1);
	HM0155_SERIAL_SET_PDN_LOW;
	kal_sleep_task(1);

	//kal_sleep_task(1);
    }

     //for SPI
//    GPIO_ModeSetup(52, 2);
//    GPIO_ModeSetup(64, 2);
	
    for (i = 0; i < sizeof(HM0155_SERIALI2cAddr) / sizeof(HM0155_SERIALI2cAddr[0]); i++)
    {
        CameraSccbSetAddr(CAMERA_SCCB_SENSOR, HM0155_SERIALI2cAddr[i]);

        // TODO: read sensor id here
        {
	     kal_sleep_task(1);
		 SensorId = (CamReadCmosSensor(0x0001) << 8) | CamReadCmosSensor(0x0002);
        }
		kal_prompt_trace(MOD_ENG,"HM0155 SensorId %x",SensorId);
        if (HM0155_SERIAL_SENSOR_ID == SensorId)
        {
            kal_uint8 Temp;

            /* swap the correct i2c address to first one, it will speed up next time read sensor ID */
            Temp = HM0155_SERIALI2cAddr[0];
            HM0155_SERIALI2cAddr[0] = HM0155_SERIALI2cAddr[i];
            HM0155_SERIALI2cAddr[i] = Temp;
            break;
        }
    }
    HM0155_SERIAL_TRACE("SENSOR ID: %x", SensorId);
    return SensorId;
}

/*************************************************************************
* FUNCTION
*   HM0155_SERIALPowerDown
*
* DESCRIPTION
*   This function power down the cmos sensor
*   IMPORTANT NOTICE:
*     data[7:0]/HSYNC/VSYNC/PCLK pin should be in High-Z state after executed this function
*
* PARAMETERS
*   None
*
* RETURNS
*   None
*
* LOCAL AFFECTED
*
*************************************************************************/
static void HM0155_SERIALPowerDown(void)
{
    // TODO: power down sensor by spec here
   
	//CamWriteCmosSensor(0xfc, 0x01);
	//CamWriteCmosSensor(0xf0, 0x00);
   
	HM0155_SERIAL_SET_PDN_LOW;
	kal_sleep_task(1);
	HM0155_SERIAL_SET_PDN_HIGH;
}

/*************************************************************************
* FUNCTION
*   HM0155_SERIALPreview
*
* DESCRIPTION
*   This function is the most important functions of (Init, Preview & Capture). 
*   1. Apply preview setting, make sensor output preview resolution, e.g. 800x600 for 2M sensor.
*   2. Record video resolution, and set mode based on the isp operation mode.
*   3. Configure the grab window.
*
* PARAMETERS
*   Id, In, Out
*
* RETURNS
*   None
*
* LOCAL AFFECTED
*
*************************************************************************/
static void HM0155_SERIALPreview(CAL_SCENARIO_ENUM Id, P_IMAGE_SENSOR_SCENARIO_PARA_IN_STRUCT In, P_IMAGE_SENSOR_SCENARIO_PARA_OUT_STRUCT Out)
{
    HM0155_SERIALSensor.BandingFreq = (CAM_BANDING_50HZ == In->BandingFreq ? HM0155_SERIAL_50HZ : HM0155_SERIAL_60HZ);

    /* change to preview size output */
    HM0155_SERIALSensor.PvMode = KAL_TRUE;
    HM0155_SERIALPvSetting();
    //HM0155_SERIALSetClock(HM0155_SERIAL_PV_INTERNAL_CLK);

    /* set preview frame rate range */
	kal_prompt_trace(MOD_ENG,"HM0155_SERIALPreview");
    switch (Id)
    {
    case CAL_SCENARIO_VIDEO:
        //HM0155_SERIALSetVideoFps(In->MaxVideoFrameRate);
        break;
    default:
        //HM0155_SERIALSetMaxFps(HM0155_SERIAL_FPS(30));
        //HM0155_SERIALSetMinFps(In->NightMode ? HM0155_SERIAL_FPS(5) : HM0155_SERIAL_FPS(10));
	if(In->NightMode)
	{
		//CamWriteCmosSensor(0xfe, 0x01);
		//CamWriteCmosSensor(0x4c, 0x30);	//level_0   
		//CamWriteCmosSensor(0xfe, 0x00);
	}
	else
	{
		//CamWriteCmosSensor(0xfe, 0x01);
		//CamWriteCmosSensor(0x4c, 0x10);	//level_0   
		//CamWriteCmosSensor(0xfe, 0x00);
	}
        /* roll back shutter&gain from capture state */
        if (HM0155_SERIALSensor.CapState)
        {
            HM0155_SERIALWriteShutter(HM0155_SERIALSensor.Shutter);
            HM0155_SERIALWriteGain(HM0155_SERIALSensor.Gain);
        }
    }

    /* misc setting */
    HM0155_SERIALSetMirror(In->ImageMirror);
    HM0155_SERIALNightMode(In->NightMode);

    /* change to preview state */
    HM0155_SERIALSensor.CapState = KAL_FALSE;

    /* enable ae/awb */
    HM0155_SERIALAeEnable(KAL_TRUE);
    HM0155_SERIALAwbEnable(KAL_TRUE);

    /* set grab window */
    Out->WaitStableFrameNum = 0;
    Out->GrabStartX = HM0155_SERIAL_PV_GRAB_START_X;
    Out->GrabStartY = HM0155_SERIAL_PV_GRAB_START_Y;
    Out->ExposureWindowWidth = HM0155_SERIAL_PV_GRAB_WIDTH;
    Out->ExposureWindowHeight = HM0155_SERIAL_PV_GRAB_HEIGHT;
}

/*************************************************************************
* FUNCTION
*   HM0155_SERIALCapture
*
* DESCRIPTION
*   This function is the most important functions of (Init, Preview & Capture). 
*   1. Apply capture setting when capture size greatter then preview size, make sensor output 
*     full size, e.g. 1600x1200 for 2M sensor.
*   2. Increase the dummy pixels or derease pixel clock based on the digital zoom factor and
*    interpolation times.
*   3. Re-Calculate the shutter and sensor gain, to make the exposure value is same with preview
*   4. Configure the grab window based on sensor output.
*
* PARAMETERS
*   Id, In, Out
*
* RETURNS
*   None
*
* LOCAL AFFECTED
*
*************************************************************************/
static void HM0155_SERIALCapture(CAL_SCENARIO_ENUM Id, P_IMAGE_SENSOR_SCENARIO_PARA_IN_STRUCT In, P_IMAGE_SENSOR_SCENARIO_PARA_OUT_STRUCT Out)
{
    kal_uint32 PvClk, PvLineLength, CapShutter, CapLineLength, DummyPixel = 0;

    /* back up preview clock/linelength/shutter */
    PvClk = HM0155_SERIALSensor.InternalClock;
    PvLineLength = HM0155_SERIALSensor.LineLength;
    HM0155_SERIALSensor.Shutter = HM0155_SERIALReadShutter();
    //HM0155_SERIALSensor.Gain = HM0155_SERIALReadGain();

    /* change to capture state */
    HM0155_SERIALSensor.CapState = KAL_TRUE;
    if (In->ImageTargetWidth <= HM0155_SERIAL_IMAGE_SENSOR_PV_WIDTH && In->ImageTargetHeight <= HM0155_SERIAL_IMAGE_SENSOR_PV_HEIGHT)
    {
        // TODO: add dummy pixel or reduce pclk until capture success
        {
#if (defined(DRV_ISP_YUV_BURST_MODE_SUPPORT) || defined(DRV_ISP_6276_SERIES)) /* MT6253/76 */
            /* no need reduce frame rate */
#elif (defined(DRV_ISP_MT6236_HW_SUPPORT)) /* MT6236 */
            if (In->ZoomFactor > 400) /* (4, 8]x zoom */
            {
                DummyPixel = 0;
                /* please reduce pclk if dummy pixel overflow */
                /* HM0155_SERIALSetClock(~); */
            }
            else if (In->ZoomFactor > 200) /* (2, 4]x zoom */
            {
                DummyPixel = 0;
                /* please reduce pclk if dummy pixel overflow */
                /* HM0155_SERIALSetClock(~); */
            }
            else if (In->ZoomFactor > 100) /* (1, 2]x zoom */
            {
                DummyPixel = 0;
                /* please reduce pclk if dummy pixel overflow */
                /* HM0155_SERIALSetClock(~); */
            }
#elif (defined(DRV_ISP_6238_SERIES))
            if (In->ZoomFactor > 400) /* (4, 8]x zoom */
            {
                DummyPixel = 0;
                /* please reduce pclk if dummy pixel overflow */
                /* HM0155_SERIALSetClock(~); */
            }
            else if (In->ZoomFactor > 200) /* (2, 4]x zoom */
            {
                DummyPixel = 0;
                /* please reduce pclk if dummy pixel overflow */
                /* HM0155_SERIALSetClock(~); */
            }
            else if (In->ZoomFactor > 100) /* (1, 2]x zoom */
            {
                DummyPixel = 0;
                /* please reduce pclk if dummy pixel overflow */
                /* HM0155_SERIALSetClock(~); */
            }
#elif (defined(DRV_ISP_6235_SERIES)) /* MT6235 */
            if (In->ZoomFactor > 400) /* (4, 8]x zoom */
            {
                DummyPixel = 0;
                /* please reduce pclk if dummy pixel overflow */
                /* HM0155_SERIALSetClock(~); */
            }
            else if (In->ZoomFactor > 200) /* (2, 4]x zoom */
            {
                DummyPixel = 0;
                /* please reduce pclk if dummy pixel overflow */
                /* HM0155_SERIALSetClock(~); */
            }
            else if (In->ZoomFactor > 100) /* (1, 2]x zoom */
            {
                DummyPixel = 0;
                /* please reduce pclk if dummy pixel overflow */
                /* HM0155_SERIALSetClock(~); */
            }
#else
#error not verify yet
#endif
        }

        if (DummyPixel)
        {
            /* disable ae/awb */
            HM0155_SERIALAeEnable(KAL_FALSE);
            HM0155_SERIALAwbEnable(KAL_FALSE);

	     #if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
            #endif

            Out->WaitStableFrameNum = HM0155_SERIAL_CAPTURE_DELAY_FRAME;
        }
        else
        {
            Out->WaitStableFrameNum = 0;
        }

        /* set grab window */
        Out->GrabStartX = HM0155_SERIAL_PV_GRAB_START_X;
        Out->GrabStartY = HM0155_SERIAL_PV_GRAB_START_Y;
        Out->ExposureWindowWidth = HM0155_SERIAL_PV_GRAB_WIDTH;
        Out->ExposureWindowHeight = HM0155_SERIAL_PV_GRAB_HEIGHT;
    }
    else
    {
        /* disable ae/awb */
        HM0155_SERIALAeEnable(KAL_FALSE);
        HM0155_SERIALAwbEnable(KAL_FALSE);

        /* change to full size output */
        HM0155_SERIALSensor.PvMode = KAL_FALSE;
        //HM0155_SERIALCapSetting();
        //HM0155_SERIALSetClock(HM0155_SERIAL_CAP_INTERNAL_CLK);

        // TODO: add dummy pixel or reduce pclk until capture success
        {
#if (defined(DRV_ISP_YUV_BURST_MODE_SUPPORT) || defined(DRV_ISP_6276_SERIES)) /* MT6253/76 */
            /* no need reduce frame rate */
#elif (defined(DRV_ISP_MT6236_HW_SUPPORT)) /* MT6236 */
            if (In->ZoomFactor > 400) /* (4, 8]x zoom */
            {
                DummyPixel = 0;
                /* please reduce pclk if dummy pixel overflow */
                /* HM0155_SERIALSetClock(~); */
            }
            else if (In->ZoomFactor > 200) /* (2, 4]x zoom */
            {
                DummyPixel = 0;
                /* please reduce pclk if dummy pixel overflow */
                /* HM0155_SERIALSetClock(~); */
            }
            else if (In->ZoomFactor > 100) /* (1, 2]x zoom */
            {
                DummyPixel = 0;
                /* please reduce pclk if dummy pixel overflow */
                /* HM0155_SERIALSetClock(~); */
            }
#elif (defined(DRV_ISP_6238_SERIES))
            if (In->ZoomFactor > 400) /* (4, 8]x zoom */
            {
                DummyPixel = 0;
                /* please reduce pclk if dummy pixel overflow */
                /* HM0155_SERIALSetClock(~); */
            }
            else if (In->ZoomFactor > 200) /* (2, 4]x zoom */
            {
                DummyPixel = 0;
                /* please reduce pclk if dummy pixel overflow */
                /* HM0155_SERIALSetClock(~); */
            }
            else if (In->ZoomFactor > 100) /* (1, 2]x zoom */
            {
                DummyPixel = 0;
                /* please reduce pclk if dummy pixel overflow */
                /* HM0155_SERIALSetClock(~); */
            }
#elif (defined(DRV_ISP_6235_SERIES)) /* MT6235 */
            if (In->ZoomFactor > 400) /* (4, 8]x zoom */
            {
                DummyPixel = 0;
                /* please reduce pclk if dummy pixel overflow */
                /* HM0155_SERIALSetClock(~); */
            }
            else if (In->ZoomFactor > 200) /* (2, 4]x zoom */
            {
                DummyPixel = 0;
                /* please reduce pclk if dummy pixel overflow */
                /* HM0155_SERIALSetClock(~); */
            }
            else if (In->ZoomFactor > 100) /* (1, 2]x zoom */
            {
                DummyPixel = 0;
                /* please reduce pclk if dummy pixel overflow */
                /* HM0155_SERIALSetClock(~); */
            }
#else
#error not verify yet
#endif
        }

	 #if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
	 #endif
	 
	 /* set grab window */
        Out->WaitStableFrameNum = HM0155_SERIAL_CAPTURE_DELAY_FRAME;
        Out->GrabStartX = HM0155_SERIAL_FULL_GRAB_START_X;
        Out->GrabStartY = HM0155_SERIAL_FULL_GRAB_START_Y;
        Out->ExposureWindowWidth = HM0155_SERIAL_FULL_GRAB_WIDTH;
        Out->ExposureWindowHeight = HM0155_SERIAL_FULL_GRAB_HEIGHT;
    }
}

/*************************************************************************
* FUNCTION
*   HM0155_SERIALDetectSensorId
*
* DESCRIPTION
*   This function detect sensor id
*
* PARAMETERS
*   None
*
* RETURNS
*   Sensor id
*
* LOCAL AFFECTED
*
*************************************************************************/
static kal_uint32 HM0155_SERIALDetectSensorId(void)
{
    MM_ERROR_CODE_ENUM HM0155_SERIALSensorClose(void);
    kal_uint32 SensorId;
    IMAGE_SENSOR_INDEX_ENUM InvIdx;
    kal_int8 i, j;

    switch (HM0155_SERIALSensor.SensorIdx)
    {
    case IMAGE_SENSOR_MAIN:
    case IMAGE_SENSOR_BAK1:
        InvIdx = IMAGE_SENSOR_SUB;
        break;
    default:
        InvIdx = IMAGE_SENSOR_MAIN;
        break;
    }
    for (i = 1; i >= 0; i--)
    {
        for (j = 1; j >= 0; j--)
        {
            //CamRstPinCtrl(InvIdx, i);
           // CamPdnPinCtrl(InvIdx, j);
            SensorId = HM0155_SERIALPowerOn();
            HM0155_SERIALSensorClose();
            if (HM0155_SERIAL_SENSOR_ID == SensorId)
            {
                return HM0155_SERIAL_SENSOR_ID;
            }
        }
    }
    return MM_ERROR_SENSOR_READ_ID_FAIL;
}

/*************************************************************************
* FUNCTION
*   HM0155_SERIALInitOperationPara
*
* DESCRIPTION
*   This function set sensor operation para
*
* PARAMETERS
*   Para
*
* RETURNS
*   None
*
* LOCAL AFFECTED
*
*************************************************************************/
static void HM0155_SERIALInitOperationPara(P_IMAGE_SENSOR_GET_INIT_OPERATION_PARA_STRUCT Para)
{
    Para->CaptureDelayFrame = 0; /* use WaitStableFrameNum instead of this */
    Para->PreviewDelayFrame = HM0155_SERIAL_PREVIEW_DELAY_FRAME;
    Para->PreviewDisplayWaitFrame = HM0155_SERIAL_FIRST_PREVIEW_DELAY_FRAME;
}

/*************************************************************************
* FUNCTION
*   HM0155_SERIALSensorOpen
*
* DESCRIPTION
*   This function read sensor id and init sensor
*
* PARAMETERS
*   None
*
* RETURNS
*   Error code
*
* LOCAL AFFECTED
*
*************************************************************************/
static MM_ERROR_CODE_ENUM HM0155_SERIALSensorOpen(void)
{
    if (HM0155_SERIALPowerOn() != HM0155_SERIAL_SENSOR_ID)
    {
        return MM_ERROR_SENSOR_READ_ID_FAIL;
    }
#ifdef HM0155_SERIAL_LOAD_FROM_T_FLASH
    if (!HM0155_SERIAL_Initialize_from_T_Flash()) /* for debug use. */
#endif
    {
        HM0155_SERIALInitialSetting(); /* apply the sensor initial setting */
	 HM0155_SERIALMoreSetting();
	 kal_prompt_trace(MOD_ENG,"HM0155_SERIALSensorOpen");
    }

    /* default setting */
    HM0155_SERIALSensor.BypassAe = KAL_FALSE; /* for panorama view */
    HM0155_SERIALSensor.BypassAwb = KAL_FALSE; /* for panorama view */
    HM0155_SERIALSensor.CapState = KAL_FALSE; /* preview state */
    HM0155_SERIALSensor.PvMode = KAL_TRUE; /* preview size output mode */
    HM0155_SERIALSensor.BandingFreq = HM0155_SERIAL_50HZ;
    HM0155_SERIALSensor.InternalClock = 1; /* will be update by setclock function */
    HM0155_SERIALSensor.Shutter = 1; /* default shutter 1 avoid divide by 0 */
    HM0155_SERIALSensor.Gain = 0x40; /* default gain 1x */
    //HM0155_SERIALSensor.FrameLength = HM0155_SERIAL_PV_PERIOD_LINE_NUMS; /* will be update by setdummy function */
    //HM0155_SERIALSensor.LineLength = HM0155_SERIAL_PV_PERIOD_PIXEL_NUMS; /* will be update by setdummy function */

    return MM_ERROR_NONE;
}

/*************************************************************************
* FUNCTION
*   HM0155_SERIALSensorFeatureCtrl
*
* DESCRIPTION
*   This function set sensor feature mode
*
* PARAMETERS
*   Id: scenario id
*   In: input parameter
*   Out: output parameter
*   OutLen: output parameter length
*   RealOutLen: real output parameter length
*
* RETURNS
*   Error code
*
* LOCAL AFFECTED
*
*************************************************************************/
static MM_ERROR_CODE_ENUM HM0155_SERIALSensorFeatureCtrl(kal_uint32 Id, void *In, void *Out, kal_uint32 OutLen, kal_uint32 *RealOutLen)
{
    MM_ERROR_CODE_ENUM ErrCode = MM_ERROR_NONE;

    if (Id >= CAL_FEATURE_WEBCAM_BEGIN && Id <= CAL_FEATURE_WEBCAM_END)
    {
        return HM0155_SERIALWebcamFeatureCtrl(Id, In, Out, OutLen, RealOutLen);
    }
    switch (Id)
    {
    /* query and set series */
    case CAL_FEATURE_CAMERA_BRIGHTNESS:
    case CAL_FEATURE_CAMERA_EV_VALUE:
        ErrCode = HM0155_SERIALEv(In, Out);
        break;
    case CAL_FEATURE_CAMERA_CONTRAST:
        ErrCode = HM0155_SERIALContrast(In, Out);
        break;
    case CAL_FEATURE_CAMERA_SATURATION:
        ErrCode = HM0155_SERIALSaturation(In, Out);
        break;
    case CAL_FEATURE_CAMERA_SHARPNESS:
        ErrCode = HM0155_SERIALSharpness(In, Out);
        break;
    case CAL_FEATURE_CAMERA_WB:
        ErrCode = HM0155_SERIALWb(In, Out);
        break;
    case CAL_FEATURE_CAMERA_IMAGE_EFFECT:
        ErrCode = HM0155_SERIALEffect(In, Out);
        break;
    case CAL_FEATURE_CAMERA_STILL_CAPTURE_SIZE:
        ErrCode = HM0155_SERIALStillCaptureSize(In, Out);
        break;
    case CAL_FEATURE_CAMERA_BANDING_FREQ:
        ErrCode = HM0155_SERIALBanding(In, Out);
        break;
    case CAL_FEATURE_CAMERA_SCENE_MODE:
        ErrCode = HM0155_SERIALSceneMode(KAL_TRUE, In, Out);
        break;
    case CAL_FEATURE_CAMERA_VIDEO_SCENE_MODE:
        ErrCode = HM0155_SERIALSceneMode(KAL_FALSE, In, Out);
        break;
    case CAL_FEATURE_CAMERA_FLASH_MODE:
    case CAL_FEATURE_CAMERA_HUE:
    case CAL_FEATURE_CAMERA_GAMMA:
        ErrCode = MM_ERROR_SENSOR_FEATURE_NOT_SUPPORT;
        break;

    /* get info series */
    case IMAGE_SENSOR_FEATURE_GET_SENSOR_INFO:
        HM0155_SERIALGetSensorInfo(Out);
        break;
    case IMAGE_SENSOR_FEATURE_GET_SENSOR_ID:
        ((P_IMAGE_SENSOR_COMM_DATA_STRUCT)Out)->FeatureValue = HM0155_SERIALDetectSensorId();
        break;
    case IMAGE_SENSOR_FEATURE_GET_SENSOR_FRAME_RATE:
        ((P_IMAGE_SENSOR_COMM_DATA_STRUCT)Out)->FeatureValue = \
        HM0155_SERIALSensor.InternalClock * HM0155_SERIAL_FPS(1) / (HM0155_SERIALSensor.LineLength * HM0155_SERIALSensor.FrameLength);
        break;
    case IMAGE_SENSOR_FEATURE_GET_INIT_OPERATION_PARA:
        HM0155_SERIALInitOperationPara(Out);
        break;
    case IMAGE_SENSOR_FEATURE_GET_HW_DEPENDENT_SETTING:
        CamGetHWInfo(HM0155_SERIALSensor.SensorIdx, Out);
        break;

    /* set para series */
    case IMAGE_SENSOR_FEATURE_SET_SENSOR_POWER_DOWN:
        HM0155_SERIALPowerDown();
        break;
    case IMAGE_SENSOR_FEATURE_SET_NVRAM_SENSOR_INFO:
        HM0155_SERIALSensor.NvramData = &(((nvram_camera_para_struct *)In)->SENSOR);
        break;
    case IMAGE_SENSOR_FEATURE_SET_CAMERA_SOURCE:
        HM0155_SERIALSensor.SensorIdx = ((P_IMAGE_SENSOR_SET_CAMERA_SOURCE_STRUCT)In)->ImageSensorIdx;
        break;
    case IMAGE_SENSOR_FEATURE_CTRL_NIGHTMODE: /* move to preview */
        break;
    case IMAGE_SENSOR_FEATURE_SET_AE_BYPASS:
        HM0155_SERIALSensor.BypassAe = (kal_bool)((P_IMAGE_SENSOR_COMM_DATA_STRUCT)In)->FeatureValue;
        HM0155_SERIALAeEnable(HM0155_SERIALSensor.BypassAe ? KAL_FALSE : KAL_TRUE);
        break;
    case IMAGE_SENSOR_FEATURE_SET_AWB_BYPASS:
        HM0155_SERIALSensor.BypassAwb = (kal_bool)((P_IMAGE_SENSOR_COMM_DATA_STRUCT)In)->FeatureValue;
        HM0155_SERIALAwbEnable(HM0155_SERIALSensor.BypassAwb ? KAL_FALSE : KAL_TRUE);
        break;
    case IMAGE_SENSOR_FEATURE_GET_SERIAL_SENSOR_INFO:
	 HM0155_SERIALGetSerialSensorInfo(In, Out);
    break;
    default:
        ErrCode = MM_ERROR_SENSOR_FEATURE_NOT_SUPPORT;
        break;
    }
    return ErrCode;
}

/*************************************************************************
* FUNCTION
*   HM0155_SERIALSensorCtrl
*
* DESCRIPTION
*   This function set sensor scenario mode
*
* PARAMETERS
*   Id: scenario id
*   In/Out: parameter
*   OutLen: out parameter length
*   RealOutLen: real out parameter length
*
* RETURNS
*   Error code
*
* LOCAL AFFECTED
*
*************************************************************************/
static MM_ERROR_CODE_ENUM HM0155_SERIALSensorCtrl(CAL_SCENARIO_ENUM Id, void *In, void *Out, kal_uint32 OutLen, kal_uint32 *RealOutLen)
{
    switch (Id)
    {
    case CAL_SCENARIO_CAMERA_PREVIEW:
    case CAL_SCENARIO_VIDEO:
    case CAL_SCENARIO_WEBCAM_PREVIEW:
    case CAL_SCENARIO_WEBCAM_CAPTURE:
        HM0155_SERIALPreview(Id, In, Out);
        break;
    case CAL_SCENARIO_CAMERA_STILL_CAPTURE:
        HM0155_SERIALCapture(Id, In, Out);
        break;
    default:
        break;
    }
    return MM_ERROR_NONE;
}

/*************************************************************************
* FUNCTION
*   HM0155_SERIALSensorClose
*
* DESCRIPTION
*   This function is to turn off sensor module power.
*
* PARAMETERS
*   None
*
* RETURNS
*   Error code
*
* LOCAL AFFECTED
*
*************************************************************************/
static MM_ERROR_CODE_ENUM HM0155_SERIALSensorClose(void)
{
    HM0155_SERIALPowerDown();
    CisModulePowerOn(HM0155_SERIALSensor.SensorIdx, KAL_FALSE);
    CameraSccbClose(CAMERA_SCCB_SENSOR);

    //Resume
//    GPIO_ModeSetup(47, 1);
//    GPIO_ModeSetup(59, 1);

    return MM_ERROR_NONE;
}

/*************************************************************************
* FUNCTION
*   HM0155_SERIALSensorFunc
*
* DESCRIPTION
*   This function get sensor function pointer
*
* PARAMETERS
*   Sensor function pointer
*
* RETURNS
*   Error code
*
* GLOBALS AFFECTED
*
*************************************************************************/
MM_ERROR_CODE_ENUM HM0155_SERIALSensorFunc(P_IMAGE_SENSOR_FUNCTION_STRUCT *pfSensorFunc)
{
    static IMAGE_SENSOR_FUNCTION_STRUCT ImageSensorFuncHM0155_SERIAL =
    {
        HM0155_SERIALSensorOpen,
        HM0155_SERIALSensorFeatureCtrl,
        HM0155_SERIALSensorCtrl,
        HM0155_SERIALSensorClose,
    };

    *pfSensorFunc = &ImageSensorFuncHM0155_SERIAL;
  
    return MM_ERROR_NONE;
}

#ifdef __HM0155_SERIAL_DEBUG_TRACE__
static kal_bool HM0155_SERIALAtGetValue(char *Str, kal_uint32 *Data)
{
    extern int isdigit(int c);
    extern int isxdigit(int c);
    extern int tolower(int c);
    char CmdName[15];
    kal_uint8 TmpIdx = 0, Index = 3;
    kal_uint32 Value;

    while (Str[Index] != '=' && Str[Index] != 13)
    {
        CmdName[TmpIdx++] = Str[Index++];
    }
    CmdName[TmpIdx] = '\0';

    if (strcmp(CmdName, "DO"))
    {
        return KAL_FALSE;
    }
    Value = Data[0] = 0;
    while (1)
    {
        TmpIdx = Str[++Index];
        switch (TmpIdx)
        {
        case 13:
        case ',':
            Data[++Data[0]] = Value;
            if (Data[0] == 9 || TmpIdx == 13)
            {
                return KAL_TRUE;
            }
            Value = 0;
            break;
        default:
            if (isdigit(TmpIdx))
            {
                Value = Value * 16 + TmpIdx - '0';
            }
            else if (isxdigit(TmpIdx))
            {
                Value = Value * 16 + tolower(TmpIdx) - 'a' + 10;
            }
            else
            {
                return KAL_TRUE;
            }
            break;
        }
    }
}

kal_bool AtFuncTest(kal_char *Str)
{
    kal_uint32 Data[10];

    if (!HM0155_SERIALAtGetValue(Str, Data))
    {
        return KAL_FALSE;
    }
    if (!Data[0])
    {
        return KAL_TRUE;
    }
    switch (Data[1])
    {
    case 0x00:
        {
            extern kal_uint32 IspCurrentFrameRate;

            HM0155_SERIAL_TRACE("Current Frame Rate: %d.%d fps", IspCurrentFrameRate / 10, IspCurrentFrameRate % 10);
        }
        break;
    case 0x02:
        HM0155_SERIAL_TRACE("Read BB Reg[%x] = %x", Data[2], DRV_Reg32(Data[2]));
        break;
    case 0x03:
        DRV_Reg32(Data[2]) = Data[3];
        HM0155_SERIAL_TRACE("Write BB Reg[%x] = %x", Data[2], DRV_Reg32(Data[2]));
        break;
    case 0x04:
        HM0155_SERIAL_TRACE("Read Sensor Reg[%x] = %x", Data[2], CamReadCmosSensor(Data[2]));
        break;
    case 0x05:
        CamWriteCmosSensor(Data[2], Data[3]);
        HM0155_SERIAL_TRACE("Write Sensor Reg[%x] = %x", Data[2], CamReadCmosSensor(Data[2]));
        break;
    case 0x06:
        CamWriteCmosSensor(Data[2], Data[3]);
        HM0155_SERIAL_TRACE("Read Sensor Reg[%x:%x] = %x", Data[3], Data[4], CamReadCmosSensor(Data[4]));
        break;
    case 0x07:
        CamWriteCmosSensor(Data[2], Data[3]);
        CamWriteCmosSensor(Data[4], Data[5]);
        CamWriteCmosSensor(Data[2], Data[3]);
        HM0155_SERIAL_TRACE("Write Sensor Reg[%x:%x] = %x", Data[3], Data[4], CamReadCmosSensor(Data[4]));
        break;
    case 0x09:
        //Data[4] = t[Data[2]];
        //t[Data[2]] = Data[3];
        //kal_print_string_trace(MOD_ENG, TRACE_INFO, "t[%d]: %d -> %d", Data[2], Data[4], t[Data[2]]);
        break;
    case 0x0A:
        {
            kal_uint32 i;

            for (i = 0; i < Data[3]; i++)
            {
                HM0155_SERIAL_TRACE("Read Sensor Reg[%x] = %x", Data[2] + i, CamReadCmosSensor(Data[2] + i));
                if (!(i % 200))
                {
                    kal_sleep_task(30);
                }
            }
        }
        break;
    case 0x0B:
        {
            kal_uint32 i;

            for (i = 0; i < Data[3]; i++)
            {
                HM0155_SERIAL_TRACE("Read BB Reg[%x] = %x", Data[2] + i * 4, DRV_Reg32(Data[2] + i * 4));
                if (!(i % 200))
                {
                    kal_sleep_task(30);
                }
            }
        }
        break;
    default:
        break;
    }
    return KAL_TRUE;
}
#endif

