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
 *   mmi_rp_app_sms_def.h
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


#ifndef _MMI_RP_APP_SMS_DEF_H
#define _MMI_RP_APP_SMS_DEF_H




/******************** Menu resource IDs - begin ********************/
typedef enum
{
    MENU_ID_SMS_VM_VMAIL_MENUID = 45791 + 1, /* BASE_ID + 1 */
    MENU_ID_SMS_VM_ITEM_VOICE_MAIL_OPTION,
    MENU_ID_SMS_VM_ITEM_VM_1_EDIT,
    MENU_ID_SMS_VM_ITEM_VM_3_CONNECT_TO_VOICE,
    MENU_ID_SMS_PROFILE_SETTING,
    MENU_ID_SMS_PROFILE_SETTING_OPTION,
    MENU_ID_SMS_PROFILE_SETTING_OPTION_ACTIVE,
    MENU_ID_SMS_PROFILE_SETTING_OPTION_EDIT,
    MENU_ID_SMS_PREFERED_BEARER,
    MENU_ID_SMS_PREFERED_BEARER_PREFER_GSM,
    MENU_ID_SMS_PREFERED_BEARER_PREFER_GPRS,
    MENU_ID_SMS_PREFERED_BEARER_GSM,
    MENU_ID_SMS_DEFAULT_LIST_OPT,
    MENU_ID_SMS_INBOX_LIST_OPT,
    MENU_ID_SMS_SENT_LIST_OPT,
    MENU_ID_SMS_DRAFTS_LIST_OPT,
    MENU_ID_SMS_UNSENT_LIST_OPT,
    MENU_ID_SMS_LIST_OPT_VIEW,
    MENU_ID_SMS_ZAWGYI,
    MENU_ID_SMS_PADAUK,
    MENU_ID_SMS_LIST_OPT_REPLY,
    MENU_ID_SMS_LIST_OPT_REPLY_BY_MMS,
    MENU_ID_SMS_LIST_OPT_CALL_SENDER,
    MENU_ID_SMS_LIST_OPT_SEND,
    MENU_ID_SMS_LIST_OPT_RESEND,
    MENU_ID_SMS_LIST_OPT_EDIT,
    MENU_ID_SMS_LIST_OPT_FORWARD,
    MENU_ID_SMS_LIST_OPT_DELETE,
    MENU_ID_SMS_LIST_OPT_SAVE_CONTACT,
    MENU_ID_SMS_LIST_OPT_DETAILS,
    MENU_ID_SMS_DEFAULT_VIEWER_OPT,
    MENU_ID_SMS_INBOX_VIEWER_OPT,
    MENU_ID_SMS_SENT_VIEWER_OPT,
    MENU_ID_SMS_DRAFTS_VIEWER_OPT,
    MENU_ID_SMS_UNSENT_VIEWER_OPT,
    MENU_ID_SMS_VIEWER_OPT_REPLY,
    MENU_ID_SMS_VIEWER_OPT_REPLY_BY_MMS,
    MENU_ID_SMS_VIEWER_OPT_CALL_SENDER,
    MENU_ID_SMS_VIEWER_OPT_SEND,
    MENU_ID_SMS_VIEWER_OPT_RESEND,
    MENU_ID_SMS_VIEWER_OPT_EDIT,
    MENU_ID_SMS_VIEWER_OPT_FORWARD,
    MENU_ID_SMS_VIEWER_OPT_DELETE,
    MENU_ID_SMS_VIEWER_OPT_DETAILS,
    MENU_ID_SMS_USE_NUMBER_OPT,
    MENU_ID_SMS_VIEWER_OPT_ADVANCED,
    MENU_ID_SMS_VIEWER_ADV_OPT_USE_NUM,
    MENU_ID_SMS_VIEWER_ADV_OPT_USE_USSD,
    MENU_ID_SMS_USE_NUMBER_OPT_DIAL_NUM,
    MENU_ID_SMS_USE_NUMBER_OPT_SAVE_TO_PB,
    MENU_ID_SMS_USE_NUMBER_OPT_SEND_SMS,
    MENU_ID_SMS_USE_NUMBER_OPT_SEND_MMS,
    MENU_ID_SMS_EDITOR_OPTIONS,
    MENU_ID_SMS_ED_OPT_SEND_TO,
    MENU_ID_SMS_ED_OPT_ADVANCED,
    MENU_ID_SMS_ED_OPT_SAVE_TO_DRAFTS,
    MENU_ID_SMS_ED_OPT_INSERT_NUMBER,
    MENU_ID_SMS_ED_OPT_INSERT_NAME,
    MENU_ID_SMS_RECIPIENT_OPTIONS,
    MENU_ID_SMS_RECIPIENT_OPT_SEND,
    MENU_ID_SMS_RECIPIENT_OPT_SAVE_TO_DRAFTS,
    MENU_ID_SMS_RECIPIENT_OPT_EDIT,
    MENU_ID_SMS_RECIPIENT_OPT_REMOVE,
    MENU_ID_SMS_RECIPIENT_OPT_REMOVE_ALL,
    SMS_CLASS0_OPT_MENUID,
    SMS_CLSASS0_OPT_USE_NUMBER_MENUID,
    MENU_ID_SMS_CLSASS0_OPT_SAVE_TO_INBOX,
    SMS_INBOX_OPT_SAVE_OBJECT_OPTION,
    SMS_INBOX_OPT_SAVE_OPTION_DONE,
    SMS_INBOX_OPT_SAVE_OPTION_INPUT_METHOD,
    MMI_RP_APP_SMS_MENU_MAX
}mmi_rp_app_sms_menu_enum;
/******************** Menu resource IDs - finish ********************/


/******************** String resource IDs - begin ********************/
typedef enum
{
    STR_ID_SMS_VM_VMAIL_MENUENTRY = 45791 + 1, /* BASE_ID + 1 */
    STR_ID_SMS_VM_VOICEMAIL_IND,
    STR_ID_SMS_VM_FAX_IND,
    STR_ID_SMS_VM_EMAIL_IND,
    STR_ID_SMS_VM_NET_OTHER_IND,
    STR_ID_SMS_VM_VIDEO_IND,
    STR_ID_SMS_VM_VOICEMAIL_NUM_IND,
    STR_ID_SMS_VM_FAX_NUM_IND,
    STR_ID_SMS_VM_EMAIL_NUM_IND,
    STR_ID_SMS_VM_NET_OTHER_NUM_IND,
    STR_ID_SMS_VM_VIDEO_NUM_IND,
    STR_ID_SMS_VM_VOICEMAIL_NUM_IND_PLURAL,
    STR_ID_SMS_VM_FAX_NUM_IND_PLURAL,
    STR_ID_SMS_VM_EMAIL_NUM_IND_PLURAL,
    STR_ID_SMS_VM_NET_OTHER_NUM_IND_PLURAL,
    STR_ID_SMS_VM_VIDEO_NUM_IND_PLURAL,
    STR_ID_SMS_VM_VOICE_MAIL_NAME,
    STR_ID_SMS_VM_VOICE_MAIL_NUM,
    STR_ID_SMS_VM_VOICE_MAIL_NOT_READY_YET,
    STR_ID_SMS_VM_SET_VOICEMAIL_QUERY_ID,
    STR_ID_SMS_VM_EDIT_VM,
    STR_ID_SMS_EDIT_PROFILE,
    STR_ID_SMS_FDN_FAIL,
    STR_ID_SMS_MESSAGESETUP_MENUENTRY,
    STR_ID_SMS_PREFERED_BEARER_MENUENTRY,
    STR_ID_SMS_PREFERED_BEARER_TITLEENTRY,
    STR_ID_SMS_PREFER_GPRS_BEARER_MENUENTRY,
    STR_ID_SMS_PREFER_GSM_BEARER_MENUENTRY,
    STR_ID_SMS_GSM_BEARER_MENUENTRY,
    STR_ID_SMS_PROFILE_NAME,
    STR_ID_SMS_PROFILE_SC,
    STR_ID_SMS_PROFILE_VP,
    STR_ID_SMS_PROFILE_MSG_TYPE,
    STR_ID_SMS_VP_1HOUR_MENUENTRY,
    STR_ID_SMS_VP_6HOUR_MENUENTRY,
    STR_ID_SMS_VP_12HOUR_MENUENTRY,
    STR_ID_SMS_VP_24HOUR_MENUENTRY,
    STR_ID_SMS_VP_3DAY_MENUENTRY,
    STR_ID_SMS_VP_1WEEK_MENUENTRY,
    STR_ID_SMS_TYPE_FAX_MENUENTRY,
    STR_ID_SMS_TYPE_GROUP4_FAX_MENUENTRY,
    STR_ID_SMS_TYPE_PAGE_MENUENTRY,
    STR_ID_SMS_PROFILE_SETTING_MENUENTRY,
    STR_ID_SMS_SET0_MENUENTRY,
    STR_ID_SMS_SET1_MENUENTRY,
    STR_ID_SMS_SET2_MENUENTRY,
    STR_ID_SMS_SET3_MENUENTRY,
    STR_ID_SMS_COMMONSETTING_MENUENTRY,
    STR_ID_SMS_REPLY_PATH_MENUENTRY,
    STR_RECEIVED_SMS,
    STR_ID_SMS_MESSAGES,
    STR_ID_SMS_REPLY_BY_SMS,
    STR_ID_SMS_REPLY_BY_MMS,
    STR_ID_SMS_USE_NUM_ADDRESS,
    STR_ID_SMS_USE_USSD_ADDRESS,
    STR_ID_SMS_SEND_TO,
    STR_ID_SMS_INSERT_NUMBER,
    STR_ID_SMS_INSERT_NAME,
    STR_ID_SMS_ADD_RECIPIENT,
    STR_ID_SMS_EDIT_RECIPIENT,
    STR_ID_SMS_REMOVE_RECIPIENT,
    STR_ID_SMS_REMOVE_ALL_RECIPIENT,
    STR_ID_SMS_REMOVE_RECIPIENT_QUERY,
    STR_ID_SMS_REMOVE_ALL_RECIPIENT_QUERY,
    STR_ID_SMS_ENTER_NUMBER,
    STR_ID_SMS_ADD_FROM_CONTACTS,
    STR_ID_SMS_RECIPIENTS_FULL,
    STR_ID_SMS_INVLAID_NUMBERS_REMOVED,
    STR_ID_SMS_CAN_ONLY_ADD_FIRST,
    STR_ID_SMS_CAN_ONLY_SEND_TO_FIRST,
    STR_ID_SMS_CONTACT_CONTINUE_QUERY,
    STR_ID_SMS_CONTACTS_CONTINUE_QUERY,
    STR_ID_SMS_BY_SIM1,
    STR_ID_SMS_FROM_LOWER_CASE,
    STR_ID_SMS_FROM,
    STR_ID_SMS_CREATION_DATE,
    STR_ID_SMS_RECEIVE_DATE,
    STR_ID_SMS_TYPE,
    STR_ID_SMS_STORAGE,
    STR_ID_SMS_SET_SC_NUMBER_QUERY,
    STR_ID_SMS_SENDING_TO_CAPTION,
    STR_SMS_MESSAGE_HEADER_TO,
    STR_MMS_MENUENTRY,
    STR_ID_SMS_SAVE_SENT_SMS,
    STR_SMS_MSG_NOT_READY_YET,
    STR_CLASS0_MESSAGE_CAPTION,
    STR_NOUSSD_NOTIFICATION,
    STR_ID_SMS_CANCELLED,
    STR_ID_SMS_MESSAGES_UPDATED,
    STR_SR_DELIVERD_ID,
    STR_SR_PENDING_ID,
    STR_INBOX_REPORT_ID,
    STR_WMESSAGE_MENUENTRY,
    STR_SMS_SAVE_TO_DRAFTS_MENU_ITEM,
    STR_ID_SMS_SAVE_TO_INBOX,
    STR_SCR6024_CAPTION,
    STR_VOICEMAIL_IND,
    STR_FAX_IND,
    STR_EMAIL_IND,
    STR_NET_OTHER_IND,
    STR_VOICEMAIL_NUM_IND,
    STR_FAX_NUM_IND,
    STR_EMAIL_NUM_IND,
    STR_NET_OTHER_NUM_IND,
    STR_VOICEMAIL_NUM_IND_PLURAL,
    STR_FAX_NUM_IND_PLURAL,
    STR_EMAIL_NUM_IND_PLURAL,
    STR_NET_OTHER_NUM_IND_PLURAL,
    STR_SUCCESS_CAPTION,
    STR_FAILURE_CAPTION,
    STR_SCR6042_CAPTION,
    STR_SMS_MEMORY_EXCEEDED,
    STR_SMS_SIM_MEMORY_EXCEEDED,
    STR_SMS_SEND_SUCESS_SAVE_FAILED,
    STR_SMS_SEND_SAVE_FAILED,
    STR_NEW_MESSAGE_FROM_ID,
    STR_MESSAGES_UNKNOWN_ERROR,
    STR_NO_SPACE_TO_INSERT_OBJECT,
    STR_SMS_FAILURE_MSG_LEN_EXCEEDED,
    STR_SMS_NUM_LEN_EXCEEDED,
    STR_SMS_CALL_SENDER,
    STR_SMS_FAILURE_DATA_EMPTY,
    STR_SMS_FAILURE_DATA_INVALID,
    STR_SMS_FAILURE_DATA_EXCEED,
    STR_SMS_FAILURE_SC_NUM_EMPTY,
    STR_ID_SMS_COUNTER_RECEIVED,
    STR_ID_SMS_COUNTER_SENT,
    STR_ID_SMS_COUNTER,
    STR_ID_SMS_RESET_COUNTER_QUERY,
    STR_ID_SMS_ZAWGYI,
    STR_ID_SMS_PADAUK,
    MMI_RP_APP_SMS_STR_MAX
}mmi_rp_app_sms_str_enum;
/******************** String resource IDs - finish ********************/


/******************** Screen resource IDs - begin ********************/
typedef enum
{
    SCR_ID_MSG_DELIVER_REPORT = 45791 + 1, /* BASE_ID + 1 */
    SCR_ID_MSG_CLASS0_MSG,
    SCR_ID_MSG_CLASS0_OPTION,
    SCR_ID_MSG_MSG_WAITING_IND,
    SCR_ID_MSG_EXCEED_IND,
    SCR_ID_MSG_USE_USSD_EDIT,
    SCR_ID_MSG_SAVE_OBJECT_LIST,
    SCR_ID_MSG_SAVE_OBJECT_NAME,
    SCR_ID_MSG_EMS_INSERT_OBJECT,
    SCR_ID_MSG_EMS_OBJECT_LIST,
    SCR_ID_MSG_EMS_PREVIEW_OBJECT,
    SCR_ID_SMS_VIEWER,
    SCR_ID_SMS_USE_ADDRESS,
    SCR_ID_SMS_EDITOR,
    SCR_ID_SMS_ADD_RECIPIENT,
    SCR_ID_SMS_SC_NUMBER,
    SCR_ID_SMS_EMAIL_SC_NUMBER,
    SCR_ID_SMS_PROCESSING,
    SCR_ID_SMS_SENDING,
    SCR_ID_SMS_ABORT_SENDING,
    SCR_ID_SMS_EDIT_RECIPIENT,
    SCR_ID_SMS_ENTER_NUMBER,
    SCR_ID_SMS_DUMMY,
    SCR_ID_SMS_TEMPLATE_LIST,
    SCR_ID_SMS_MEMORY_STATUS,
    SCR_ID_SMS_PREFERRED_STORAGE,
    SCR_ID_SMS_PROFILE_LIST,
    SCR_ID_SMS_VM_VOICE_MAIL_LIST,
    SCR_ID_SMS_VM_VOICE_MAIL_EDIT,
    SCR_ID_SMS_OPTION_DETAILS,
    SCR_ID_SMS_COUNTER_STATUS,
    SCR_ID_SMS_SCR_BACKUP_RESTORE_PROVIDER_LIST,
    SCR_ID_SMS_SCR_BACKUP_RESTORE_PROCESSING,
    MMI_RP_APP_SMS_SCR_MAX
}mmi_rp_app_sms_scr_enum;
/******************** Screen resource IDs - finish ********************/


/******************** Timer resource IDs - begin ********************/
typedef enum
{
    MESSAGES_SUBLCD_TIMER_ID = 45791 + 1, /* BASE_ID + 1 */
    MESSAGES_INPROGRESS_TIMER_ID,
    MESSAGES_EMS_OBJECT_PLAY_TIMER_ID,
    MMI_RP_APP_SMS_TIMER_MAX
}mmi_rp_app_sms_timer_enum;
/******************** Timer resource IDs - finish ********************/
/******************** Template resource IDs - Begin ********************/
/******************** Template resource IDs - End ********************/

/******************** Venus XML resource IDs - Begin ********************/
typedef enum 
{

    MMI_RP_APP_SMS_VXML_LAYOUT_MAX
} mmi_rp_app_sms_vxml_layout_enum;
/******************** Venus XML resource IDs - End ********************/



/******************** Image resource IDs - begin ********************/
typedef enum
{
    IMG_SMS_VMAIL_MENUENTRY = 45791 + 1, /* BASE_ID + 1 */
    IMG_ID_SMS_MSG_SETTINGS_MENUENTRY,
    IMG_ID_SMS_PROFILE_NAME,
    IMG_ID_SMS_PROFILE_SC,
    IMG_ID_SMS_PROFILE_VP,
    IMG_ID_SMS_PROFILE_MSG_TYPE,
    IMG_SMS_COMMON_NOIMAGE,
    IMG_SMS_ENTRY_SCRN_CAPTION,
    IMG_SMS_CB_MENUENTRY,
    IMG_MESSAGE_SMS_MENUENTRY,
    IMG_MESSAGE_MMS_MENUENTRY,
    IMG_NEW_MESSAGE_NOTIFICATION_MSG,
    IMG_NEW_SMS_PIC_SUBLCD_MSG,
    IMG_NEW_VOICEMAIL_PIC_SUBLCD_MSG,
    IMG_MESSAGE_READ,
    IMG_MESSAGE_UNREAD,
    IMG_MESSAGE_SENT,
    IMG_MESSAGE_UNSENT,
    IMG_MESSAGE_SS_NCOMP,
    IMG_MSG_TB_ICON_VOICEMAIL_L1,
    IMG_MSG_TB_ICON_VOICEMAIL_L2,
    MMI_RP_APP_SMS_IMG_MAX
}mmi_rp_app_sms_img_enum;
/******************** Image resource IDs - finish ********************/


#endif /* _MMI_RP_APP_SMS_DEF_H */
