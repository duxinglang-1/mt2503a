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
 *  AvatarDefs.h
 *
 * Project:
 * --------
 *  MAUI
 *
 * Description:
 * ------------
 *  Avatar Applications v0.1
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

/****************************************************************************
* Include Files                                                                
*****************************************************************************/
#ifndef _AVATAR_RES_DEF_H_
#define _AVATAR_RES_DEF_H_



/***************************************************************************** 
* Typedef SCR ID ENUM
*****************************************************************************/
typedef enum
{
    SCR_ID_AVATAR_APP = AVATAR_BASE + 1,
    SCR_ID_AVATAR_OPTION_MENU,
    SCR_ID_AVATAR_LIST_MENU,
    SCR_ID_AVATAR_DISPLAY_SCREEN,
    SCR_ID_AVATAR_SELECT_ANIMATION,
    SCR_ID_AVATAR_EDITOR,
    SCR_ID_AVATAR_EDITING_NAME,
    SCR_ID_AVATAR_EDITING_NAME_OPTION,
    SCR_ID_AVATAR_EDITOR_OPTION_MENU,
    SCR_ID_AVATAR_TEST_SCREEN,
    SCR_ID_AVATAR_TOTAL_COUNT
} avatar_scr_id_enum;

/***************************************************************************** 
* Typedef STRING ID ENUM
*****************************************************************************/
typedef enum
{
    STR_ID_AVATAR_APP_NAME = AVATAR_BASE + 1,

    /* OPTION MENU */
    STR_ID_AVATAR_OPTION_MENU_NEW,
   
    STR_ID_AVATAR_EXIT_EDITOR_WITHOUT_SVAE,

    STR_ID_AVATAR_EMPTY_AVATAR_NAME,
    STR_ID_AVATAR_DELETE_ASK,
    STR_ID_AVATAR_DELETE_ALL_ASK,
    STR_ID_AVATAR_OPTION_TOGGLE,
    
    /* Total string count */
    STR_ID_AVATAR_TOTAL_COUNT
} avatar_str_id_enum;

/***************************************************************************** 
* Typedef IMAGE ID ENUM
*****************************************************************************/
typedef enum
{
    IMG_ID_AVATAR_APP_ICON = AVATAR_BASE + 1,
    IMG_ID_AVATAR_AVATAR_ICON,

    IMG_ID_AVATAR_BG,

    IMG_ID_AVATAR_M3D_EDITOR_ANIMATION,

    /* Top Area. The order must sync with avatar_touch_obj_enum */
    IMG_ID_AVATAR_HEAD_SELECTED,
    IMG_ID_AVATAR_HAIR_SELECTED,
    IMG_ID_AVATAR_EYE_SELECTED,
    IMG_ID_AVATAR_BROW_SELECTED,
    IMG_ID_AVATAR_LIP_SELECTED,
    IMG_ID_AVATAR_DECORATION_SELECTED,    
    IMG_ID_AVATAR_BODY_SELECTED,   

    /* Right Area. The order must sync with avatar_touch_obj_enum */   
    IMG_ID_AVATAR_MAGNIFY_ON,
    IMG_ID_AVATAR_MAGNIFY_SELECTED,
    IMG_ID_AVATAR_MINIFY_ON,
    IMG_ID_AVATAR_MINIFY_SELECTED,
    IMG_ID_AVATAR_MOVEUP_ON,
    IMG_ID_AVATAR_MOVEUP_SELECTED,
    IMG_ID_AVATAR_MOVEDOWN_ON,
    IMG_ID_AVATAR_MOVEDOWN_SELECTED,
    IMG_ID_AVATAR_STRETCH_ON,
    IMG_ID_AVATAR_STRETCH_SELECTED,
    IMG_ID_AVATAR_SHRINK_ON,
    IMG_ID_AVATAR_SHRINK_SELECTED,
    IMG_ID_AVATAR_COLOR_ON,
    IMG_ID_AVATAR_COLOR_SELECTED,

    /* Right Area. The order must sync with avatar_touch_obj_enum */ 
    IMG_ID_AVATAR_LARROW_ON,
    IMG_ID_AVATAR_LARROW_SELECTED,
    IMG_ID_AVATAR_RARROW_ON,
    IMG_ID_AVATAR_RARROW_SELECTED,

    IMG_ID_AVATAR_TOP_LARROW_ON,
    IMG_ID_AVATAR_TOP_LARROW_SELECTED,
    IMG_ID_AVATAR_TOP_RARROW_ON,
    IMG_ID_AVATAR_TOP_RARROW_SELECTED,    

    IMG_ID_AVATAR_TOGGLE1_ON,
    IMG_ID_AVATAR_TOGGLE1_SELECTED,
    IMG_ID_AVATAR_TOGGLE2_ON,
    IMG_ID_AVATAR_TOGGLE2_SELECTED,

    /* Total image count */
    IMG_ID_AVATAR_TOTAL_COUNT
} avatar_img_id_enum;


typedef enum
{
    IMG_ID_AVATAR_HEAD_START = IMG_ID_AVATAR_TOTAL_COUNT,
    IMG_ID_AVATAR_HEAD_1,
    IMG_ID_AVATAR_HEAD_2,
    IMG_ID_AVATAR_HEAD_3,
    IMG_ID_AVATAR_HEAD_4,
    IMG_ID_AVATAR_HEAD_COUNT 
}avatar_img_id_head_enum;

typedef enum
{
    IMG_ID_AVATAR_HAIR_START = IMG_ID_AVATAR_HEAD_COUNT,
    IMG_ID_AVATAR_HAIR_1,
    IMG_ID_AVATAR_HAIR_2,
    IMG_ID_AVATAR_HAIR_3,
    IMG_ID_AVATAR_HAIR_4,
    IMG_ID_AVATAR_HAIR_5,
    IMG_ID_AVATAR_HAIR_COUNT 
}avatar_img_id_hair_enum;

typedef enum
{
    IMG_ID_AVATAR_FACE_START = IMG_ID_AVATAR_HAIR_COUNT,
    IMG_ID_AVATAR_FACE_1,
    IMG_ID_AVATAR_FACE_2,
    IMG_ID_AVATAR_FACE_3,
    IMG_ID_AVATAR_FACE_4,
    IMG_ID_AVATAR_FACE_5,
    IMG_ID_AVATAR_FACE_COUNT 
}avatar_img_id_face_enum;

typedef enum
{
    IMG_ID_AVATAR_DRESS_START = IMG_ID_AVATAR_FACE_COUNT,
    IMG_ID_AVATAR_DRESS_1,
    IMG_ID_AVATAR_DRESS_2,
    IMG_ID_AVATAR_DRESS_3,
    IMG_ID_AVATAR_DRESS_4,
    IMG_ID_AVATAR_DRESS_5,
    IMG_ID_AVATAR_DRESS_6,
    IMG_ID_AVATAR_DRESS_COUNT 
}avatar_img_id_dress_enum;


typedef enum
{
    IMG_ID_AVATAR_EYE_START = IMG_ID_AVATAR_DRESS_COUNT,
    IMG_ID_AVATAR_EYE_1,
    IMG_ID_AVATAR_EYE_2,
    IMG_ID_AVATAR_EYE_3,
    IMG_ID_AVATAR_EYE_4,
    IMG_ID_AVATAR_EYE_5,
    IMG_ID_AVATAR_EYE_6,
    IMG_ID_AVATAR_EYE_7,
    IMG_ID_AVATAR_EYE_8,
    IMG_ID_AVATAR_EYE_9,
    IMG_ID_AVATAR_EYE_10,
    IMG_ID_AVATAR_EYE_COUNT 
}avatar_img_id_eye_enum;

typedef enum
{
    IMG_ID_AVATAR_LIP_START = IMG_ID_AVATAR_EYE_COUNT,
    IMG_ID_AVATAR_LIP_1,
    IMG_ID_AVATAR_LIP_2,
    IMG_ID_AVATAR_LIP_3,
    IMG_ID_AVATAR_LIP_4,
    IMG_ID_AVATAR_LIP_5,
    IMG_ID_AVATAR_LIP_6,
    IMG_ID_AVATAR_LIP_7,
    IMG_ID_AVATAR_LIP_8,
    IMG_ID_AVATAR_LIP_9,
    IMG_ID_AVATAR_LIP_10,
    IMG_ID_AVATAR_LIP_COUNT 
}avatar_img_id_lip_enum;

typedef enum
{
    IMG_ID_AVATAR_BROW_START = IMG_ID_AVATAR_LIP_COUNT,
    IMG_ID_AVATAR_BROW_1,
    IMG_ID_AVATAR_BROW_2,
    IMG_ID_AVATAR_BROW_3,
    IMG_ID_AVATAR_BROW_4,
    IMG_ID_AVATAR_BROW_5,
    IMG_ID_AVATAR_BROW_6,
    IMG_ID_AVATAR_BROW_COUNT 
}avatar_img_id_brow_enum;

typedef enum
{
    IMG_ID_AVATAR_BODY_START = IMG_ID_AVATAR_BROW_COUNT,
    IMG_ID_AVATAR_BODY_1,
    IMG_ID_AVATAR_BODY_2,
    IMG_ID_AVATAR_BODY_3,
    IMG_ID_AVATAR_BODY_4,
    IMG_ID_AVATAR_BODY_5,
    IMG_ID_AVATAR_BODY_COUNT 
}avatar_img_id_body_enum;

typedef enum
{
    IMG_ID_AVATAR_DECORATION_START = IMG_ID_AVATAR_BODY_COUNT,
    IMG_ID_AVATAR_DECORATION_1,
    IMG_ID_AVATAR_DECORATION_2,
    IMG_ID_AVATAR_DECORATION_3,
    IMG_ID_AVATAR_DECORATION_4,
    IMG_ID_AVATAR_DECORATION_COUNT 
}avatar_img_id_decoration_enum;

typedef enum
{
    /* Head */
    IMG_ID_AVATAR_HEAD_1_SELECTED = IMG_ID_AVATAR_DECORATION_COUNT ,
    IMG_ID_AVATAR_HEAD_2_SELECTED,
    IMG_ID_AVATAR_HEAD_3_SELECTED,
    IMG_ID_AVATAR_HEAD_4_SELECTED,

    /* Hair */
    IMG_ID_AVATAR_HAIR_1_SELECTED,
    IMG_ID_AVATAR_HAIR_2_SELECTED,
    IMG_ID_AVATAR_HAIR_3_SELECTED,
    IMG_ID_AVATAR_HAIR_4_SELECTED,
    IMG_ID_AVATAR_HAIR_5_SELECTED,
    
    /* Face */
    IMG_ID_AVATAR_FACE_1_SELECTED,
    IMG_ID_AVATAR_FACE_2_SELECTED,
    IMG_ID_AVATAR_FACE_3_SELECTED,
    IMG_ID_AVATAR_FACE_4_SELECTED,
    IMG_ID_AVATAR_FACE_5_SELECTED,

    /* Eye */
    IMG_ID_AVATAR_EYE_1_SELECTED,
    IMG_ID_AVATAR_EYE_2_SELECTED,
    IMG_ID_AVATAR_EYE_3_SELECTED,
    IMG_ID_AVATAR_EYE_4_SELECTED,
    IMG_ID_AVATAR_EYE_5_SELECTED,
    IMG_ID_AVATAR_EYE_6_SELECTED,
    IMG_ID_AVATAR_EYE_7_SELECTED,
    IMG_ID_AVATAR_EYE_8_SELECTED,
    IMG_ID_AVATAR_EYE_9_SELECTED,
    IMG_ID_AVATAR_EYE_10_SELECTED,

    /* LIP */
    IMG_ID_AVATAR_LIP_1_SELECTED,
    IMG_ID_AVATAR_LIP_2_SELECTED,
    IMG_ID_AVATAR_LIP_3_SELECTED,
    IMG_ID_AVATAR_LIP_4_SELECTED,
    IMG_ID_AVATAR_LIP_5_SELECTED,
    IMG_ID_AVATAR_LIP_6_SELECTED,
    IMG_ID_AVATAR_LIP_7_SELECTED,
    IMG_ID_AVATAR_LIP_8_SELECTED,
    IMG_ID_AVATAR_LIP_9_SELECTED,
    IMG_ID_AVATAR_LIP_10_SELECTED,

    /* Brow */
    IMG_ID_AVATAR_BROW_1_SELECTED,
    IMG_ID_AVATAR_BROW_2_SELECTED,
    IMG_ID_AVATAR_BROW_3_SELECTED,
    IMG_ID_AVATAR_BROW_4_SELECTED,
    IMG_ID_AVATAR_BROW_5_SELECTED,
    IMG_ID_AVATAR_BROW_6_SELECTED,

    /* Clothes */
    IMG_ID_AVATAR_BODY_1_SELECTED,
    IMG_ID_AVATAR_BODY_2_SELECTED,
    IMG_ID_AVATAR_BODY_3_SELECTED,
    IMG_ID_AVATAR_BODY_4_SELECTED,
    IMG_ID_AVATAR_BODY_5_SELECTED,

    /* Decoration */
    IMG_ID_AVATAR_DECORATION_1_SELECTED,
    IMG_ID_AVATAR_DECORATION_2_SELECTED,
    IMG_ID_AVATAR_DECORATION_3_SELECTED,
    IMG_ID_AVATAR_DECORATION_4_SELECTED,
    
    IMG_ID_AVATAR_SEL_ICON_COUNT
} avatar_img_id_selected_icon;

typedef enum
{
    IMG_ID_AVATAR_M_L_EYE_1 = IMG_ID_AVATAR_SEL_ICON_COUNT,
    IMG_ID_AVATAR_M_L_EYE_1_2,
    IMG_ID_AVATAR_M_L_EYE_1_3,
    IMG_ID_AVATAR_M_L_EYE_1_4,
    IMG_ID_AVATAR_M_L_EYE_1_5,
    IMG_ID_AVATAR_M_L_EYE_2 , 
    IMG_ID_AVATAR_M_L_EYE_2_2 , 
    IMG_ID_AVATAR_M_L_EYE_2_3 , 
    IMG_ID_AVATAR_M_L_EYE_2_4 , 
    IMG_ID_AVATAR_M_L_EYE_2_5 , 
    IMG_ID_AVATAR_M_L_EYE_3 ,
    IMG_ID_AVATAR_M_L_EYE_3_2 ,
    IMG_ID_AVATAR_M_L_EYE_3_3 ,
    IMG_ID_AVATAR_M_L_EYE_3_4 ,
    IMG_ID_AVATAR_M_L_EYE_3_5 ,
    IMG_ID_AVATAR_M_L_EYE_4 ,
    IMG_ID_AVATAR_M_L_EYE_4_2 ,
    IMG_ID_AVATAR_M_L_EYE_4_3 ,
    IMG_ID_AVATAR_M_L_EYE_4_4 ,
    IMG_ID_AVATAR_M_L_EYE_4_5 ,
    IMG_ID_AVATAR_M_L_EYE_5 ,
    IMG_ID_AVATAR_M_L_EYE_5_2 ,
    IMG_ID_AVATAR_M_L_EYE_5_3 ,
    IMG_ID_AVATAR_M_L_EYE_5_4 ,
    IMG_ID_AVATAR_M_L_EYE_5_5 ,
    IMG_ID_AVATAR_M_L_EYE_6 ,
    IMG_ID_AVATAR_M_L_EYE_6_2 ,
    IMG_ID_AVATAR_M_L_EYE_6_3 ,
    IMG_ID_AVATAR_M_L_EYE_6_4 ,
    IMG_ID_AVATAR_M_L_EYE_6_5 ,
    IMG_ID_AVATAR_M_L_EYE_7 ,
    IMG_ID_AVATAR_M_L_EYE_7_2 ,
    IMG_ID_AVATAR_M_L_EYE_7_3 ,
    IMG_ID_AVATAR_M_L_EYE_7_4 ,
    IMG_ID_AVATAR_M_L_EYE_7_5 ,
    IMG_ID_AVATAR_M_L_EYE_8 ,
    IMG_ID_AVATAR_M_L_EYE_8_2 ,
    IMG_ID_AVATAR_M_L_EYE_8_3 ,
    IMG_ID_AVATAR_M_L_EYE_8_4 ,
    IMG_ID_AVATAR_M_L_EYE_8_5 ,
    IMG_ID_AVATAR_M_L_EYE_9 ,
    IMG_ID_AVATAR_M_L_EYE_9_2 ,
    IMG_ID_AVATAR_M_L_EYE_9_3 ,
    IMG_ID_AVATAR_M_L_EYE_9_4 ,
    IMG_ID_AVATAR_M_L_EYE_9_5 ,
    IMG_ID_AVATAR_M_L_EYE_10, 
    IMG_ID_AVATAR_M_L_EYE_10_2 ,
    IMG_ID_AVATAR_M_L_EYE_10_3 ,
    IMG_ID_AVATAR_M_L_EYE_10_4 ,
    IMG_ID_AVATAR_M_L_EYE_10_5 , 
    IMG_ID_AVATAR_M_L_EYE_COUNT        
}avatar_img_id_material_left_eye_enum;

typedef enum
{
    IMG_ID_AVATAR_M_R_EYE_1 = IMG_ID_AVATAR_M_L_EYE_COUNT,
    IMG_ID_AVATAR_M_R_EYE_1_2,
    IMG_ID_AVATAR_M_R_EYE_1_3,
    IMG_ID_AVATAR_M_R_EYE_1_4,
    IMG_ID_AVATAR_M_R_EYE_1_5,
    IMG_ID_AVATAR_M_R_EYE_2 , 
    IMG_ID_AVATAR_M_R_EYE_2_2 , 
    IMG_ID_AVATAR_M_R_EYE_2_3 , 
    IMG_ID_AVATAR_M_R_EYE_2_4 , 
    IMG_ID_AVATAR_M_R_EYE_2_5 , 
    IMG_ID_AVATAR_M_R_EYE_3 ,
    IMG_ID_AVATAR_M_R_EYE_3_2 ,
    IMG_ID_AVATAR_M_R_EYE_3_3 ,
    IMG_ID_AVATAR_M_R_EYE_3_4 ,
    IMG_ID_AVATAR_M_R_EYE_3_5 ,
    IMG_ID_AVATAR_M_R_EYE_4 ,
    IMG_ID_AVATAR_M_R_EYE_4_2 ,
    IMG_ID_AVATAR_M_R_EYE_4_3 ,
    IMG_ID_AVATAR_M_R_EYE_4_4 ,
    IMG_ID_AVATAR_M_R_EYE_4_5 ,
    IMG_ID_AVATAR_M_R_EYE_5 ,
    IMG_ID_AVATAR_M_R_EYE_5_2 ,
    IMG_ID_AVATAR_M_R_EYE_5_3 ,
    IMG_ID_AVATAR_M_R_EYE_5_4 ,
    IMG_ID_AVATAR_M_R_EYE_5_5 ,
    IMG_ID_AVATAR_M_R_EYE_6 ,
    IMG_ID_AVATAR_M_R_EYE_6_2 ,
    IMG_ID_AVATAR_M_R_EYE_6_3 ,
    IMG_ID_AVATAR_M_R_EYE_6_4 ,
    IMG_ID_AVATAR_M_R_EYE_6_5 ,
    IMG_ID_AVATAR_M_R_EYE_7 ,
    IMG_ID_AVATAR_M_R_EYE_7_2 ,
    IMG_ID_AVATAR_M_R_EYE_7_3 ,
    IMG_ID_AVATAR_M_R_EYE_7_4 ,
    IMG_ID_AVATAR_M_R_EYE_7_5 ,
    IMG_ID_AVATAR_M_R_EYE_8 ,
    IMG_ID_AVATAR_M_R_EYE_8_2 ,
    IMG_ID_AVATAR_M_R_EYE_8_3 ,
    IMG_ID_AVATAR_M_R_EYE_8_4 ,
    IMG_ID_AVATAR_M_R_EYE_8_5 ,
    IMG_ID_AVATAR_M_R_EYE_9 ,
    IMG_ID_AVATAR_M_R_EYE_9_2 ,
    IMG_ID_AVATAR_M_R_EYE_9_3 ,
    IMG_ID_AVATAR_M_R_EYE_9_4 ,
    IMG_ID_AVATAR_M_R_EYE_9_5 ,
    IMG_ID_AVATAR_M_R_EYE_10, 
    IMG_ID_AVATAR_M_R_EYE_10_2 ,
    IMG_ID_AVATAR_M_R_EYE_10_3 ,
    IMG_ID_AVATAR_M_R_EYE_10_4 ,
    IMG_ID_AVATAR_M_R_EYE_10_5 , 
    IMG_ID_AVATAR_M_R_EYE_COUNT        
}avatar_img_id_material_right_eye_enum;

typedef enum
{
    IMG_ID_AVATAR_M_LIP_1 = IMG_ID_AVATAR_M_R_EYE_COUNT,
    IMG_ID_AVATAR_M_LIP_1_2 ,
    IMG_ID_AVATAR_M_LIP_1_3 ,
    IMG_ID_AVATAR_M_LIP_1_4 ,
    IMG_ID_AVATAR_M_LIP_1_5 ,
    IMG_ID_AVATAR_M_LIP_2 , 
    IMG_ID_AVATAR_M_LIP_2_2 ,
    IMG_ID_AVATAR_M_LIP_2_3 ,
    IMG_ID_AVATAR_M_LIP_2_4 ,
    IMG_ID_AVATAR_M_LIP_2_5 ,
    IMG_ID_AVATAR_M_LIP_3 ,
    IMG_ID_AVATAR_M_LIP_3_2 ,
    IMG_ID_AVATAR_M_LIP_3_3 ,
    IMG_ID_AVATAR_M_LIP_3_4 ,
    IMG_ID_AVATAR_M_LIP_3_5 ,
    IMG_ID_AVATAR_M_LIP_4 ,
    IMG_ID_AVATAR_M_LIP_4_2 ,
    IMG_ID_AVATAR_M_LIP_4_3 ,
    IMG_ID_AVATAR_M_LIP_4_4 ,
    IMG_ID_AVATAR_M_LIP_4_5 ,
    IMG_ID_AVATAR_M_LIP_5 ,
    IMG_ID_AVATAR_M_LIP_5_2 ,
    IMG_ID_AVATAR_M_LIP_5_3 ,
    IMG_ID_AVATAR_M_LIP_5_4 ,
    IMG_ID_AVATAR_M_LIP_5_5 ,
    IMG_ID_AVATAR_M_LIP_6 ,
    IMG_ID_AVATAR_M_LIP_6_2 ,
    IMG_ID_AVATAR_M_LIP_6_3 ,
    IMG_ID_AVATAR_M_LIP_6_4 ,
    IMG_ID_AVATAR_M_LIP_6_5 ,
    IMG_ID_AVATAR_M_LIP_7 ,
    IMG_ID_AVATAR_M_LIP_7_2 ,
    IMG_ID_AVATAR_M_LIP_7_3 ,
    IMG_ID_AVATAR_M_LIP_7_4 ,
    IMG_ID_AVATAR_M_LIP_7_5 ,
    IMG_ID_AVATAR_M_LIP_8 ,
    IMG_ID_AVATAR_M_LIP_8_2 ,
    IMG_ID_AVATAR_M_LIP_8_3 ,
    IMG_ID_AVATAR_M_LIP_8_4 ,
    IMG_ID_AVATAR_M_LIP_8_5 ,
    IMG_ID_AVATAR_M_LIP_9 ,
    IMG_ID_AVATAR_M_LIP_9_2 ,
    IMG_ID_AVATAR_M_LIP_9_3 ,
    IMG_ID_AVATAR_M_LIP_9_4 ,
    IMG_ID_AVATAR_M_LIP_9_5 ,
    IMG_ID_AVATAR_M_LIP_10, 
    IMG_ID_AVATAR_M_LIP_10_2 ,
    IMG_ID_AVATAR_M_LIP_10_3 ,
    IMG_ID_AVATAR_M_LIP_10_4 ,
    IMG_ID_AVATAR_M_LIP_10_5 ,
    IMG_ID_AVATAR_M_LIP_COUNT        
}avatar_img_id_material_lip_enum;

typedef enum
{
    IMG_ID_AVATAR_M_FACE_1 = IMG_ID_AVATAR_M_LIP_COUNT,
    IMG_ID_AVATAR_M_FACE_2 , 
    IMG_ID_AVATAR_M_FACE_3 ,
    IMG_ID_AVATAR_M_FACE_4 ,
    IMG_ID_AVATAR_M_FACE_5 ,
    IMG_ID_AVATAR_M_FACE_6 ,
    IMG_ID_AVATAR_M_FACE_7 ,
    IMG_ID_AVATAR_M_FACE_8 ,
    IMG_ID_AVATAR_M_FACE_9 ,
    IMG_ID_AVATAR_M_FACE_10,
    IMG_ID_AVATAR_M_FACE_COUNT        
}avatar_img_id_material_face_enum;

typedef enum
{
    IMG_ID_AVATAR_M_DECORATION_1 = IMG_ID_AVATAR_M_FACE_COUNT,
    IMG_ID_AVATAR_M_DECORATION_2 , 
    IMG_ID_AVATAR_M_DECORATION_3 ,
    IMG_ID_AVATAR_M_DECORATION_4 ,
    IMG_ID_AVATAR_M_DECORATION_5 ,
    IMG_ID_AVATAR_M_DECORATION_6 ,
    IMG_ID_AVATAR_M_DECORATION_7 ,
    IMG_ID_AVATAR_M_DECORATION_8 ,
    IMG_ID_AVATAR_M_DECORATION_9 ,
    IMG_ID_AVATAR_M_DECORATION_10,
    IMG_ID_AVATAR_M_DECORATION_COUNT        
}avatar_img_id_material_decoration_enum;

typedef enum
{
    IMG_ID_AVATAR_M_L_BROWS_1 = IMG_ID_AVATAR_M_DECORATION_COUNT,
    IMG_ID_AVATAR_M_L_BROWS_1_2,
    IMG_ID_AVATAR_M_L_BROWS_1_3,
    IMG_ID_AVATAR_M_L_BROWS_1_4,
    IMG_ID_AVATAR_M_L_BROWS_1_5,
    IMG_ID_AVATAR_M_L_BROWS_2 , 
    IMG_ID_AVATAR_M_L_BROWS_2_2 , 
    IMG_ID_AVATAR_M_L_BROWS_2_3 , 
    IMG_ID_AVATAR_M_L_BROWS_2_4 , 
    IMG_ID_AVATAR_M_L_BROWS_2_5 , 
    IMG_ID_AVATAR_M_L_BROWS_3 ,
    IMG_ID_AVATAR_M_L_BROWS_3_2 ,
    IMG_ID_AVATAR_M_L_BROWS_3_3 ,
    IMG_ID_AVATAR_M_L_BROWS_3_4 ,
    IMG_ID_AVATAR_M_L_BROWS_3_5 ,
    IMG_ID_AVATAR_M_L_BROWS_4 ,
    IMG_ID_AVATAR_M_L_BROWS_4_2 ,
    IMG_ID_AVATAR_M_L_BROWS_4_3 ,
    IMG_ID_AVATAR_M_L_BROWS_4_4 ,
    IMG_ID_AVATAR_M_L_BROWS_4_5 ,
    IMG_ID_AVATAR_M_L_BROWS_5 ,
    IMG_ID_AVATAR_M_L_BROWS_5_2 ,
    IMG_ID_AVATAR_M_L_BROWS_5_3 ,
    IMG_ID_AVATAR_M_L_BROWS_5_4 ,
    IMG_ID_AVATAR_M_L_BROWS_5_5 ,
    IMG_ID_AVATAR_M_L_BROWS_6 ,
    IMG_ID_AVATAR_M_L_BROWS_6_2 ,
    IMG_ID_AVATAR_M_L_BROWS_6_3 ,
    IMG_ID_AVATAR_M_L_BROWS_6_4 ,
    IMG_ID_AVATAR_M_L_BROWS_6_5 ,
    IMG_ID_AVATAR_M_L_BROWS_7 ,
    IMG_ID_AVATAR_M_L_BROWS_7_2 ,
    IMG_ID_AVATAR_M_L_BROWS_7_3 ,
    IMG_ID_AVATAR_M_L_BROWS_7_4 ,
    IMG_ID_AVATAR_M_L_BROWS_7_5 ,
    IMG_ID_AVATAR_M_L_BROWS_8 ,
    IMG_ID_AVATAR_M_L_BROWS_8_2 ,
    IMG_ID_AVATAR_M_L_BROWS_8_3 ,
    IMG_ID_AVATAR_M_L_BROWS_8_4 ,
    IMG_ID_AVATAR_M_L_BROWS_8_5 ,
    IMG_ID_AVATAR_M_L_BROWS_9 ,
    IMG_ID_AVATAR_M_L_BROWS_9_2 ,
    IMG_ID_AVATAR_M_L_BROWS_9_3 ,
    IMG_ID_AVATAR_M_L_BROWS_9_4 ,
    IMG_ID_AVATAR_M_L_BROWS_9_5 ,
    IMG_ID_AVATAR_M_L_BROWS_10, 
    IMG_ID_AVATAR_M_L_BROWS_10_2 ,
    IMG_ID_AVATAR_M_L_BROWS_10_3 ,
    IMG_ID_AVATAR_M_L_BROWS_10_4 ,
    IMG_ID_AVATAR_M_L_BROWS_10_5 , 
    IMG_ID_AVATAR_M_L_BROWS_COUNT        /*120*/
}avatar_img_id_material_left_brows_enum;

typedef enum
{
    IMG_ID_AVATAR_M_R_BROWS_1 = IMG_ID_AVATAR_M_L_BROWS_COUNT,
    IMG_ID_AVATAR_M_R_BROWS_1_2,
    IMG_ID_AVATAR_M_R_BROWS_1_3,
    IMG_ID_AVATAR_M_R_BROWS_1_4,
    IMG_ID_AVATAR_M_R_BROWS_1_5,
    IMG_ID_AVATAR_M_R_BROWS_2 , 
    IMG_ID_AVATAR_M_R_BROWS_2_2 , 
    IMG_ID_AVATAR_M_R_BROWS_2_3 , 
    IMG_ID_AVATAR_M_R_BROWS_2_4 , 
    IMG_ID_AVATAR_M_R_BROWS_2_5 , 
    IMG_ID_AVATAR_M_R_BROWS_3 ,
    IMG_ID_AVATAR_M_R_BROWS_3_2 ,
    IMG_ID_AVATAR_M_R_BROWS_3_3 ,
    IMG_ID_AVATAR_M_R_BROWS_3_4 ,
    IMG_ID_AVATAR_M_R_BROWS_3_5 ,
    IMG_ID_AVATAR_M_R_BROWS_4 ,
    IMG_ID_AVATAR_M_R_BROWS_4_2 ,
    IMG_ID_AVATAR_M_R_BROWS_4_3 ,
    IMG_ID_AVATAR_M_R_BROWS_4_4 ,
    IMG_ID_AVATAR_M_R_BROWS_4_5 ,
    IMG_ID_AVATAR_M_R_BROWS_5 ,
    IMG_ID_AVATAR_M_R_BROWS_5_2 ,
    IMG_ID_AVATAR_M_R_BROWS_5_3 ,
    IMG_ID_AVATAR_M_R_BROWS_5_4 ,
    IMG_ID_AVATAR_M_R_BROWS_5_5 ,
    IMG_ID_AVATAR_M_R_BROWS_6 ,
    IMG_ID_AVATAR_M_R_BROWS_6_2 ,
    IMG_ID_AVATAR_M_R_BROWS_6_3 ,
    IMG_ID_AVATAR_M_R_BROWS_6_4 ,
    IMG_ID_AVATAR_M_R_BROWS_6_5 ,
    IMG_ID_AVATAR_M_R_BROWS_7 ,
    IMG_ID_AVATAR_M_R_BROWS_7_2 ,
    IMG_ID_AVATAR_M_R_BROWS_7_3 ,
    IMG_ID_AVATAR_M_R_BROWS_7_4 ,
    IMG_ID_AVATAR_M_R_BROWS_7_5 ,
    IMG_ID_AVATAR_M_R_BROWS_8 ,
    IMG_ID_AVATAR_M_R_BROWS_8_2 ,
    IMG_ID_AVATAR_M_R_BROWS_8_3 ,
    IMG_ID_AVATAR_M_R_BROWS_8_4 ,
    IMG_ID_AVATAR_M_R_BROWS_8_5 ,
    IMG_ID_AVATAR_M_R_BROWS_9 ,
    IMG_ID_AVATAR_M_R_BROWS_9_2 ,
    IMG_ID_AVATAR_M_R_BROWS_9_3 ,
    IMG_ID_AVATAR_M_R_BROWS_9_4 ,
    IMG_ID_AVATAR_M_R_BROWS_9_5 ,
    IMG_ID_AVATAR_M_R_BROWS_10, 
    IMG_ID_AVATAR_M_R_BROWS_10_2 ,
    IMG_ID_AVATAR_M_R_BROWS_10_3 ,
    IMG_ID_AVATAR_M_R_BROWS_10_4 ,
    IMG_ID_AVATAR_M_R_BROWS_10_5 , 
    IMG_ID_AVATAR_M_R_BROWS_COUNT        
}avatar_img_id_material_right_brows_enum;
typedef enum
{
    IMG_ID_AVATAR_M_DRESS_1 = IMG_ID_AVATAR_M_R_BROWS_COUNT,
    IMG_ID_AVATAR_M_DRESS_2 , 
    IMG_ID_AVATAR_M_DRESS_3 ,
    IMG_ID_AVATAR_M_DRESS_4 ,
    IMG_ID_AVATAR_M_DRESS_5 ,
    IMG_ID_AVATAR_M_DRESS_6 ,
    IMG_ID_AVATAR_M_DRESS_7 ,
    IMG_ID_AVATAR_M_DRESS_8 ,
    IMG_ID_AVATAR_M_DRESS_9 ,
    IMG_ID_AVATAR_M_DRESS_10,
    IMG_ID_AVATAR_M_DRESS_COUNT        
}avatar_img_id_material_dress_enum;


typedef enum
{
    IMG_ID_AVATAR_M3D_HEAD = IMG_ID_AVATAR_M_DRESS_COUNT,
    IMG_ID_AVATAR_M3D_HAIR,
    IMG_ID_AVATAR_M3D_BODY,
    IMG_ID_AVATAR_M3D_COUNT    
}avatar_img_id_m3d_enum;

typedef enum
{
    IMG_ID_AVATAR_M3D_ANIMATION_1 = IMG_ID_AVATAR_M3D_COUNT,
    IMG_ID_AVATAR_M3D_ANIMATION_2,
    IMG_ID_AVATAR_M3D_ANIMATION_3,
    IMG_ID_AVATAR_M3D_ANIMATION_4,
    IMG_ID_AVATAR_M3D_ANIMATION_5,
    IMG_ID_AVATAR_M3D_ANIMATION_6,
    IMG_ID_AVATAR_M3D_ANIMATION_7,
    IMG_ID_AVATAR_M3D_ANIMATION_COUNT
}avatar_img_id_m3d_animation_enum;

#endif /* _AVATAR_RES_DEF_H_ */

