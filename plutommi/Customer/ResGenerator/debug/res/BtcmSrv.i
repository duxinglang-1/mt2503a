# 1 "temp/res/BtcmSrv.c"
# 1 "<built-in>"
# 1 "<command line>"
# 1 "temp/res/BtcmSrv.c"
<?xml version="1.0" encoding="UTF-8"?>

# 1 "../../mmi/inc/MMI_features.h" 1
# 69 "../../mmi/inc/MMI_features.h"
# 1 "../../mmi/inc/MMI_features_switch.h" 1
# 67 "../../mmi/inc/MMI_features_switch.h"
# 1 "../../mmi/inc/MMI_features_type.h" 1
# 68 "../../mmi/inc/MMI_features_switch.h" 2
# 70 "../../mmi/inc/MMI_features.h" 2
# 4 "temp/res/BtcmSrv.c" 2

<APP id="SRV_BTCM">

    <CACHEDATA type="byte" id="BT_BQB_TEST" restore_flag="TRUE">
        <DEFAULT_VALUE> [0X00] </DEFAULT_VALUE>
        <DESCRIPTION> BQB TEST flag </DESCRIPTION>
    </CACHEDATA>

    <TIMER id="BT_CMD_GUARD_TIMER"/>
    <TIMER id="BT_POWER_OFF_GUARD_TIMER"/>
    <TIMER id="BT_RELEASE_ALL_CON_GUARD_TIMER"/>
    <TIMER id="BT_TEMP_VISIBLE_TIMER"/>
    <TIMER id="BT_FTPC_BROWSE_FILES_FAILED_TIMER"/>

    <!-- Event registration -->
    <RECEIVER id="EVT_ID_SRV_SETTING_UART_SETTING_CHANGED" proc="srv_bt_cm_uart_hdlr" />




    <RECEIVER id="EVT_ID_SRV_UCM_INDICATION" proc="btaud_ucm_notify_hdlr" />
    <RECEIVER id="EVT_ID_MDI_AUDIO_SPEECH_STATUS_IND" proc="btaud_speech_notify_hdlr" />


</APP>
