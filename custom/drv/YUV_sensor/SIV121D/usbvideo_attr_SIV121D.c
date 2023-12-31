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
 *   usbvideo_attr_SIV121D.c
 *
 * Project:
 * --------
 *   MAUI
 *
 * Description:
 * ------------
 *   Image sensor webcam driver function
 *
 * Author:
 * -------

 *
 *=============================================================
 *             HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
 * removed!
 *=============================================================
 ****************************************************************************/

#include "drv_comm.h"
#include "stdio.h"
#include "isp_if.h"
#include "image_sensor.h"
#include "mm_comm_def.h"
#include "sensor_comm_def.h"
#include "usbvideo_custom.h"
#include "jpeg_enum.h"

#if (defined(WEBCAM_SUPPORT))
MM_ERROR_CODE_ENUM SIV121DWebcamFeatureCtrl(kal_uint32 Id, void *In, void *Out, kal_uint32 OutLen, kal_uint32 *RealOutLen)
{
  /* supported feature list */
  static const USBVideo_Attr_Info SIV121D_ATTR_INFO[] =
  {
    {USBVIDEO_ATTRIBUTE_BRIGHTNESS, KAL_TRUE, KAL_TRUE},
    {USBVIDEO_ATTRIBUTE_CONTRAST, KAL_TRUE, KAL_TRUE},
    {USBVIDEO_ATTRIBUTE_HUE, KAL_FALSE, KAL_FALSE},  
    {USBVIDEO_ATTRIBUTE_HUE_AUTO, KAL_FALSE, KAL_FALSE},    
    {USBVIDEO_ATTRIBUTE_SATURATION, KAL_FALSE, KAL_FALSE},    
    {USBVIDEO_ATTRIBUTE_POWER_LINE_FREQUENCY, KAL_TRUE, KAL_TRUE},            
    {USBVIDEO_ATTRIBUTE_SHARPNESS, KAL_FALSE, KAL_FALSE},      
    {USBVIDEO_ATTRIBUTE_BACKLIGHT_COMPENSATION, KAL_FALSE, KAL_FALSE},        
    {USBVIDEO_ATTRIBUTE_GAMMA, KAL_FALSE, KAL_FALSE},                
    {USBVIDEO_ATTRIBUTE_WHITE_BALANCE_TMP, KAL_TRUE, KAL_TRUE},              
    {USBVIDEO_ATTRIBUTE_WHITE_BALANCE_TMP_AUTO, KAL_TRUE, KAL_TRUE},                  
  };
  /* supported video size list */
  static const USBVideo_Video_Size_Info SIV121D_VIDEO_SIZE[] =
  {
    {USBVIDEO_VIDEO_SIZE_1, 160, 120, 0xC000,  912382, 38012, 500000, 500000, 500000, 0},
    {USBVIDEO_VIDEO_SIZE_2, 320, 240, 0xC000,  912384, 38016, 500000, 500000, 500000, 0},
#if (defined(__JPEG_HW_SUPPORTED__))
    {USBVIDEO_VIDEO_SIZE_3, 640, 480, 0x18000, 912384, 38016, 500000, 500000, 500000, 0},
#else
    {USBVIDEO_VIDEO_SIZE_3, 640, 480, 0xC000,  912384, 38016, 500000, 500000, 500000, 0},
#endif
  };
  /* supported still image size list */
  static const USBVideo_Still_Size_Info SIV121D_STILL_SIZE[] =
  {
    {USBVIDEO_STILL_SIZE_1, 160, 120, 0xC000},
    {USBVIDEO_STILL_SIZE_2, 320, 240, 0xC000},
#if (defined(__JPEG_HW_SUPPORTED__))
    {USBVIDEO_STILL_SIZE_3, 640, 480, 0x18000},
#else
    {USBVIDEO_STILL_SIZE_3, 640, 480, 0xC000},
#endif
  };
  /* supported compression type list*/
  static const USBVideo_Compression_Info SIV121D_STILL_COMPRESSION[] =
  {
    /*{USBVIDEO_COMPRESSION_1, JPEG_ENCODE_QUALITY_GOOD},*/
    {USBVIDEO_COMPRESSION_1, JPEG_ENCODE_QUALITY_LOW },
    {USBVIDEO_COMPRESSION_2, JPEG_ENCODE_QUALITY_FAIR}
  };
  static const USBVIDEO_VIDEO_SIZE_TYPE SIV121D_g_default_video_size = USBVIDEO_VIDEO_SIZE_1;
  static const USBVIDEO_STILL_SIZE_TYPE SIV121D_g_default_still_size = USBVIDEO_STILL_SIZE_1;
  static const USBVIDEO_COMPRESSION_TYPE SIV121D_g_default_compression = USBVIDEO_COMPRESSION_1;
  static const usbvideo_attr_struct SIV121DWebcamAttrPara =
  {
    /* min,  max,         res,        def */
    {
      {0,      4,    1,    0  },  /*0  USBVIDEO_ATTRIBUTE_BACKLIGHT_COMPENSATION*/
      {0,      8,    1,    4 },  /*1  USBVIDEO_ATTRIBUTE_BRIGHTNESS*/
      {0,      2,    1,    1  },  /*2  USBVIDEO_ATTRIBUTE_CONTRAST*/
      {0,      255,  1,    127 },  /*3  USBVIDEO_ATTRIBUTE_GAIN*/
      {0,      2,    1,    1  },  /*4  USBVIDEO_ATTRIBUTE_POWER_LINE_FREQUENCY, 0:Disable, 1:50, 2:60*/
      {0,      360,  1 ,      0  },  /*5  USBVIDEO_ATTRIBUTE_HUE*/
      {0,      255,  1,    64  },  /*6  USBVIDEO_ATTRIBUTE_SATURATION*/
      {0,      15,   1,    0  },  /*7  USBVIDEO_ATTRIBUTE_SHARPNESS*/
      {100,    220,  60,      160 },  /*8  USBVIDEO_ATTRIBUTE_GAMMA*/
      {2500,   6500, 500,  5500},  /*9 USBVIDEO_ATTRIBUTE_WHITE_BALANCE_TMP*/
      {0,      1,    1,    1  },  /*10 USBVIDEO_ATTRIBUTE_WHITE_BALANCE_TMP_AUTO*/
      {0,      0,    0,    0  },  /*11 USBVIDEO_ATTRIBUTE_WHITE_BALANCE_COMP, NOT SUPPORT*/
      {0,      1,    1,    1  },  /*12 USBVIDEO_ATTRIBUTE_WHITE_BALANCE_COMP_AUTO*/
      {0,      0,    1,    0  },  /*13 USBVIDEO_ATTRIBUTE_DIGITAL_MULTIPLIER, NOT SUPPORT*/
      {0,      0,    1,    0  },  /*14 USBVIDEO_ATTRIBUTE_DIGITAL_MULTIPLIER_LIMIT, NOT SUPPORT*/
      {0,      1,    1,    0  },  /*15 USBVIDEO_ATTRIBUTE_HUE_AUTO*/
      {0,      0,    0,    0  }  /*16 USBVIDEO_ATTRIBUTE_MAX_MULTIPLIER, NOT SUPPORT*/
    }
  };
  MM_ERROR_CODE_ENUM ErrCode = MM_ERROR_NONE;
  
  switch(Id)
  {
  case CAL_FEATURE_WEBCAM_GET_ATTR:
    {
      USBVideo_Attr_Value *pWebCamAttr = (USBVideo_Attr_Value *)Out;
      USBVIDEO_ATTRIBUTE_TYPE AttrType = pWebCamAttr->type;
      
      if (AttrType <= USBVIDEO_ATTRIBUTE_CT_MAX)
      {
        pWebCamAttr->value = 0; //CT currently is not support
      }
      else
      {
        if (AttrType >= ATTR_PU_START)
        {
          switch(pWebCamAttr->req_type)
          {
          case USBVIDEO_REQUEST_GET_CUR:
            ASSERT(0); //current value is maintained In ISP driver
            break;
          case USBVIDEO_REQUEST_GET_MIN:
            pWebCamAttr->value = SIV121DWebcamAttrPara.attr_info[GET_ATTR_PU_IDX(AttrType)].min;
            break;
          case USBVIDEO_REQUEST_GET_MAX:
            pWebCamAttr->value = SIV121DWebcamAttrPara.attr_info[GET_ATTR_PU_IDX(AttrType)].max;
            break;
          case USBVIDEO_REQUEST_GET_DEF:
            pWebCamAttr->value = SIV121DWebcamAttrPara.attr_info[GET_ATTR_PU_IDX(AttrType)].def;
            break;
          case USBVIDEO_REQUEST_GET_RES:
            pWebCamAttr->value = SIV121DWebcamAttrPara.attr_info[GET_ATTR_PU_IDX(AttrType)].res;
            break;
          default:
            EXT_ASSERT(0, (kal_uint32)pWebCamAttr->req_type, 0, 0);
            break;
            }
        }
        else
        {
          ASSERT(0);
        }
      }
    }
    break;
  case CAL_FEATURE_WEBCAM_SET_ATTR:
    {
      const USBVIDEO_ATTRIBUTE_TYPE AttrType = ((USBVideo_Attr_Value *)In)->type;
      const kal_uint32 AttrValue = ((USBVideo_Attr_Value *)In)->value;
      CAL_FEATURE_CTRL_STRUCT FeatureCtrlPara;
      P_IMAGE_SENSOR_FUNCTION_STRUCT pfSensorFunc;
      
      SIV121DSensorFunc(&pfSensorFunc);        
      FeatureCtrlPara.FeatureCtrlCode = CAL_FEATURE_SET_OPERATION;
      
      /* Sensor Attributes Set */
      switch(AttrType)
      {
      case USBVIDEO_ATTRIBUTE_POWER_LINE_FREQUENCY:
        FeatureCtrlPara.FeatureSetValue = (1 == AttrValue ? CAM_BANDING_50HZ : CAM_BANDING_60HZ);
        ErrCode = pfSensorFunc->SensorFeatureCtrl(CAL_FEATURE_CAMERA_BANDING_FREQ, &FeatureCtrlPara, NULL, 0, NULL);
        break;            
      case USBVIDEO_ATTRIBUTE_BRIGHTNESS:
        FeatureCtrlPara.FeatureSetValue = AttrValue;
        ErrCode = pfSensorFunc->SensorFeatureCtrl(CAL_FEATURE_CAMERA_EV_VALUE, &FeatureCtrlPara, NULL, 0, NULL);
        break;
      case USBVIDEO_ATTRIBUTE_CONTRAST:
        FeatureCtrlPara.FeatureSetValue = AttrValue;
        ErrCode = pfSensorFunc->SensorFeatureCtrl(CAL_FEATURE_CAMERA_CONTRAST, &FeatureCtrlPara, NULL, 0, NULL);
        break;
      case USBVIDEO_ATTRIBUTE_WHITE_BALANCE_TMP_AUTO:
        if (AttrValue > 0) /* auto */
        {
          FeatureCtrlPara.FeatureSetValue = CAM_WB_AUTO;
          ErrCode = pfSensorFunc->SensorFeatureCtrl(CAL_FEATURE_CAMERA_WB, &FeatureCtrlPara, NULL, 0, NULL);
        }
        else
        {
          /* Bin: dothing, because will set by USBVIDEO_ATTRIBUTE_WHITE_BALANCE_TMP */
        }
        break;
      case USBVIDEO_ATTRIBUTE_WHITE_BALANCE_TMP:        
        if (AttrValue > 5800)
        {
          FeatureCtrlPara.FeatureSetValue = CAM_WB_DAYLIGHT;
        }
        else if (AttrValue >= 4800)    
        {
          FeatureCtrlPara.FeatureSetValue = CAM_WB_INCANDESCENCE;
        }
        else if (AttrValue >= 3800)                                  
        {
          FeatureCtrlPara.FeatureSetValue = CAM_WB_FLUORESCENT;
        }
        else /* if (AttrValue >= 2800) */
        {
          FeatureCtrlPara.FeatureSetValue = CAM_WB_TUNGSTEN;
        }
        ErrCode = pfSensorFunc->SensorFeatureCtrl(CAL_FEATURE_CAMERA_WB, &FeatureCtrlPara, NULL, 0, NULL);
        break;
      default:
        break;
      }
    }
    break;
  case CAL_FEATURE_WEBCAM_GET_ATTR_INFO:
    ((P_CAL_FEATURE_WEBCAM_GET_ATTR_INFO_STRUCT)Out)->pWebCamAttrInfo = SIV121D_ATTR_INFO;
    ((P_CAL_FEATURE_WEBCAM_GET_ATTR_INFO_STRUCT)Out)->WebCamAttrInfoNum = sizeof(SIV121D_ATTR_INFO) / sizeof(SIV121D_ATTR_INFO[0]);
    break;
  case CAL_FEATURE_WEBCAM_GET_VIDEO_SIZE:
    ((P_CAL_FEATURE_WEBCAM_GET_VIDEO_SIZE_STRUCT)Out)->pWebCamVideoSizeInfo = SIV121D_VIDEO_SIZE;
    ((P_CAL_FEATURE_WEBCAM_GET_VIDEO_SIZE_STRUCT)Out)->WebCamVideoSizeInfoNum = sizeof(SIV121D_VIDEO_SIZE) / sizeof(SIV121D_VIDEO_SIZE[0]);
    break;
  case CAL_FEATURE_WEBCAM_GET_STILL_SIZE:
    ((P_CAL_FEATURE_WEBCAM_GET_STILL_SIZE_STRUCT)Out)->pWebCamStillSizeInfo = SIV121D_STILL_SIZE;
    ((P_CAL_FEATURE_WEBCAM_GET_STILL_SIZE_STRUCT)Out)->WebCamStillSizeInfoNum = sizeof(SIV121D_STILL_SIZE) / sizeof(SIV121D_STILL_SIZE[0]);
    break;
  case CAL_FEATURE_WEBCAM_GET_COMPRESSION:
    ((P_CAL_FEATURE_WEBCAM_GET_COMPRESSION_STRUCT)Out)->pWebCamCompressionInfo = SIV121D_STILL_COMPRESSION;
    ((P_CAL_FEATURE_WEBCAM_GET_COMPRESSION_STRUCT)Out)->WebCamCompressionInfoNum = sizeof(SIV121D_STILL_COMPRESSION) / sizeof(SIV121D_STILL_COMPRESSION[0]);
    break;
  case CAL_FEATURE_WEBCAM_GET_DEFAULT_IDX:
    ((P_CAL_FEATURE_WEBCAM_GET_DEFAULT_IDX_STRUCT)Out)->WebCamVideoSizeIdx = SIV121D_g_default_video_size;
    ((P_CAL_FEATURE_WEBCAM_GET_DEFAULT_IDX_STRUCT)Out)->WebCamStillSizeIdx = SIV121D_g_default_still_size;
    ((P_CAL_FEATURE_WEBCAM_GET_DEFAULT_IDX_STRUCT)Out)->WebCamCompressionIdx = SIV121D_g_default_compression;
    break;
  default:
    ErrCode = MM_ERROR_INVALID_PARAMETER;
    break;
  }
  return ErrCode;
}

#else
MM_ERROR_CODE_ENUM SIV121DWebcamFeatureCtrl(kal_uint32 Id, void *In, void *Out, kal_uint32 OutLen, kal_uint32 *RealOutLen)
{
  return MM_ERROR_NONE;
}
#endif
