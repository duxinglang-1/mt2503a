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
 *   mmi_rp_srv_mdi_def.h
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


#ifndef _MMI_RP_SRV_MDI_DEF_H
#define _MMI_RP_SRV_MDI_DEF_H




/******************** String resource IDs - begin ********************/
typedef enum
{
    STR_ID_MDI_COMMON_FAIL = 7606 + 1, /* BASE_ID + 1 */
    STR_ID_MDI_COMMON_OPEN_FAIL,
    STR_ID_MDI_COMMON_PLAY_FAIL,
    STR_ID_MDI_COMMON_RECORD_FAIL,
    STR_ID_MDI_COMMON_WRITE_PROTECTION,
    STR_ID_MDI_COMMON_HW_NOT_READY,
    STR_ID_MDI_COMMON_INVALID_FILE,
    STR_ID_MDI_AUDIO_NO_AUD_TRACK,
    STR_ID_MDI_CAMERA_PREVIEW_FAILED,
    STR_ID_MDI_CAMERA_CAPTURE_FAILED,
    STR_ID_MDI_CAMERA_XENONFLASH_TIMEOUT,
    STR_ID_MDI_CAMERA_XENONFLASH_LOW_BATTERY,
    STR_ID_MDI_WEBCAM_USB_NOTIFY_ERROR,
    STR_ID_MDI_VIDEO_REC_STORAGE_TOO_SLOW,
    STR_ID_MDI_VIDEO_PLY_FILE_TOO_LARGE,
    STR_ID_MDI_VIDEO_PLY_SNAPSHOT_FAILED,
    STR_ID_MDI_VIDEO_PLY_NETWORK_CONNECT_FAILED,
    STR_ID_MDI_VIDEO_PLY_INVALID_RESOULTION,
    STR_ID_MDI_VIDEO_PLY_NETWORK_BUFFER_FAILED,
    STR_ID_MDI_GPS_UART_ERR_PORT_ALREADY_OPEN,
    STR_ID_MDI_GPS_UART_ERR_PORT_NUMBER_WRONG,
    STR_ID_MDI_GPS_UART_ERR_PARAM_ERROR,
    STR_ID_MDI_GPS_UART_ERR_PORT_ALREADY_CLOSED,
    STR_ID_MDI_GPS_UART_ERR_PORT_ERR_UNKNOW,
    STR_ID_MDI_GPS_UART_ERR_PORT_ERR_NOT_OPEN,
    STR_ID_MDI_GPS_UART_ERR_NO_SLOT,
    MMI_RP_SRV_MDI_STR_MAX
}mmi_rp_srv_mdi_str_enum;
/******************** String resource IDs - finish ********************/


/******************** Timer resource IDs - begin ********************/
typedef enum
{
    TIMER_PROFILES_ALERT_PLAY = 7606 + 1, /* BASE_ID + 1 */
    MDI_AUDIO_PLAYER_TEXT_TIMER,
    MDI_AUDIO_CRESCENDO_TIMER,
    MMI_RP_SRV_MDI_TIMER_MAX
}mmi_rp_srv_mdi_timer_enum;
/******************** Timer resource IDs - finish ********************/


/******************** Events resource IDs - begin ********************/
typedef enum
{
    EVT_ID_MDI_AUDIO_SPEECH_STATUS_IND = 7606 + 1, /* BASE_ID + 1 */
    EVT_ID_MDI_AUDIO_PRE_MODE_SWITCH,
    EVT_ID_MDI_AUDIO_MODE_SWITCHED,
    MMI_RP_SRV_MDI_EVENT_MAX
}mmi_rp_srv_mdi_event_enum;
/******************** Events resource IDs - begin ********************/
/******************** Template resource IDs - Begin ********************/
/******************** Template resource IDs - End ********************/

/******************** Venus XML resource IDs - Begin ********************/
typedef enum 
{

    MMI_RP_SRV_MDI_VXML_LAYOUT_MAX
} mmi_rp_srv_mdi_vxml_layout_enum;
/******************** Venus XML resource IDs - End ********************/



/******************** MMI Cache IDs - Begin ********************/
typedef enum
{
    NRRAM_GPS_LOGGING_SWITCH = 7606 + 1, /* BASE_ID + 1 */     /*         BYTE */ 
    NVRAM_GPS_PAYLOAD_STORAGE,                                  /*         BYTE */ 
    MMI_RP_SRV_MDI_MMI_CACHE_MAX
} mmi_rp_srv_mdi_mmi_cache_enum;
/******************** MMI Cache IDs - End ********************/


#endif /* _MMI_RP_SRV_MDI_DEF_H */
