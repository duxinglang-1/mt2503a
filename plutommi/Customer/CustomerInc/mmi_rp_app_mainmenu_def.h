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
 *   mmi_rp_app_mainmenu_def.h
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


#ifndef _MMI_RP_APP_MAINMENU_DEF_H
#define _MMI_RP_APP_MAINMENU_DEF_H




/******************** Menu resource IDs - begin ********************/
typedef enum
{
    MAIN_MENU_FILE_MNGR_MENUID = 47884 + 1, /* BASE_ID + 1 */
    MAIN_MENU_PHONEBOOK_MENUID,
    MAIN_MENU_FUNANDGAMES_MENUID,
    MAIN_MENU_EXTRA_MENUID,
    MAIN_MENU_CALL_LOG,
    MAIN_MENU_MULTIMEDIA_MENUID,
    MAIN_MENU_SERVICES_MENUID,
    MAIN_MENU_ORGANIZER_MENUID,
    MAIN_MENU_SETTINGS_MENUID,
    MAIN_MENU_SETTINGS_NO_SIM_MENUID,
    MAIN_MENU_WLAN_WIZARD_MENUID,
    MAIN_MENU_CALL_CENTER,
    MAIN_MENU_TOOLS_MENUID,
    IDLE_SCREEN_MENU_ID,
    MMI_RP_APP_MAINMENU_MENU_MAX
}mmi_rp_app_mainmenu_menu_enum;
/******************** Menu resource IDs - finish ********************/


/******************** String resource IDs - begin ********************/
typedef enum
{
    MAIN_MENU_TITLE_TEXT = 47884 + 1, /* BASE_ID + 1 */
    MAIN_MENU_MENU_TEXT,
    MAIN_MENU_PHONEBOOK_TEXT,
    MAIN_MENU_MESSAGES_TEXT,
    MAIN_MENU_WLAN_TEXT,
    MAIN_MENU_FUNANDGAMES_TEXT,
    MAIN_MENU_ORGANIZER_TEXT,
    MAIN_MENU_SETTINGS_TEXT,
    MAIN_MENU_SHORTCUTS_TEXT,
    MAIN_MENU_SERVICES_TEXT,
    MAIN_MENU_CALL_LOG_TEXT,
    MAIN_MENU_FILE_MNGR_TEXT,
    MAIN_MENU_MMEDIA_TEXT,
    MAIN_MENU_EXTRA_TEXT,
    MAIN_MENU_TOOLS_TEXT,
    MMI_RP_APP_MAINMENU_STR_MAX
}mmi_rp_app_mainmenu_str_enum;
/******************** String resource IDs - finish ********************/


/******************** Screen resource IDs - begin ********************/
typedef enum
{
    MAIN_MENU_SCREENID = 47884 + 1, /* BASE_ID + 1 */
    SCR_ID_FILE_MANAGER,
    SCR_ID_MMEDIA,
    SCR_ID_CAMERA,
    SCR_ID_FALL_DETECT,
    MMI_RP_APP_MAINMENU_SCR_MAX
}mmi_rp_app_mainmenu_scr_enum;
/******************** Screen resource IDs - finish ********************/
/******************** Template resource IDs - Begin ********************/
/******************** Template resource IDs - End ********************/

/******************** Venus XML resource IDs - Begin ********************/
typedef enum 
{

    MMI_RP_APP_MAINMENU_VXML_LAYOUT_MAX
} mmi_rp_app_mainmenu_vxml_layout_enum;
/******************** Venus XML resource IDs - End ********************/



/******************** Image resource IDs - begin ********************/
typedef enum
{
    MAIN_MENU_TITLE_ICON = 47884 + 1, /* BASE_ID + 1 */
    MAIN_MENU_MATRIX_ICON_IMGBASE,
    MAIN_MENU_MATRIX_PHONEBOOK_ICON,
    MAIN_MENU_MATRIX_MESSAGES_ICON,
    MAIN_MENU_MATRIX_FUNANDGAMES_ICON,
    MAIN_MENU_MATRIX_MRE_ICON,
    MAIN_MENU_MATRIX_ORGANIZER_ICON,
    MAIN_MENU_MATRIX_SETTINGS_ICON,
    MAIN_MENU_MATRIX_WLAN_ICON,
    MAIN_MENU_MATRIX_SERVICES_ICON,
    MAIN_MENU_MATRIX_CONNECTIVITY_ICON,
    MAIN_MENU_MATRIX_PROFILES_ICON,
    MAIN_MENU_MATRIX_CALL_LOG_ICON,
    MAIN_MENU_MATRIX_MULTIMEDIA_ICON,
    MAIN_MENU_MATRIX_FILEMNGR_ICON,
    MAIN_MENU_MATRIX_EXTRA_ICON,
    MAIN_MENU_MATRIX_TOOLS_ICON,
    MAIN_MENU_MATRIX_ICON_IMGBASE_MAX,
    MAIN_MENU_MATRIX_ICON_ANI_IMGBASE,
    MAIN_MENU_MATRIX_PHONEBOOK_ANIMATION,
    MAIN_MENU_MATRIX_MESSAGES_ANIMATION,
    MAIN_MENU_MATRIX_FUNANDGAMES_ANIMATION,
    MAIN_MENU_MATRIX_ORGANIZER_ANIMATION,
    MAIN_MENU_MATRIX_SETTINGS_ANIMATION,
    MAIN_MENU_MATRIX_WLAN_ANIMATION,
    MAIN_MENU_MATRIX_SERVICES_ANIMATION,
    MAIN_MENU_MATRIX_CONNECTIVITY_ANIMATION,
    MAIN_MENU_MATRIX_PROFILES_ANIMATION,
    MAIN_MENU_MATRIX_CALL_LOG_ANIMATION,
    MAIN_MENU_MATRIX_MULTIMEDIA_ANIMATION,
    MAIN_MENU_MATRIX_FILEMNGR_ANIMATION,
    MAIN_MENU_MATRIX_EXTRA_ANIMATION,
    MAIN_MENU_MATRIX_TOOLS_ANIMATION,
    MAIN_MENU_MATRIX_ICON_ANI_IMGBASE_MAX,
    MAIN_MENU_ICON_IMGBASE,
    MAIN_MENU_PHONEBOOK_ICON,
    MAIN_MENU_MESSAGES_ICON,
    MAIN_MENU_FUNANDGAMES_ICON,
    MAIN_MENU_MRE_ICON,
    MAIN_MENU_ORGANIZER_ICON,
    MAIN_MENU_SETTINGS_ICON,
    MAIN_MENU_WLAN_ICON,
    MAIN_MENU_SERVICES_ICON,
    MAIN_MENU_PROFILES_ICON,
    MAIN_MENU_CALL_LOG_ICON,
    MAIN_MENU_MULTIMEDIA_ICON,
    MAIN_MENU_FILEMNGR_ICON,
    MAIN_MENU_EXTRA_ICON,
    MAIN_MENU_TOOLS_ICON,
    MAIN_MENU_TITLE_EMPTY_ICON,
    MAIN_MENU_TITLE_ICON_BASE,
    MAIN_MENU_TITLE_PHONEBOOK_ICON,
    MAIN_MENU_TITLE_MESSAGES_ICON,
    MAIN_MENU_TITLE_FUNANDGAMES_ICON,
    MAIN_MENU_TITLE_MRE_ICON,
    MAIN_MENU_TITLE_ORGANIZER_ICON,
    MAIN_MENU_TITLE_SETTINGS_ICON,
    MAIN_MENU_TITLE_PROFILES_ICON,
    MAIN_MENU_TITLE_WLAN_ICON,
    MAIN_MENU_TITLE_SHORTCUTS_ICON,
    MAIN_MENU_TITLE_SERVICES_ICON,
    MAIN_MENU_TITLE_CALL_LOG_ICON,
    MAIN_MENU_TITLE_MULTIMEDIA_ICON,
    MAIN_MENU_TITLE_FILE_MNGR_ICON,
    MAIN_MENU_TITLE_EXTRA_APP_ICON,
    MAIN_MENU_TITLE_TOOLS_ICON,
    FALL_DETECT_IMAGE_1,
    FALL_DETECT_IMAGE_2,
    FALL_DETECT_IMAGE_3,
    MMI_RP_APP_MAINMENU_IMG_MAX
}mmi_rp_app_mainmenu_img_enum;
/******************** Image resource IDs - finish ********************/


#endif /* _MMI_RP_APP_MAINMENU_DEF_H */