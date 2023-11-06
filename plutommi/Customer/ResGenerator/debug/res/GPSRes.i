# 1 "temp/res/GPSRes.c"
# 1 "<built-in>"
# 1 "<command line>"
# 1 "temp/res/GPSRes.c"
# 1 "../../mmi/inc/MMI_features.h" 1
# 69 "../../mmi/inc/MMI_features.h"
# 1 "../../mmi/inc/MMI_features_switch.h" 1
# 67 "../../mmi/inc/MMI_features_switch.h"
# 1 "../../mmi/inc/MMI_features_type.h" 1
# 68 "../../mmi/inc/MMI_features_switch.h" 2
# 70 "../../mmi/inc/MMI_features.h" 2
# 2 "temp/res/GPSRes.c" 2
# 1 "../customerinc/custresdef.h" 1
# 195 "../customerinc/custresdef.h"
# 1 "../../mmi/inc/MMI_features.h" 1
# 196 "../customerinc/custresdef.h" 2
# 3 "temp/res/GPSRes.c" 2


<?xml version="1.0" encoding="UTF-8"?>


<APP id="SRV_GPS">




    <!--Include Area-->
    <INCLUDE file="GlobalResDef.h"/>

    <TIMER id="GPS_MGR_NOTIFY_TIMER_ID_1"/>
    <TIMER id="GPS_MGR_NOTIFY_TIMER_ID_2"/>
    <TIMER id="GPS_MGR_NOTIFY_TIMER_ID_3"/>
    <TIMER id="GPS_MGR_NOTIFY_TIMER_ID_4"/>
    <TIMER id="GPS_MGR_NOTIFY_TIMER_ID_5"/>
    <TIMER id="GPS_MGR_SET_MODE_TIMER_ID"/>

    <!-----------------------------------------------------Event handle----------------------------------------------------->
    <RECEIVER id="EVT_ID_SRV_DTCNT_ACCT_DELETE_IND" proc="mmi_gps_setting_dtcnt_notify_hdlr"/>
    <RECEIVER id="EVT_ID_SRV_DTCNT_ACCT_UPDATE_IND" proc="mmi_gps_setting_dtcnt_notify_hdlr"/>

    <!-----------------------------------------------------String Resource Area----------------------------------------------------->

    <STRING id="STR_ID_GPS"/>
    <STRING id="STR_ID_GPS_SETTING_MAIN"/>
    <STRING id="STR_ID_GPS_SETTING_RECEIVER"/>
    <STRING id="STR_ID_GPS_SETTING_SELECT"/>
    <STRING id="STR_ID_GPS_SETTING_SAVE"/>
    <STRING id="STR_ID_GPS_SETTING_ASK_SAVE_SETTING"/>
    <STRING id="STR_ID_GPS_SETTING_SAVE_OK"/>
    <STRING id="STR_ID_GPS_SETTING_ASK_SAVE_CHANGED_IF_SAVE"/>
    <STRING id="STR_ID_GPS_SETTING_AGPS"/>
    <STRING id="STR_ID_GPS_SETTING_AGPS_SETTING"/>
    <STRING id="STR_ID_GPS_SETTING_AGPS_AUTO"/>
    <STRING id="STR_ID_GPS_SETTING_AGPS_PROFILE"/>
    <STRING id="STR_ID_GPS_SETTING_AGPS_SEND_LOCATION"/>
    <STRING id="STR_ID_GPS_SETTING_AGPS_PROFILE_NAME"/>
    <STRING id="STR_ID_GPS_SETTING_AGPS_PROFILE_ADDR"/>
    <STRING id="STR_ID_GPS_SETTING_AGPS_PROFILE_PUSH_SMS_NUM"/>
    <STRING id="STR_ID_GPS_SETTING_AGPS_PROFILE_PORT"/>
    <STRING id="STR_ID_GPS_SETTING_AGPS_PROFILE_INVALID_PORT"/>
    <STRING id="STR_ID_GPS_SETTING_AGPS_PROFILE_INVALID_DATA_ACCOUNT"/>
    <STRING id="STR_ID_GPS_SETTING_INPUT_EDITOR_OPTION_DONE"/>
    <STRING id="STR_ID_GPS_SETTING_INPUT_EDITOR_OPTION_CANCEL"/>
    <STRING id="STR_ID_GPS_SETTING_TIME_SYNC"/>
    <STRING id="STR_ID_GPS_SETTING_COLON"/>
    <STRING id="STR_ID_GPS_SETTING_MINI_GPS"/>
    <STRING id="STR_ID_GPS_MGR_NETWORK_CREATE_FAIL"/>
    <STRING id="STR_ID_GPS_MGR_BAD_PUSH_CONTENT"/>
    <STRING id="STR_ID_GPS_MGR_NOT_SUPPORTED"/>
    <STRING id="STR_ID_GPS_MGR_REQ_NOT_ACCEPTED"/>
    <STRING id="STR_ID_GPS_MGR_NO_RESOURCE"/>
    <STRING id="STR_ID_GPS_MGR_NETWORK_DISCONN"/>
    <STRING id="STR_ID_GPS_MGR_REMOTE_ABORT"/>
    <STRING id="STR_ID_GPS_MGR_TIMER_EXPIRY"/>
    <STRING id="STR_ID_GPS_MGR_REMOTE_MSG_ERROR"/>
    <STRING id="STR_ID_GPS_MGR_REQ_POS"/>
    <STRING id="STR_ID_GPS_MGR_REQ_POS_REQUESTOR"/>
    <STRING id="STR_ID_GPS_MGR_REQ_POS_APPLICATION"/>

    <!-----------------------------------------------------Image Resource Area------------------------------------------------------>

    <IMAGE id="IMG_ID_GPS_SETTING_MENU_ICON">"..\\\\..\\\\Customer\\\\Images""\\\\PLUTO_ENCODE""\\\\\MainLCD\\\\Submenu\\\\Settings\\\\SB_GPSS.bmp"</IMAGE>




    <!------------------------------------------------------Menu Resource Area------------------------------------------------------>


    <MENU id="MENU_ID_GPS_SETTING" type="OPTION" img="IMG_ID_GPS_SETTING_MENU_ICON" str="STR_ID_GPS_SETTING_MAIN" highlight="HighlightGPSSetting">
         <MENUITEM_ID>MENU_ID_GPS_RECEIVER</MENUITEM_ID>
         <MENUITEM_ID>MENU_ID_GPS_BTDEVICE</MENUITEM_ID>
         <MENUITEM_ID>MENU_ID_GPS_AGPS_SETTING</MENUITEM_ID>
    </MENU>

    <MENUITEM id="MENU_ID_GPS_RECEIVER" str="STR_ID_GPS_SETTING_RECEIVER"/>
# 102 "temp/res/GPSRes.c"
    <MENUITEM id="MENU_ID_GPS_AGPS_SWITCH" str="STR_ID_GPS_SETTING_AGPS"/>
# 132 "temp/res/GPSRes.c"
    <MENUITEM id="MENU_ID_GPS_AGPS_CP_TEST" str="STR_ID_GPS" highlight="HighlightEMGPSMain"/>

    <SCREEN id="SCR_ID_GPS_SETTING_MAIN"/>
    <SCREEN id="SCR_ID_GPS_SETTING_AGPS_SETTING"/>
    <SCREEN id="SCR_ID_GPS_SETTING_AGPS_PROFILE"/>
    <SCREEN id="SCR_ID_GPS_SETTING_AGPS_PROFILE_OPTION"/>
    <SCREEN id="SCR_ID_GPS_SETTING_AGPS_PROFILE_EDIT"/>
    <SCREEN id="SCR_ID_GPS_SETTING_ASK_SAVE_SCREEN"/>
    <SCREEN id="SCR_ID_GPS_SETTING_BT_PAIRING"/>
    <SCREEN id="SCR_ID_GPS_SETTING_INPUT_EDITOR"/>
    <SCREEN id="SCR_ID_GPS_SETTING_INPUT_EDITOR_OPTION"/>

    <SCREEN id="SCR_ID_GIS_SETTING_PORT_CHOOSE"/>
    <SCREEN id="SCR_ID_GPS_SETTING_DUMMY"/>

    <SCREEN id="SRC_ID_GPS_MGR_NOTIFY"/>
    <SCREEN id="SRC_ID_GPS_MGR_MTLR_NOTIFY"/>

    <SCREEN id="SCR_ID_AGPS_SUPL_OTAP_PROF_INFO"/>
    <SCREEN id="SCR_ID_AGPS_SUPL_OTAP_PROF_LIST"/>



</APP>
