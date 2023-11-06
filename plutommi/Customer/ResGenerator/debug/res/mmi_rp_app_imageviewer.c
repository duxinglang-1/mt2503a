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
 *   mmi_rp_app_imageviewer.c
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
#include "mmi_rp_app_imageviewer_def.h"

/* Application specified header files for using old res IDs */
#include "MMI_features.h"
#include "MMIDataType.h"    /* for resource base */

#include "CustResDef.h"         /* for image/audio path */
#include "GlobalMenuItems.h"    /* for menu resource */

#include "lcd_sw_inc.h"
#include "PopulateRes.h"
#include "CustResDef.h"
#include "FileMgrServiceResDef.h"
#include "mmi_rp_app_mainmenu_def.h"


/*****************************************************************************
* FUNCTION
*  mmi_rp_app_imageviewer_populate
* DESCRIPTION
*  Automatically generated populate function for mmi_rp_app_imageviewer_populate
* PARAMETERS
*  void
* RETURNS
*  void
*****************************************************************************/
void mmi_rp_app_imageviewer_populate(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/

/******************** Menu resource IDs - begin ********************/
    ADD_APPLICATION_MENUITEM5((
        MENU_ID_IMGVIEW_APP,
        0,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_APP_MAIN,
        STR_ID_IMGVIEW_NAME,
        IMG_ID_IMGVIEW_MAIN_ICON));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_IMGVIEW_VIEW_DETAIL,
        MENU_ID_IMGVIEW_FILE_OPTION,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_GLOBAL_VIEW,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_IMGVIEW_VIEW_STYLE_LIST,
        MENU_ID_IMGVIEW_VIEW_STYLE,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_ID_IMGVIEW_VIEW_STYLE_LIST,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_IMGVIEW_VIEW_STYLE_MATRIX,
        MENU_ID_IMGVIEW_VIEW_STYLE,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_ID_IMGVIEW_VIEW_STYLE_MATRIX,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_IMGVIEW_VIEW_STYLE,
        MENU_ID_IMGVIEW_FILE_OPTION,
        2,
        MENU_ID_IMGVIEW_VIEW_STYLE_LIST,
        MENU_ID_IMGVIEW_VIEW_STYLE_MATRIX,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_ID_IMGVIEW_VIEW_STYLE,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_IMGVIEW_STORAGE,
        MENU_ID_IMGVIEW_FILE_OPTION,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_GLOBAL_STORAGE,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_IMGVIEW_VIEW_OPTION_PLAY,
        MENU_ID_IMGVIEW_VIEW_OPTION,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_GLOBAL_PLAY,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_IMGVIEW_VIEW_OPTION_ROTATE_VIEW,
        MENU_ID_IMGVIEW_VIEW_OPTION,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_ID_IMGVIEW_ROTATE_VIEW,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_IMGVIEW_VIEW_OPTION_USE,
        MENU_ID_IMGVIEW_VIEW_OPTION,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_GLOBAL_USE_AS,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_IMGVIEW_VIEW_OPTION_SEND,
        MENU_ID_IMGVIEW_VIEW_OPTION,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_GLOBAL_SEND,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_IMGVIEW_VIEW_OPTION_INFO,
        MENU_ID_IMGVIEW_VIEW_OPTION,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_ID_IMGVIEW_OPTION_IMG_INFO,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_IMGVIEW_VIEW_OPTION,
        0,
        5,
        MENU_ID_IMGVIEW_VIEW_OPTION_PLAY,
        MENU_ID_IMGVIEW_VIEW_OPTION_ROTATE_VIEW,
        MENU_ID_IMGVIEW_VIEW_OPTION_USE,
        MENU_ID_IMGVIEW_VIEW_OPTION_SEND,
        MENU_ID_IMGVIEW_VIEW_OPTION_INFO,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_OPTION,
        STR_GLOBAL_OPTIONS,
        IMG_ID_IMGVIEW_MAIN_ICON));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_IMGVIEW_OPTION_IMG_INFORMATION,
        MENU_ID_IMGVIEW_APP,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_ID_IMGVIEW_OPTION_IMG_INFO,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_IMGVIEW_OPTION_IMG_VIEW,
        MENU_ID_IMGVIEW_APP,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_GLOBAL_VIEW,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_IMGVIEW_FILE_OPTION,
        0,
        15,
        MENU_ID_IMGVIEW_VIEW_DETAIL,
        MENU_ID_IMGVIEW_VIEW_STYLE,
        MENU_ID_FMGR_GEN_OPTION_FORWARD_SEND,
        MENU_ID_FMGR_GEN_OPTION_FORWARD_USE,
        MENU_ID_FMGR_FOLDER_CREATE,
        MENU_ID_FMGR_GEN_OPTION_RENAME,
        MENU_ID_FMGR_GEN_OPTION_DELETE,
        MENU_ID_FMGR_GEN_OPTION_SORT,
        MENU_ID_FMGR_GEN_OPTION_MARK_SEVERAL,
        MENU_ID_FMGR_GEN_OPTION_COPY,
        MENU_ID_FMGR_GEN_OPTION_MOVE,
        MENU_ID_FMGR_GEN_OPTION_DELETE_ALL,
        MENU_ID_FMGR_GEN_OPTION_DETAIL,
        MENU_ID_IMGVIEW_STORAGE,
        MENU_ID_IMGVIEW_OPTION_IMG_INFORMATION,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_OPTION,
        STR_GLOBAL_OPTIONS,
        IMG_ID_IMGVIEW_MAIN_ICON));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_IMGVIEW_EMPTY_FOLDER_OPTION,
        0,
        2,
        MENU_ID_IMGVIEW_VIEW_STYLE,
        MENU_ID_IMGVIEW_STORAGE,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_OPTION,
        STR_GLOBAL_OPTIONS,
        IMG_ID_IMGVIEW_MAIN_ICON));

/******************** Menu resource IDs - finish ********************/

/******************** Menu Hilite/Hint Handlers - begin ********************/
    ADD_APPLICATION_MENUITEM_HILITE_HANDLER(MENU_ID_IMGVIEW_APP, mmi_imgview_highlight_app);
/******************** Menu Hilite/Hint Handlers - finish ********************/
}
