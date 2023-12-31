/*******************************************************************************
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
*******************************************************************************/

/*******************************************************************************
 * Filename:
 * ---------
 *	utility_core.h
 *
 * Project:
 * --------
 *   MT6236
 *
 * Description:
 * ------------
 *   utility export API .
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
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

#ifndef _UTL_CORE_H_
#define _UTL_CORE_H_

#include "kal_release.h"
#include "mm_comm_def.h"
#include "utility_comm_def.h"

/*-----------------------------------Color Space Transformation-------------------------------------*/
#define UTL_IUL_I_TO_X(i)				((i) << 16)              		  ///< Convert from integer to S15.16 fixed-point
#define UTL_IUL_X_TO_I(x)         		(((x) + (1 << 15)) >> 16) 	 ///< Convert from S15.16 fixed-point to integer (round)
#define UTL_IUL_X_TO_I_CHOP(x)		((x) >> 16)              		  ///< Convert from S15.16 fixed-point to integer (chop)
#define UTL_IUL_X_TO_I_CARRY(x)		(((x) + 0x0000FFFF) >> 16) ///< Convert from S15.16 fixed-point to integer (carry)
#define UTL_IUL_X_FRACTION(x)		((x) & 0x0000FFFF)

#define UTL_RGB565_R_MASK (0xF800)
#define UTL_RGB565_G_MASK (0x07E0)
#define UTL_RGB565_B_MASK (0x001F)

#define UTL_RGB565_TO_RGB888_R(VALUE)   ((((VALUE) & UTL_RGB565_R_MASK)>>8))
#define UTL_RGB565_TO_RGB888_G(VALUE)   ((((VALUE) & UTL_RGB565_G_MASK)>>3))
#define UTL_RGB565_TO_RGB888_B(VALUE)   ((((VALUE) & UTL_RGB565_B_MASK)<<3))

#define UTL_RGB888_TO_RGB565(R,G,B)		(((((R)+4) >> 3)<<11) | ((((G)+2)>>2)<<5) | (((B)+4)>>3))	

#define UTL_RGB888_TO_YUV_Y(R, G, B)    ((  306 * (R) + 601 * (G) + 117 * (B) + 512) >> 10)

#define LINEAR_INTERPOLATION(val1, val2, weighting2)   \
   UTL_IUL_X_TO_I((val1) * (UTL_IUL_I_TO_X(1) - (weighting2)) + (val2) * (weighting2))

#define UTL_MAX(a,b) (((a)>(b))? (a) : (b))
#define UTL_MIN(a,b) (((a)<(b))? (a) : (b))
#define UTL_ABS(a)  (((a) < 0) ? -(a) : (a)) 
#define UTL_CLIP8(x)    ( ((x)>255) ? 255 : ( ((x)<0) ? 0 : (x)) )

/*-----------------------------------Macro Definition-----------------------------------------------*/
#define UTL_GAMMA_TABLE_NUM	(256)			// Inverse gamma table size
#define UTL_HAAR_PIX_MAX 		(2)				// 2 for shrink, 8 for all, pixel position numbers for one feature
#define UTL_NUMBER_OF_BINS 	(12)				// Confidence table size for one feature

/*---------------------------------Struct Definition-------------------------------------------------*/


// UtlCalIntegralImage //

typedef struct
{
    MM_IMAGE_FORMAT_ENUM 	SrcImgFormat;
    kal_uint16 *source_buffer_ptr;
    kal_uint32 *integral_img;
    kal_uint8 image_width;
    kal_uint8 image_height;
}  UTL_CAL_INTEGRAL_IMAGE_STRUCT, *P_UTL_CAL_INTEGRAL_IMAGE_STRUCT; 


// UtlCalFeatureValueShrink //
typedef struct 
{
    kal_int8     pix_data_x[UTL_HAAR_PIX_MAX];
    kal_int8     pix_data_y[UTL_HAAR_PIX_MAX];
}  UTL_PIX_POSITION_STRUCT, *P_UTL_PIX_POSITION_STRUCT;

typedef struct
{
    kal_int32 curr_x;
    kal_int32 curr_y;
    kal_uint8 img_w;
    kal_uint8 img_h;
    kal_uint8 pattern_index;
    const UTL_PIX_POSITION_STRUCT *pix_data;
    kal_int32 feature_value;
    kal_int32 rat;
    kal_uint32 *integral_img;
    kal_int32 fsize;
    kal_int32 feature_index;
}  UTL_FEATURE_CAL_STRUCT, *P_UTL_FEATURE_CAL_STRUCT;  


// UtlCalConfidenceValue //
typedef struct
{
    kal_int8 	bin_value_table[UTL_NUMBER_OF_BINS];
    kal_int8 	threshold;
    kal_int8 	threshold2 ;
    kal_uint8 	feature_range;
    kal_int8 	feature_value_8bit_min;
}  UTL_CASCADED_CLASSIFIERS_STRUCT, *P_UTL_CASCADED_CLASSIFIERS_STRUCT; 

typedef struct
{
    kal_int32 fv;
    kal_int32 rat;
    const UTL_CASCADED_CLASSIFIERS_STRUCT *classifier;
}  UTL_CAL_CONFIDENCE_VALUE_STRUCT, *P_UTL_CAL_CONFIDENCE_VALUE_STRUCT; 


/*----------------------------------- Function declaration-------------------------------------------*/
void UtlCalIntegralImage(P_UTL_CAL_INTEGRAL_IMAGE_STRUCT pUtlCalII);
void UtlCalFeatureValueShrink(P_UTL_FEATURE_CAL_STRUCT pUtlCalFV);
void UtlCalConfidenceValue(P_UTL_CAL_CONFIDENCE_VALUE_STRUCT pUtlCalCV,kal_int32* pUtlOutCV);
void UtlYUVImageClip(P_UTL_CLIP_STRUCT pClipInfo, kal_bool IsYOnly);
void UtlBilinearResizer(P_UTL_BILINEAR_RESIZER_STRUCT pUtlRisizerInfo);
void UtlRgb565ToGray(UTL_IMAGE_INFO_STRUCT *pImg);
/*-----------------------------------------------------------------------------------------------*/
 #endif	// _UTL_CORE_H_
