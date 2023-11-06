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
 *   mmi_rp_app_ucmbt_def.h
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


#ifndef _MMI_RP_APP_UCMBT_DEF_H
#define _MMI_RP_APP_UCMBT_DEF_H




/******************** Menu resource IDs - begin ********************/
typedef enum
{
    MENU_ID_UCM_BT_INCALL_OPTION = 45547 + 1, /* BASE_ID + 1 */
    MENU_ID_UCM_BT_INCALL_OPTION_HOLD,
    MENU_ID_UCM_BT_INCALL_OPTION_RETRIEVE,
    MENU_ID_UCM_BT_INCALL_OPTION_SWAP,
    MENU_ID_UCM_BT_INCALL_OPTION_DTMF,
    MENU_ID_UCM_BT_INCALL_OPTION_MUTE,
    MENU_ID_UCM_BT_INCALL_OPTION_UNMUTE,
    MENU_ID_UCM_BT_INCALL_OPTION_END_SINGLE,
    MENU_ID_UCM_BT_INCALL_OPTION_END_ALL,
    MENU_ID_UCM_BT_INCALL_OPTION_SWITCH_AUDIO_PATH,
    MENU_ID_UCM_BT_INCALL_OPTION_BQB_TEST_HOLD,
    MENU_ID_UCM_BT_INCALL_OPTION_BQB_TEST_END,
    MMI_RP_APP_UCMBT_MENU_MAX
}mmi_rp_app_ucmbt_menu_enum;
/******************** Menu resource IDs - finish ********************/


/******************** String resource IDs - begin ********************/
typedef enum
{
    STR_ID_UCM_BT_CALLING = 45547 + 1, /* BASE_ID + 1 */
    STR_ID_UCM_BT_REJECT,
    STR_ID_UCM_VOICE_INCOMING,
    STR_ID_UCM_BT_ANSWER,
    STR_ID_UCM_BT_NOT_ALLOW_TO_HOLD,
    STR_ID_UCM_BT_NOT_ALLOW_TO_SWAP,
    STR_ID_UCM_BT_HOLD,
    STR_ID_UCM_BT_RETRIEVE,
    STR_ID_UCM_BT_SWAP,
    STR_ID_UCM_BT_END_SINGLE,
    STR_ID_UCM_BT_END_ALL,
    STR_ID_UCM_BT_END_CALL,
    STR_ID_UCM_BT_PHONEBOOK,
    STR_ID_UCM_BT_MUTE,
    STR_ID_UCM_BT_UNMUTE,
    STR_ID_UCM_BT_HAND_HELD,
    STR_ID_UCM_BT_HAND_FREE,
    STR_ID_UCM_BT_ACTIVE,
    STR_ID_UCM_BT_PAIRED_HOLD,
    STR_ID_UCM_BT_END_ALL_ACTIVE,
    STR_ID_UCM_BT_END_ALL_HELD,
    STR_ID_UCM_BT_CALL_ENDED,
    STR_ID_UCM_BT_PROCESSING,
    STR_ID_UCM_EMERGENCY_CALLS_ONLY,
    STR_ID_UCM_BT_CALL_WILL_BE_ENDED,
    STR_ID_UCM_BT_DTMF,
    STR_ID_UCM_BT_SWITCH_AUDIO_PATH,
    MMI_RP_APP_UCMBT_STR_MAX
}mmi_rp_app_ucmbt_str_enum;
/******************** String resource IDs - finish ********************/


/******************** Screen resource IDs - begin ********************/
typedef enum
{
    GRP_ID_UCM_BT_PRE_MO = 45547 + 1, /* BASE_ID + 1 */
    GRP_ID_UCM_BT_MO,
    GRP_ID_UCM_BT_MT,
    GRP_ID_UCM_BT_INCALL,
    GRP_ID_UCM_BT_CALL_END,
    SCR_ID_UCM_BT_OUTGOING,
    SCR_ID_UCM_BT_INCOMING,
    SCR_ID_UCM_BT_IN_CALL,
    SCR_ID_UCM_BT_CALL_END,
    SCR_ID_UCM_BT_PROCESSING,
    SCR_ID_UCM_BT_DUMMY,
    SCR_ID_UCM_BT_DIALLING,
    SCR_ID_UCM_END_AND_ACCEPT_CONFIRM,
    SCR_ID_UCM_BT_DTMF_EDITOR,
    MMI_RP_APP_UCMBT_SCR_MAX
}mmi_rp_app_ucmbt_scr_enum;
/******************** Screen resource IDs - finish ********************/


/******************** Timer resource IDs - begin ********************/
typedef enum
{
    UCM_NOTIFY_DURATION_TIMER_BT = 45547 + 1, /* BASE_ID + 1 */
    UCM_TONE_AFTER_VIBRATION_BT,
    UCM_MO_PROCESSING_TIMER_BT,
    MMI_RP_APP_UCMBT_TIMER_MAX
}mmi_rp_app_ucmbt_timer_enum;
/******************** Timer resource IDs - finish ********************/
/******************** Template resource IDs - Begin ********************/
/******************** Template resource IDs - End ********************/

/******************** Venus XML resource IDs - Begin ********************/
typedef enum 
{

    MMI_RP_APP_UCMBT_VXML_LAYOUT_MAX
} mmi_rp_app_ucmbt_vxml_layout_enum;
/******************** Venus XML resource IDs - End ********************/



#endif /* _MMI_RP_APP_UCMBT_DEF_H */