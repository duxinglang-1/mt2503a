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
 * mainmenu.c
 *
 * Project:
 * --------
 *   MAUI
 *
 * Description:
 * ------------
 *   This file is intends for main menu
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
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
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
/**
 * Copyright Notice
 * ?2002 - 2003, Pixtel Communications, Inc., 1489 43rd Ave. W.,
 * Vancouver, B.C. V6M 4K8 Canada. All Rights Reserved.
 *  (It is illegal to remove this copyright notice from this software or any
 *  portion of it)
 */

/**********************************************************************************
   Filename:      mainmenu.c
   Author:        manju, Vijay Vaidya
   Date Created:  September-07-2002
   Contains:      Main menu application
**********************************************************************************/
#include "MMI_features.h"
#include "AllAppGprot.h"
#include "MainMenuDef.h"
#include "MainMenuProt.h"
#include "SettingGprots.h"
#include "FunAndGamesProts.h"
#include "CallLogGprot.h"
#include "CommonScreens.h"
#include "IdleHomescreenGprot.h"
#include "MMIThemes.h"
#ifdef __MMI_BT_NOTIFICATION__
#include "btnotificationgprot.h"
#endif /* __MMI_BT_NOTIFICATION__ */
#ifdef __MMI_BT_REMOTE_CAPTURE__
#include "BtRmtCapGProt.h"
#endif/*__MMI_BT_REMOTE_CAPTURE__*/

#ifndef __MMI_TELEPHONY_SUPPORT__
#if defined (__MMI_CAMERA__) && !defined(__MMI_CAMCORDER__)
#include "CameraApp.h"
#endif
#if defined(__MMI_IMAGE_VIEWER__)
#include "ImgViewerGprot.h"
#include "ImageViewerGprot.h"
#endif
#if defined(__MMI_VIDEO_PLAYER__)
#include "VdoPlyGProt.h"
#endif
#if defined(__MMI_VIDEO_RECORDER__) && !defined(__MMI_CAMCORDER__)
#include "VdoRecGProt.h"
#endif
#endif /* __BT_DIALER_PACKAGE__ */


#ifndef __MMI_IDLE_CLASSIC_AND_MAINMENU_SUPPORT__

void handle_mainmenu_right_softkey_up(void){}
void highlight_mainmenu_profiles(void){}
void highlight_mainmenu_phonebook(void){}
void highlight_mainmenu_messages(void){}
#ifdef __MMI_BT_NOTIFICATION__
void highlight_mainmenu_btnotification(void){}
#endif /* __MMI_BT_NOTIFICATION__ */
void highlight_mainmenu_funandgames(void){}
void highlight_mainmenu_organizer(void){}
void highlight_mainmenu_settings(void){}
#ifdef __MMI_MRE_MAIN_MENU__
void highlight_mainmenu_mre(void){}
#endif
#ifndef __DISABLE_SHORTCUTS_IMPL__
void highlight_mainmenu_shortcuts(void){}
#endif 


void highlight_mainmenu_connect(void){}
void highlight_mainmenu_connectivity(void){}
void highlight_mainmenu_services(void){}

#ifdef __MMI_WLAN_FEATURES__
void highlight_mainmenu_WiFi_wizard(void){}
#endif

#if 0
#if (defined(__MMI_OP01_MENU_9MATRIX__) || defined(__MMI_OP01_MENU_12MATRIX__)) && defined(WAP_SUPPORT)
/* under construction !*/
/* under construction !*/
#endif /* __MMI_OP01_MENU_9MATRIX__ & WAP_SUPPORT */
/* under construction !*/
#if defined(__OP02__)
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
#endif /* __OP02_*/
#ifdef __MMI_CUSTOMER_SERVICE__
/* under construction !*/
#endif /* __MMI_CUSTOMER_SERVICE__ */
#ifdef __MMI_MOBILE_SERVICE__
/* under construction !*/
#ifdef __OP02_0200__ 
/* under construction !*/
#endif
#endif /* __MMI_MOBILE_SERVICE__ */
/* under construction !*/
#ifdef __MMI_MY_FAVORITE__
/* under construction !*/
#endif /* __MMI_MY_FAVORITE__ */
#if defined(__MMI_OP01_MENU_NOSIM_LIST__) || defined(__MMI_OP02_0100__)
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif /* __MMI_OP01_MENU_NOSIM_LIST__ || __MMI_OP02_0100__*/
#endif

void initalize_main_menu_application(void){}
void main_menu_shortcut_executer(S32 index){}
void main_menu_custom_highlight_handler(S32 index){}
void EntryMainMenuFromIdleScreen(void){}
void goto_main_menu(void){}
void mmi_main_menu_entry(void){}
#ifdef __MMI_TELEPHONY_SUPPORT__
void highlight_mainmenu_callcenter(void){}
#endif
void highlight_mainmenu_calllog(void){}
void highlight_mainmenu_multimedia(void){}
void highlight_mainmenu_filemngr(void){}
void highlight_mainmenu_extra(void){}
void EntryMainMultimedia(void){}
void mmi_entry_main_multimedia_screen(void){}
#ifdef __MMI_TELEPHONY_SUPPORT__
void mmi_settings_highlight_general_call_setting(void){}
#endif
void EntryMainExtra(void){}
void mmi_entry_main_extra_screen(void){}

#ifdef __MMI_SUBLCD_MASTER_MODE__

void ExitSubLCDMainMenuScreen(){}
void SubLCDMainMenuScreenHiliteHandler(S32 index){}
void EntrySubLCDMainMenuScreen(){}
U8 EntrySubLCDMainMenu(){}
#endif /* __MMI_SUBLCD_MASTER_MODE__ */
#ifdef __MMI_VUI_3D_MAINMENU__
void mmi_venus_3d_mm_launch_app(void *msgPtr, int mod_src)
#endif


#if 0
#if defined( __MMI_OP12_MENU_12MATRIX__)
/* under construction !*/
#endif
#if defined( __MMI_OP11_MENU_12MATRIX__) || defined(__MMI_OP12_MENU_12MATRIX__)
/* under construction !*/
#endif
#if defined(__MMI_OP01_MENU_NOSIM_LIST__) || defined(__MMI_OP02_0100__)
/* under construction !*/
#endif /* __MMI_OP01_MENU_NOSIM_LIST__ || __MMI_OP02_0100__ */
#if defined( __MMI_OP11_MENU_12MATRIX__) || defined( __MMI_OP12_MENU_12MATRIX__)
/* under construction !*/
#endif
/* under construction !*/
#ifdef __MMI_MESSAGES_CLUB__
/* under construction !*/
#endif 
#ifdef __OP01__
#if defined(__OP01_3G__) && defined(__MMI_MOBILE_TV_CMMB_SUPPORT__)
/* under construction !*/
#endif
#ifdef __MMI_139_PUSH_MAIL__
/* under construction !*/
#endif
#ifdef __MMI_MOBILE_VIDEO__
/* under construction !*/
#endif
#ifdef BROWSER_SUPPORT
/* under construction !*/
#endif
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif /* __OP01__ */
/* under construction !*/
#if defined(__MMI_OP02_0100__) && defined(WAP_SUPPORT)
/* under construction !*/
#endif /* __MMI_OP02_0100__ & WAP_SUPPORT */
/* under construction !*/
#ifdef __OP02_0200__
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#ifdef BROWSER_SUPPORT
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif
#endif /* __OP02_0200__ */
/* under construction !*/
#ifdef __MMI_OP02_LEMEI__
/* under construction !*/
/* under construction !*/
#endif
/* under construction !*/
#if defined(__OP01_FWPBW__)
/* under construction !*/
/* under construction !*/
#endif /* defined(__OP01_FWPBW__) */
#endif /* 0 */

#if defined(__MMI_BT_DIALER_SUPPORT__)
void mmi_entry_bt_dialer_application_scr(void){}
void highlight_mainmenu_bt_dialer(void){}
#endif
void EntryMainFileMngr(void){}
void ExitMainFileMngr(void){}

#if 0
#ifdef __MMI_BI_DEGREE_MAIN_MENU_STYLE__
/* under construction !*/
/* under construction !*/
#endif /* __MMI_BI_DEGREE_MAIN_MENU_STYLE__ */ 
#endif

void highlight_mainmenu_tools(void){};

#ifndef __MMI_TELEPHONY_SUPPORT__
#if defined (__MMI_CAMERA__) && !defined(__MMI_CAMCORDER__)
void highlight_mainmenu_camera(void) {}
#endif
#if defined(__MMI_IMAGE_VIEWER__)
void highlight_mainmenu_image_viewer(void){}
#endif
#if defined(__MMI_VIDEO_PLAYER__)
void highlight_mainmenu_video_player(void){}
#endif
#if defined(__MMI_VIDEO_RECORDER__) && !defined(__MMI_CAMCORDER__)
void highlight_mainmenu_video_recorder(void){}
#endif
#endif /* __BT_DIALER_PACKAGE__ */


#else /*__MMI_IDLE_CLASSIC_AND_MAINMENU_SUPPORT__*/


#include "Service.h"
#ifdef __SAT__
#include "SATGProts.h"
#endif 

#include "FunandGamesProts.h"
#include "MainMenudef.h"
#include "OrganizerGProt.h"
#ifdef __MMI_WLAN_FEATURES__
#include "DataAccountGProt.h"
#endif

#if 0
#ifdef __MMI_MOBILE_SERVICE__
/* under construction !*/
#endif
/* under construction !*/
#ifdef __MMI_CUSTOMER_SERVICE__
/* under construction !*/
#endif
/* under construction !*/
#ifdef __MMI_MY_FAVORITE__
/* under construction !*/
#endif
/* under construction !*/
#ifdef __MMI_VUI_SHELL_OP01_HOMESCREEN__
/* under construction !*/
#endif
/* under construction !*/
#ifdef __OP02__
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#ifdef __OP02_0200__
/* under construction !*/
#endif
#endif /* __OP02__ */
/* under construction !*/
#endif

#ifdef __MMI_MAINMENU_STYLE_CHANGE_EN__
extern U8 PhnsetGetMainMenuStyle(void);
#endif /* __MMI_MAINMENU_STYLE_CHANGE_EN__ */ 

#ifdef __J2ME__
#include "JavaAgencyGProt.h"
#endif

#ifdef __UM_SUPPORT__
#include "UMGProt.h"
#include "mmi_rp_app_unifiedmessage_def.h"
#else
#include "SmsAppGprot.h"
#include "mmi_rp_srv_sms_def.h"
#endif

#include "CallSetGprot.h"

#ifndef __DISABLE_SHORTCUTS_IMPL__
#include "mmi_rp_app_shortcuts_def.h"
#include "ShortcutsGProts.h"
#endif /* __DISABLE_SHORTCUTS_IMPL__ */

#include "stack_msgs.h"
#include "wgui_draw_manager.h"
#include "wgui_categories_enum.h"
#include "CustDataRes.h"
#include "wgui_title.h"
#include "GlobalMenuItems.h"
#include "MessagesMiscell.h"
#include "mmi_frm_queue_gprot.h"
#include "app_ltlcom.h"
#include "stack_config.h"
#include "gui_custom_menus.h"
#include "mmi_rp_app_mainmenu_def.h"
#include "wgui_fixed_menus.h"
#include "FileMgrGProt.h"
#include "SettingGenum.h"
#include "wgui_categories_util.h"
#include "mmi_rp_app_extra_def.h"
#include "GlobalResDef.h"
#include "browser_api.h"
#include "wgui_categories_mm.h"
#include "PhoneSetupGprots.h"

#if defined(__MMI_MAINMENU_SPREAD_SUPPORT__)
#include "AppMgrSrvGprot.h"
#include "MREAppMgrSrvGprot.h"
#include "AlertScreen.h"
#include "CommonScreensResDef.h"

#ifdef __MMI_USB_SUPPORT__
#include "USBSrvGprot.h"
#endif

#endif 

#ifdef __MMI_LINE_IN__
#include "LineinGprot.h"
#endif

extern void mmi_profiles_entry_main_screen(void);

#ifdef __SAT__
extern void GoToSATMainMenu(void);
#endif

extern U16 gMainMenuTitleIcon[];

extern S32 main_menu_index;
extern S32 MMI_main_menu_type;
extern UI_3D_circular_menu wgui_CM3D_menu;

#if 0
#ifdef __MMI_UI_DALMATIAN_SOFTKEYS__
/* under construction !*/
#endif 
#endif

#if defined(__MMI_FM_RADIO__) 
extern void mmi_fmrdo_skip_highlight_hdlr(S32 index);   /* defined in FMRadioSrc.c */
extern U16 mmi_fmrdo_check_chip_or_hide(U16 n_items, U16 *string_ids, U16 *icon_ids); /* defined in FMRadioSrc.c */
#endif /* defined(__MMI_FM_RADIO__)  */ 

#ifdef BROWSER_SUPPORT
extern void goto_mobile_suite_screen(void);
#endif

#ifdef __MMI_MRE_MAIN_MENU__
		extern void mmi_mre_start(void);
#endif

void (*MMI_main_menu_lsk_handler) (void);
void (*MMI_main_menu_rsk_handler) (void);


#ifdef __MMI_VUI_MAINMENU__
static void mmi_venus_entry_main_menu_style1(void);
static void mmi_venus_exit_main_menu_style1(void);
#endif

#if defined(__MMI_MAINMENU_SPREAD_SUPPORT__)
static void mmi_main_menu_entry_spread_matrix_style(void);
static mmi_ret mmi_main_menu_spread_matrix_style_event_handler(mmi_event_struct *event);
#endif


#ifdef __MMI_VUI_3D_MAINMENU__
static void mmi_venus_entry_3d_main_menu(void);
static void mmi_venus_exit_3d_main_menu(void);
#endif

#ifdef __MMI_VUI_LAUNCHER__
extern MMI_ID vapp_drawer_launch(void *param, U32 param_size);
#endif /* __MMI_VUI_LAUNCHER__ */
#ifdef __MMI_VUI_LAUNCHER_KEY__
extern MMI_ID vapp_launcher_mm_launch(void *param, U32 param_size);
#endif

#if 0
#ifdef __MMI_OP02_0100__
#ifdef __MMI_DUAL_SIM_MASTER__
/* under construction !*/
#endif
/* under construction !*/
/* under construction !*/
#endif
/* under construction !*/
#ifdef __OP01__
#if defined(__MMI_MOBILE_TV_CMMB_SUPPORT__)
/* under construction !*/
#endif
/* under construction !*/
/* under construction !*/
#if defined(__MMI_MOBILE_VIDEO__)
/* under construction !*/
#endif
/* under construction !*/
/* under construction !*/
#endif /* __OP01__ */
#endif
static mmi_ret mmi_main_submenu_proc(mmi_event_struct *evt);


#if defined(__MMI_MAINMENU_SPREAD_SUPPORT__)
static mmi_app_package_name_struct* mmi_mm_app_package_name_list = NULL;
static mmi_app_package_name_struct mmi_mm_app_highlight_item_name;
static srv_app_info_struct* mmi_mm_app_package_info = NULL;

#ifdef __MMI_USB_SUPPORT__
static S32 g_wgui_cat9015_n_items = 0;
#endif

extern void wgui_cat9015_show(
        U16 title,
        U16 title_icon,
        U16 left_softkey,
        U16 left_softkey_icon,
        U16 right_softkey,
        U16 right_softkey_icon,
        S32 number_of_items,
        srv_app_info_struct *info,
        S32 highlighted_item,
        U8 *history_buffer);

#endif

/*****************************************************************************
 * FUNCTION
 *  handle_mainmenu_right_softkey_up
 * DESCRIPTION
 *  Go to previous screen when rt soft key
 *  is released
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void handle_mainmenu_right_softkey_up(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    mmi_frm_scrn_close_active_id();
}


/*****************************************************************************
 * FUNCTION
 *  set_main_menu_softkey_handler
 * DESCRIPTION
 *  Go to previous screen when rt soft key
 *  is released
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
static set_main_menu_softkey_handler(void(*lsk)(void), void(*rsk)(void))
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
#ifdef __MMI_VUI_MAINMENU__
    MMI_main_menu_lsk_handler = lsk;
    MMI_main_menu_rsk_handler = rsk;
    change_left_softkey(NULL, NULL);
    change_right_softkey(NULL, NULL);
    if (lsk)
        SetLeftSoftkeyFunction(lsk, KEY_EVENT_UP);
    if (rsk)
        SetRightSoftkeyFunction(rsk, KEY_EVENT_UP);
 
#else /* __MMI_VUI_MAINMENU__ */
    ChangeLeftSoftkey(STR_GLOBAL_OK, IMG_GLOBAL_OK);
    ChangeRightSoftkey(STR_GLOBAL_BACK, IMG_GLOBAL_BACK);
    ChangeCenterSoftkey(0, IMG_GLOBAL_COMMON_CSK);    

    if (lsk)
    {
        SetLeftSoftkeyFunction(lsk, KEY_EVENT_UP);
        SetCenterSoftkeyFunction(lsk, KEY_EVENT_UP);
    }
    else
    {
        ChangeLeftSoftkey(0, 0);
        ChangeCenterSoftkey(0, 0);
        SetLeftSoftkeyFunction(NULL, KEY_EVENT_UP);
        SetCenterSoftkeyFunction(NULL, KEY_EVENT_UP);
    }

    if (rsk)
    {
        SetRightSoftkeyFunction(rsk, KEY_EVENT_UP);
    }
#endif /* __MMI_VUI_MAINMENU__ */
}


/*****************************************************************************
 * FUNCTION
 *  highlight_mainmenu_profiles
 * DESCRIPTION
 *  Associate the key handler
 *  with left and rt soft key
 *  
 *  AUTHOR            :Ashima
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void highlight_mainmenu_profiles(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    //ChangeLeftSoftkey(STR_GLOBAL_OK, IMG_GLOBAL_OK);
    //ChangeRightSoftkey(STR_GLOBAL_BACK, IMG_GLOBAL_BACK);

    //SetLeftSoftkeyFunction(mmi_profiles_entry_main_screen, KEY_EVENT_UP);
    //SetRightSoftkeyFunction(handle_mainmenu_right_softkey_up, KEY_EVENT_UP);
    set_main_menu_softkey_handler(mmi_profiles_entry_main_screen, handle_mainmenu_right_softkey_up);

}


/*****************************************************************************
 * FUNCTION
 *  highlight_mainmenu_phonebook
 * DESCRIPTION
 *  Associate the key handler
 *  with left and rt soft key
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void highlight_mainmenu_phonebook(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    //ChangeLeftSoftkey(STR_GLOBAL_OK, IMG_GLOBAL_OK);
    //ChangeRightSoftkey(STR_GLOBAL_BACK, IMG_GLOBAL_BACK);

    //SetLeftSoftkeyFunction(mmi_phb_entry_main_menu, KEY_EVENT_UP);
    //SetRightSoftkeyFunction(handle_mainmenu_right_softkey_up, KEY_EVENT_UP);
    set_main_menu_softkey_handler(mmi_phb_entry_main_menu, handle_mainmenu_right_softkey_up);

}

#ifdef __MMI_BT_NOTIFICATION__
void highlight_mainmenu_btnotification(void)
{
    set_main_menu_softkey_handler(mmi_btnotification_entry_main_message_menu, handle_mainmenu_right_softkey_up);
}
#endif /* __MMI_BT_NOTIFICATION__ */

#ifdef __MMI_BT_REMOTE_CAPTURE__
void highlight_mainmenu_btrmtcap(void)
{
    set_main_menu_softkey_handler(mmi_btrmtcap_entry_main_message_menu, handle_mainmenu_right_softkey_up);
}
#endif/*__MMI_BT_REMOTE_CAPTURE__*/

/*****************************************************************************
 * FUNCTION
 *  highlight_mainmenu_messages
 * DESCRIPTION
 *  Associate the key handler
 *  with left and rt soft key
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void highlight_mainmenu_messages(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    //ChangeLeftSoftkey(STR_GLOBAL_OK, IMG_GLOBAL_OK);
    //ChangeRightSoftkey(STR_GLOBAL_BACK, IMG_GLOBAL_BACK);

//#ifdef __MOD_SMSAL__
#ifdef __UM_SUPPORT__
    set_main_menu_softkey_handler(mmi_um_entry_main_message_menu, handle_mainmenu_right_softkey_up);
#else
	set_main_menu_softkey_handler(mmi_sms_entry_main_message_menu, handle_mainmenu_right_softkey_up);
#endif
//#endif 
}


/*****************************************************************************
 * FUNCTION
 *  highlight_mainmenu_funandgames
 * DESCRIPTION
 *  Associate the key handler
 *  with left and rt soft key
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void highlight_mainmenu_funandgames(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    //ChangeLeftSoftkey(STR_GLOBAL_OK, IMG_GLOBAL_OK);
    //ChangeRightSoftkey(STR_GLOBAL_BACK, IMG_GLOBAL_BACK);

    //SetLeftSoftkeyFunction(mmi_fng_entry_screen, KEY_EVENT_UP);
    //SetRightSoftkeyFunction(handle_mainmenu_right_softkey_up, KEY_EVENT_UP);
    set_main_menu_softkey_handler(mmi_fng_entry_screen, handle_mainmenu_right_softkey_up);
}


/*****************************************************************************
 * FUNCTION
 *  highlight_mainmenu_organizer
 * DESCRIPTION
 *  Associate the key handler
 *  with left and rt soft key
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void highlight_mainmenu_organizer(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    //ChangeLeftSoftkey(STR_GLOBAL_OK, IMG_GLOBAL_OK);
    //ChangeRightSoftkey(STR_GLOBAL_BACK, IMG_GLOBAL_BACK);

    //SetLeftSoftkeyFunction(EntryOrganizer, KEY_EVENT_UP);
    //SetRightSoftkeyFunction(handle_mainmenu_right_softkey_up, KEY_EVENT_UP);
    set_main_menu_softkey_handler(EntryOrganizer, handle_mainmenu_right_softkey_up);

}


/*****************************************************************************
 * FUNCTION
 *  highlight_mainmenu_settings
 * DESCRIPTION
 *  Associate the key handler
 *  with left and rt soft key
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void highlight_mainmenu_settings(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    //ChangeLeftSoftkey(STR_GLOBAL_OK, IMG_GLOBAL_OK);
    //ChangeRightSoftkey(STR_GLOBAL_BACK, IMG_GLOBAL_BACK);

    /* micha0420 */
    //SetLeftSoftkeyFunction(EntryScrSettingMenu, KEY_EVENT_UP);
    //SetRightSoftkeyFunction(handle_mainmenu_right_softkey_up, KEY_EVENT_UP);
    set_main_menu_softkey_handler(EntryScrSettingMenu, handle_mainmenu_right_softkey_up);

}


#ifdef __MMI_MRE_MAIN_MENU__

/*****************************************************************************
 * FUNCTION
 *  highlight_mainmenu_mre
 * DESCRIPTION
 *  Associate the key handler
 *  with left and rt soft key
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void highlight_mainmenu_mre(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    //ChangeLeftSoftkey(STR_GLOBAL_OK, IMG_GLOBAL_OK);
    //ChangeRightSoftkey(STR_GLOBAL_BACK, IMG_GLOBAL_BACK);

    //SetLeftSoftkeyFunction(appstore_main, KEY_EVENT_UP);
    //SetRightSoftkeyFunction(handle_mainmenu_right_softkey_up, KEY_EVENT_UP);
    set_main_menu_softkey_handler(mmi_mre_start, handle_mainmenu_right_softkey_up);
}
#endif


#ifndef __DISABLE_SHORTCUTS_IMPL__
/*****************************************************************************
 * FUNCTION
 *  highlight_mainmenu_shortcuts
 * DESCRIPTION
 *  Associate the key handler
 *  with left and rt soft key
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void highlight_mainmenu_shortcuts(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    set_main_menu_softkey_handler(mmi_shct_launch_quick_menu_cfg, handle_mainmenu_right_softkey_up);
}
#endif /* __DISABLE_SHORTCUTS_IMPL__ */ 


extern void EntryConnectivityMain(void);
void highlight_mainmenu_connectivity(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/ 
    set_main_menu_softkey_handler(EntryConnectivityMain, handle_mainmenu_right_softkey_up);
}

/*****************************************************************************
 * FUNCTION
 *  highlight_mainmenu_services
 * DESCRIPTION
 *  Associate the key handler
 *  with left and rt soft key
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void highlight_mainmenu_services(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    //ChangeLeftSoftkey(STR_GLOBAL_OK, IMG_GLOBAL_OK);
    //ChangeRightSoftkey(STR_GLOBAL_BACK, IMG_GLOBAL_BACK);

    /* micha1223 */
#ifdef __MMI_TELEPHONY_SUPPORT__
#ifdef __MMI_MERGE_SAT_TO_MAINMENU__
    /* micha1217 */
#ifndef BROWSER_SUPPORT
    /* micha0601 */
    if (IsSATPresent())
    {
        //SetLeftSoftkeyFunction(GoToSATMainMenu, KEY_EVENT_UP);
        set_main_menu_softkey_handler(GoToSATMainMenu, handle_mainmenu_right_softkey_up);
    }
    else
    {
        //SetLeftSoftkeyFunction(GoToServicesMenu, KEY_EVENT_UP);
        set_main_menu_softkey_handler(GoToServicesMenu, handle_mainmenu_right_softkey_up);
    }
#else /* BROWSER_SUPPORT */ 
    //SetLeftSoftkeyFunction(GoToServicesMenu, KEY_EVENT_UP);
    set_main_menu_softkey_handler(GoToServicesMenu, handle_mainmenu_right_softkey_up);
#endif /* BROWSER_SUPPORT */ 

#else /* __MMI_MERGE_SAT_TO_MAINMENU__ */ 

    //SetLeftSoftkeyFunction(GoToServicesMenu, KEY_EVENT_UP);
    set_main_menu_softkey_handler(GoToServicesMenu, handle_mainmenu_right_softkey_up);

#endif /* __MMI_MERGE_SAT_TO_MAINMENU__ */ 
#endif
    //SetRightSoftkeyFunction(handle_mainmenu_right_softkey_up, KEY_EVENT_UP);
}

#ifdef __MMI_WLAN_FEATURES__
/*****************************************************************************
 * FUNCTION
 *  highlight_mainmenu_WiFi_wizard
 * DESCRIPTION
 *  Associate the key handler
 *  with left and rt soft key
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void highlight_mainmenu_WiFi_wizard(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    //ChangeLeftSoftkey(STR_GLOBAL_OK, IMG_GLOBAL_OK);
    //ChangeRightSoftkey(STR_GLOBAL_BACK, IMG_GLOBAL_BACK);

    //SetLeftSoftkeyFunction(mmi_wlan_entry_wlan_wizard, KEY_EVENT_UP);


    //SetRightSoftkeyFunction(handle_mainmenu_right_softkey_up, KEY_EVENT_UP);
    set_main_menu_softkey_handler(mmi_wlan_entry_wlan_wizard_new, handle_mainmenu_right_softkey_up);

}
#endif

#if 0
#if (defined(__MMI_OP01_MENU_9MATRIX__) || defined(__MMI_OP01_MENU_12MATRIX__)) && defined(BROWSER_SUPPORT)
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
#ifdef BROWSER_SUPPORT
/* under construction !*/
/* under construction !*/
#else
/* under construction !*/
/* under construction !*/
#endif /* BROWSER_SUPPORT */ 
/* under construction !*/
#endif /* __MMI_OP01_MENU_9MATRIX__ & BROWSER_SUPPORT */
/* under construction !*/
#if defined(__MMI_OP02_0100__) && defined(BROWSER_SUPPORT)
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
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif /* __MMI_OP02_0100__ && BROWSER_SUPPORT */
/* under construction !*/
#if defined(__OP02__)
#ifdef BROWSER_SUPPORT
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
#else /* BROWSER_SUPPORT */
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
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif  /* BROWSER_SUPPORT */
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
#ifdef __MMI_DUAL_SIM_MASTER__
/* under construction !*/
#endif
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#ifndef __MMI_DUAL_SIM_MASTER__ 
/* under construction !*/
#else
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
#ifdef __MMI_OP02_MIDLET_116114__
/* under construction !*/
#endif
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
#ifdef __MMI_OP02_MIDLET_116114__
/* under construction !*/
#else
/* under construction !*/
#endif
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
#ifdef __MMI_OP02_MIDLET_MOBILE_TV__
/* under construction !*/
#else
/* under construction !*/
#endif
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
#ifdef __MMI_OP02_MIDLET_MOBILE_MUSIC__
/* under construction !*/
#else
/* under construction !*/
#endif
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
#ifdef __MMI_OP02_MIDLET_PUSH_MAIL__
/* under construction !*/
#else
/* under construction !*/
#endif
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
/* under construction !*/
#endif /* defined(__OP02__) */
/* under construction !*/
/* under construction !*/
#ifdef __MMI_CUSTOMER_SERVICE__
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
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif /* __MMI_CUSTOMER_SERVICE__ */
/* under construction !*/
#ifdef __MMI_MOBILE_SERVICE__
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
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#ifdef __OP02_0200__
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
/* under construction !*/
#endif /* __MMI_MOBILE_SERVICE__ */
/* under construction !*/
#ifdef __MMI_MY_FAVORITE__
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
#endif /* __MMI_MY_FAVORITE__ */
/* under construction !*/
#if defined(__MMI_OP01_MENU_NOSIM_LIST__) || defined(__MMI_OP02_0100__)
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
#endif /* __MMI_OP01_MENU_NOSIM_LIST__  || __MMI_OP02_0100__*/
/* under construction !*/
#endif /*0*/
extern void mmi_venus_3d_mm_launch_app(void *msgPtr, int mod_src);

/*****************************************************************************
 * FUNCTION
 *  initalize_main_menu_application
 * DESCRIPTION
 *  Set all highlte handler for main menu
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void initalize_main_menu_application(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
#if !defined(__MTK_TARGET__) 
    S32 n_items, HighlightMenu, write_len;
    FS_HANDLE bmp_file_handle;
#endif

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    mmi_frm_set_highlight_handler();
    initialize_mainmenu_title_icons();
#if 0
#if (defined(__MMI_MAINLCD_240X400__)&& !defined(__MMI_VUI_3D_MAINMENU__))
/* under construction !*/
#endif
#endif
#if !defined(__MTK_TARGET__) 
    n_items = GetNumOfChild_Ext(IDLE_SCREEN_MENU_ID);
    bmp_file_handle = FS_Open((WCHAR*)L"C:\\defaultindex", FS_CREATE_ALWAYS);
    HighlightMenu = 0;

#ifdef __MMI_MAINLCD_320X240__
    if ((n_items / 4) % 2)
    {
        HighlightMenu = (n_items - 1) >> 1;
    }
    else
    {
        HighlightMenu = (n_items - 1 - 4) >> 1;
    }
#else
    if (((n_items + 2)/ 3) % 2)
    {
        HighlightMenu = ((((n_items + 2)/ 3) * 3) - 1) >> 1;
    }
    else
    {
        HighlightMenu = ((((n_items + 2)/ 3) * 3) - 1 - 3) >> 1;
    }
#endif

#if 0
#ifdef __MMI_DEFAULT_MAIN_MENU_HIGHLIGHT_MESSAGE__
/* under construction !*/
#endif /* __MMI_DEFAULT_MAIN_MENU_HIGHLIGHT_MESSAGE__ */ 
#endif
    FS_Write(bmp_file_handle, (void*)&HighlightMenu, sizeof(S32), &write_len);
    FS_Close(bmp_file_handle);
#endif /*  !defined(__MTK_TARGET__)  */
#ifdef __MMI_VUI_3D_MAINMENU__
    mmi_frm_set_protocol_event_handler(MSG_ID_MMI_3D_MM_LAUNCH_APP_REQ, (PsIntFuncPtr)mmi_venus_3d_mm_launch_app, MMI_FALSE);
#endif
}


/*****************************************************************************
 * FUNCTION
 *  main_menu_shortcut_executer
 * DESCRIPTION
 *  Shortcut handler to main menu
 * PARAMETERS
 *  index       [IN]        
 * RETURNS
 *  void
 *****************************************************************************/
void main_menu_shortcut_executer(S32 index)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    S32 n_items = GetNumOfChild_Ext(IDLE_SCREEN_MENU_ID);

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    /* 
     * When matrix item number > 9, the menu shortcut will fail when going
     * to an invalid index. See fixed_matrix_goto_item().
     */
    if (((MMI_current_menu_type == MATRIX_MENU) || (MMI_current_menu_type == MATRIX_PAGE_MENU) )&&
        (MMI_fixed_matrix_menu.last_highlighted_item == -2))
    {
        return;
    }
    if (MMI_current_menu_type == PAGE_MENU)
    {
        return;
    }
    
    if (index >= 0 && index < n_items)
    {
        execute_left_softkey_function(KEY_EVENT_UP);
    }
}


/*****************************************************************************
 * FUNCTION
 *  main_menu_custom_highlight_handler
 * DESCRIPTION
 *  
 * PARAMETERS
 *  index       [IN]        
 * RETURNS
 *  void
 *****************************************************************************/
void main_menu_custom_highlight_handler(S32 index)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
#if 0
#if defined (__MMI_MAINMENU_240X400_SUPPORT_MATRIX_PAGE_MENU__) 
/* under construction !*/
#endif
#endif

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
#if 0
#ifdef __MMI_UI_DALMATIAN_SOFTKEYS__
/* under construction !*/
#endif 
#endif
    ExecuteCurrHiliteHandler_Ext(index);

#if 0
#ifdef __MMI_UI_DALMATIAN_SOFTKEYS__
/* under construction !*/
/* under construction !*/
#endif /* __MMI_UI_DALMATIAN_SOFTKEYS__ */ 
#endif

#ifndef __MMI_MATRIX_MAIN_MENU_NO_TITLEBAR__   
    {
    #if 0
    #if !defined(__MMI_MATRIX_MAIN_MENU_NO_TITLEBAR_ICON__) && !defined(__MMI_MAINLCD_96X64__) && (!defined(__MMI_MAINLCD_240X400__) || defined(__MMI_MAINMENU_240X400_SUPPORT_MATRIX_PAGE_MENU__))
/* under construction !*/
    #endif /* __MMI_MATRIX_MAIN_MENU_NO_TITLEBAR_ICON__ */
    #else
    #if !defined (__MMI_MAINLCD_96X64__)
        ChangeTitleIcon((U16) gMainMenuTitleIcon[index]);
    #endif
    #endif

        draw_title();
    }
#endif /* __MMI_MATRIX_MAIN_MENU_NO_TITLEBAR__ */ 

    main_menu_index = index;
#if 0
#if defined (__MMI_MAINMENU_240X400_SUPPORT_MATRIX_PAGE_MENU__) 
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
#endif
}


/*****************************************************************************
 * FUNCTION
 *  EntryMainMenuFromIdleScreen
 * DESCRIPTION
 *  
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void EntryMainMenuFromIdleScreen(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    goto_main_menu();
}
static mmi_id g_main_menu_group_id;
static void exit_main_menu(void);

#ifdef __MMI_MAINMENU_STYLE_CHANGE_EN__
static S32 mmi_get_mainmenu_attribute(U8 menu_style)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    S32 attributes = MATRIX_MENU;
    
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    switch (menu_style)
    {
#ifdef __MMI_MAINMENU_MATRIX_SUPPORT__  
        case PHNSET_MAINMENU_STYLE_MATRIX:
#if 0
#if defined (__MMI_MAINMENU_240X400_SUPPORT_MATRIX_PAGE_MENU__)
/* under construction !*/
#else
/* under construction !*/
#endif
#else
            attributes = MATRIX_MENU;
#endif
            break;
#endif /* __MMI_MAINMENU_MATRIX_SUPPORT__ */ 

#ifdef __MMI_MAINMENU_PAGE_SUPPORT__    
        case PHNSET_MAINMENU_STYLE_PAGE:
            attributes = PAGE_MENU;
            break;
#endif /* __MMI_MAINMENU_PAGE_SUPPORT__ */ 

#ifdef __MMI_MAINMENU_LIST_SUPPORT__
        case PHNSET_MAINMENU_STYLE_LIST:
            attributes = LIST_MENU;
            break;
#endif /* __MMI_MAINMENU_LIST_SUPPORT__ */ 
        default:
            MMI_ASSERT(0);
            break;
    }
    return attributes;
}
#endif /* __MMI_MAINMENU_STYLE_CHANGE_EN__ */


static U8 mmi_get_mainmenu_highlight_menu(S32 n_items)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    U8 HighlightMenu = 0;
    
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
//#ifdef __MMI_DEFAULT_MAIN_MENU_HIGHLIGHT_MESSAGE__
//    HighlightMenu = (U8)GetChildMenuIDIndexByParentMenuID(IDLE_SCREEN_MENU_ID, MAIN_MENU_MESSAGES_MENUID);

#if defined(__MMI_MAINLCD_320X240__)
    if ((n_items / 4) % 2)
    {
        HighlightMenu = (n_items - 1) >> 1;
    }
    else
    {
        HighlightMenu = (n_items - 1 - 4) >> 1;
    }
#elif defined(__MMI_MAINLCD_96X64__)
	HighlightMenu = 0;
#else
    if (((n_items + 2)/ 3) % 2)
    {
        HighlightMenu = ((((n_items + 2)/ 3) * 3) - 1) >> 1;
    }
    else
    {
        HighlightMenu = ((((n_items + 2)/ 3) * 3) - 1 - 3) >> 1;
    }
#endif

    return HighlightMenu;
}


#ifdef __MMI_MAINMENU_SPREAD_SUPPORT__
static void mmi_main_menu_launch_app(void);
static void mmi_main_menu_uninstall_app(void);
#endif
/*****************************************************************************
 * FUNCTION
 *  mmi_main_menu_proc
 * DESCRIPTION
 *  main menu group proc
 * PARAMETERS
 *  evt  [IN] event
 * RETURNS
 *  mmi_ret
 *****************************************************************************/
static mmi_ret mmi_main_menu_proc(mmi_event_struct* evt)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
#ifdef __MMI_MAINMENU_SPREAD_SUPPORT__
    MMI_BOOL closeMenu = MMI_FALSE;
#endif

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
#ifdef __MMI_MAINMENU_SPREAD_SUPPORT__
	switch(evt->evt_id)
	{
		case EVT_ID_CUI_MENU_LIST_ENTRY:
		{
			break;
		}
		case EVT_ID_CUI_MENU_ITEM_SELECT:
		{
			cui_menu_event_struct *event = (cui_menu_event_struct *)evt;

            if (event->highlighted_menu_id == MENU_ID_MAIN_MENU_OPTIONS_OPEN)
            {
                mmi_main_menu_launch_app();
            }
            else if (event->highlighted_menu_id == MENU_ID_MAIN_MENU_OPTIONS_UNINSTALLED)
            {
                mmi_main_menu_uninstall_app();
            }

			break;
		}
		case EVT_ID_CUI_MENU_CLOSE_REQUEST:
		{
			cui_menu_event_struct *event = (cui_menu_event_struct *)evt;
			
			cui_menu_close(event->sender_id);
			break;
		}
		default:
			break;
	}
#endif

    switch(evt->evt_id)
    {
        case EVT_ID_GROUP_ACTIVE:
        case EVT_ID_GROUP_INACTIVE:
        case EVT_ID_GROUP_DEINIT:
            break;
        default:
            break;
    }
    return MMI_RET_OK;
}

/*****************************************************************************
 * FUNCTION
 *  goto_main_menu
 * DESCRIPTION
 *  Lanch the main menu group
 *  
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void goto_main_menu(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
#ifdef __MMI_VUI_LAUNCHER__
#ifdef __MMI_VUI_LAUNCHER_KEY__
	if(mmi_phnset_launcher_get_launcher_type() == MMI_PHNSET_LAUNCHER_KEY)
        vapp_launcher_mm_launch(NULL, 0);
	else
#endif
    vapp_drawer_launch(NULL, 0);
    return;
#endif /* __MMI_VUI_LAUNCHER__ */

#ifdef __MMI_VUI_LAUNCHER_KEY__
    vapp_launcher_mm_launch(NULL, 0);
    return;
#endif
    g_main_menu_group_id = mmi_frm_group_create(GRP_ID_ROOT, GRP_ID_AUTO_GEN, mmi_main_menu_proc, NULL);

    mmi_frm_group_enter(g_main_menu_group_id, MMI_FRM_NODE_SMART_CLOSE_FLAG);

    mmi_main_menu_entry();
}

#define TYPE(A)	TYPE_(A)
#define TYPE_(A) A##_MENU


/*****************************************************************************
 * FUNCTION
 *  mmi_main_menu_entry
 * DESCRIPTION
 *  Display the main menu.
 *  
 *  This a entry function for the main menu
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void mmi_main_menu_entry(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    MMI_ID_TYPE mm_stringIDs[MAX_MAIN_MENU_ITEMS];
    MMI_ID_TYPE mm_iconIDs[MAX_MAIN_MENU_ITEMS];

    U8 *history_buffer;
    S32 n_items;
    S32 attributes;
    U8 HighlightMenu = 0;

    MMI_ID_TYPE *iconList;
#ifdef __MMI_MAINMENU_STYLE_CHANGE_EN__
    U8 menu_style = 0;
#endif
    MMI_ID_TYPE mm_iconIDs_display[MAX_MAIN_MENU_ITEMS];
    U8 i = 0;
    MMI_MENU_ID mmi_menuitem_list[MAX_MAIN_MENU_ITEMS];

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    if(mmi_frm_scrn_enter(g_main_menu_group_id, MAIN_MENU_SCREENID, exit_main_menu, mmi_main_menu_entry, MMI_FRM_FULL_SCRN) == MMI_FALSE)
    {
        return;
    }
#ifdef __MMI_VUI_3D_MAINMENU__

	mmi_venus_entry_3d_main_menu();
	return;

#elif defined(__MMI_VUI_MAINMENU__)
    mmi_venus_entry_main_menu_style1();
    return;

#elif defined(__MMI_MAINMENU_SPREAD_SUPPORT__)
    mmi_main_menu_entry_spread_matrix_style();
    return;
#endif  /* __MMI_VUI_3D_MAINMENU__ */

    gui_sse_setup_scenario(GUI_SSE_SCENARIO_ENTER_MAINMENU);

#if 0
#if defined( __MMI_OP12_MENU_12MATRIX__)
    #ifdef __SAT__
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
    #endif
#endif
#endif

    history_buffer = mmi_frm_scrn_get_active_gui_buf();
    n_items = GetNumOfChild_Ext(IDLE_SCREEN_MENU_ID);
    GetSequenceStringIds_Ext(IDLE_SCREEN_MENU_ID, mm_stringIDs);
    GetSequenceImageIds_Ext(IDLE_SCREEN_MENU_ID, mm_iconIDs);
    SetParentHandler(IDLE_SCREEN_MENU_ID);
    attributes = TYPE(__MMI_MAINMENU_TYPE__);

    HighlightMenu = mmi_get_mainmenu_highlight_menu(n_items);

#if defined(__MMI_BT_DIALER_SUPPORT__) 
    HighlightMenu = 0;
#endif

#ifdef __MMI_MAINMENU_STYLE_CHANGE_EN__
    menu_style = PhnsetGetMainMenuStyle();
    attributes = mmi_get_mainmenu_attribute(menu_style);
//#elif (defined(__OPTR_NONE__) && defined(__MMI_MAINMENU_240X400_SUPPORT_MATRIX_PAGE_MENU__))
//	if(attributes == MATRIX_MENU)
//		attributes = MATRIX_PAGE_MENU;
#endif
    GetSequenceItemIds_Ext(IDLE_SCREEN_MENU_ID, mmi_menuitem_list);
    switch (attributes)
    {
        //case MATRIX_PAGE_MENU:
        case MATRIX_MENU:
            {
                for (i = 0; i < n_items; i++)
                {
                    mm_iconIDs_display[i] = mmi_res_get_mainmenu_img(mmi_menuitem_list[i], MMI_RG_MM_IMG_MATRIX);
                }
                iconList = mm_iconIDs_display;
                break;
            }
        case PAGE_MENU:
            {
                for (i = 0; i < n_items; i++)
                {
                    mm_iconIDs_display[i] = mmi_res_get_mainmenu_img(mmi_menuitem_list[i], MMI_RG_MM_IMG_PAGE);
                }
                iconList = mm_iconIDs_display;
                break;
            }
        case LIST_MENU:
            {
                for (i = 0; i < n_items; i++)
                {
                    mm_iconIDs_display[i] = mmi_res_get_mainmenu_img(mmi_menuitem_list[i], MMI_RG_MM_IMG_LIST);
                }
                iconList = mm_iconIDs_display;
                break;
            }
        default:
            iconList = mm_iconIDs;
            break;
    }
 
    RegisterHighlightHandler(main_menu_custom_highlight_handler);
#if 0
#ifdef __MMI_UI_DALMATIAN_SOFTKEYS__
/* under construction !*/
#endif 
#endif

#if defined(__MMI_MAINLCD_128X64__)
	wgui_cat9014_show(
        STR_GLOBAL_OK,
        STR_GLOBAL_BACK,
        n_items,
        mm_stringIDs,
        iconList,
        HighlightMenu,
        (U8*) history_buffer);
#else /* __MMI_BI_DEGREE_MAIN_MENU_STYLE__ */ 
    ShowCategory14Screen(
        MAIN_MENU_TITLE_TEXT,
        MAIN_MENU_TITLE_ICON,
        STR_GLOBAL_OK,
        IMG_GLOBAL_OK,
        STR_GLOBAL_BACK,
        IMG_GLOBAL_BACK,
        n_items,
        mm_stringIDs,
        iconList,
        attributes,
        HighlightMenu,
        (U8*) history_buffer);
#endif /* __MMI_BI_DEGREE_MAIN_MENU_STYLE__ */ 

    register_menu_shortcut_selected(main_menu_shortcut_executer);
    SetRightSoftkeyFunction(mmi_frm_scrn_close_active_id, KEY_EVENT_UP);
}


/*****************************************************************************
 * FUNCTION
 *  exit_main_menu
 * DESCRIPTION
 *  Store the  snap shot
 *  before displaying next screen
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
static void exit_main_menu(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
	mmi_frm_scrn_add_history(g_main_menu_group_id, MAIN_MENU_SCREENID);

#ifdef __MMI_VUI_MAINMENU__    
    mmi_venus_exit_main_menu_style1();
    return;
#endif
#ifdef __MMI_VUI_3D_MAINMENU__
	mmi_venus_exit_3d_main_menu();
    return;
#endif
    /* unhide possible hidden menus in order to keep compatibility to other screens */
    mmi_frm_unhide_menu_item(MAIN_MENU_EXTRA_MENUID);
    mmi_frm_unhide_menu_item(MAIN_MENU_MULTIMEDIA_MENUID);
    mmi_frm_unhide_menu_item(MAIN_MENU_FUNANDGAMES_MENUID);

    /* Re-initialize title icons since the MM category modifies gMainMenuTitleIcon[]. */
    // TODO: If items are different in selectable MMs, GetRootTitleIcon() may go wrong.
    initialize_mainmenu_title_icons();

#if defined(__MMI_MAINMENU_SPREAD_SUPPORT__)
    if (mmi_mm_app_package_name_list)
    {
        mmi_frm_scrmem_free(mmi_mm_app_package_name_list);
        mmi_mm_app_package_name_list = NULL;
    }
    if (mmi_mm_app_package_info)
    {
        mmi_frm_scrmem_free(mmi_mm_app_package_info);
        mmi_mm_app_package_info = NULL;
    }

    mmi_frm_cb_dereg_event(EVT_ID_SRV_APPMGR_UPDATE_BADGE, mmi_main_menu_spread_matrix_style_event_handler, NULL);

#endif
}


#if defined(__MMI_MAINMENU_SPREAD_SUPPORT__)
mmi_ret mmi_main_update(mmi_event_struct* evt)
{
    if(evt->evt_id == EVT_ID_SRV_APPMGR_UPDATE_INSTALLED_PACKAGE)
    {
        if(mmi_frm_scrn_get_active_id() == MAIN_MENU_SCREENID)
        {              
            exit_main_menu();           
            mmi_main_menu_entry();            
        }               
    }
    return MMI_RET_OK;    
}
#endif


#ifdef __MMI_TELEPHONY_SUPPORT__
/*****************************************************************************
 * FUNCTION
 *  highlight_mainmenu_callcenter
 * DESCRIPTION
 *  
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void highlight_mainmenu_callcenter(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    set_main_menu_softkey_handler(mmi_callset_call_center_launch, handle_mainmenu_right_softkey_up);
}
#endif



/*****************************************************************************
 * FUNCTION
 *  highlight_mainmenu_calllog
 * DESCRIPTION
 *  
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void highlight_mainmenu_calllog(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
     set_main_menu_softkey_handler(mmi_clog_launch, mmi_frm_scrn_close_active_id);
}

#if 0
/* under construction !*/
#if defined( __MMI_OP12_MENU_12MATRIX__)
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
#ifdef __SAT__
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif /* __SAT__ */
/* under construction !*/
/* under construction !*/
#endif
/* under construction !*/
#if defined( __MMI_OP11_MENU_12MATRIX__) || defined( __MMI_OP12_MENU_12MATRIX__)
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
#endif
/*****************************************************************************
 * FUNCTION
 *  highlight_mainmenu_multimedia
 * DESCRIPTION
 *  
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void highlight_mainmenu_multimedia(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    //ChangeLeftSoftkey(STR_GLOBAL_OK, IMG_GLOBAL_OK);
    //ChangeRightSoftkey(STR_GLOBAL_BACK, IMG_GLOBAL_BACK);

    //SetLeftSoftkeyFunction(EntryMainMultimedia, KEY_EVENT_UP);
    //SetRightSoftkeyFunction(GoBackHistory, KEY_EVENT_UP);
    set_main_menu_softkey_handler(EntryMainMultimedia, handle_mainmenu_right_softkey_up);
}


/*****************************************************************************
 * FUNCTION
 *  highlight_mainmenu_filemngr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void highlight_mainmenu_filemngr(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    //ChangeLeftSoftkey(STR_GLOBAL_OK, IMG_GLOBAL_OK);
    //ChangeRightSoftkey(STR_GLOBAL_BACK, IMG_GLOBAL_BACK);

    //SetRightSoftkeyFunction(GoBackHistory, KEY_EVENT_UP);

#ifdef __MMI_FILE_MANAGER__
    //SetLeftSoftkeyFunction(mmi_fmgr_launch, KEY_EVENT_UP);
    set_main_menu_softkey_handler(mmi_fmgr_launch, handle_mainmenu_right_softkey_up);

#else /* __MMI_FILE_MANAGER__ */ 

    //SetLeftSoftkeyFunction(NULL, KEY_EVENT_UP);
    set_main_menu_softkey_handler(NULL, handle_mainmenu_right_softkey_up);
    ClearKeyHandler(KEY_RIGHT_ARROW, KEY_EVENT_DOWN);
#endif /* __MMI_FILE_MANAGER__ */ 
}


/*****************************************************************************
 * FUNCTION
 *  highlight_mainmenu_extra
 * DESCRIPTION
 *  
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void highlight_mainmenu_extra(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    //ChangeLeftSoftkey(STR_GLOBAL_OK, IMG_GLOBAL_OK);
    //ChangeRightSoftkey(STR_GLOBAL_BACK, IMG_GLOBAL_BACK);

    //SetLeftSoftkeyFunction(EntryMainExtra, KEY_EVENT_UP);
    //SetRightSoftkeyFunction(GoBackHistory, KEY_EVENT_UP);
    set_main_menu_softkey_handler(EntryMainExtra, handle_mainmenu_right_softkey_up);
}

static mmi_id g_tools_group_id;

/*****************************************************************************
 * FUNCTION
 *  mmi_entry_main_tools_screen
 * DESCRIPTION
 *  
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
static void mmi_entry_main_tools_screen(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    U16 ItemList[MAX_SUB_MENUS];
    U16 ItemIcons[MAX_SUB_MENUS];
    U16 nItems;
    U8 *guiBuffer;
	U16 menu_item_id;
	U16 menu_text_id;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    if(mmi_frm_scrn_enter(g_tools_group_id, SCR_EXTRA, NULL, mmi_entry_main_tools_screen, MMI_FRM_FULL_SCRN) == MMI_FALSE)
    {
        return;
    }
#if 0
#ifndef __DISABLE_SHORTCUTS_MENU__
#if defined(__MMI_OP11_HOMESCREEN_0302__)
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif
#endif /* __DISABLE_SHORTCUTS_MENU__ */
#endif

    /* For matrix 3x3, when support bt dialer, not support MRE, merge Fools and Fun to 'Tools & Fun' */
#if defined(__MMI_TELEPHONY_SUPPORT__) && defined(__MMI_BT_DIALER_SUPPORT__) && (defined(__MMI_MAINLCD_176X220__) || defined(__MMI_MAINLCD_240X320__)) && !defined(__MMI_MRE_MAIN_MENU__) 
	menu_item_id = MAIN_MENU_TOOLSANDFUN_MENUID;
	menu_text_id = MAIN_MENU_TOOLSANDFUN_TEXT;
#else
	menu_item_id = MAIN_MENU_TOOLS_MENUID;
	menu_text_id = MAIN_MENU_TOOLS_TEXT;
#endif

    guiBuffer = mmi_frm_scrn_get_active_gui_buf();
    nItems = GetNumOfChild_Ext(menu_item_id);
    GetSequenceStringIds_Ext(menu_item_id, ItemList);
    GetSequenceImageIds_Ext(menu_item_id, ItemIcons);
    SetParentHandler(menu_item_id);
    RegisterHighlightHandler(ExecuteCurrHiliteHandler);
	wgui_list_menu_enable_access_by_shortcut();
    if (nItems == 0)
    {
        ShowCategory52Screen(
            menu_text_id,
            GetRootTitleIcon(menu_item_id),
            0,
            0,
            STR_GLOBAL_BACK,
            IMG_GLOBAL_BACK,
            nItems,
            ItemList,
            ItemIcons,
            0,
            0,
            0,
            guiBuffer);
    }
    else
    {
        ShowCategory52Screen(
            menu_text_id,
            GetRootTitleIcon(menu_item_id),
            STR_GLOBAL_OK,
            IMG_GLOBAL_OK,
            STR_GLOBAL_BACK,
            IMG_GLOBAL_BACK,
            nItems,
            ItemList,
            ItemIcons,
            0,
            0,
            0,
            guiBuffer);
    }
    SetRightSoftkeyFunction(mmi_frm_scrn_close_active_id, KEY_EVENT_UP);
}

/*****************************************************************************
 * FUNCTION
 *  EntryMainExtra
 * DESCRIPTION
 *  entry extra app
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
static void EntryMainTools(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
     g_tools_group_id = mmi_frm_group_create(GRP_ID_ROOT, GRP_ID_AUTO_GEN, mmi_main_submenu_proc, NULL);
     mmi_frm_group_enter(g_tools_group_id, MMI_FRM_NODE_SMART_CLOSE_FLAG);
     mmi_entry_main_tools_screen();
}

/*****************************************************************************
 * FUNCTION
 *  highlight_mainmenu_tools
 * DESCRIPTION
 *  
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void highlight_mainmenu_tools(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/

    set_main_menu_softkey_handler(EntryMainTools, handle_mainmenu_right_softkey_up);
}


/* Max: temporary define here, shall be moved to each application file */

#define SCR_FILE_MANAGER   SCR_ID_FILE_MANAGER
#define SCR_MMEDIA         SCR_ID_MMEDIA
#define SCR_CAMERA         SCR_ID_CAMERA 

#if 0
#if defined(__MMI_OP01_MENU_NOSIM_LIST__) || defined(__MMI_OP02_0100__)
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
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#if defined(__MMI_FM_RADIO__)
/* under construction !*/
/* under construction !*/
#else /* defined(__MMI_FM_RADIO__)  */ 
/* under construction !*/
#endif /* defined(__MMI_FM_RADIO__) */ 
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
#endif /* __MMI_OP01_MENU_NOSIM_LIST__ || __MMI_OP02_0100__ */
#endif

static mmi_id g_media_group_id;
static mmi_ret mmi_main_submenu_proc(mmi_event_struct *evt)
{
    switch(evt->evt_id)
    {
        case EVT_ID_GROUP_ACTIVE:
        case EVT_ID_GROUP_INACTIVE:
        case EVT_ID_GROUP_DEINIT:
            break;
        default:
            break;
    }
    return MMI_RET_OK;
}
static void mmi_main_multimedia_highlight_hdlr(S32 index)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    FuncPtr lsk_handler = NULL;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
#if defined(__MMI_FM_RADIO__)
    mmi_fmrdo_skip_highlight_hdlr(index);
#else
    ExecuteCurrHiliteHandler(index);
#endif
    lsk_handler = get_softkey_function(KEY_EVENT_UP,MMI_LEFT_SOFTKEY);
    if(lsk_handler)
    {
        ChangeCenterSoftkey(0, IMG_GLOBAL_COMMON_CSK);
        SetCenterSoftkeyFunction(lsk_handler, KEY_EVENT_UP);
    }
}
/*****************************************************************************
 * FUNCTION
 *  EntryMainMultimedia
 * DESCRIPTION
 *  
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void EntryMainMultimedia(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
     g_media_group_id = mmi_frm_group_create(GRP_ID_ROOT, GRP_ID_AUTO_GEN, mmi_main_submenu_proc, NULL);
     mmi_frm_group_enter(g_media_group_id, MMI_FRM_NODE_SMART_CLOSE_FLAG);
     mmi_entry_main_multimedia_screen();
}


/*****************************************************************************
 * FUNCTION
 *  EntryMainMultimedia
 * DESCRIPTION
 *  
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void mmi_entry_main_multimedia_screen(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    U16 ItemList[MAX_SUB_MENUS];
    U16 ItemIcons[MAX_SUB_MENUS];
    U16 nItems;
    U8 *guiBuffer;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    if(mmi_frm_scrn_enter(g_media_group_id, SCR_MMEDIA, NULL, mmi_entry_main_multimedia_screen, MMI_FRM_FULL_SCRN) == MMI_FALSE)
    {
        return;
    }
    guiBuffer = mmi_frm_scrn_get_active_gui_buf();
    nItems = GetNumOfChild_Ext(MAIN_MENU_MULTIMEDIA_MENUID);
    GetSequenceStringIds_Ext(MAIN_MENU_MULTIMEDIA_MENUID, ItemList);
    GetSequenceImageIds_Ext(MAIN_MENU_MULTIMEDIA_MENUID, ItemIcons);
    SetParentHandler(MAIN_MENU_MULTIMEDIA_MENUID);
    RegisterHighlightHandler(ExecuteCurrHiliteHandler);

#if defined(__MMI_FM_RADIO__)
    RegisterHighlightHandler(mmi_main_multimedia_highlight_hdlr);
    nItems = mmi_fmrdo_check_chip_or_hide(nItems, ItemList, ItemIcons);
#else /* defined(__MMI_FM_RADIO__) */ 
    RegisterHighlightHandler(mmi_main_multimedia_highlight_hdlr);
#endif /* defined(__MMI_FM_RADIO__) */ 

#if defined(__MMI_LINE_IN__)
    nItems = mmi_linein_check_plug_in_or_hide(nItems, ItemList, ItemIcons);
#endif  //defined(__MMI_LINE_IN__)

	wgui_list_menu_enable_access_by_shortcut();
    ShowCategory52Screen(
        MAIN_MENU_MMEDIA_TEXT,
        GetRootTitleIcon(MAIN_MENU_MULTIMEDIA_MENUID),
        STR_GLOBAL_OK,
        IMG_GLOBAL_OK,
        STR_GLOBAL_BACK,
        IMG_GLOBAL_BACK,
        nItems,
        ItemList,
        ItemIcons,
        0,
        0,
        0,
        guiBuffer);

    SetRightSoftkeyFunction(mmi_frm_scrn_close_active_id, KEY_EVENT_UP);

}


#ifdef __MMI_TELEPHONY_SUPPORT__
//#if defined(__MMI_OP11_MENU_12MATRIX__) || defined(__MMI_OP12_MENU_12MATRIX__) || defined(__MMI_OP02_MAINMENU_12MATRIX__) || defined(__MMI_OP02_MAINMENU_9MATRIX__)
/*****************************************************************************
 * FUNCTION
 *  mmi_settings_highlight_general_call_setting
 * DESCRIPTION
 *  
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void mmi_settings_highlight_general_call_setting(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body */
    /*----------------------------------------------------------------*/
//#ifndef __COSMOS_MMI_PACKAGE__
    SetLeftSoftkeyFunction(mmi_callset_call_setting_launch, KEY_EVENT_UP);
    SetRightSoftkeyFunction(GoBackHistory, KEY_EVENT_UP);
    ChangeCenterSoftkey(0, IMG_GLOBAL_COMMON_CSK);
    SetCenterSoftkeyFunction(mmi_callset_call_setting_launch, KEY_EVENT_UP);
//#endif /* __COSMOS_MMI_PACKAGE__ */
}
//#endif

extern void mmi_dialer_launch(void);

/*****************************************************************************
 * FUNCTION
 *  mmi_settings_highlight_general_call_dialer
 * DESCRIPTION
 *  
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void mmi_settings_highlight_general_call_dialer(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body */
    /*----------------------------------------------------------------*/
    SetLeftSoftkeyFunction(mmi_dialer_launch, KEY_EVENT_UP);
    SetRightSoftkeyFunction(GoBackHistory, KEY_EVENT_UP);
    ChangeCenterSoftkey(0, IMG_GLOBAL_COMMON_CSK);
    SetCenterSoftkeyFunction(mmi_dialer_launch, KEY_EVENT_UP);
}


#endif

#if 0
#if defined( __MMI_OP11_MENU_12MATRIX__) || defined( __MMI_OP12_MENU_12MATRIX__)
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
#if defined(__MMI_FM_RADIO__)
/* under construction !*/
#else
/* under construction !*/
#endif
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
#if defined(__MMI_FM_RADIO__) 
/* under construction !*/
/* under construction !*/
#else /* defined(__MMI_FM_RADIO__) */ 
/* under construction !*/
#endif /* defined(__MMI_FM_RADIO__) */ 
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
#endif

static mmi_id g_extra_group_id;

/*****************************************************************************
 * FUNCTION
 *  EntryMainExtra
 * DESCRIPTION
 *  entry extra app
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void EntryMainExtra(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
     g_extra_group_id = mmi_frm_group_create(GRP_ID_ROOT, GRP_ID_AUTO_GEN, mmi_main_submenu_proc, NULL);
     mmi_frm_group_enter(g_extra_group_id, MMI_FRM_NODE_SMART_CLOSE_FLAG);
     mmi_entry_main_extra_screen();
}
/*****************************************************************************
 * FUNCTION
 *  EntryMainExtra
 * DESCRIPTION
 *  
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void mmi_entry_main_extra_screen(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    U16 ItemList[MAX_SUB_MENUS];
    U16 ItemIcons[MAX_SUB_MENUS];
    U16 nItems;
    U8 *guiBuffer;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    if(mmi_frm_scrn_enter(g_extra_group_id, SCR_EXTRA, NULL, mmi_entry_main_extra_screen, MMI_FRM_FULL_SCRN) == MMI_FALSE)
    {
        return;
    }

#if 0
#ifndef __DISABLE_SHORTCUTS_MENU__
#if defined(__MMI_OP11_HOMESCREEN_0302__)
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif
#endif /* __DISABLE_SHORTCUTS_MENU__ */
#endif

    guiBuffer = mmi_frm_scrn_get_active_gui_buf();
    nItems = GetNumOfChild_Ext(MAIN_MENU_EXTRA_MENUID);
    GetSequenceStringIds_Ext(MAIN_MENU_EXTRA_MENUID, ItemList);
    GetSequenceImageIds_Ext(MAIN_MENU_EXTRA_MENUID, ItemIcons);
    SetParentHandler(MAIN_MENU_EXTRA_MENUID);
    RegisterHighlightHandler(ExecuteCurrHiliteHandler);
	wgui_list_menu_enable_access_by_shortcut();
    if (nItems == 0)
    {
        ShowCategory52Screen(
            MAIN_MENU_EXTRA_TEXT,
            GetRootTitleIcon(MAIN_MENU_EXTRA_MENUID),
            0,
            0,
            STR_GLOBAL_BACK,
            IMG_GLOBAL_BACK,
            nItems,
            ItemList,
            ItemIcons,
            0,
            0,
            0,
            guiBuffer);
    }
    else
    {
        ShowCategory52Screen(
            MAIN_MENU_EXTRA_TEXT,
            GetRootTitleIcon(MAIN_MENU_EXTRA_MENUID),
            STR_GLOBAL_OK,
            IMG_GLOBAL_OK,
            STR_GLOBAL_BACK,
            IMG_GLOBAL_BACK,
            nItems,
            ItemList,
            ItemIcons,
            0,
            0,
            0,
            guiBuffer);
    }
    SetRightSoftkeyFunction(mmi_frm_scrn_close_active_id, KEY_EVENT_UP);
}


#ifdef __MMI_SUBLCD_MASTER_MODE__
static U16	main_menu_hilited_index = 0;

/*****************************************************************************
 * FUNCTION
 *  ExitSubLCDMainMenuScreen
 * DESCRIPTION
 *  Exit SubLCD MainMenu Screen
 * PARAMETERS
 * RETURNS
 *  void
 *****************************************************************************/
void ExitSubLCDMainMenuScreen()
{
    main_menu_hilited_index = 0;
    ForceEntrySubLCDSlave();
    GoBackHistory();
    /*
     * At the function EntrySubLCDMasterFromIdle(), we may freeze subLCD to avoid update subLCD when interrupt occurs.
     * When exit subLCD main menu screen, we will unfreeze the subLCD.
     */
    UI_set_sub_LCD_graphics_context();
    gdi_lcd_freeze(FALSE);
    UI_set_main_LCD_graphics_context();
}


/*****************************************************************************
 * FUNCTION
 *  EntrySubLCDMainMenuScreen
 * DESCRIPTION
 *  Entry SubLCD MainMenu Screen
 * PARAMETERS
 * RETURNS
 *  void
 *****************************************************************************/
void SubLCDMainMenuScreenHiliteHandler(S32 index)
{
    main_menu_hilited_index = index;
    ExecuteCurrHiliteHandler(index);
}


/*****************************************************************************
 * FUNCTION
 *  EntrySubLCDMainMenuScreen
 * DESCRIPTION
 *  Entry SubLCD MainMenu Screen
 * PARAMETERS
 * RETURNS
 *  void
 *****************************************************************************/
void EntrySubLCDMainMenuScreen()
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    U8 *guiBuffer;
    S32 numOfItems = 0;
    U16 itemList[MAX_SUB_MENUS];
    U16 itemIcon[MAX_SUB_MENUS];

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    ExecSubLCDCurrExitHandler();
    DinitSubLCDHistory();
	ClearAllKeyHandler();
	
    SetParentHandler(MENU_ID_SUB_MAIN_MENU);

    numOfItems = GetNumOfChild_Ext(MENU_ID_SUB_MAIN_MENU);

    GetSequenceStringIds_Ext(MENU_ID_SUB_MAIN_MENU, itemList);
    GetSequenceImageIds_Ext(MENU_ID_SUB_MAIN_MENU, itemIcon);

    RegisterHighlightHandler(SubLCDMainMenuScreenHiliteHandler);

	
    ShowCategory314Screen(
        (U8*)GetString(MAIN_MENU_MENU_TEXT),
        0, 
        numOfItems,
        itemList,
        itemIcon,
        NULL, 
        main_menu_hilited_index,
        NULL);

    SetKeyHandler( ExitSubLCDMainMenuScreen, KEY_FWD, KEY_EVENT_UP);
}


/*****************************************************************************
 * FUNCTION
 *  EntrySubLCDMainMenu
 * DESCRIPTION
 *  Entry SubLCD MainMenu
 * PARAMETERS
 * RETURNS
 *  void
 *****************************************************************************/
U8 EntrySubLCDMainMenu()
{
    if (SetSubLCDInMasterMode())
    {
        DisplaySubLCDScreen(SUB_MAIN_MENU_SCREENID, EntrySubLCDMainMenuScreen, TRUE);
    	return TRUE;		
    }
    return FALSE;	
}

#endif /* __MMI_SUBLCD_MASTER_MODE__ */


#ifdef __MMI_VUI_MAINMENU__
extern void vadp_p2v_main_menu_style1_entry(void);
extern void vadp_p2v_main_menu_style1_exit(void);


/*****************************************************************************
 * FUNCTION
 *  mmi_venus_entry_main_menu_style1
 * DESCRIPTION
 *  Display the style 1 main menu.
 *  
 *  This a entry function for the main menu
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
static void mmi_venus_entry_main_menu_style1(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
	gui_screen_switch_effect_block(MMI_TRUE); // avoid sse conflict with entry effect 
    vadp_p2v_main_menu_style1_entry();
}


/*****************************************************************************
 * FUNCTION
 *  mmi_venus_exit_main_menu_style1
 * DESCRIPTION
 *  Exit the style 1 main menu.
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/

static void mmi_venus_exit_main_menu_style1(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    vadp_p2v_main_menu_style1_exit();
}

#endif

#ifdef __MMI_VUI_3D_MAINMENU__
extern void vadp_p2v_3d_main_menu_exit(void);
extern void vadp_p2v_3d_main_menu_entry(void);

/*****************************************************************************
 * FUNCTION
 *  mmi_venus_entry_main_menu_style1
 * DESCRIPTION
 *  Display the style 1 main menu.
 *  
 *  This a entry function for the main menu
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
static void mmi_venus_entry_3d_main_menu(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
	vadp_p2v_3d_main_menu_entry();
	MMI_main_menu_rsk_handler = mmi_frm_scrn_close_active_id;
}


/*****************************************************************************
 * FUNCTION
 *  mmi_venus_exit_main_menu_style1
 * DESCRIPTION
 *  Exit the style 1 main menu.
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/

static void mmi_venus_exit_3d_main_menu(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
	vadp_p2v_3d_main_menu_exit();
	MMI_main_menu_rsk_handler = NULL;
}


void mmi_venus_3d_mm_launch_app(void *msgPtr, int mod_src)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    mmi_3d_mm_launch_app_req_struct * req_ptr = (mmi_3d_mm_launch_app_req_struct*)msgPtr;

    FuncPtr launch_func = mmi_res_get_mainmenu_launch_handler(req_ptr->menu_id);

    U8 result = 1;

    mmi_3d_mm_launch_app_rsp_struct *local;
    
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/

    if(launch_func)
        launch_func();
    else
        result = 0;
	local = (mmi_3d_mm_launch_app_rsp_struct *)mmi_construct_msg_local_para(sizeof(mmi_3d_mm_launch_app_rsp_struct));
    local->result = result;
    
	mmi_frm_send_ilm(MOD_L4C, MSG_ID_MMI_3D_MM_LAUNCH_APP_RSP, (local_para_struct *)local, NULL);
}
#endif

#if 0
#ifdef __OP01__
#if defined(__OP01_3G__) && defined(__MMI_MOBILE_TV_CMMB_SUPPORT__)
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
/* under construction !*/
/* under construction !*/
#ifdef __MMI_139_PUSH_MAIL__
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
/* under construction !*/
#ifdef __MMI_MOBILE_VIDEO__
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
/* under construction !*/
#ifdef BROWSER_SUPPORT
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
#ifdef BROWSER_SUPPORT
/* under construction !*/
#else
/* under construction !*/
#endif
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
#ifdef BROWSER_SUPPORT
  #ifdef __MMI_VUI_SHELL_OP01_HOMESCREEN__
/* under construction !*/
  #else
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
  #endif /* __MMI_VUI_SHELL_OP01_HOMESCREEN__ */
#else
/* under construction !*/
#endif
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
#ifdef __MMI_OP01_HS_MIDLET_MUSIC__
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#else
/* under construction !*/
#endif
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
#ifdef __MMI_OP01_HS_MIDLET_FETION__
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#else
/* under construction !*/
#endif
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
#ifdef __MMI_OP01_HS_MIDLET_STOCK__
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#else
/* under construction !*/
#endif
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
#ifdef __MMI_OP01_HS_MIDLET_MAP__
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#else
/* under construction !*/
#endif
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
#ifdef __MMI_OP01_HS_MIDLET_MM__
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#else
/* under construction !*/
#endif
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
#ifdef __MMI_OP01_HS_MIDLET_CMREAD__
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#else
/* under construction !*/
#endif
/* under construction !*/
#endif /* __OP01__ */
/* under construction !*/
#ifdef __OP02_0200__
/* under construction !*/
/* under construction !*/
#ifdef BROWSER_SUPPORT
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
#ifdef BROWSER_SUPPORT
/* under construction !*/
#else
/* under construction !*/
#endif
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
#ifdef __MMI_OP02_MIDLET_WO_STORE__
/* under construction !*/
#else
/* under construction !*/
#endif
/* under construction !*/
/* under construction !*/
/* under construction !*/
#ifdef BROWSER_SUPPORT
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
#ifdef BROWSER_SUPPORT
/* under construction !*/
#else
/* under construction !*/
#endif
/* under construction !*/
/* under construction !*/
#ifdef BROWSER_SUPPORT
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
/* under construction !*/
#endif /* __OP02_0200__ */
/* under construction !*/
/* under construction !*/
#ifdef __MMI_OP02_LEMEI__
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
#endif /* __MMI_OP02_LEMEI__ */
/* under construction !*/
/* under construction !*/
#if defined(__OP01_FWPBW__)
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
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif /* defined(__OP01_FWPBW__) */
/* under construction !*/
#endif /*0*/

#if defined(__MMI_BT_DIALER_SUPPORT__)
/*****************************************************************************
 * FUNCTION
 *  mmi_entry_bt_dialer_application_scr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
extern U16 mmi_btdialer_app_launch_func(void *param, U32 param_size);
void mmi_entry_bt_dialer_application_scr(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
        
    mmi_btdialer_app_launch_func(NULL, 0);
}


/*****************************************************************************
 * FUNCTION
 *  highlight_mainmenu_bt_dialer
 * DESCRIPTION
 *  Associate the key handler
 *  with left and rt soft key
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void highlight_mainmenu_bt_dialer(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    set_main_menu_softkey_handler(mmi_entry_bt_dialer_application_scr, handle_mainmenu_right_softkey_up);
}
#endif /*#if defined(__MMI_BT_DIALER_SUPPORT__)*/

#ifndef __MMI_TELEPHONY_SUPPORT__
#if defined (__MMI_CAMERA__) && !defined(__MMI_CAMCORDER__)
void highlight_mainmenu_camera(void)
{
    set_main_menu_softkey_handler(mmi_camera_lauch, handle_mainmenu_right_softkey_up);
}
#endif
#if defined(__MMI_IMAGE_VIEWER__)
void highlight_mainmenu_image_viewer(void)
{
    set_main_menu_softkey_handler(mmi_imgview_launch, handle_mainmenu_right_softkey_up);
}
#endif
#if defined(__MMI_VIDEO_PLAYER__)
void highlight_mainmenu_video_player(void)
{
    set_main_menu_softkey_handler(mmi_vdoply_entry_app, handle_mainmenu_right_softkey_up);
}
#endif
#if defined(__MMI_VIDEO_RECORDER__) && !defined(__MMI_CAMCORDER__)
void highlight_mainmenu_video_recorder(void)
{
    set_main_menu_softkey_handler(mmi_vdorec_lauch, handle_mainmenu_right_softkey_up);
}
#endif
#endif /* __BT_DIALER_PACKAGE__ */


#if defined(__MMI_MAINMENU_SPREAD_SUPPORT__)
/*****************************************************************************
 * FUNCTION
 *  mmi_main_menu_launch_app
 * DESCRIPTION
 *  
 * PARAMETERS
 *  void       
 * RETURNS
 *  void
 *****************************************************************************/
static void mmi_main_menu_launch_app(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    srv_appmgr_launch(mmi_mm_app_highlight_item_name);
}


/*****************************************************************************
 * FUNCTION
 *  mmi_main_menu_uninstall_app_callback
 * DESCRIPTION
 *  
 * PARAMETERS
 *  void       
 * RETURNS
 *  void
 *****************************************************************************/
static void mmi_main_menu_uninstall_app_callback(srv_appmgr_cb_event_enum result, void *user_data)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    mmi_popup_property_struct popup_property;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    switch (result)
    {
        case SRV_APPMGR_CB_EVENT_DONE:
			mmi_frm_scrn_close_active_id();
			return;

        case SRV_APPMGR_CB_EVENT_ERROR:
        case SRV_APPMGR_CB_EVENT_CANCEL:
        default:
            break;
    }

    mmi_popup_property_init(&popup_property);
    popup_property.f_auto_dismiss = MMI_TRUE;
    popup_property.parent_id  = GRP_ID_ROOT;
    mmi_popup_display_ext(STR_GLOBAL_FAILED, MMI_EVENT_FAILURE, &popup_property);
}


/*****************************************************************************
 * FUNCTION
 *  mmi_main_menu_uninstall_confirm_proc
 * DESCRIPTION
 *  
 * PARAMETERS
 *  void       
 * RETURNS
 *  void
 *****************************************************************************/
static mmi_ret mmi_main_menu_uninstall_confirm_proc(mmi_alert_result_evt_struct *evt)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    mmi_popup_property_struct popup_property;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    if (evt->evt_id == EVT_ID_ALERT_QUIT)
    {
        switch (evt->result)
        {
            case MMI_ALERT_CNFM_YES:
                mmi_popup_property_init(&popup_property);
                popup_property.f_auto_dismiss = MMI_FALSE;
                popup_property.parent_id = GRP_ID_ROOT;
                mmi_popup_display_ext(STR_GLOBAL_PLEASE_WAIT, MMI_EVENT_PROGRESS, &popup_property);

                
                if (srv_appmgr_uninstall_app(mmi_mm_app_highlight_item_name, mmi_main_menu_uninstall_app_callback, NULL) == MMI_RET_ERR)
                {
                    mmi_popup_property_init(&popup_property);
                    popup_property.f_auto_dismiss = MMI_TRUE;
                    popup_property.parent_id = GRP_ID_ROOT;
                    mmi_popup_display_ext(STR_GLOBAL_FAILED, MMI_EVENT_FAILURE, &popup_property);
                }
            	break;
            	
            case MMI_ALERT_CNFM_NO:
            	break;
        }
    }
    return MMI_RET_OK;
}


/*****************************************************************************
 * FUNCTION
 *  mmi_main_menu_uninstall_app
 * DESCRIPTION
 *  
 * PARAMETERS
 *  void       
 * RETURNS
 *  void
 *****************************************************************************/
static void mmi_main_menu_uninstall_app(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    MMI_BOOL is_bg_running = MMI_FALSE;
    mmi_popup_property_struct popup_property;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
	if(strncmp(mmi_mm_app_highlight_item_name, "mre", 3) == 0)
	{
		is_bg_running = srv_mre_appmgr_is_bg_running(mmi_mm_app_highlight_item_name);
	}

	if(is_bg_running)
	{
        mmi_popup_property_init(&popup_property);
        popup_property.f_auto_dismiss = MMI_TRUE;
        popup_property.parent_id = GRP_ID_ROOT;
        mmi_popup_display_ext(STR_ID_MAIN_MENU_EXIT_RUNNING_APP, MMI_EVENT_FAILURE, &popup_property);
	}
	else
	{
        mmi_confirm_property_struct confirmProperty;
        mmi_confirm_property_init(&confirmProperty, CNFM_TYPE_YESNO);
        confirmProperty.callback = (mmi_proc_func)mmi_main_menu_uninstall_confirm_proc;
        confirmProperty.parent_id = GRP_ID_ROOT; 
        confirmProperty.f_auto_question_mark = MMI_TRUE;

        mmi_confirm_display_ext(
            STR_ID_MAIN_MENU_UNINSTALL,
            MMI_EVENT_QUERY,
            &confirmProperty);
    }
}


/*****************************************************************************
 * FUNCTION
 *  mmi_main_menu_option_menu
 * DESCRIPTION
 *  
 * PARAMETERS
 *  void       
 * RETURNS
 *  void
 *****************************************************************************/
static void mmi_main_menu_option_menu(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
	mmi_id menu_gid;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    menu_gid = cui_menu_create(
                g_main_menu_group_id,
                CUI_MENU_SRC_TYPE_RESOURCE,
                CUI_MENU_TYPE_OPTION,
                MAIN_MENU_OPTIONS_MENU,
                MMI_TRUE,
                NULL);
	cui_menu_enable_cascading_option_menu(menu_gid);
    cui_menu_run(menu_gid);

}


/*****************************************************************************
 * FUNCTION
 *  mmi_main_menu_spread_matrix_style_highlight_handler
 * DESCRIPTION
 *  
 * PARAMETERS
 *  index       [IN]        
 * RETURNS
 *  void
 *****************************************************************************/
static void mmi_main_menu_spread_matrix_style_highlight_handler(S32 index)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    MMI_BOOL is_installed = MMI_FALSE;
    mmi_app_package_name_struct *installed_app_list = NULL;
    U32 installed_app_num = 0;
    mmi_ret result;
    U32 i;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    /* is installed app or not */
    if (strncmp(mmi_mm_app_package_name_list[index], "native", 5) != 0)
	{
		installed_app_num = srv_appmgr_get_app_package_num(SRV_APPMGR_INSTALLED_APP_PACKAGE_FLAG_TYPE);
		if (installed_app_num)
		{
            installed_app_list = mmi_frm_scrmem_alloc(installed_app_num * sizeof(mmi_app_package_name_struct));
            memset(installed_app_list, 0, installed_app_num * sizeof(mmi_app_package_name_struct));

			result = srv_appmgr_get_app_package_list(SRV_APPMGR_INSTALLED_APP_PACKAGE_FLAG_TYPE, installed_app_list, installed_app_num);
			MMI_ASSERT(result != MMI_RET_ERR);

		    if (installed_app_list)
		    {
                for (i = 0; i < installed_app_num; ++i)
                {
                    if (strncmp(mmi_mm_app_package_name_list[index], installed_app_list[i], MMI_APP_NAME_MAX_LEN) == 0)
                    {
                        is_installed = MMI_TRUE;
                    }
                }
		    }

            if (installed_app_list)
	        {
		        mmi_frm_scrmem_free(installed_app_list);
		        installed_app_list = NULL;
	        }
        }
	}

    /* set softkey */
    if (is_installed)
    {
        ChangeLeftSoftkey(STR_GLOBAL_OPTIONS, 0);
        SetLeftSoftkeyFunction(mmi_main_menu_option_menu, KEY_EVENT_UP);
    }
    else
    {
        ChangeLeftSoftkey(STR_GLOBAL_OPEN, 0);
        SetLeftSoftkeyFunction(mmi_main_menu_launch_app, KEY_EVENT_UP);
    }
    ChangeCenterSoftkey(0, IMG_GLOBAL_COMMON_CSK);
    SetCenterSoftkeyFunction(mmi_main_menu_launch_app, KEY_EVENT_UP);

#ifndef __MMI_MATRIX_MAIN_MENU_NO_TITLEBAR__   
    /* set title */
    ChangeTitle(0, (U8*)mmi_mm_app_package_info[index].string);
    draw_title();
#endif /* __MMI_MATRIX_MAIN_MENU_NO_TITLEBAR__ */ 

    main_menu_index = index;
    strncpy(mmi_mm_app_highlight_item_name, mmi_mm_app_package_name_list[index], MMI_APP_NAME_MAX_LEN - 1);
}


/*****************************************************************************
 * FUNCTION
 *  mmi_main_menu_spread_matrix_style_event_handler
 * DESCRIPTION
 *  
 * PARAMETERS
 *  index       [IN]        
 * RETURNS
 *  void
 *****************************************************************************/
static mmi_ret mmi_main_menu_spread_matrix_style_event_handler(mmi_event_struct *event)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    S32 i, n_items;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    n_items = srv_appmgr_get_app_package_num(SRV_APPMGR_ALL_APP_PACKAGE_IN_MAIN_MENU_FLAG_TYPE) + srv_appmgr_get_app_package_num(SRV_APPMGR_PRE_INSTALLED_APP_PACKAGE_FLAG_TYPE);

    switch (event->evt_id)
    {
		case EVT_ID_SRV_APPMGR_UPDATE_BADGE:
            {
                for (i = 0; i < n_items; i++)
                {
                    if(MMI_RET_ERR == srv_appmgr_get_app_package_info(mmi_mm_app_package_name_list[i], &mmi_mm_app_package_info[i]))
		            {
			            memset(&mmi_mm_app_package_info[i], 0, sizeof(srv_app_info_struct));
			            n_items--;
		            }
                }
                show_fixed_matrix();
            }
            break;
        default:
            break;
    }
    return MMI_RET_OK;
}


/*****************************************************************************
 * FUNCTION
 *  mmi_main_menu_entry_spread_matrix_style
 * DESCRIPTION
 *  main meun entry function
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
static void mmi_main_menu_entry_spread_matrix_style(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    MMI_ID_TYPE mm_stringIDs[MAX_MAIN_MENU_ITEMS];
    MMI_ID_TYPE mm_iconIDs[MAX_MAIN_MENU_ITEMS];

    U8 *history_buffer;
    S32 n_items, pre_installed_n_items, fixed_n_items, reserved_n_items = 0;
    U8 HighlightMenu = 0;

    MMI_ID_TYPE *iconList;
#ifdef __MMI_MAINMENU_STYLE_CHANGE_EN__
    U8 menu_style = 0;
#endif
    MMI_ID_TYPE mm_iconIDs_display[MAX_MAIN_MENU_ITEMS];
    U8 i = 0;
    MMI_MENU_ID mmi_menuitem_list[MAX_MAIN_MENU_ITEMS];
    mmi_app_package_name_struct* temp_app_name = NULL;
    S32 nor_native_item_num = 0;
    mmi_app_package_name_struct* mre_list = NULL;
    S32 mre_num = 0;
    S32 exchange = 1;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    gui_sse_setup_scenario(GUI_SSE_SCENARIO_ENTER_MAINMENU);

    history_buffer = mmi_frm_scrn_get_active_gui_buf();
    n_items = GetNumOfChild_Ext(IDLE_SCREEN_MENU_ID);
    GetSequenceStringIds_Ext(IDLE_SCREEN_MENU_ID, mm_stringIDs);
    GetSequenceImageIds_Ext(IDLE_SCREEN_MENU_ID, mm_iconIDs);
    SetParentHandler(IDLE_SCREEN_MENU_ID);

    HighlightMenu = mmi_get_mainmenu_highlight_menu(n_items);

    GetSequenceItemIds_Ext(IDLE_SCREEN_MENU_ID, mmi_menuitem_list);

    for (i = 0; i < n_items; i++)
    {
        mm_iconIDs_display[i] = mmi_res_get_mainmenu_img(mmi_menuitem_list[i], MMI_RG_MM_IMG_MATRIX);
    }
    iconList = mm_iconIDs_display;

    RegisterHighlightHandler(mmi_main_menu_spread_matrix_style_highlight_handler);

#if 0
#ifdef __MMI_UI_DALMATIAN_SOFTKEYS__
/* under construction !*/
#endif
#endif

    fixed_n_items = srv_appmgr_get_app_package_num(SRV_APPMGR_ALL_APP_PACKAGE_IN_MAIN_MENU_FLAG_TYPE);
    pre_installed_n_items  = srv_appmgr_get_app_package_num(SRV_APPMGR_PRE_INSTALLED_APP_PACKAGE_FLAG_TYPE);
    n_items = fixed_n_items + pre_installed_n_items;

#ifdef __MMI_USB_SUPPORT__
    if (srv_usb_is_in_mass_storage_mode())
    {
        if (n_items < g_wgui_cat9015_n_items)
        {
            reserved_n_items = g_wgui_cat9015_n_items - n_items;
        }
    }
    else
    {
        g_wgui_cat9015_n_items = n_items;
    }
#endif 

    if(mmi_mm_app_package_name_list == NULL)
    {
        mmi_mm_app_package_name_list = mmi_frm_scrmem_alloc((n_items + reserved_n_items) * sizeof(mmi_app_package_name_struct));
        memset(mmi_mm_app_package_name_list, 0, (n_items + reserved_n_items) * sizeof(mmi_app_package_name_struct));
    }
    if (mmi_mm_app_package_info == NULL)
    {
        mmi_mm_app_package_info = mmi_frm_scrmem_alloc((n_items + reserved_n_items) * sizeof(srv_app_info_struct));
        memset(mmi_mm_app_package_info, 0, (n_items + reserved_n_items) * sizeof(srv_app_info_struct));
    }

    /* re-order */
    if (temp_app_name == NULL)
    {
        temp_app_name = mmi_frm_scrmem_alloc((n_items + reserved_n_items) * sizeof(mmi_app_package_name_struct));
        memset(temp_app_name, 0, (n_items + reserved_n_items) * sizeof(mmi_app_package_name_struct));
    }

    srv_appmgr_get_app_package_list(SRV_APPMGR_ALL_APP_PACKAGE_IN_MAIN_MENU_FLAG_TYPE, mmi_mm_app_package_name_list, fixed_n_items);

    for (i = 0; i < fixed_n_items; i++) 
    {
        if (strncmp(mmi_mm_app_package_name_list[i], "native", 5) != 0)
        {
            memcpy(&temp_app_name[fixed_n_items - nor_native_item_num - 1], &mmi_mm_app_package_name_list[i], sizeof(mmi_app_package_name_struct));
            nor_native_item_num++;
        }
        else
        {
            memcpy(&mmi_mm_app_package_name_list[0], &mmi_mm_app_package_name_list[i], (fixed_n_items - nor_native_item_num)*sizeof(mmi_app_package_name_struct));
            memcpy(&mmi_mm_app_package_name_list[fixed_n_items - nor_native_item_num], &temp_app_name[fixed_n_items - nor_native_item_num], (nor_native_item_num)*sizeof(mmi_app_package_name_struct));
            break;
        }
    }

    srv_appmgr_get_app_package_list(SRV_APPMGR_PRE_INSTALLED_APP_PACKAGE_FLAG_TYPE, &mmi_mm_app_package_name_list[fixed_n_items], pre_installed_n_items);

    for (i = 0; i < n_items; i++)
    {
        if (strncmp(mmi_mm_app_package_name_list[i], "mre.shortcut", 12) == 0)
        {
            if (mre_num == 0)
            {
                mre_list = &mmi_mm_app_package_name_list[i];
                break;
            }
        }
    }

    if (mmi_mm_app_package_name_list)
    {
        mre_num = n_items - i;
    }

    while(exchange)
    {
        exchange = 0;

        for (i = 0; i < mre_num - 1; i++)
        {
            if (strcmp(mre_list[i], mre_list[i + 1]) > 0)
            {
                memcpy(&temp_app_name[0], &mre_list[i], sizeof(mmi_app_package_name_struct));
                memcpy(&mre_list[i], &mre_list[i + 1], sizeof(mmi_app_package_name_struct));
                memcpy(&mre_list[i + 1], &temp_app_name[0], sizeof(mmi_app_package_name_struct));
                exchange = 1;
            }
        }
    }

    for (i = 0; i < n_items; i++)
    {
        if(MMI_RET_ERR == srv_appmgr_get_app_package_info(mmi_mm_app_package_name_list[i], &mmi_mm_app_package_info[i]))
        {
            memset(&mmi_mm_app_package_info[i], 0, sizeof(srv_app_info_struct));
            n_items--;
        }
    }

    if (temp_app_name)
    {
        mmi_frm_scrmem_free(temp_app_name);
        temp_app_name = NULL;
    }

    wgui_cat9015_show(
        MAIN_MENU_TITLE_TEXT,
        MAIN_MENU_TITLE_ICON,
        STR_GLOBAL_OK,
        IMG_GLOBAL_OK,
        STR_GLOBAL_BACK,
        IMG_GLOBAL_BACK,
        n_items,
        mmi_mm_app_package_info,
        HighlightMenu,
        (U8*) history_buffer);

    mmi_frm_cb_reg_event(EVT_ID_SRV_APPMGR_UPDATE_BADGE, mmi_main_menu_spread_matrix_style_event_handler, NULL);

    register_menu_shortcut_selected(main_menu_shortcut_executer);
    SetRightSoftkeyFunction(mmi_frm_scrn_close_active_id, KEY_EVENT_UP);

}
#endif

#endif /*__MMI_IDLE_CLASSIC_AND_MAINMENU_SUPPORT__*/


