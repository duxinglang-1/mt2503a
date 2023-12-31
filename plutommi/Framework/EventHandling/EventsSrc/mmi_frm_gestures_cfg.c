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
*  mmi_frm_gestures_cfg.h
*
* Project:
* -------- 
*  MAUI
*
* Description:
* ------------
*  
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
 * removed!
*
*------------------------------------------------------------------------------
* Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
*============================================================================
****************************************************************************/
#include "mmi_features.h"

#if defined(__MMI_TOUCH_SCREEN__) && defined(__MMI_GESTURES_FRAMEWORK__) 

#include "mmi_frm_gestures.h"
#include "mmi_frm_gestures_gprot.h"
#include "mmi_frm_gestures_cfg.h"

/*****************************************************************************  
*   Local Variables 
*****************************************************************************/
const mmi_frm_gesture_struct mmi_frm_gesture_array[MMI_FRM_GESTURE_MAX] = 
{
    {MMI_FRM_GESTURE_DOWN,       {MMI_FRM_STROKES_DOWN, MMI_FRM_STROKES_END}},    
    {MMI_FRM_GESTURE_UP,         {MMI_FRM_STROKES_UP, MMI_FRM_STROKES_END}},
    {MMI_FRM_GESTURE_DOWN_LEFT,  {MMI_FRM_STROKES_DOWN_LEFT, MMI_FRM_STROKES_END}},
    {MMI_FRM_GESTURE_DOWN_RIGHT, {MMI_FRM_STROKES_DOWN_RIGHT, MMI_FRM_STROKES_END}},
    {MMI_FRM_GESTURE_UP_RIGHT,   {MMI_FRM_STROKES_UP_RIGHT, MMI_FRM_STROKES_END}},
    {MMI_FRM_GESTURE_UP_LEFT,    {MMI_FRM_STROKES_UP_LEFT, MMI_FRM_STROKES_END}},
    {MMI_FRM_GESTURE_RIGHT,      {MMI_FRM_STROKES_RIGHT, MMI_FRM_STROKES_END}},
    {MMI_FRM_GESTURE_LEFT,       {MMI_FRM_STROKES_LEFT, MMI_FRM_STROKES_END}},  

    {MMI_FRM_GESTURE_CLOCKWISE,     {MMI_FRM_STROKES_CLOCKWISE, MMI_FRM_STROKES_END}},
    {MMI_FRM_GESTURE_ANTICLOCKWISE, {MMI_FRM_STROKES_ANTICLOCKWISE, MMI_FRM_STROKES_END}},
    {MMI_FRM_GESTURE_SEMICIRCLE_UP,     {MMI_FRM_STROKES_SEMICIRCLE_UP, MMI_FRM_STROKES_END}},
    {MMI_FRM_GESTURE_SEMICIRCLE_DOWN,   {MMI_FRM_STROKES_SEMICIRCLE_DOWN, MMI_FRM_STROKES_END}},
    {MMI_FRM_GESTURE_SEMICIRCLE_LEFT,   {MMI_FRM_STROKES_SEMICIRCLE_LEFT, MMI_FRM_STROKES_END}},
    {MMI_FRM_GESTURE_SEMICIRCLE_RIGHT,  {MMI_FRM_STROKES_SEMICIRCLE_RIGHT, MMI_FRM_STROKES_END}},
    
    
    {MMI_FRM_GESTURE_BACKWARD, {MMI_FRM_STROKES_DOWN_LEFT, MMI_FRM_STROKES_DOWN_RIGHT, MMI_FRM_STROKES_END}},
    {MMI_FRM_GESTURE_FORWARD,  {MMI_FRM_STROKES_DOWN_RIGHT, MMI_FRM_STROKES_DOWN_LEFT, MMI_FRM_STROKES_END}},

    {MMI_FRM_GESTURE_RIGHT_BRACKET, {MMI_FRM_STROKES_RIGHT, MMI_FRM_STROKES_DOWN, MMI_FRM_STROKES_LEFT, MMI_FRM_STROKES_END}},
    {MMI_FRM_GESTURE_LEFT_BRACKET,  {MMI_FRM_STROKES_LEFT, MMI_FRM_STROKES_DOWN, MMI_FRM_STROKES_RIGHT, MMI_FRM_STROKES_END}}

};

#endif /* #if defined(__MMI_TOUCH_SCREEN__) && defined(__MMI_GESTURES_FRAMEWORK__) */
        

