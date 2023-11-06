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
 *   image_sensor_SP0820_SERIAL.h V1.0
 *
 * Project:
 * --------
 *   MAUI_sw
 *
 * Description:
 * ------------
 *   CMOS sensor header file
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
 * removed!
 *
 * removed!
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/
#ifndef _IMAGE_SENSOR_SP0820_SERIAL_H
#define _IMAGE_SENSOR_SP0820_SERIAL_H

#include "sensor_comm_def.h"

/* This used for debug phase use only, to speed up the initial setting modify, 
    NOTICE: It need to be marked when MP release version, or else it will effect the enter
    camera time and waste some ram. */
//#define SP0820_SERIAL_LOAD_FROM_T_FLASH

/* DEBUG USE ONLY */
//#define __SP0820_SERIAL_DEBUG_TRACE__

#ifdef __SP0820_SERIAL_DEBUG_TRACE__
#include "kal_trace.h"

#define SP0820_SERIAL_TRACE(...) kal_print_string_trace(MOD_ENG, TRACE_INFO, "[SP0820_SERIAL]"__VA_ARGS__)
#else
#define SP0820_SERIAL_TRACE(...)
#endif

/* SENSOR MASTER CLOCK */
#define SP0820_SERIAL_MCLK                          24000000

// TODO: modify sensor dependent macro value here

/* SENSOR I2C WRITE ID */
#define SP0820_SERIAL_WRITE_ID_0                    (0x86)
#define SP0820_SERIAL_WRITE_ID_1                    (0xFF)
#define SP0820_SERIAL_WRITE_ID_2                    (0xFF)
#define SP0820_SERIAL_WRITE_ID_3                    (0xFF)

/* SENSOR I2C ADDR/DATA WIDTH */
#define SP0820_SERIAL_I2C_ADDR_BITS                 CAMERA_SCCB_8BIT /* CAMERA_SCCB_8BIT / CAMERA_SCCB_16BIT */
#define SP0820_SERIAL_I2C_DATA_BITS                 CAMERA_SCCB_8BIT /* CAMERA_SCCB_8BIT / CAMERA_SCCB_16BIT */

/* SENSOR PREVIEW SIZE (5M:1296x972 or 640x480, 3M: 1024x768 or 640x480, 2M: 800x600, 1.3M: 640x512, VGA: 640x480, CIF: 352x288) */
#define SP0820_SERIAL_IMAGE_SENSOR_PV_WIDTH         (240)
#define SP0820_SERIAL_IMAGE_SENSOR_PV_HEIGHT        (320)
/* SENSOR CAPTURE SIZE (5M: 2592x1944, 3M: 2048x1536, 2M: 1600x1200, 1.3M: 1280x1024, VGA: 640x480, CIF: 352x288) */
#define SP0820_SERIAL_IMAGE_SENSOR_FULL_WIDTH       (240)
#define SP0820_SERIAL_IMAGE_SENSOR_FULL_HEIGHT      (320)

/* SENSOR PIXEL/LINE NUMBERS IN ONE PERIOD */
#define SP0820_SERIAL_PV_PERIOD_PIXEL_NUMS          (240)
#define SP0820_SERIAL_PV_PERIOD_LINE_NUMS           (320)
#define SP0820_SERIAL_FULL_PERIOD_PIXEL_NUMS        (240)
#define SP0820_SERIAL_FULL_PERIOD_LINE_NUMS         (320)

/* SENSOR LINELENGTH&FRAMELENGTH LIMITATION */
#define SP0820_SERIAL_MAX_PV_LINELENGTH             (4095 + 694) /* register limitation */
#define SP0820_SERIAL_MAX_PV_FRAMELENGTH            (4095 + 488) /* register limitation */
#define SP0820_SERIAL_MAX_CAP_LINELENGTH            (SP0820_SERIAL_MAX_PV_LINELENGTH) /* register limitation */
#define SP0820_SERIAL_MAX_CAP_FRAMELENGTH           (SP0820_SERIAL_MAX_PV_FRAMELENGTH) /* register limitation */

/* SENSOR SHUTTER MARGIN */
#define SP0820_SERIAL_SHUTTER_MARGIN                (1)

/* SENSOR DELAY FRAME */
#define SP0820_SERIAL_FIRST_PREVIEW_DELAY_FRAME     (3)
#define SP0820_SERIAL_PREVIEW_DELAY_FRAME           (3)
#define SP0820_SERIAL_CAPTURE_DELAY_FRAME           (2)

/* SENSOR PREVIEW/CAPTURE INTERNAL CLOCK */
#if SP0820_SERIAL_MCLK == 24000000
    #if (defined(DRV_ISP_6276_SERIES) || defined(DRV_ISP_MT6236_HW_SUPPORT))
    /* pclk limitation is 96MHz, preview pclk = min(pclk@30fps,96MHz), capture pclk = min(pclk@15fps,96MHz) */
    #define SP0820_SERIAL_PV_INTERNAL_CLK           12000000
    #define SP0820_SERIAL_CAP_INTERNAL_CLK          12000000
    #elif (defined(DRV_ISP_MT6268_HW_SUPPORT))
    /* pclk limitation is 52MHz, preview pclk = min(pclk@30fps,52MHz), capture pclk = min(pclk@15fps,52MHz) */
    #define SP0820_SERIAL_PV_INTERNAL_CLK           12000000
    #define SP0820_SERIAL_CAP_INTERNAL_CLK          12000000
    #else
    /* pclk limitation is 48MHz, preview pclk = min(pclk@30fps,48MHz), capture pclk = min(pclk@15fps,48MHz) */
    #define SP0820_SERIAL_PV_INTERNAL_CLK           12000000
    #define SP0820_SERIAL_CAP_INTERNAL_CLK          12000000
    #endif
#else
    #if (defined(DRV_ISP_6276_SERIES) || defined(DRV_ISP_MT6236_HW_SUPPORT))
    /* pclk limitation is 96MHz, preview pclk = min(pclk@30fps,96MHz), capture pclk = min(pclk@15fps,96MHz) */
    #define SP0820_SERIAL_PV_INTERNAL_CLK           13000000
    #define SP0820_SERIAL_CAP_INTERNAL_CLK          13000000
    #elif (defined(DRV_ISP_MT6268_HW_SUPPORT))
    /* pclk limitation is 52MHz, preview pclk = min(pclk@30fps,52MHz), capture pclk = min(pclk@15fps,52MHz) */
    #define SP0820_SERIAL_PV_INTERNAL_CLK           13000000
    #define SP0820_SERIAL_CAP_INTERNAL_CLK          13000000
    #else
    /* pclk limitation is 48MHz, preview pclk = min(pclk@30fps,48MHz), capture pclk = min(pclk@15fps,48MHz) */
    #define SP0820_SERIAL_PV_INTERNAL_CLK           13000000
    #define SP0820_SERIAL_CAP_INTERNAL_CLK          13000000
    #endif
#endif

/* ===============================================================================
   ========================= No Changing The Macro Below =========================
   ===============================================================================
*/

/* CONFIG THE ISP GRAB START X & START Y, CONFIG THE ISP GRAB WIDTH & HEIGHT */
#define SP0820_SERIAL_PV_GRAB_START_X               (0)
#define SP0820_SERIAL_PV_GRAB_START_Y               (1)
#define SP0820_SERIAL_FULL_GRAB_START_X             (0)
#define SP0820_SERIAL_FULL_GRAB_START_Y             (1)
#define SP0820_SERIAL_PV_GRAB_WIDTH                 (SP0820_SERIAL_IMAGE_SENSOR_PV_WIDTH - 2)
#define SP0820_SERIAL_PV_GRAB_HEIGHT                (SP0820_SERIAL_IMAGE_SENSOR_PV_HEIGHT - 2)
#define SP0820_SERIAL_FULL_GRAB_WIDTH               (SP0820_SERIAL_IMAGE_SENSOR_FULL_WIDTH - 2)
#define SP0820_SERIAL_FULL_GRAB_HEIGHT              (SP0820_SERIAL_IMAGE_SENSOR_FULL_HEIGHT - 2)

/* FLICKER OF FREQUENCY */
#define SP0820_SERIAL_50HZ                          100
#define SP0820_SERIAL_60HZ                          120

/* RESET/POWER DOWN PIN CONTROL */
#define SP0820_SERIAL_SET_RST_LOW                   CamRstPinCtrl(SP0820_SERIALSensor.SensorIdx, 0)
#define SP0820_SERIAL_SET_RST_HIGH                  CamRstPinCtrl(SP0820_SERIALSensor.SensorIdx, 1)
#define SP0820_SERIAL_SET_PDN_LOW                   CamPdnPinCtrl(SP0820_SERIALSensor.SensorIdx, 0)
#define SP0820_SERIAL_SET_PDN_HIGH                  CamPdnPinCtrl(SP0820_SERIALSensor.SensorIdx, 1)

/* HW I2C SPEED */
#define SP0820_SERIAL_HW_I2C_SPEED                  30 /* Kbps */

/* FRAME RATE UNIT */
#define SP0820_SERIAL_FPS(x)                        ((kal_uint32)(10 * (x)))

/* --------------------------------- common eara --------------------------------- */
/* EXPORT FUNC */
MM_ERROR_CODE_ENUM SP0820_SERIALSensorFunc(P_IMAGE_SENSOR_FUNCTION_STRUCT *pfSensorFunc);

/* IMPORT FUNC */
MM_ERROR_CODE_ENUM SP0820_SERIALWebcamFeatureCtrl(kal_uint32 Id, void *In, void *Out, kal_uint32 OutLen, kal_uint32 *RealOutLen);

#endif

