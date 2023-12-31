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
 *   mmi_rp_app_calllog.c
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
#include "mmi_rp_app_calllog_def.h"

/* Application specified header files for using old res IDs */
#include "MMI_features.h"
#include "MMIDataType.h"    /* for resource base */

#include "CustResDef.h"         /* for image/audio path */
#include "GlobalMenuItems.h"    /* for menu resource */

#include "GlobalResDef.h"


/*****************************************************************************
* FUNCTION
*  mmi_rp_app_calllog_populate
* DESCRIPTION
*  Automatically generated populate function for mmi_rp_app_calllog_populate
* PARAMETERS
*  void
* RETURNS
*  void
*****************************************************************************/
void mmi_rp_app_calllog_populate(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/

/******************** Menu resource IDs - begin ********************/
    ADD_APPLICATION_MENUITEM5((
        MENU_ID_CLOG_DIALED_CALL,
        MEMU_ID_CLOG_CALL_LOG,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_GLOBAL_DIALLED_CALLS,
        IMG_ID_CLOG_DIALED_CALL));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_CLOG_MISSED_CALL,
        MEMU_ID_CLOG_CALL_LOG,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_GLOBAL_MISSED_CALLS,
        IMG_ID_CLOG_MISSED_CALL));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_CLOG_RECVED_CALL,
        MEMU_ID_CLOG_CALL_LOG,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_GLOBAL_RECEIVED_CALLS,
        IMG_ID_CLOG_RECVED_CALL));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_CLOG_ALL_CALL,
        MEMU_ID_CLOG_CALL_LOG,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_ID_CLOG_ALL_CALL,
        IMG_ID_CLOG_ALL_CALL));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_CLOG_DEL_DIALED_CALL,
        MENU_ID_CLOG_DELETE_BOX,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_GLOBAL_DIALLED_CALLS,
        IMG_ID_CLOG_DIALED_CALL));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_CLOG_DEL_MISSED_CALL,
        MENU_ID_CLOG_DELETE_BOX,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_GLOBAL_MISSED_CALLS,
        IMG_ID_CLOG_MISSED_CALL));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_CLOG_DEL_RECVED_CALL,
        MENU_ID_CLOG_DELETE_BOX,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_GLOBAL_RECEIVED_CALLS,
        IMG_ID_CLOG_RECVED_CALL));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_CLOG_DEL_ALL_CALL,
        MENU_ID_CLOG_DELETE_BOX,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_ID_CLOG_ALL_CALL,
        IMG_ID_CLOG_DELETE_BOX));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_CLOG_DELETE_BOX,
        MEMU_ID_CLOG_CALL_LOG,
        4,
        MENU_ID_CLOG_DEL_DIALED_CALL,
        MENU_ID_CLOG_DEL_MISSED_CALL,
        MENU_ID_CLOG_DEL_RECVED_CALL,
        MENU_ID_CLOG_DEL_ALL_CALL,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_APP_SUB,
        STR_ID_CLOG_DELETE_BOX,
        IMG_ID_CLOG_DELETE_BOX));

    ADD_APPLICATION_MENUITEM5((
        MEMU_ID_CLOG_CALL_LOG,
        0,
        5,
        MENU_ID_CLOG_DIALED_CALL,
        MENU_ID_CLOG_MISSED_CALL,
        MENU_ID_CLOG_RECVED_CALL,
        MENU_ID_CLOG_ALL_CALL,
        MENU_ID_CLOG_DELETE_BOX,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_APP_SUB,
        STR_ID_CLOG_CALL_LOG,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_CLOG_SEND_SMS,
        MENU_ID_CLOG_OPTION,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_GLOBAL_SEND_TEXT_MESSAGE,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_CLOG_SEND_MMS,
        MENU_ID_CLOG_OPTION,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_GLOBAL_SEND_MULTIMEDIA_MESSAGE,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_CLOG_DELETE,
        MENU_ID_CLOG_OPTION,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_GLOBAL_DELETE,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_CLOG_DELETE_ALL,
        MENU_ID_CLOG_OPTION,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_GLOBAL_DELETE_ALL,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_CLOG_OPTION,
        0,
        8,
        MENU_ID_CLOG_VIEW,
        MENU_ID_CLOG_MAKE_CALL,
        MENU_ID_CLOG_SEND_SMS,
        MENU_ID_CLOG_SEND_MMS,
        MENU_ID_CLOG_SAVE_TO_PHB,
        MENU_ID_CLOG_EDIT_BEFORE_CALL,
        MENU_ID_CLOG_DELETE,
        MENU_ID_CLOG_DELETE_ALL,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_OPTION,
        STR_GLOBAL_OPTIONS,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_CLOG_VIEW,
        MENU_ID_CLOG_OPTION,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_GLOBAL_VIEW,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_CLOG_MAKE_CALL,
        MENU_ID_CLOG_OPTION,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_GLOBAL_DIAL,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_CLOG_SAVE_TO_PHB,
        MENU_ID_CLOG_OPTION,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_GLOBAL_SAVE_TO_PHONEBOOK,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_CLOG_EDIT_BEFORE_CALL,
        MENU_ID_CLOG_OPTION,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_GLOBAL_EDIT_BEFORE_CALL,
        0));

/******************** Menu resource IDs - finish ********************/

/******************** Menu Hilite/Hint Handlers - begin ********************/
/******************** Menu Hilite/Hint Handlers - finish ********************/
}
