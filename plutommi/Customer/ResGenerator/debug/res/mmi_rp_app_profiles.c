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

/*******************************************************************************
 * Filename:
 * ---------
 *   mmi_rp_app_profiles.c
 *
 * Project:
 * --------
 *   MAUI
 *
 * Description:
 * ------------
 *   Resource populate function generated by XML resgen
 *
 * Author:
 * -------
 *   MTK resgenerator XML parser
 *
 *******************************************************************************/
#include "CustDataProts.h"
#include "mmi_rp_app_profiles_def.h"

/* Application specified header files for using old res IDs */
#include "MMI_features.h"
#include "MMIDataType.h"    /* for resource base */

#include "CustResDef.h"         /* for image/audio path */
#include "GlobalMenuItems.h"    /* for menu resource */

#include "MainMenuDef.h"
#include "GlobalResDef.h"
#include "SettingResDef.h"
#include "mmi_rp_app_mainmenu_def.h"


/*****************************************************************************
* FUNCTION
*  mmi_rp_app_profiles_populate
* DESCRIPTION
*  Automatically generated populate function for mmi_rp_app_profiles_populate
* PARAMETERS
*  void
* RETURNS
*  void
*****************************************************************************/
void mmi_rp_app_profiles_populate(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/

/******************** Menu resource IDs - begin ********************/
    ADD_APPLICATION_MENUITEM5((
        MENU_ID_PROF_GENERAL,
        MAIN_MENU_PROFILES_MENUID,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_ID_PROF_GENERAL,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_PROF_SILENT,
        MAIN_MENU_PROFILES_MENUID,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_ID_PROF_SILENT,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_PROF_MEETING,
        MAIN_MENU_PROFILES_MENUID,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_ID_PROF_MEETING,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_PROF_OUTDOOR,
        MAIN_MENU_PROFILES_MENUID,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_ID_PROF_OUTDOOR,
        0));

    ADD_APPLICATION_MENUITEM5((
        MAIN_MENU_PROFILES_MENUID,
        0,
        4,
        MENU_ID_PROF_GENERAL,
        MENU_ID_PROF_SILENT,
        MENU_ID_PROF_MEETING,
        MENU_ID_PROF_OUTDOOR,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_APP_MAIN,
        STR_ID_PROF_CAPTION,
        MAIN_MENU_PROFILES_ICON));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_PROF_ACTIVATE,
        MENU_ID_PROF_MAIN_OPTIONS,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_GLOBAL_ACTIVATE,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_PROF_CUSTOMIZE,
        MENU_ID_PROF_MAIN_OPTIONS,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_ID_PROF_CUSTOMIZE,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_PROF_RESET,
        MENU_ID_PROF_MAIN_OPTIONS,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_GLOBAL_RESET,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_PROF_MAIN_OPTIONS,
        0,
        3,
        MENU_ID_PROF_ACTIVATE,
        MENU_ID_PROF_CUSTOMIZE,
        MENU_ID_PROF_RESET,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_OPTION,
        STR_GLOBAL_OPTIONS,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_PROF_CHANGE,
        MENU_ID_PROF_CUSTOMIZE_OPTIONS,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_ID_PROF_CHANGE,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_PROF_SAVE,
        MENU_ID_PROF_CUSTOMIZE_OPTIONS,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_GLOBAL_SAVE,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_PROF_CUSTOMIZE_OPTIONS,
        0,
        2,
        MENU_ID_PROF_CHANGE,
        MENU_ID_PROF_SAVE,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_OPTION,
        STR_GLOBAL_OPTIONS,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_PROF_RING_ONLY,
        MENU_ID_PROF_ALERT_TYPE,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_ID_PROF_RING_ONLY,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_PROF_VIB_ONLY,
        MENU_ID_PROF_ALERT_TYPE,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_ID_PROF_VIB_ONLY,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_PROF_VIB_AND_RING,
        MENU_ID_PROF_ALERT_TYPE,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_ID_PROF_VIB_AND_RING,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_PROF_VIB_THEN_RING,
        MENU_ID_PROF_ALERT_TYPE,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_ID_PROF_VIB_THEN_RING,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_PROF_ALERT_TYPE,
        0,
        4,
        MENU_ID_PROF_RING_ONLY,
        MENU_ID_PROF_VIB_ONLY,
        MENU_ID_PROF_VIB_AND_RING,
        MENU_ID_PROF_VIB_THEN_RING,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_APP_SUB,
        STR_ID_PROF_ALERT_TYPE,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_PROF_RINGING,
        MENU_ID_PROF_RING_TYPE,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_ID_PROF_RINGING,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_PROF_BEEP_ONCE,
        MENU_ID_PROF_RING_TYPE,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_ID_PROF_BEEP_ONCE,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_PROF_RING_TYPE,
        0,
        2,
        MENU_ID_PROF_RINGING,
        MENU_ID_PROF_BEEP_ONCE,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_APP_SUB,
        STR_ID_PROF_RING_TYPE,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_PROF_SILENT_TONE,
        MENU_ID_PROF_KEYPAD_TONE,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_GLOBAL_SILENT,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_PROF_CLICK,
        MENU_ID_PROF_KEYPAD_TONE,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_ID_PROF_CLICK,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_PROF_TONE,
        MENU_ID_PROF_KEYPAD_TONE,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_ID_PROF_TONE,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_PROF_KEYPAD_TONE,
        0,
        3,
        MENU_ID_PROF_SILENT_TONE,
        MENU_ID_PROF_CLICK,
        MENU_ID_PROF_TONE,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_APP_SUB,
        STR_ID_PROF_KEYPAD_TONE,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_PROF_SYSTEM_ALERT_ON,
        MENU_ID_PROF_SYSTEM_ALERT,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_GLOBAL_ON,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_PROF_SYSTEM_ALERT_OFF,
        MENU_ID_PROF_SYSTEM_ALERT,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_GLOBAL_OFF,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_PROF_SYSTEM_ALERT,
        0,
        2,
        MENU_ID_PROF_SYSTEM_ALERT_ON,
        MENU_ID_PROF_SYSTEM_ALERT_OFF,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_APP_SUB,
        STR_ID_PROF_SYSTEM_ALERT,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_PROF_RING_1,
        MENU_ID_TONE_SELECTOR,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        0,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_PROF_RING_2,
        MENU_ID_TONE_SELECTOR,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        0,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_PROF_RING_3,
        MENU_ID_TONE_SELECTOR,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        0,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_PROF_RING_4,
        MENU_ID_TONE_SELECTOR,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        0,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_PROF_RING_5,
        MENU_ID_TONE_SELECTOR,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        0,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_PROF_RING_6,
        MENU_ID_TONE_SELECTOR,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        0,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_PROF_RING_7,
        MENU_ID_TONE_SELECTOR,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        0,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_PROF_RING_8,
        MENU_ID_TONE_SELECTOR,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        0,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_PROF_RING_9,
        MENU_ID_TONE_SELECTOR,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        0,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_PROF_RING_10,
        MENU_ID_TONE_SELECTOR,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        0,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_PROF_RING_11,
        MENU_ID_TONE_SELECTOR,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        0,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_PROF_RING_12,
        MENU_ID_TONE_SELECTOR,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        0,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_PROF_RING_13,
        MENU_ID_TONE_SELECTOR,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        0,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_PROF_RING_14,
        MENU_ID_TONE_SELECTOR,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        0,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_PROF_RING_15,
        MENU_ID_TONE_SELECTOR,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        0,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_PROF_RING_16,
        MENU_ID_TONE_SELECTOR,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        0,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_PROF_RING_17,
        MENU_ID_TONE_SELECTOR,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        0,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_PROF_RING_18,
        MENU_ID_TONE_SELECTOR,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        0,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_PROF_RING_19,
        MENU_ID_TONE_SELECTOR,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        0,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_PROF_RING_20,
        MENU_ID_TONE_SELECTOR,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        0,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_PROF_RING_END,
        0,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        0,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_PROF_OPEN_GALLERY,
        MENU_ID_TONE_SELECTOR,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        0,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_PROF_TONE_SILENT,
        MENU_ID_TONE_SELECTOR,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        0,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_PROF_TONE_1,
        MENU_ID_TONE_SELECTOR,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        0,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_PROF_TONE_2,
        MENU_ID_TONE_SELECTOR,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        0,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_PROF_TONE_3,
        MENU_ID_TONE_SELECTOR,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        0,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_PROF_TONE_4,
        MENU_ID_TONE_SELECTOR,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        0,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_PROF_TONE_5,
        MENU_ID_TONE_SELECTOR,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        0,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_PROF_TONE_6,
        MENU_ID_TONE_SELECTOR,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        0,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_PROF_TONE_7,
        MENU_ID_TONE_SELECTOR,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        0,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_PROF_TONE_8,
        MENU_ID_TONE_SELECTOR,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        0,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_PROF_TONE_9,
        MENU_ID_TONE_SELECTOR,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        0,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_PROF_TONE_10,
        MENU_ID_TONE_SELECTOR,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        0,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_TONE_SELECTOR,
        0,
        32,
        MENU_ID_PROF_RING_1,
        MENU_ID_PROF_RING_2,
        MENU_ID_PROF_RING_3,
        MENU_ID_PROF_RING_4,
        MENU_ID_PROF_RING_5,
        MENU_ID_PROF_RING_6,
        MENU_ID_PROF_RING_7,
        MENU_ID_PROF_RING_8,
        MENU_ID_PROF_RING_9,
        MENU_ID_PROF_RING_10,
        MENU_ID_PROF_RING_11,
        MENU_ID_PROF_RING_12,
        MENU_ID_PROF_RING_13,
        MENU_ID_PROF_RING_14,
        MENU_ID_PROF_RING_15,
        MENU_ID_PROF_RING_16,
        MENU_ID_PROF_RING_17,
        MENU_ID_PROF_RING_18,
        MENU_ID_PROF_RING_19,
        MENU_ID_PROF_RING_20,
        MENU_ID_PROF_OPEN_GALLERY,
        MENU_ID_PROF_TONE_SILENT,
        MENU_ID_PROF_TONE_1,
        MENU_ID_PROF_TONE_2,
        MENU_ID_PROF_TONE_3,
        MENU_ID_PROF_TONE_4,
        MENU_ID_PROF_TONE_5,
        MENU_ID_PROF_TONE_6,
        MENU_ID_PROF_TONE_7,
        MENU_ID_PROF_TONE_8,
        MENU_ID_PROF_TONE_9,
        MENU_ID_PROF_TONE_10,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_APP_SUB,
        0,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_PROF_USE_AS_RINGTONE,
        0,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_ID_PROF_RING_TONE,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_PROF_USE_AS_SIM1_RINGTONE,
        0,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_ID_PROF_SIM1_RING_TONE,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_PROF_USE_AS_SIM2_RINGTONE,
        0,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_ID_PROF_SIM2_RING_TONE,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_PROF_USE_AS_SIM3_RINGTONE,
        0,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_ID_PROF_SIM3_RING_TONE,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_PROF_USE_AS_SIM4_RINGTONE,
        0,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_ID_PROF_SIM4_RING_TONE,
        0));

/******************** Menu resource IDs - finish ********************/

/******************** Menu Hilite/Hint Handlers - begin ********************/
    ADD_APPLICATION_MENUITEM_HILITE_HANDLER(MAIN_MENU_PROFILES_MENUID, highlight_mainmenu_profiles);
/******************** Menu Hilite/Hint Handlers - finish ********************/
}
