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
 *   mmi_rp_app_engineermode1_def.h
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


#ifndef _MMI_RP_APP_ENGINEERMODE1_DEF_H
#define _MMI_RP_APP_ENGINEERMODE1_DEF_H




/******************** Menu resource IDs - begin ********************/
typedef enum
{
    MENU_ID_EM_MISC_ON = 11876 + 1, /* BASE_ID + 1 */
    MENU_ID_EM_MISC_OFF,
    MENU_ID_EM_TRUE,
    MENU_ID_EM_FALSE,
    MENU_ID_EM_MAIN_MENU,
    MENU_ID_EM_NW_SETTING,
    MENU_ID_EM_NW_NETWORK_INFO,
    MENU_ID_EM_NW_SETTING_SIM_1,
    MENU_ID_EM_NW_NETWORK_INFO_LIST,
    MENU_ID_EM_NW_INFO_RR_CELL_SEL,
    MENU_ID_EM_NW_INFO_RR_CH_DSCR,
    MENU_ID_EM_NW_INFO_RR_CTRL_CHAN,
    MENU_ID_EM_NW_INFO_RR_RACH_CTRL,
    MENU_ID_EM_NW_INFO_RR_LAI_INFO,
    MENU_ID_EM_NW_INFO_RR_RADIO_LINK,
    MENU_ID_EM_NW_INFO_RR_MEAS_REP,
    MENU_ID_EM_NW_INFO_CC_CHAN_INFO,
    MENU_ID_EM_NW_INFO_CC_CALL_INFO,
    MENU_ID_EM_NW_INFO_CA_LIST_INFO,
    MENU_ID_EM_NW_INFO_PLMN_INFO,
    MENU_ID_EM_NW_INFO_GPRS_INFO,
    MENU_ID_EM_NW_INFO_SI2Q_MI_INFO,
    MENU_ID_EM_NW_INFO_TBF_STATUS,
    MENU_ID_EM_NW_INFO_BLOCK_INFO,
    MENU_ID_EM_NW_BAND_SELECTION,
    MENU_ID_EM_NW_BD_SL_SIM_1,
    MENU_ID_EM_DEVICE,
    MENU_ID_EM_DEV_GPIO,
    MENU_ID_EM_DEV_GPIO_LIST_GPO_GPIO,
    MENU_ID_EM_DEV_GPIO_EDIT_GPIO,
    MENU_ID_EM_DEV_GPIO_EDIT_GPO,
    MENU_ID_EM_MM_COLOR,
    MENU_ID_EM_DEV_HW_LEVEL,
    MENU_ID_EM_DEV_HW_LEVEL_BATTERY,
    MENU_ID_EM_DEV_HW_LEVEL_PWM1,
    MENU_ID_EM_DEV_HW_LEVEL_PWM2,
    MENU_ID_EM_DEV_HW_LEVEL_PWM3,
    MENU_ID_EM_DEV_SET_UART,
    MENU_ID_EM_DEV_UART_SETTING,
    MENU_ID_EM_DEV_DCM_MODE,
    MENU_ID_EM_DEV_DCM_MODE_ON,
    MENU_ID_EM_DEV_DCM_MODE_OFF,
    MENU_ID_EM_DEV_BQB_MODE,
    MENU_ID_EM_DEV_BQB_MODE_ON,
    MENU_ID_EM_DEV_BQB_MODE_OFF,
    EM_DEV_VIDEO_SETTING_MENUID,
    EM_DEV_VIDEO_SETTING_MP4_MENUID,
    EM_DEV_VIDEO_SETTING_H264_MENUID,
    EM_DEV_VIDEO_SETTING_RM_MENUID,
    EM_DEV_VIDEO_SETTING_VP8_MENUID,
    EM_DEV_VIDEO_SETTING_CODEC_MP4_MENUID,
    EM_DEV_VIDEO_SETTING_CODEC_H264_MENUID,
    EM_DEV_VIDEO_SETTING_CODEC_RM_MENUID,
    EM_DEV_VIDEO_SETTING_CODEC_VP8_MENUID,
    EM_DEV_VIDEO_SETTING_MODE_MP4_MENUID,
    EM_DEV_VIDEO_SETTING_MODE_H264_MENUID,
    EM_DEV_VIDEO_SETTING_MODE_RM_MENUID,
    EM_DEV_VIDEO_SETTING_MODE_VP8_MENUID,
    MENU_ID_EM_DEV_MEMORY_TEST,
    MENU_ID_EM_DEV_MEMORY_TEST_EMI_SETTING,
    MENU_ID_EM_DEV_MEMORY_TEST_CUSTOM_SETTING,
    MENU_ID_EM_DEV_MEMORY_TEST_FLASH_INFO,
    MENU_ID_EM_DEV_FM_RADIO,
    MENU_ID_EM_DEVICE_FM_RADIO_STATUS,
    MENU_ID_EM_DEVICE_FM_RADIO_THOSRHELD,
    MENU_ID_EM_DEVICE_FM_RADIO_COMN_CMD,
    MENU_ID_EM_DEV_MINI_GPS,
    MENU_ID_EM_DEV_MINI_GPS_MINI_SKY_CHART,
    MENU_ID_EM_DEV_MINI_GPS_MINI_STATUS,
    MENU_ID_EM_DEV_MINI_GPS_MINI_NMEA,
    MENU_ID_EM_DEV_MINI_GPS_MINI_SETTING,
    MENU_ID_EM_DEV_MINI_GPS_MINI_MA_STATUS,
    MENU_ID_EM_DEV_MINI_GPS_MINIGPS,
    MENU_ID_EM_DEV_MINI_GPS_MINI_TTFF,
    MENU_ID_EM_DEV_MINI_GPS_MINI_TTFF_HOT_START,
    MENU_ID_EM_DEV_MINI_GPS_MINI_TTFF_WARM_START,
    MENU_ID_EM_DEV_MINI_GPS_MINI_TTFF_COLD_START,
    MENU_ID_EM_DEV_MINI_GPS_MINI_POWER_SAVING,
    MENU_ID_EM_DEV_MINI_GPS_MINI_SLEEP_MODE,
    MENU_ID_EM_DEV_MINI_GPS_MINI_WAKE_MODE,
    MENU_ID_EM_DEV_MINI_GPS_MINI_STOP_MODE,
    MENU_ID_EM_DEV_MINI_GPS_FACTORY_RESET,
    MENU_ID_EM_DEV_MINI_GPS_GPS_EM_SHORTCUT,
    MENU_ID_EM_DEV_MINI_GPS_GPS_EM_SHORTCUT_ON,
    MENU_ID_EM_DEV_MINI_GPS_GPS_EM_SHORTCUT_OFF,
    MENU_ID_EM_DEV_PMU_REG_SET,
    MENU_ID_EM_AUDIO,
    MENU_ID_EM_AUD_VOL_0,
    MENU_ID_EM_AUD_VOL_1,
    MENU_ID_EM_AUD_VOL_2,
    MENU_ID_EM_AUD_VOL_3,
    MENU_ID_EM_AUD_VOL_4,
    MENU_ID_EM_AUD_VOL_5,
    MENU_ID_EM_AUD_VOL_6,
    MENU_ID_EM_AUD_16_LELVEL_VOLUME,
    MENU_ID_EM_AUD_SPEECH,
    MENU_ID_EM_AUD_KEY_TONE,
    MENU_ID_EM_AUD_MELODY,
    MENU_ID_EM_AUD_SOUND,
    MENU_ID_EM_AUD_MICROPHONE,
    MENU_ID_EM_AUD_SIDE_TONE,
    MENU_ID_EM_AUD_SET_MODE,
    MENU_ID_EM_AUD_SET_NORMAL_MODE,
    MENU_ID_EM_AUD_SET_LOUDSP_MODE,
    MENU_ID_EM_AUD_SET_HEADSET_MODE,
    MENU_ID_EM_AUD_FIR,
    MENU_ID_EM_AUD_FIR_0,
    MENU_ID_EM_AUD_FIR_1,
    MENU_ID_EM_AUD_FIR_2,
    MENU_ID_EM_AUD_FIR_3,
    MENU_ID_EM_AUD_FIR_4,
    MENU_ID_EM_AUD_FIR_5,
    MENU_ID_EM_AUD_NORMAL_MODE,
    MENU_ID_EM_AUD_LOUDSP_MODE,
    MENU_ID_EM_AUD_HEADSET_MODE,
    MENU_ID_EM_AUD_PARAM_0,
    MENU_ID_EM_AUD_PARAM_1,
    MENU_ID_EM_AUD_PARAM_2,
    MENU_ID_EM_AUD_PARAM_3,
    MENU_ID_EM_AUD_PARAM_4,
    MENU_ID_EM_AUD_PARAM_5,
    MENU_ID_EM_AUD_PARAM_6,
    MENU_ID_EM_AUD_PARAM_7,
    MENU_ID_EM_AUD_PARAM_8,
    MENU_ID_EM_AUD_PARAM_9,
    MENU_ID_EM_AUD_PARAM_10,
    MENU_ID_EM_AUD_PARAM_11,
    MENU_ID_EM_AUD_PARAM_12,
    MENU_ID_EM_AUD_PARAM_13,
    MENU_ID_EM_AUD_PARAM_14,
    MENU_ID_EM_AUD_PARAM_15,
    MENU_ID_EM_AUD_SPEECH_ENHANCEMENT,
    MENU_ID_EM_AUD_SPH_ENH_COMMON_PARA,
    MENU_ID_EM_AUD_SPH_ENH_NORMAL_MODE,
    MENU_ID_EM_AUD_SPH_ENH_HEADSET_MODE,
    MENU_ID_EM_AUD_SPH_ENH_LOUDSPK_MODE,
    MENU_ID_EM_AUD_SPH_ENH_BT_EARPHONE_MODE,
    MENU_ID_EM_AUD_SPH_ENH_BT_CORDLESS_MODE,
    MENU_ID_EM_AUD_SPH_ENH_AUX1_MODE,
    MENU_ID_EM_AUD_SPH_ENH_AUX2_MODE,
    MENU_ID_EM_AUD_SPH_ENH_AUX3_MODE,
    MENU_ID_EM_AUD_RING_TONE,
    MENU_ID_EM_AUD_DEBUG_INFO,
    MENU_ID_EM_AUD_VM_SUPPORT,
    MENU_ID_EM_AUD_AUTO_VM_SPH,
    MENU_ID_EM_AUD_AUTO_VM_SETTING,
    MENU_ID_EM_GPRS_ACT,
    MENU_ID_EM_GPRS_AUTO_ATTACH,
    MENU_ID_EM_MISC,
    MENU_ID_EM_MISC_RAM_TEST,
    MENU_ID_EM_MISC_MEMORY_DUMP,
    MENU_ID_EM_MISC_INTERNET_APPLICATION,
    MENU_ID_EM_MISC_INET_APP_USER_AGENT,
    MENU_ID_EM_MISC_INET_APP_ACCEPT_HEADER,
    MENU_ID_EM_MISC_INET_APP_AH_WAP_1_2_1,
    MENU_ID_EM_MISC_INET_APP_AH_WAP_2_0,
    MENU_ID_EM_MISC_INET_APP_AH_WML,
    MENU_ID_EM_MISC_INET_APP_AH_XHTML,
    MENU_ID_EM_MISC_INET_APP_AH_HTML,
    MENU_ID_EM_MISC_INET_APP_MMS_VERSION,
    MENU_ID_EM_MISC_INET_APP_MV_MMS_1_0,
    MENU_ID_EM_MISC_INET_APP_MV_MMS_1_1,
    MENU_ID_EM_MISC_INET_APP_MV_MMS_1_2,
    MENU_ID_EM_MISC_INET_APP_UA_OPTIONS,
    MENU_ID_EM_MISC_INET_APP_UA_ACTIVATE,
    MENU_ID_EM_MISC_INET_APP_UA_EDIT,
    MENU_ID_EM_MRE,
    MENU_ID_EM_BLUETOOTH,
    MENU_ID_EM_BT_GENERAL_TEST,
    MENU_ID_EM_BT_ENTRY_TEST,
    MENU_ID_EM_BT_ADD_AUDIO_CONNECTION,
    MENU_ID_EM_BT_REMOVE_AUDIO_CONNECTION,
    MENU_ID_EM_BT_ENTRY_LOOKBACK,
    MENU_ID_EM_BT_EXIT_TEST_MODE,
    MENU_ID_EM_BT_ENTRY_TEST_RESERVED,
    MENU_ID_EM_BT_AVRCP_CONNECT_TG_ACTIVELY,
    MENU_ID_EM_BT_RF_TEST,
    MENU_ID_EM_BT_RF_TEST_LIST,
    MENU_ID_EM_DEVICE_BT_RF_TEST_TX,
    MENU_ID_EM_DEVICE_BT_RF_TEST_RX,
    MENU_ID_EM_BT_RF_TEST_NON_SIGNALING_RX,
    MENU_ID_EM_DEVICE_BT_RF_TEST_BD_ADDR,
    MENU_ID_EM_DEVICE_BT_RF_TEST_MODE,
    MENU_ID_EM_BT_UPF_IOT_TEST,
    MENU_ID_EM_PROFILING_OPTION,
    MENU_ID_EM_PROFILING_START,
    MENU_ID_EM_PROFILING_SETTING,
    MENU_ID_EM_RF_TEST_TOOL,
    MENU_ID_EM_RF_TEST_TOOL_GSM,
    MENU_ID_EM_RF_TEST_TOOL_GSM_LIST,
    MENU_ID_EM_RF_GSM_TX_TEST,
    MENU_ID_EM_RF_GSM_RX_TEST,
    MENU_ID_EM_RF_GSM_POWER_SCAN,
    MENU_ID_EM_RF_TEST_TOOL_WIFI,
    MENU_ID_EM_RF_TEST_TOOL_WIFI_LIST,
    MENU_ID_EM_RF_WIFI_TX_TESTS,
    MENU_ID_EM_RF_WIFI_TX_OUTPUT_POWER,
    MENU_ID_EM_RF_WIFI_TX_LOCAL_FREQUENCY,
    MENU_ID_EM_RF_WIFI_TX_CONT_PKT_TX,
    MENU_ID_EM_RF_WIFI_CONT_PKT_RX,
    MENU_ID_EM_RF_WIFI_POWER_SAVE,
    MENU_ID_EM_RF_WIFI_REGISTER_ACCESS,
    MENU_ID_EM_RF_WIFI_REGISTER_MCR,
    MENU_ID_EM_RF_WIFI_REGISTER_EEPROM,
    MENU_ID_EM_RF_WIFI_REGISTER_EFUSE,
    MMI_RP_APP_ENGINEERMODE1_MENU_MAX
}mmi_rp_app_engineermode1_menu_enum;
/******************** Menu resource IDs - finish ********************/


/******************** String resource IDs - begin ********************/
typedef enum
{
    STR_ID_EM_GLOBAL_PROCESSING = 11876 + 1, /* BASE_ID + 1 */
    STR_ID_EM_SIM_CARD_IS_NOT_AVAILABLE,
    STR_ID_EM_WARNING,
    STR_ID_EM_SET_LSK,
    STR_ID_EM_NOTICE_SUCCESS_REBOO,
    STR_ID_EM_GLOBAL_AUTO,
    STR_ID_EM_TRUE,
    STR_ID_EM_FALSE,
    STR_ID_EM_APP_NAME,
    STR_ID_EM_NW_SETTING,
    STR_ID_EM_NW_NETWORK_INFO,
    STR_ID_EM_NW_INFO_RR_CELL_SEL,
    STR_ID_EM_NW_INFO_RR_CH_DSCR,
    STR_ID_EM_NW_INFO_RR_CTRL_CHAN,
    STR_ID_EM_NW_INFO_RR_RACH_CTRL,
    STR_ID_EM_NW_INFO_RR_LAI_INFO,
    STR_ID_EM_NW_INFO_RR_RADIO_LINK,
    STR_ID_EM_NW_INFO_RR_MEAS_REP,
    STR_ID_EM_NW_INFO_CC_CHAN_INFO,
    STR_ID_EM_NW_INFO_CC_CALL_INFO,
    STR_ID_EM_NW_INFO_CA_LIST_INFO,
    STR_ID_EM_NW_INFO_PLMN_INFO,
    STR_ID_EM_NW_INFO_GPRS_INFO,
    STR_ID_EM_NW_INFO_SI2Q_MI_INFO,
    STR_ID_EM_NW_INFO_TBF_STATUS,
    STR_ID_EM_NW_INFO_BLOCK_INFO,
    STR_ID_EM_NW_BAND_SELECTION,
    STR_ID_EM_BAND_SEL_ALL_3G_OFF,
    STR_ID_EM_NW_BAND_SEL_2G,
    STR_ID_EM_NW_BAND_SEL_GSM850,
    STR_ID_EM_NW_BAND_SEL_EGSM900,
    STR_ID_EM_NW_BAND_SEL_DCS1800,
    STR_ID_EM_NW_BAND_SEL_PCS1900,
    STR_ID_EM_NW_BAND_SEL_850_1800,
    STR_ID_EM_NW_BAND_SEL_900_1800,
    STR_ID_EM_NW_BAND_SEL_850_1900,
    STR_ID_EM_DEVICE,
    STR_ID_EM_DEV_GPIO,
    STR_ID_EM_DEV_GPIO_LIST_GPO_GPIO,
    STR_ID_EM_DEV_GPIO_EDIT_GPIO,
    STR_ID_EM_DEV_GPIO_EDIT_GPO,
    STR_ID_EM_DEV_GPIO_DIRECTION,
    STR_ID_EM_DEV_GPIO_LEVEL,
    STR_ID_EM_DEV_GPIO_DIRECTION_OUT,
    STR_ID_EM_DEV_GPIO_DIRECTION_IN,
    STR_ID_EM_DEV_MM_COLOR,
    STR_ID_EM_DEV_SHARP,
    STR_ID_EM_DEV_CONTRAST,
    STR_ID_EM_DEV_SATURATION,
    STR_ID_EM_DEV_HW_LEVEL,
    STR_ID_EM_DEV_HW_LEVEL_BATTERY,
    STR_ID_EM_DEV_PWM_SET_1,
    STR_ID_EM_DEV_PWM_SET_2,
    STR_ID_EM_DEV_PWM_SET_3,
    STR_ID_EM_DEV_LCD_SET_PARAM_1,
    STR_ID_EM_DEV_SET_UART,
    STR_ID_EM_DEV_SET_UART_SETTING,
    STR_ID_EM_DEV_SET_UART_TST_PS,
    STR_ID_EM_DEV_SET_UART_TST_L1,
    STR_ID_EM_DEV_SET_UART_PS,
    STR_ID_EM_DEV_USB_PORT,
    STR_ID_EM_DEV_USB_PORT2,
    STR_ID_EM_DEV_UART_1,
    STR_ID_EM_DEV_UART_2,
    STR_ID_EM_DEV_UART_3,
    STR_ID_EM_DEV_DCM_MODE,
    STR_ID_EM_DEV_BQB_MODE,
    STR_ID_EM_DEV_VIDEO_SETTING,
    STR_ID_EM_DEV_VIDEO_SETTING_MP4,
    STR_ID_EM_DEV_VIDEO_SETTING_H264,
    STR_ID_EM_DEV_VIDEO_SETTING_RM,
    STR_ID_EM_DEV_VIDEO_SETTING_VP8,
    STR_ID_EM_DEV_VIDEO_SETTING_CODEC_MP4,
    STR_ID_EM_DEV_VIDEO_SETTING_CODEC_H264,
    STR_ID_EM_DEV_VIDEO_SETTING_CODEC_RM,
    STR_ID_EM_DEV_VIDEO_SETTING_CODEC_VP8,
    STR_ID_EM_DEV_VIDEO_SETTING_MODE_MP4,
    STR_ID_EM_DEV_VIDEO_SETTING_MODE_H264,
    STR_ID_EM_DEV_VIDEO_SETTING_MODE_RM,
    STR_ID_EM_DEV_VIDEO_SETTING_MODE_VP8,
    STR_ID_EM_DEV_VIDEO_SETTING_PLAY_MODE,
    STR_ID_EM_DEV_VIDEO_SETTING_FLUENCY,
    STR_ID_EM_DEV_VIDEO_SETTING_BALANCE,
    STR_ID_EM_DEV_VIDEO_SETTING_QUALITY,
    STR_ID_EM_DEV_VIDEO_SETTING_LAST_MODE,
    STR_ID_EM_DEV_VIDEO_SETTING_FLUENCY_SETTING,
    STR_ID_EM_DEV_MEMORY_TEST,
    STR_ID_EM_DEV_MEMORY_TEST_EMI_SETTING,
    STR_ID_EM_DEV_MEMORY_TEST_CUSTOM_SETTING,
    STR_ID_EM_DEV_MEMORY_TEST_FLASH_INFO,
    STR_ID_EM_DEV_FM_RADIO,
    STR_ID_EM_DEVICE_FM_RADIO_MONO,
    STR_ID_EM_DEVICE_FM_RADIO_STEREO,
    STR_ID_EM_DEVICE_FM_RADIO_RSSI,
    STR_ID_EM_DEVICE_FM_RADIO_THOSRHELD,
    STR_ID_EM_DEVICE_FM_RADIO_STATUS,
    STR_ID_EM_DEV_FMR_FRE_MHZ,
    STR_ID_EM_DEV_FMR_FORCE_SET,
    STR_ID_EM_DEV_FMR_ANTENNA_TYPE,
    STR_ID_EM_DEV_FMR_LONG_ANT,
    STR_ID_EM_DEV_FMR_SHORT_ANT,
    STR_ID_EM_DEV_FMR_ANT_LONG,
    STR_ID_EM_DEV_FMR_ANT_SHORT,
    STR_ID_EM_DEVICE_FM_RADIO_COMN_CMD,
    STR_ID_EM_DEVICE_FM_RADIO_COMN_CMD_INPUT,
    STR_ID_EM_DEVICE_FM_RADIO_COMN_CMD_OUTPUT,
    STR_ID_EM_DEV_MINI_GPS,
    STR_ID_EM_DEV_MINI_GPS_MINIGPS,
    STR_ID_EM_DEV_MINI_GPS_FACTORY_RESET,
    STR_ID_EM_DEV_MINI_GPS_GPS_EM_SHORTCUT,
    STR_ID_EM_DEV_MINI_GPS_MINI_SKY_CHART,
    STR_ID_EM_DEV_MINI_GPS_MINI_STATUS,
    STR_ID_EM_DEV_MINI_GPS_MINI_NMEA,
    STR_ID_EM_DEV_MINI_GPS_MINI_SETTING,
    STR_ID_EM_DEV_MINI_GPS_MINI_TTFF,
    STR_ID_EM_DEV_MINI_GPS_MINI_MA_STATUS,
    STR_ID_EM_DEV_MINI_GPS_MINI_SETTING_CATCHER,
    STR_ID_EM_DEV_MINI_GPS_MINI_SETTING_FILE_DUMP,
    STR_ID_EM_DEV_MINI_GPS_MINI_SETTING_PC_TOOL,
    STR_ID_EM_DEV_MINI_GPS_MINI_SETTING_DUBG_MSG,
    STR_ID_EM_DEV_MINI_GPS_MINI_SETTING_BEE_SWITCH,
    STR_ID_EM_DEV_MINI_GPS_MINI_SETTING_BEE_DEBUG,
    STR_ID_EM_DEV_MINI_GPS_MINI_TTFF_HOT,
    STR_ID_EM_DEV_MINI_GPS_MINI_TTFF_WARM,
    STR_ID_EM_DEV_MINI_GPS_MINI_TTFF_COLD,
    STR_ID_EM_DEV_MINI_GPS_MINI_POWER_SAVING,
    STR_ID_EM_DEV_MINI_GPS_MINI_SLEEP_MODE,
    STR_ID_EM_DEV_MINI_GPS_MINI_WAKE_MODE,
    STR_ID_EM_DEV_MINI_GPS_MINI_STOP_MODE,
    STR_ID_EM_DEV_MINI_GPS_AGPS_IS_ON,
    STR_ID_EM_DEV_PMU_REG_SET,
    STR_ID_EM_DEV_PMU_REG_SET_WRITE,
    STR_ID_EM_DEV_PMU_REG_SET_Addr,
    STR_ID_EM_DEV_PMU_REG_SET_VALUE,
    STR_ID_EM_DEV_PMU_REG_SET_HIGH_LOW,
    STR_ID_EM_AUDIO,
    STR_ID_EM_AUD_16_LELVEL_MAX_GAIN,
    STR_ID_EM_AUD_16_LELVEL_STEP,
    STR_ID_EM_AUD_SET_MODE,
    STR_ID_EM_AUD_SET_VOLUME,
    STR_ID_EM_AUD_NORMAL_MODE,
    STR_ID_EM_AUD_FIR,
    STR_ID_EM_AUD_SPEECH,
    STR_ID_EM_AUD_KEY_TONE,
    STR_ID_EM_AUD_MELODY,
    STR_ID_EM_AUD_SOUND,
    STR_ID_EM_AUD_MICROPHONE,
    STR_ID_EM_AUD_SIDE_TONE,
    STR_ID_EM_AUD_LOUDSP_MODE,
    STR_ID_EM_AUD_HEADSET_MODE,
    STR_ID_EM_AUD_FIR_0,
    STR_ID_EM_AUD_FIR_1,
    STR_ID_EM_AUD_FIR_2,
    STR_ID_EM_AUD_FIR_3,
    STR_ID_EM_AUD_FIR_4,
    STR_ID_EM_AUD_FIR_5,
    STR_ID_EM_AUD_TV_OUT,
    STR_ID_EM_AUD_VOLUME_0,
    STR_ID_EM_AUD_VOLUME_1,
    STR_ID_EM_AUD_VOLUME_2,
    STR_ID_EM_AUD_VOLUME_3,
    STR_ID_EM_AUD_VOLUME_4,
    STR_ID_EM_AUD_VOLUME_5,
    STR_ID_EM_AUD_VOLUME_6,
    STR_ID_EM_AUD_16_LELVEL_VOLUME,
    STR_ID_EM_AUD_DIRECT_APPLY,
    STR_ID_EM_AUD_SPEECH_ENHANCEMENT,
    STR_ID_EM_AUD_SPH_ENH_COMMON_PARA,
    STR_ID_EM_AUD_SPH_ENH_BT_EARPHONE_MODE,
    STR_ID_EM_AUD_SPH_ENH_BT_CORDLESS_MODE,
    STR_ID_EM_AUD_SPH_ENH_AUX1_MODE,
    STR_ID_EM_AUD_SPH_ENH_AUX2_MODE,
    STR_ID_EM_AUD_SPH_ENH_AUX3_MODE,
    STR_ID_EM_AUD_PARAMETER,
    STR_ID_EM_AUD_RING_TONE,
    STR_ID_EM_AUD_DEBUG_INFO,
    STR_ID_EM_AUD_AUTO_VM_SETTING,
    STR_ID_EM_AUD_VM_SUPPORT,
    STR_ID_EM_AUD_AUTO_VM_SPH,
    STR_ID_EM_GPRS_ACT,
    STR_ID_EM_GPRS_AUTO_ATTACH,
    STR_ID_EM_MISC,
    STR_ID_EM_MISC_RAM_TEST,
    STR_ID_EM_MISC_MEMORY_DUMP,
    STR_ID_EM_MISC_INTERNET_APPLICATION,
    STR_ID_EM_MISC_INET_APP_USER_AGENT,
    STR_ID_EM_MISC_INET_APP_ACCEPT_HEADER,
    STR_ID_EM_MISC_INET_APP_MMS_VERSION,
    STR_ID_EM_MISC_INET_APP_AH_WAP_1_2_1,
    STR_ID_EM_MISC_INET_APP_AH_WAP_2_0,
    STR_ID_EM_MISC_INET_APP_AH_WML,
    STR_ID_EM_MISC_INET_APP_AH_XHTML,
    STR_ID_EM_MISC_INET_APP_AH_HTML,
    STR_ID_EM_MISC_INET_APP_MV_MMS_1_0,
    STR_ID_EM_MISC_INET_APP_MV_MMS_1_1,
    STR_ID_EM_MISC_INET_APP_MV_MMS_1_2,
    STR_ID_EM_MISC_INET_APP_USER_AGENT_STRING,
    STR_ID_EM_MISC_INET_APP_USER_AGENT_PROFILE,
    STR_ID_EM_MRE,
    STR_ID_EM_BLUETOOTH,
    STR_ID_EM_BT_BD_ADDR,
    STR_ID_EM_BT_GENERAL_TEST,
    STR_ID_EM_BT_ENTRY_TEST,
    STR_ID_EM_BT_ENTRY_TEST_RESERVED,
    STR_ID_EM_BT_LOOKBACK,
    STR_ID_EM_BT_BD_PASSWORD,
    STR_ID_EM_BT_EXIT_TEST_MODE,
    STR_ID_EM_BT_ADD_AUDIO_CONNECTION,
    STR_ID_EM_BT_REMOVE_AUDIO_CONNECTION,
    STR_ID_EM_BT_AVRCP_CONNECT_TG_ACTIVELY,
    STR_ID_EM_BT_RF_TEST,
    STR_ID_EM_DEVICE_BT_RF_TEST_TX,
    STR_ID_EM_DEVICE_BT_RF_TEST_RX,
    STR_ID_EM_BT_RF_TEST_NON_SIGNALING_RX,
    STR_ID_EM_DEVICE_BT_RF_TEST_MODE,
    STR_ID_EM_DEV_BT_RF_TEST_NO_HOPING,
    STR_ID_EM_DEV_BT_RF_TEST_HOPIN,
    STR_ID_EM_DEV_BT_RF_TEST_CHANNEL,
    STR_ID_EM_DEV_BT_RF_TEST_CTRL_PWR_LEVEL,
    STR_ID_EM_DEV_BT_RF_TEST_PACKET_TYPE,
    STR_ID_EM_DEV_BT_RF_TEST_PACKET_TYPE_DH1,
    STR_ID_EM_DEV_BT_RF_TEST_PACKET_TYPE_DH3,
    STR_ID_EM_DEV_BT_RF_TEST_PACKET_TYPE_DH5,
    STR_ID_EM_DEV_BT_RF_TEST_PACKET_TYPE_DM1,
    STR_ID_EM_DEV_BT_RF_TEST_PACKET_TYPE_DM3,
    STR_ID_EM_DEV_BT_RF_TEST_PACKET_TYPE_DM5,
    STR_ID_EM_DEV_BT_RF_TEST_PACKET_TYPE_2DH1,
    STR_ID_EM_DEV_BT_RF_TEST_PACKET_TYPE_2DH3,
    STR_ID_EM_DEV_BT_RF_TEST_PACKET_TYPE_2DH5,
    STR_ID_EM_DEV_BT_RF_TEST_PACKET_TYPE_3DH1,
    STR_ID_EM_DEV_BT_RF_TEST_PACKET_TYPE_3DH3,
    STR_ID_EM_DEV_BT_RF_TEST_PACKET_TYPE_3DH5,
    STR_ID_EM_DEV_BT_RF_TEST_PATTERN_TYPE,
    STR_ID_EM_DEV_BT_RF_TEST_PATTERN_TYPE_1,
    STR_ID_EM_DEV_BT_RF_TEST_PATTERN_TYPE_2,
    STR_ID_EM_DEV_BT_RF_TEST_PATTERN_TYPE_3,
    STR_ID_EM_DEV_BT_RF_TEST_PATTERN_TYPE_4,
    STR_ID_EM_DEV_BT_RF_TEST_PATTERN_TYPE_5,
    STR_ID_EM_DEV_BT_RF_TEST_BT_ADDR,
    STR_ID_EM_DEV_BT_RF_TEST_PACKET_TYPE_NON_MOD,
    STR_ID_EM_DEV_BT_RF_TEST_DATA_LEN,
    STR_ID_EM_DEV_BT_RF_TEST_POLL_PERIOD,
    STR_ID_EM_DEV_BT_RF_TEST_TURN_OFF_BT,
    STR_ID_EM_BT_UPF_IOT_TEST,
    STR_ID_EM_PROFILING_EXTRA_LAYER,
    STR_ID_EM_PROFILING_ROTATE,
    STR_ID_EM_PROFILING_PLAY_SIZE,
    STR_ID_EM_PROFILING_TVOUT_MODE,
    STR_ID_EM_PROFILING_ROTATE_0,
    STR_ID_EM_PROFILING_ROTATE_90,
    STR_ID_EM_PROFILING_ROTATE_180,
    STR_ID_EM_PROFILING_ROTATE_270,
    STR_ID_EM_PROFILING_TV_FULL_SCREEN,
    STR_ID_EM_PROFILING_TV_LCD_SCREEN,
    STR_ID_EM_PROFILING_SIZE_SQCIF,
    STR_ID_EM_PROFILING_SIZE_QCIF,
    STR_ID_EM_PROFILING_SIZE_CIF,
    STR_ID_EM_PROFILING_SIZE_QQVGA,
    STR_ID_EM_PROFILING_SIZE_QVGA,
    STR_ID_EM_PROFILING_SIZE_VGA,
    STR_ID_EM_PROFILING_SIZE_LCD,
    STR_ID_EM_PROFILING_RECORD_SIZE,
    STR_ID_EM_PROFILING_PREVIEW_SIZE,
    STR_ID_EM_PROFILING_SETTING,
    STR_ID_EM_RF_TEST_TOOL,
    STR_ID_EM_RF_TEST_GSM_CONFIRM_NOTIFY_TEST,
    STR_ID_EM_RF_TEST_TOOL_GSM,
    STR_ID_EM_RF_GSM_TX_TEST,
    STR_ID_EM_RF_GSM_RX_TEST,
    STR_ID_EM_RF_GSM_POWER_SCAN,
    STR_ID_EM_AUD_SET_SUCCES,
    STR_ID_EM_AUD_SET_ERROR,
    STR_ID_EM_RF_GSM_TX_BAND,
    STR_ID_EM_RF_GSM_TX_BAND_GSM850,
    STR_ID_EM_RF_GSM_TX_BAND_GSM900,
    STR_ID_EM_RF_GSM_TX_BAND_DCS1800,
    STR_ID_EM_RF_GSM_TX_BAND_PCS1900,
    STR_ID_EM_RF_GSM_TX_ARFCN,
    STR_ID_EM_RF_GSM_TX_TSC,
    STR_ID_EM_RF_GSM_TX_PCL,
    STR_ID_EM_RF_GSM_TX_AFC,
    STR_ID_EM_RF_GSM_TX_BURST_TYPE,
    STR_ID_EM_RF_GSM_TX_BURST_NB,
    STR_ID_EM_RF_GSM_TX_BURST_AB,
    STR_ID_EM_RF_GSM_TX_GAIN,
    STR_ID_EM_RF_GSM_RX_BURST_BURST_RX,
    STR_ID_EM_RF_TEST_TOOL_WIFI,
    STR_ID_EM_RF_TEST_WIFI_CLOSE,
    STR_ID_EM_RF_WIFI_TX_TESTS,
    STR_ID_EM_RF_WIFI_CONT_PKT_RX,
    STR_ID_EM_RF_WIFI_POWER_SAVE,
    STR_ID_EM_RF_WIFI_STORAGE,
    STR_ID_EM_RF_WIFI_REGISTER,
    STR_ID_EM_RF_WIFI_TX_OUTPUT_POWER,
    STR_ID_EM_RF_WIFI_TX_LOCAL_FREQUENCY,
    STR_ID_EM_RF_WIFI_TX_CONT_PKT_TX,
    STR_ID_EM_RF_WIFI_TX_CH_FREQ,
    STR_ID_EM_RF_WIFI_TX_CH_FREQ_1,
    STR_ID_EM_RF_WIFI_TX_CH_FREQ_2,
    STR_ID_EM_RF_WIFI_TX_CH_FREQ_3,
    STR_ID_EM_RF_WIFI_TX_CH_FREQ_4,
    STR_ID_EM_RF_WIFI_TX_CH_FREQ_5,
    STR_ID_EM_RF_WIFI_TX_CH_FREQ_6,
    STR_ID_EM_RF_WIFI_TX_CH_FREQ_7,
    STR_ID_EM_RF_WIFI_TX_CH_FREQ_8,
    STR_ID_EM_RF_WIFI_TX_CH_FREQ_9,
    STR_ID_EM_RF_WIFI_TX_CH_FREQ_10,
    STR_ID_EM_RF_WIFI_TX_CH_FREQ_11,
    STR_ID_EM_RF_WIFI_TX_CH_FREQ_12,
    STR_ID_EM_RF_WIFI_TX_CH_FREQ_13,
    STR_ID_EM_RF_WIFI_TX_CH_FREQ_14,
    STR_ID_EM_RF_WIFI_TX_RATE,
    STR_ID_EM_RF_WIFI_TX_RATE_1M,
    STR_ID_EM_RF_WIFI_TX_RATE_2M,
    STR_ID_EM_RF_WIFI_TX_RATE_5_5M,
    STR_ID_EM_RF_WIFI_TX_RATE_11M,
    STR_ID_EM_RF_WIFI_TX_RATE_6M,
    STR_ID_EM_RF_WIFI_TX_RATE_9M,
    STR_ID_EM_RF_WIFI_TX_RATE_12M,
    STR_ID_EM_RF_WIFI_TX_RATE_18M,
    STR_ID_EM_RF_WIFI_TX_RATE_24M,
    STR_ID_EM_RF_WIFI_TX_RATE_36M,
    STR_ID_EM_RF_WIFI_TX_RATE_48M,
    STR_ID_EM_RF_WIFI_TX_RATE_54M,
    STR_ID_EM_RF_WIFI_TX_RATE_MCS0,
    STR_ID_EM_RF_WIFI_TX_RATE_MCS1,
    STR_ID_EM_RF_WIFI_TX_RATE_MCS2,
    STR_ID_EM_RF_WIFI_TX_RATE_MCS3,
    STR_ID_EM_RF_WIFI_TX_RATE_MCS4,
    STR_ID_EM_RF_WIFI_TX_RATE_MCS5,
    STR_ID_EM_RF_WIFI_TX_RATE_MCS6,
    STR_ID_EM_RF_WIFI_TX_RATE_MCS7,
    STR_ID_EM_RF_WIFI_TX_RATE_MCS32,
    STR_ID_EM_RF_WIFI_11NBW,
    STR_ID_EM_RF_WIFI_11NBW_HT20,
    STR_ID_EM_RF_WIFI_11NBW_HT40,
    STR_ID_EM_RF_WIFI_11NBW_L20,
    STR_ID_EM_RF_WIFI_11NBW_U20,
    STR_ID_EM_RF_WIFI_11NGI,
    STR_ID_EM_RF_WIFI_11NGI_NG,
    STR_ID_EM_RF_WIFI_11NGI_SG,
    STR_ID_EM_RF_WIFI_11NPF,
    STR_ID_EM_RF_WIFI_11NPF_GF,
    STR_ID_EM_RF_WIFI_11NPF_MM,
    STR_ID_EM_RF_WIFI_REGISTER_EFUSE,
    STR_ID_EM_RF_WIFI_POWER_UPDATE,
    STR_ID_EM_RF_WIFI_TX_GAIN,
    STR_ID_EM_RF_WIFI_TX_PKT_COUNT,
    STR_ID_EM_RF_WIFI_TX_PKT_LENGTH,
    STR_ID_EM_RF_WIFI_TX_PATTERN,
    STR_ID_EM_RF_WIFI_TX_PATTERN_ALL_0,
    STR_ID_EM_RF_WIFI_TX_PATTERN_ALL_1,
    STR_ID_EM_RF_WIFI_TX_PATTERN_ALTER_BITS,
    STR_ID_EM_RF_WIFI_TX_PATTERN_RANDOM,
    STR_ID_EM_RF_WIFI_POWER_SAVE_NORMAL,
    STR_ID_EM_RF_WIFI_POWER_SAVE_IDLE,
    STR_ID_EM_RF_WIFI_POWER_SAVE_SLEEP,
    STR_ID_EM_RF_WIFI_REGISTER_MCR,
    STR_ID_EM_RF_WIFI_REGISTER_EEPROM,
    STR_ID_EM_RF_WIFI_REGISTER_TYPE,
    STR_ID_EM_RF_WIFI_REGISTER_16,
    STR_ID_EM_RF_WIFI_REGISTER_32,
    STR_ID_EM_RF_WIFI_REGISTER_ACCESS,
    STR_ID_EM_RF_WIFI_REGISTER_WRITE,
    STR_ID_EM_RF_WIFI_REGISTER_ADDRESS,
    STR_ID_EM_RF_WIFI_REGISTER_DATA,
    MMI_RP_APP_ENGINEERMODE1_STR_MAX
}mmi_rp_app_engineermode1_str_enum;
/******************** String resource IDs - finish ********************/


/******************** Screen resource IDs - begin ********************/
typedef enum
{
    GRP_ID_EM_ROOT = 11876 + 1, /* BASE_ID + 1 */
    SCR_ID_EM_CMN_SCRN,
    SCR_ID_EM_DUALMODE_SWITCH_PROGRESS,
    SCR_ID_EM_NW_INFO_LOG,
    SCR_ID_EM_DEV_GPIO_LIST,
    SCR_ID_EM_DEV_UART_POWER_ONOFF_MENU,
    GRP_ID_EM_DEV_VIDEO_SETTING,
    SCR_ID_EM_DEV_FM_RADIO_RSSI_INFO,
    SCR_ID_EM_DEV_FM_RADIO_RSSI_INFO_OTHER,
    SCR_ID_EM_DEV_MINIGPS_MAIN,
    SCR_ID_EM_DEV_MINIGPS_SKY_CHART,
    SCR_ID_EM_DEV_MINIGPS_STATUS,
    SCR_ID_EM_DEV_MINIGPS_NMEA,
    SCR_ID_EM_DEV_MINIGPS_SETTING,
    SCR_ID_EM_DEV_MINIGPS_TTFF,
    SCR_ID_EM_DEV_MINIGPS_MA_STATUS,
    SCR_ID_EM_AUD_RING_TONE,
    SCR_ID_EM_AUD_RING_TONE_MENU,
    GRP_ID_EM_MISC_INET_APP_USER_AGENT,
    GRP_ID_EM_MISC_INET_APP_ACCEPT_HEADER,
    GRP_ID_EM_MISC_INET_APP_MMS_VERSION,
    SCR_ID_EM_MISC_MRE_INFO,
    SCR_ID_EM_BT_RF_TEST_RESLUT_SCRN,
    SCR_ID_EM_BT_NON_SIGNALING_RX_RET_SCRN,
    GRP_ID_EM_MISC_MEDIA_MEMORY_SETTING,
    GRP_ID_EM_PROFILING_AUTO_PLAY,
    GRP_ID_EM_PROFILING_VDOPLY,
    GRP_ID_EM_PROFILING_CAMERA,
    GRP_ID_EM_PROFILING_CAMERA_APP_CAPTURE,
    GRP_ID_EM_PROFILING_IMAGE_DECODE,
    GRP_ID_EM_PROFILING_VDOREC,
    SCR_ID_EM_RF_TEST_GSM_POWER_SCAN_RESULT,
    SCR_ID_EM_RF_WIFI_TX_DAC_OFFSET,
    SCR_ID_EM_RF_WIFI_RX_CONT_PKT,
    MMI_RP_APP_ENGINEERMODE1_SCR_MAX
}mmi_rp_app_engineermode1_scr_enum;
/******************** Screen resource IDs - finish ********************/


/******************** Timer resource IDs - begin ********************/
typedef enum
{
    EM_NOTIFYDURATION_TIMER = 11876 + 1, /* BASE_ID + 1 */
    EM_RINGTONE_HIGHLIGHT_TIMER,
    EM_GPRS_PING_TIMER,
    EM_GPRS_SOC_DEMO_APP_TIMER,
    MMI_RP_APP_ENGINEERMODE1_TIMER_MAX
}mmi_rp_app_engineermode1_timer_enum;
/******************** Timer resource IDs - finish ********************/
/******************** Template resource IDs - Begin ********************/
/******************** Template resource IDs - End ********************/

/******************** Venus XML resource IDs - Begin ********************/
typedef enum 
{

    MMI_RP_APP_ENGINEERMODE1_VXML_LAYOUT_MAX
} mmi_rp_app_engineermode1_vxml_layout_enum;
/******************** Venus XML resource IDs - End ********************/



/******************** MMI Cache IDs - Begin ********************/
typedef enum
{
    NVRAM_EM_INET_ACTIVE_USER_AGENT = 11876 + 1, /* BASE_ID + 1 */      /*         BYTE */ 
    NVRAM_EM_INET_ACTIVE_ACCEPT_HEADER,                         /*         BYTE */ 
    NVRAM_EM_INET_ACTIVE_MMS_VERSION,                           /*         BYTE */ 
    NVRAM_AUDIO_DEBUG_INFO1,                                    /*       DOUBLE */ 
    NVRAM_AUDIO_DEBUG_INFO2,                                    /*       DOUBLE */ 
    NVRAM_AUDIO_DEBUG_INFO3,                                    /*       DOUBLE */ 
    NVRAM_AUDIO_DEBUG_INFO4,                                    /*       DOUBLE */ 
    MMI_RP_APP_ENGINEERMODE1_MMI_CACHE_MAX
} mmi_rp_app_engineermode1_mmi_cache_enum;
/******************** MMI Cache IDs - End ********************/


/******************** Image resource IDs - begin ********************/
typedef enum
{
    IMG_ID_EM_MAIN_ICON = 11876 + 1, /* BASE_ID + 1 */
    MMI_RP_APP_ENGINEERMODE1_IMG_MAX
}mmi_rp_app_engineermode1_img_enum;
/******************** Image resource IDs - finish ********************/


#endif /* _MMI_RP_APP_ENGINEERMODE1_DEF_H */
