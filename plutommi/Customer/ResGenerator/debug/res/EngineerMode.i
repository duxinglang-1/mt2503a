# 1 "temp/res/EngineerMode.c"
# 1 "<built-in>"
# 1 "<command line>"
# 1 "temp/res/EngineerMode.c"
# 956 "temp/res/EngineerMode.c"
# 1 "../../mmi/inc/mmi_features.h" 1
# 69 "../../mmi/inc/mmi_features.h"
# 1 "../../mmi/inc/MMI_features_switch.h" 1
# 67 "../../mmi/inc/MMI_features_switch.h"
# 1 "../../mmi/inc/MMI_features_type.h" 1
# 68 "../../mmi/inc/MMI_features_switch.h" 2
# 70 "../../mmi/inc/mmi_features.h" 2
# 957 "temp/res/EngineerMode.c" 2
# 1 "../customerinc/custresdef.h" 1
# 195 "../customerinc/custresdef.h"
# 1 "../../mmi/inc/MMI_features.h" 1
# 196 "../customerinc/custresdef.h" 2
# 958 "temp/res/EngineerMode.c" 2
# 1 "../../../interface/hal/drv_sw_def/drv_sw_features_color.h" 1
# 74 "../../../interface/hal/drv_sw_def/drv_sw_features_color.h"
# 1 "../../../hal/drv_def/drv_features_color.h" 1
# 74 "../../../hal/drv_def/drv_features_color.h"
# 1 "../../../hal/drv_def/drv_features_chip_select.h" 1
# 168 "../../../hal/drv_def/drv_features_chip_select.h"
# 1 "../../../hal/drv_def/drv_features_6261.h" 1
# 169 "../../../hal/drv_def/drv_features_chip_select.h" 2
# 75 "../../../hal/drv_def/drv_features_color.h" 2
# 75 "../../../interface/hal/drv_sw_def/drv_sw_features_color.h" 2
# 959 "temp/res/EngineerMode.c" 2

<?xml version = "1.0" encoding="UTF-8"?>

<APP id = "APP_ENGINEERMODE1">

<!----------------- Include Area ---------------------------------------------->

    <INCLUDE file = "MMI_features.h"/>
    <INCLUDE file = "MMIDataType.h"/>
    <INCLUDE file = "GlobalResDef.h"/>




<!----------------- Common Area ----------------------------------------------->

    <!----------------- Timer Id ------------------------------------------>
    <TIMER id = "EM_NOTIFYDURATION_TIMER"/>
    <TIMER id = "EM_RINGTONE_HIGHLIGHT_TIMER"/>
    <TIMER id = "EM_GPRS_PING_TIMER"/>
    <TIMER id = "EM_GPRS_SOC_DEMO_APP_TIMER"/>

    <!----------------- Event Id ------------------------------------------>

    <!----------------- String Id ----------------------------------------->
    <STRING id = "STR_ID_EM_GLOBAL_PROCESSING">Processing...</STRING>
    <STRING id = "STR_ID_EM_SIM_CARD_IS_NOT_AVAILABLE">This SIM card is not available</STRING>
    <STRING id = "STR_ID_EM_WARNING">Not allow or conflict!</STRING> <!-- Engineer Mode Menu Caption String -->
    <STRING id = "STR_ID_EM_SET_LSK">Set</STRING>
    <STRING id = "STR_ID_EM_NOTICE_SUCCESS_REBOO">Done.\nPower off in 3 sec</STRING>
    <STRING id = "STR_ID_EM_GLOBAL_AUTO">Auto</STRING>
    <STRING id = "STR_ID_EM_TRUE">True</STRING>
    <STRING id = "STR_ID_EM_FALSE">False</STRING>





    <!----------------- Screen Id ----------------------------------------->
    <SCREEN id = "GRP_ID_EM_ROOT"/>
    <SCREEN id = "SCR_ID_EM_CMN_SCRN"/>
    <SCREEN id = "SCR_ID_EM_DUALMODE_SWITCH_PROGRESS"/>

<!----------------- Menu Id ------------------------------------------->
    <MENUSET id = "MENUSET_ON_OFF">
        <MENUITEM id = "MENU_ID_EM_MISC_ON" str = "STR_GLOBAL_ON"/>
        <MENUITEM id = "MENU_ID_EM_MISC_OFF" str = "STR_GLOBAL_OFF"/>
    </MENUSET>

    <MENUSET id = "MENUSET_TRUE_FALSE">
        <MENUITEM id = "MENU_ID_EM_TRUE" str = "STR_ID_EM_TRUE"/>
        <MENUITEM id = "MENU_ID_EM_FALSE" str = "STR_ID_EM_FALSE"/>
    </MENUSET>

<!----------------- Level1 Menu : Mainmenu ------------------------------------>

    <!----------------- String Id ----------------------------------------->
    <STRING id = "STR_ID_EM_APP_NAME">Engineering mode</STRING>

    <!----------------- Image Id ------------------------------------------>
    <IMAGE id = "IMG_ID_EM_MAIN_ICON">"..\\\\..\\\\Customer\\\\Images""\\\\PLUTO_ENCODE""\\\\MainLCD\\\\TitleBar\\\\TB_EM.png"</IMAGE>

    <!----------------- Menu Id ------------------------------------------->
    <MENU id = "MENU_ID_EM_MAIN_MENU" type = "APP_MAIN" str = "STR_ID_EM_APP_NAME">


        <MENUITEM_ID>MENU_ID_EM_NW_SETTING</MENUITEM_ID>


        <MENUITEM_ID>MENU_ID_EM_DEVICE</MENUITEM_ID>

        <MENUITEM_ID>MENU_ID_EM_AUDIO</MENUITEM_ID>


        <MENUITEM_ID>MENU_ID_EM_GPRS_ACT</MENUITEM_ID>

        <MENUITEM_ID>MENU_ID_EM_MISC</MENUITEM_ID>
# 1046 "temp/res/EngineerMode.c"
        <MENUITEM_ID>MENU_ID_EM_BLUETOOTH</MENUITEM_ID>







        <MENUITEM_ID>MENU_ID_EM_RF_TEST_TOOL</MENUITEM_ID>
# 1065 "temp/res/EngineerMode.c"
   </MENU>

<!----------------- EM Item End ----------------------------------------------->


<!----------------- Level2 Menu | Network Setting ----------------------------->


    <!----------------- String Id ----------------------------------------->
    <STRING id = "STR_ID_EM_NW_SETTING">Network setting</STRING>

    <!----------------- Menu Id ------------------------------------------->
    <MENU id = "MENU_ID_EM_NW_SETTING" type = "APP_SUB" str = "STR_ID_EM_NW_SETTING">


        <MENUITEM_ID>MENU_ID_EM_NW_NETWORK_INFO</MENUITEM_ID>



        <MENUITEM_ID>MENU_ID_EM_NW_BAND_SELECTION</MENUITEM_ID>
# 1127 "temp/res/EngineerMode.c"
    </MENU>


<!----------------- EM Item End ----------------------------------------------->



<!----------------- Network Setting | Network Info ---------------------------->

    <!----------------- Screen Id ----------------------------------------->
    <SCREEN id = "SCR_ID_EM_NW_INFO_LOG"/>

    <!----------------- String Id ----------------------------------------->

    <STRING id = "STR_ID_EM_NW_NETWORK_INFO">Network info</STRING>
    <STRING id = "STR_ID_EM_NW_INFO_RR_CELL_SEL">RR_CELL_SEL</STRING>
    <STRING id = "STR_ID_EM_NW_INFO_RR_CH_DSCR">RR Ch Dscr</STRING>
    <STRING id = "STR_ID_EM_NW_INFO_RR_CTRL_CHAN">RR ctrl chan</STRING>
    <STRING id = "STR_ID_EM_NW_INFO_RR_RACH_CTRL">RR rach ctrl</STRING>
    <STRING id = "STR_ID_EM_NW_INFO_RR_LAI_INFO">RR lai info</STRING>
    <STRING id = "STR_ID_EM_NW_INFO_RR_RADIO_LINK">RR radio link</STRING>
    <STRING id = "STR_ID_EM_NW_INFO_RR_MEAS_REP">RR meas rep</STRING>
    <STRING id = "STR_ID_EM_NW_INFO_CC_CHAN_INFO">CC chan info</STRING>
    <STRING id = "STR_ID_EM_NW_INFO_CC_CALL_INFO">CC call info</STRING>
    <STRING id = "STR_ID_EM_NW_INFO_CA_LIST_INFO">CA list info</STRING>
    <STRING id = "STR_ID_EM_NW_INFO_PLMN_INFO">PLMN info</STRING>
    <STRING id = "STR_ID_EM_NW_INFO_GPRS_INFO">GPRS info</STRING>
    <STRING id = "STR_ID_EM_NW_INFO_SI2Q_MI_INFO">Si2Q/Mi info</STRING>
    <STRING id = "STR_ID_EM_NW_INFO_TBF_STATUS">TBF status</STRING>
    <STRING id = "STR_ID_EM_NW_INFO_BLOCK_INFO">Block info</STRING>

    <!----------------- Menu Id --------external----------------------------------->
    <MENU id = "MENU_ID_EM_NW_NETWORK_INFO" str = "STR_ID_EM_NW_NETWORK_INFO">
         <MENUITEM id = "MENU_ID_EM_NW_SETTING_SIM_1" str = "STR_GLOBAL_SIM_1"/>
# 1170 "temp/res/EngineerMode.c"
    </MENU>

    <MENU id = "MENU_ID_EM_NW_NETWORK_INFO_LIST" type = "APP_SUB" str = "STR_ID_EM_NW_NETWORK_INFO" flag = "CHECKBOX">
        <MENUITEM id = "MENU_ID_EM_NW_INFO_RR_CELL_SEL" str = "STR_ID_EM_NW_INFO_RR_CELL_SEL"/>
        <MENUITEM id = "MENU_ID_EM_NW_INFO_RR_CH_DSCR" str = "STR_ID_EM_NW_INFO_RR_CH_DSCR"/>
        <MENUITEM id = "MENU_ID_EM_NW_INFO_RR_CTRL_CHAN" str = "STR_ID_EM_NW_INFO_RR_CTRL_CHAN"/>
        <MENUITEM id = "MENU_ID_EM_NW_INFO_RR_RACH_CTRL" str = "STR_ID_EM_NW_INFO_RR_RACH_CTRL"/>
        <MENUITEM id = "MENU_ID_EM_NW_INFO_RR_LAI_INFO" str = "STR_ID_EM_NW_INFO_RR_LAI_INFO"/>
        <MENUITEM id = "MENU_ID_EM_NW_INFO_RR_RADIO_LINK" str = "STR_ID_EM_NW_INFO_RR_RADIO_LINK"/>
        <MENUITEM id = "MENU_ID_EM_NW_INFO_RR_MEAS_REP" str = "STR_ID_EM_NW_INFO_RR_MEAS_REP"/>
        <MENUITEM id = "MENU_ID_EM_NW_INFO_CC_CHAN_INFO" str = "STR_ID_EM_NW_INFO_CC_CHAN_INFO"/>
        <MENUITEM id = "MENU_ID_EM_NW_INFO_CC_CALL_INFO" str = "STR_ID_EM_NW_INFO_CC_CALL_INFO"/>
        <MENUITEM id = "MENU_ID_EM_NW_INFO_CA_LIST_INFO" str = "STR_ID_EM_NW_INFO_CA_LIST_INFO"/>
        <MENUITEM id = "MENU_ID_EM_NW_INFO_PLMN_INFO" str = "STR_ID_EM_NW_INFO_PLMN_INFO"/>
        <MENUITEM id = "MENU_ID_EM_NW_INFO_GPRS_INFO" str = "STR_ID_EM_NW_INFO_GPRS_INFO"/>
        <MENUITEM id = "MENU_ID_EM_NW_INFO_SI2Q_MI_INFO" str = "STR_ID_EM_NW_INFO_SI2Q_MI_INFO"/>
        <MENUITEM id = "MENU_ID_EM_NW_INFO_TBF_STATUS" str = "STR_ID_EM_NW_INFO_TBF_STATUS"/>
        <MENUITEM id = "MENU_ID_EM_NW_INFO_BLOCK_INFO" str = "STR_ID_EM_NW_INFO_BLOCK_INFO"/>
   </MENU>


<!----------------- EM Item End ----------------------------------------------->



<!----------------- Network Setting | Band Selection--------------------------->

    <!----------------- Screen Id ----------------------------------------->

    <!----------------- String Id ----------------------------------------->
    <STRING id = "STR_ID_EM_NW_BAND_SELECTION">Band selection</STRING>

    <STRING id = "STR_ID_EM_BAND_SEL_ALL_3G_OFF">Not allow all 3G band off</STRING>
    <STRING id = "STR_ID_EM_NW_BAND_SEL_2G">2G band setting</STRING>

    <STRING id = "STR_ID_EM_NW_BAND_SEL_GSM850">850 band</STRING>


    <STRING id = "STR_ID_EM_NW_BAND_SEL_EGSM900">900 band</STRING>


    <STRING id = "STR_ID_EM_NW_BAND_SEL_DCS1800">1800 band</STRING>


    <STRING id = "STR_ID_EM_NW_BAND_SEL_PCS1900">1900 band</STRING>


    <STRING id = "STR_ID_EM_NW_BAND_SEL_850_1800">850/1800</STRING>


    <STRING id = "STR_ID_EM_NW_BAND_SEL_900_1800">900/1800</STRING>



    <STRING id = "STR_ID_EM_NW_BAND_SEL_850_1900">850/1900</STRING>
# 1241 "temp/res/EngineerMode.c"
    <!----------------- Menu Id ------------------------------------------->
    <MENU id = "MENU_ID_EM_NW_BAND_SELECTION" type = "APP_SUB" str = "STR_ID_EM_NW_BAND_SELECTION">
        <MENU id = "MENU_ID_EM_NW_BD_SL_SIM_1" str = "STR_GLOBAL_SIM_1">
        </MENU>
# 1257 "temp/res/EngineerMode.c"
    </MENU>

<!----------------- EM Item End ----------------------------------------------->



<!----------------- Network Setting | Prefer Rat ------------------------------>
# 1279 "temp/res/EngineerMode.c"
<!----------------- EM Item End ----------------------------------------------->



<!----------------- Network Setting | Cell Lock ------------------------------->
# 1295 "temp/res/EngineerMode.c"
<!----------------- EM Item End ----------------------------------------------->

<!----------------- Network Setting | Network WCDMA PREFERRED --------------------------->
# 1312 "temp/res/EngineerMode.c"
<!----------------- EM Item End ------------------------------------------->

<!----------------- Network Setting | IVSR -------------------------------->
# 1336 "temp/res/EngineerMode.c"
<!----------------- EM Item End ----------------------------------------------->


<!----------------- Network Setting | Network Event --------------------------->
# 1371 "temp/res/EngineerMode.c"
<!----------------- EM Item End ----------------------------------------------->


<!----------------- Network Setting | PLMN List ------------------------------->
# 1389 "temp/res/EngineerMode.c"
<!----------------- EM Item End ----------------------------------------------->

<!----------------- Network Setting | Service selection ------------------------------->
# 1401 "temp/res/EngineerMode.c"
<!----------------- EM Item End ----------------------------------------------->

<!----------------- Network Setting | Gprs Connection ------------------------------->







<!----------------- EM Item End ----------------------------------------------->


<!----------------- Network Setting | 3G_info --------------------------------->
# 1496 "temp/res/EngineerMode.c"
<!----------------- EM Item End ----------------------------------------------->



<!----------------- Network Setting | TDD --------------------------------->
# 1577 "temp/res/EngineerMode.c"
<!----------------- EM Item End ----------------------------------------------->




<!----------------- Level2 Menu | Device -------------------------------------->

    <!----------------- String Id ----------------------------------------->
    <STRING id = "STR_ID_EM_DEVICE">Device</STRING>

    <!----------------- Menu Id ------------------------------------------->
    <MENU id = "MENU_ID_EM_DEVICE" type = "APP_SUB" str = "STR_ID_EM_DEVICE">

        <MENUITEM_ID>MENU_ID_EM_DEV_SET_UART</MENUITEM_ID>



        <MENUITEM_ID>MENU_ID_EM_DEV_GPIO</MENUITEM_ID>


        <MENUITEM_ID>MENU_ID_EM_MM_COLOR</MENUITEM_ID>
# 1616 "temp/res/EngineerMode.c"
        <MENUITEM_ID>MENU_ID_EM_DEV_HW_LEVEL</MENUITEM_ID>







        <MENUITEM_ID>MENU_ID_EM_DEV_DCM_MODE</MENUITEM_ID>



                <MENUITEM_ID>MENU_ID_EM_DEV_BQB_MODE</MENUITEM_ID>







        <MENUITEM_ID>EM_DEV_VIDEO_SETTING_MENUID</MENUITEM_ID>
# 1652 "temp/res/EngineerMode.c"
        <MENUITEM_ID>MENU_ID_EM_DEV_MEMORY_TEST</MENUITEM_ID>



        <MENUITEM_ID>MENU_ID_EM_DEV_FM_RADIO</MENUITEM_ID>
# 1672 "temp/res/EngineerMode.c"
        <MENUITEM_ID>MENU_ID_EM_DEV_MINI_GPS</MENUITEM_ID>
# 1684 "temp/res/EngineerMode.c"
        <MENUITEM_ID>MENU_ID_EM_DEV_PMU_REG_SET</MENUITEM_ID>
# 1698 "temp/res/EngineerMode.c"
    </MENU>
<!----------------- EM Item End ----------------------------------------------->



<!----------------- Device | GPIO ----------------------------------------->

    <!----------------- Screen Id ----------------------------------------->
    <SCREEN id = "SCR_ID_EM_DEV_GPIO_LIST"/>

    <!----------------- String Id ----------------------------------------->
    <STRING id = "STR_ID_EM_DEV_GPIO">GPIO</STRING>
    <STRING id = "STR_ID_EM_DEV_GPIO_LIST_GPO_GPIO">List GPO/GPIO</STRING>
    <STRING id = "STR_ID_EM_DEV_GPIO_EDIT_GPIO">GPIO editor</STRING>
    <STRING id = "STR_ID_EM_DEV_GPIO_EDIT_GPO">GPO editor</STRING>
    <STRING id = "STR_ID_EM_DEV_GPIO_DIRECTION">Direction</STRING>
    <STRING id = "STR_ID_EM_DEV_GPIO_LEVEL">Current level</STRING>
    <STRING id = "STR_ID_EM_DEV_GPIO_DIRECTION_OUT">Out</STRING>
    <STRING id = "STR_ID_EM_DEV_GPIO_DIRECTION_IN">In</STRING>

    <!----------------- Menu Id ------------------------------------------->
    <MENU id = "MENU_ID_EM_DEV_GPIO" type = "APP_SUB" str = "STR_ID_EM_DEV_GPIO">
        <MENUITEM id = "MENU_ID_EM_DEV_GPIO_LIST_GPO_GPIO" str = "STR_ID_EM_DEV_GPIO_LIST_GPO_GPIO"/>
        <MENUITEM id = "MENU_ID_EM_DEV_GPIO_EDIT_GPIO" str = "STR_ID_EM_DEV_GPIO_EDIT_GPIO"/>
        <MENUITEM id = "MENU_ID_EM_DEV_GPIO_EDIT_GPO" str = "STR_ID_EM_DEV_GPIO_EDIT_GPO"/>
    </MENU>


<!----------------- EM Item End ----------------------------------------------->



<!----------------- Device | MM Color ----------------------------------------->

    <!----------------- String Id ----------------------------------------->
    <STRING id = "STR_ID_EM_DEV_MM_COLOR">MM Color Adjust</STRING>
    <STRING id = "STR_ID_EM_DEV_SHARP">Sharpness</STRING>
    <STRING id = "STR_ID_EM_DEV_CONTRAST">Contrast</STRING>
    <STRING id = "STR_ID_EM_DEV_SATURATION">Saturation</STRING>
    <!----------------- Menu Id ------------------------------------------->
    <MENUITEM id = "MENU_ID_EM_MM_COLOR" str = "STR_ID_EM_DEV_MM_COLOR"/>

<!----------------- EM Item End ----------------------------------------------->



<!----------------- Device | Backlight ------------------------------------------>
# 1760 "temp/res/EngineerMode.c"
<!----------------- EM Item End ----------------------------------------------->

<!----------------- Device | EINT ----------------------------------------->
# 1775 "temp/res/EngineerMode.c"
<!----------------- EM Item End ----------------------------------------------->


<!----------------- Device | ADC ------------------------------------------>
# 1790 "temp/res/EngineerMode.c"
<!----------------- EM Item End ----------------------------------------------->


<!----------------- Device | CLAM ----------------------------------------->
# 1804 "temp/res/EngineerMode.c"
<!----------------- EM Item End ----------------------------------------------->


<!----------------- Device | HW Level ----------------------------------------->

    <!----------------- String Id ----------------------------------------->
    <STRING id = "STR_ID_EM_DEV_HW_LEVEL">Set default level</STRING> <!-- Engineer Mode Menu Caption String -->

    <STRING id = "STR_ID_EM_DEV_HW_LEVEL_BATTERY">Battery</STRING> <!-- Engineer Mode Menu Caption String -->
    <STRING id = "STR_ID_EM_DEV_PWM_SET_1">Pwm1</STRING>
    <STRING id = "STR_ID_EM_DEV_PWM_SET_2">Pwm2</STRING>
    <STRING id = "STR_ID_EM_DEV_PWM_SET_3">Pwm3</STRING>

    <STRING id = "STR_ID_EM_DEV_LCD_SET_PARAM_1">Set value</STRING>

    <!----------------- Menu Id ------------------------------------------->
    <MENU id = "MENU_ID_EM_DEV_HW_LEVEL" type = "APP_SUB" str = "STR_ID_EM_DEV_HW_LEVEL">
        <MENUITEM id = "MENU_ID_EM_DEV_HW_LEVEL_BATTERY" str = "STR_ID_EM_DEV_HW_LEVEL_BATTERY"/>



        <MENUITEM id = "MENU_ID_EM_DEV_HW_LEVEL_PWM1" str = "STR_ID_EM_DEV_PWM_SET_1"/>
        <MENUITEM id = "MENU_ID_EM_DEV_HW_LEVEL_PWM2" str = "STR_ID_EM_DEV_PWM_SET_2"/>
        <MENUITEM id = "MENU_ID_EM_DEV_HW_LEVEL_PWM3" str = "STR_ID_EM_DEV_PWM_SET_3"/>

    </MENU>

<!----------------- EM Item End ----------------------------------------------->



<!----------------- Device | Set UART ----------------------------------------->

    <!----------------- Screen Id ----------------------------------------->
    <SCREEN id = "SCR_ID_EM_DEV_UART_POWER_ONOFF_MENU"/>

    <!----------------- String Id ----------------------------------------->
    <STRING id = "STR_ID_EM_DEV_SET_UART">Set UART</STRING> <!-- Engineer Mode Menu Caption String -->
    <STRING id = "STR_ID_EM_DEV_SET_UART_SETTING">UART setting</STRING> <!-- Engineer Mode Menu Caption String -->
    <STRING id = "STR_ID_EM_DEV_SET_UART_TST_PS">TST-PS config</STRING> <!-- Engineer Mode Menu Caption String -->
    <STRING id = "STR_ID_EM_DEV_SET_UART_TST_L1">TST-L1 config</STRING> <!-- Engineer Mode Menu Caption String -->
    <STRING id = "STR_ID_EM_DEV_SET_UART_PS">PS config</STRING> <!-- Engineer Mode Menu Caption String -->


    <STRING id = "STR_ID_EM_DEV_USB_PORT">USB port</STRING> <!-- Engineer Mode Menu Caption String -->
    <STRING id = "STR_ID_EM_DEV_USB_PORT2">USB port 2</STRING> <!-- Engineer Mode Menu Caption String -->






    <STRING id = "STR_ID_EM_DEV_UART_1">UART 1</STRING> <!-- Engineer Mode Menu Caption String -->
    <STRING id = "STR_ID_EM_DEV_UART_2">UART 2</STRING> <!-- Engineer Mode Menu Caption String -->
    <STRING id = "STR_ID_EM_DEV_UART_3">UART 3</STRING> <!-- Engineer Mode Menu Caption String -->
# 1873 "temp/res/EngineerMode.c"
    <!----------------- Menu Id ------------------------------------------->
    <MENU id = "MENU_ID_EM_DEV_SET_UART" type = "APP_SUB" str = "STR_ID_EM_DEV_SET_UART">
        <MENUITEM id = "MENU_ID_EM_DEV_UART_SETTING" str = "STR_ID_EM_DEV_SET_UART_SETTING"/>
    </MENU>


<!----------------- EM Item End ----------------------------------------------->



<!----------------- Device | Sleep Mode --------------------------------------->
# 1894 "temp/res/EngineerMode.c"
<!----------------- EM Item End ----------------------------------------------->



<!----------------- Device | DCM Mode ----------------------------------------->


    <!----------------- String Id ----------------------------------------->
    <STRING id = "STR_ID_EM_DEV_DCM_MODE">DCM mode</STRING> <!-- Engineer Mode Menu Caption String -->

    <!----------------- Menu Id ------------------------------------------->
    <MENU id = "MENU_ID_EM_DEV_DCM_MODE" type = "APP_SUB" str = "STR_ID_EM_DEV_DCM_MODE" flag = "RADIO">
        <MENUITEM id = "MENU_ID_EM_DEV_DCM_MODE_ON" str = "STR_GLOBAL_ON"/>
        <MENUITEM id = "MENU_ID_EM_DEV_DCM_MODE_OFF" str = "STR_GLOBAL_OFF"/>
    </MENU>


<!----------------- EM Item End ----------------------------------------------->



<!----------------- Device | BQB Mode ----------------------------------------->


    <!----------------- String Id ----------------------------------------->
    <STRING id = "STR_ID_EM_DEV_BQB_MODE">BQB mode</STRING> <!-- Engineer Mode Menu Caption String -->

    <!----------------- Menu Id ------------------------------------------->
    <MENU id = "MENU_ID_EM_DEV_BQB_MODE" type = "APP_SUB" str = "STR_ID_EM_DEV_BQB_MODE" flag = "RADIO">
        <MENUITEM id = "MENU_ID_EM_DEV_BQB_MODE_ON" str = "STR_GLOBAL_ON"/>
        <MENUITEM id = "MENU_ID_EM_DEV_BQB_MODE_OFF" str = "STR_GLOBAL_OFF"/>
    </MENU>


<!----------------- EM Item End ----------------------------------------------->


<!----------------- Device | NAND Format -------------------------------------->
# 1942 "temp/res/EngineerMode.c"
<!----------------- EM Item End ----------------------------------------------->


<!----------------- EM Item End ----------------------------------------------->


<!----------------- Device | MTV Setting --------------------------------------->
# 1973 "temp/res/EngineerMode.c"
<!----------------- EM Item End ----------------------------------------------->

<!----------------- Device | Video Setting --------------------------------------->

        <!----------------- Screen Id ----------------------------------------->
        <SCREEN id = "GRP_ID_EM_DEV_VIDEO_SETTING"/>

        <!----------------- Menu Id ----------------------------------------->

        <MENU id = "EM_DEV_VIDEO_SETTING_MENUID" type = "APP_SUB" str = "STR_ID_EM_DEV_VIDEO_SETTING">
       <MENUITEM id = "EM_DEV_VIDEO_SETTING_MP4_MENUID" str = "STR_ID_EM_DEV_VIDEO_SETTING_MP4"/>
       <MENUITEM id = "EM_DEV_VIDEO_SETTING_H264_MENUID" str = "STR_ID_EM_DEV_VIDEO_SETTING_H264"/>
       <MENUITEM id = "EM_DEV_VIDEO_SETTING_RM_MENUID" str = "STR_ID_EM_DEV_VIDEO_SETTING_RM"/>
       <MENUITEM id = "EM_DEV_VIDEO_SETTING_VP8_MENUID" str = "STR_ID_EM_DEV_VIDEO_SETTING_VP8"/>

       <MENUITEM id = "EM_DEV_VIDEO_SETTING_CODEC_MP4_MENUID" str = "STR_ID_EM_DEV_VIDEO_SETTING_CODEC_MP4"/>
       <MENUITEM id = "EM_DEV_VIDEO_SETTING_CODEC_H264_MENUID" str = "STR_ID_EM_DEV_VIDEO_SETTING_CODEC_H264"/>
       <MENUITEM id = "EM_DEV_VIDEO_SETTING_CODEC_RM_MENUID" str = "STR_ID_EM_DEV_VIDEO_SETTING_CODEC_RM"/>
       <MENUITEM id = "EM_DEV_VIDEO_SETTING_CODEC_VP8_MENUID" str = "STR_ID_EM_DEV_VIDEO_SETTING_CODEC_VP8"/>

       <MENUITEM id = "EM_DEV_VIDEO_SETTING_MODE_MP4_MENUID" str = "STR_ID_EM_DEV_VIDEO_SETTING_MODE_MP4"/>
       <MENUITEM id = "EM_DEV_VIDEO_SETTING_MODE_H264_MENUID" str = "STR_ID_EM_DEV_VIDEO_SETTING_MODE_H264"/>
       <MENUITEM id = "EM_DEV_VIDEO_SETTING_MODE_RM_MENUID" str = "STR_ID_EM_DEV_VIDEO_SETTING_MODE_RM"/>
       <MENUITEM id = "EM_DEV_VIDEO_SETTING_MODE_VP8_MENUID" str = "STR_ID_EM_DEV_VIDEO_SETTING_MODE_VP8"/>

    </MENU>
    <!----------------- String Id ----------------------------------------->
    <STRING id = "STR_ID_EM_DEV_VIDEO_SETTING">Video setting</STRING>
    <STRING id = "STR_ID_EM_DEV_VIDEO_SETTING_MP4">MP4</STRING>
    <STRING id = "STR_ID_EM_DEV_VIDEO_SETTING_H264">H264</STRING>
        <STRING id = "STR_ID_EM_DEV_VIDEO_SETTING_RM">RM</STRING>
        <STRING id = "STR_ID_EM_DEV_VIDEO_SETTING_VP8">VP8</STRING>

        <STRING id = "STR_ID_EM_DEV_VIDEO_SETTING_CODEC_MP4">Codec MP4</STRING>
        <STRING id = "STR_ID_EM_DEV_VIDEO_SETTING_CODEC_H264">Codec H264</STRING>
        <STRING id = "STR_ID_EM_DEV_VIDEO_SETTING_CODEC_RM">Codec RM</STRING>
        <STRING id = "STR_ID_EM_DEV_VIDEO_SETTING_CODEC_VP8">Codec VP8</STRING>

    <STRING id = "STR_ID_EM_DEV_VIDEO_SETTING_MODE_MP4">Mode MP4</STRING>
    <STRING id = "STR_ID_EM_DEV_VIDEO_SETTING_MODE_H264">Mode H264</STRING>
    <STRING id = "STR_ID_EM_DEV_VIDEO_SETTING_MODE_RM">Mode RM</STRING>
    <STRING id = "STR_ID_EM_DEV_VIDEO_SETTING_MODE_VP8">Mode VP8</STRING>

    <STRING id = "STR_ID_EM_DEV_VIDEO_SETTING_PLAY_MODE">Play mode</STRING>
    <STRING id = "STR_ID_EM_DEV_VIDEO_SETTING_FLUENCY">Fluency</STRING>
    <STRING id = "STR_ID_EM_DEV_VIDEO_SETTING_BALANCE">Balance</STRING>
    <STRING id = "STR_ID_EM_DEV_VIDEO_SETTING_QUALITY">Quality</STRING>
    <STRING id = "STR_ID_EM_DEV_VIDEO_SETTING_LAST_MODE">Last mode</STRING>

    <STRING id = "STR_ID_EM_DEV_VIDEO_SETTING_FLUENCY_SETTING">Fluency setting</STRING>

<!----------------- EM Item End ----------------------------------------------->

<!----------------- Device | Video Streaming setting --------------------------------------->
# 2046 "temp/res/EngineerMode.c"
<!----------------- EM Item End ----------------------------------------------->

<!----------------- Device | USB ---------------------------------------------->
# 2083 "temp/res/EngineerMode.c"
<!----------------- EM Item End ----------------------------------------------->



<!----------------- Device | Memory TEST ---------------------------------------------->


    <!----------------- String Id ----------------------------------------->
    <STRING id = "STR_ID_EM_DEV_MEMORY_TEST">Memory info</STRING> <!-- Engineer Mode Menu Caption String -->
    <STRING id = "STR_ID_EM_DEV_MEMORY_TEST_EMI_SETTING">EMI register settings</STRING> <!-- Engineer Mode Menu Caption String -->
    <STRING id = "STR_ID_EM_DEV_MEMORY_TEST_CUSTOM_SETTING">Custom settings</STRING> <!-- Engineer Mode Menu Caption String -->
    <STRING id = "STR_ID_EM_DEV_MEMORY_TEST_FLASH_INFO">Flash physical info</STRING> <!-- Engineer Mode Menu Caption String -->

    <!----------------- Menu Id ------------------------------------------->
    <MENU id = "MENU_ID_EM_DEV_MEMORY_TEST" type = "APP_SUB" str = "STR_ID_EM_DEV_MEMORY_TEST">
        <MENUITEM id = "MENU_ID_EM_DEV_MEMORY_TEST_EMI_SETTING" str = "STR_ID_EM_DEV_MEMORY_TEST_EMI_SETTING"/>
        <MENUITEM id = "MENU_ID_EM_DEV_MEMORY_TEST_CUSTOM_SETTING" str = "STR_ID_EM_DEV_MEMORY_TEST_CUSTOM_SETTING"/>
        <MENUITEM id = "MENU_ID_EM_DEV_MEMORY_TEST_FLASH_INFO" str = "STR_ID_EM_DEV_MEMORY_TEST_FLASH_INFO"/>
    </MENU>


<!----------------- EM Item End ----------------------------------------------->



<!----------------- Device | FM Radio ----------------------------------------->

    <SCREEN id = "SCR_ID_EM_DEV_FM_RADIO_RSSI_INFO"/>

    <SCREEN id = "SCR_ID_EM_DEV_FM_RADIO_RSSI_INFO_OTHER"/>


    <!----------------- String Id ----------------------------------------->
    <STRING id = "STR_ID_EM_DEV_FM_RADIO">FM radio</STRING> <!-- Engineer Mode Menu Caption String -->

    <STRING id = "STR_ID_EM_DEVICE_FM_RADIO_MONO">Mono</STRING> <!-- Engineer Mode Menu Caption String -->
    <STRING id = "STR_ID_EM_DEVICE_FM_RADIO_STEREO">Stereo</STRING> <!-- Engineer Mode Menu Caption String -->
    <STRING id = "STR_ID_EM_DEVICE_FM_RADIO_RSSI">Rssi</STRING> <!-- Engineer Mode Menu Caption String -->
    <STRING id = "STR_ID_EM_DEVICE_FM_RADIO_THOSRHELD">Radio threshold</STRING> <!-- Engineer Mode Menu Caption String -->

    <STRING id = "STR_ID_EM_DEVICE_FM_RADIO_STATUS">Radio status</STRING> <!-- Engineer Mode Menu Caption String -->
    <STRING id = "STR_ID_EM_DEV_FMR_FRE_MHZ">Fre(KHz)</STRING> <!-- Engineer Mode FM Radio Stereo Menu Caption String -->

    <STRING id = "STR_ID_EM_DEV_FMR_FORCE_SET">Force set</STRING> <!-- Engineer Mode FM Radio Stereo Menu Caption String -->
    <STRING id = "STR_ID_EM_DEV_FMR_ANTENNA_TYPE">Antenna type</STRING> <!-- Engineer Mode FM Radio IF count delta 10 Caption String -->
    <STRING id = "STR_ID_EM_DEV_FMR_LONG_ANT">Long ANT.(Hex)</STRING> <!-- Engineer Mode FM Radio IF count delta 15 Caption String -->
    <STRING id = "STR_ID_EM_DEV_FMR_SHORT_ANT">Short ANT.(Hex)</STRING> <!-- Engineer Mode FM Radio IF count delta 20 Caption String -->
    <STRING id = "STR_ID_EM_DEV_FMR_ANT_LONG">Long ant</STRING> <!-- Engineer Mode FM Radio IF count delta 15 Caption String -->
    <STRING id = "STR_ID_EM_DEV_FMR_ANT_SHORT">Short ant</STRING> <!-- Engineer Mode FM Radio IF count delta 20 Caption String -->

    <STRING id = "STR_ID_EM_DEVICE_FM_RADIO_COMN_CMD">Radio common cmd</STRING>
    <STRING id = "STR_ID_EM_DEVICE_FM_RADIO_COMN_CMD_INPUT">Input:</STRING>
    <STRING id = "STR_ID_EM_DEVICE_FM_RADIO_COMN_CMD_OUTPUT">Cmd output</STRING>

    <!----------------- Menu Id ------------------------------------------->
    <MENU id = "MENU_ID_EM_DEV_FM_RADIO" type = "APP_SUB" str = "STR_ID_EM_DEV_FM_RADIO">
        <MENUITEM id = "MENU_ID_EM_DEVICE_FM_RADIO_STATUS" str = "STR_ID_EM_DEVICE_FM_RADIO_STATUS"/>

        <MENUITEM id = "MENU_ID_EM_DEVICE_FM_RADIO_THOSRHELD" str = "STR_ID_EM_DEVICE_FM_RADIO_THOSRHELD"/>

        <MENUITEM id = "MENU_ID_EM_DEVICE_FM_RADIO_COMN_CMD" str = "STR_ID_EM_DEVICE_FM_RADIO_COMN_CMD"/>
    </MENU>

<!----------------- EM Item End ----------------------------------------------->



<!----------------- Device | TST Output Mode----------------------------------->
# 2165 "temp/res/EngineerMode.c"
<!----------------- EM Item End ----------------------------------------------->




<!----------------- Device | USB Logging -------------------------------------->
# 2190 "temp/res/EngineerMode.c"
<!----------------- EM Item End ----------------------------------------------->



<!----------------- Device | CAM AF Constshot --------------------------------->
# 2294 "temp/res/EngineerMode.c"
<!----------------- EM Item End ----------------------------------------------->




<!----------------- Device | Mini GPS ----------------------------------------->


    <!----------------- String Id ----------------------------------------->
    <STRING id = "STR_ID_EM_DEV_MINI_GPS">GPS</STRING> <!-- Engineer Mode Menu Caption String -->
    <STRING id = "STR_ID_EM_DEV_MINI_GPS_MINIGPS">MiniGPS</STRING> <!-- Engineer Mode Menu Caption String -->




        <STRING id = "STR_ID_EM_DEV_MINI_GPS_FACTORY_RESET">GPS factory reset</STRING> <!-- Engineer Mode Menu Caption String -->
        <STRING id = "STR_ID_EM_DEV_MINI_GPS_GPS_EM_SHORTCUT">GPS EM shortcut</STRING> <!-- Engineer Mode Menu Caption String -->
# 2368 "temp/res/EngineerMode.c"
        <STRING id = "STR_ID_EM_DEV_MINI_GPS_MINI_SKY_CHART">Sky Chart</STRING> <!-- Engineer Mode Menu Caption String -->
        <STRING id = "STR_ID_EM_DEV_MINI_GPS_MINI_STATUS">Status</STRING> <!-- Engineer Mode Menu Caption String -->
        <STRING id = "STR_ID_EM_DEV_MINI_GPS_MINI_NMEA">NMEA</STRING> <!-- Engineer Mode Menu Caption String -->
        <STRING id = "STR_ID_EM_DEV_MINI_GPS_MINI_SETTING">Setting</STRING> <!-- Engineer Mode Menu Caption String -->
        <STRING id = "STR_ID_EM_DEV_MINI_GPS_MINI_TTFF">TTFF</STRING> <!-- Engineer Mode Menu Caption String -->
        <STRING id = "STR_ID_EM_DEV_MINI_GPS_MINI_MA_STATUS">MA Status</STRING> <!-- Engineer Mode Menu Caption String -->
        <STRING id = "STR_ID_EM_DEV_MINI_GPS_MINI_SETTING_CATCHER">Logging - Catcher</STRING> <!-- Engineer Mode Menu Caption String -->
        <STRING id = "STR_ID_EM_DEV_MINI_GPS_MINI_SETTING_FILE_DUMP">Logging - File Dump</STRING> <!-- Engineer Mode Menu Caption String -->
        <STRING id = "STR_ID_EM_DEV_MINI_GPS_MINI_SETTING_PC_TOOL">Logging - PC Tool</STRING> <!-- Engineer Mode Menu Caption String -->
        <STRING id = "STR_ID_EM_DEV_MINI_GPS_MINI_SETTING_DUBG_MSG">Debug Message</STRING> <!-- Engineer Mode Menu Caption String -->

        <STRING id = "STR_ID_EM_DEV_MINI_GPS_MINI_SETTING_BEE_SWITCH">HotStill Switch</STRING> <!-- Engineer Mode Menu Caption String -->
        <STRING id = "STR_ID_EM_DEV_MINI_GPS_MINI_SETTING_BEE_DEBUG">HotStill Debug</STRING> <!-- Engineer Mode Menu Caption String -->




        <STRING id = "STR_ID_EM_DEV_MINI_GPS_MINI_TTFF_HOT">Hot Start</STRING> <!-- Engineer Mode Menu Caption String -->
        <STRING id = "STR_ID_EM_DEV_MINI_GPS_MINI_TTFF_WARM">Warm Start</STRING> <!-- Engineer Mode Menu Caption String -->
        <STRING id = "STR_ID_EM_DEV_MINI_GPS_MINI_TTFF_COLD">Cold Start</STRING> <!-- Engineer Mode Menu Caption String -->
        <STRING id = "STR_ID_EM_DEV_MINI_GPS_MINI_POWER_SAVING">GPS power saving mode</STRING> <!-- Engineer Mode Menu Caption String -->
        <STRING id = "STR_ID_EM_DEV_MINI_GPS_MINI_SLEEP_MODE">Sleep Mode</STRING> <!-- Engineer Mode Menu Caption String -->
        <STRING id = "STR_ID_EM_DEV_MINI_GPS_MINI_WAKE_MODE">Wake Mode</STRING> <!-- Engineer Mode Menu Caption String -->
        <STRING id = "STR_ID_EM_DEV_MINI_GPS_MINI_STOP_MODE">Stop Mode</STRING> <!-- Engineer Mode Menu Caption String -->
        <STRING id = "STR_ID_EM_DEV_MINI_GPS_AGPS_IS_ON">AGPS setting is on</STRING>

    <!----------------- Menu Id ------------------------------------------->
    <MENU id = "MENU_ID_EM_DEV_MINI_GPS" type = "APP_SUB" str = "STR_ID_EM_DEV_MINI_GPS">
                <MENUITEM_ID>MENU_ID_EM_DEV_MINI_GPS_MINIGPS</MENUITEM_ID>
# 2410 "temp/res/EngineerMode.c"
                <MENUITEM_ID>MENU_ID_EM_DEV_MINI_GPS_FACTORY_RESET</MENUITEM_ID>
                <MENUITEM_ID>MENU_ID_EM_DEV_MINI_GPS_GPS_EM_SHORTCUT</MENUITEM_ID>
        </MENU>

                <MENUITEM id = "MENU_ID_EM_DEV_MINI_GPS_MINI_SKY_CHART" str = "STR_ID_EM_DEV_MINI_GPS_MINI_SKY_CHART"/>
                <MENUITEM id = "MENU_ID_EM_DEV_MINI_GPS_MINI_STATUS" str = "STR_ID_EM_DEV_MINI_GPS_MINI_STATUS"/>
                <MENUITEM id = "MENU_ID_EM_DEV_MINI_GPS_MINI_NMEA" str = "STR_ID_EM_DEV_MINI_GPS_MINI_NMEA"/>
                <MENUITEM id = "MENU_ID_EM_DEV_MINI_GPS_MINI_SETTING" str = "STR_ID_EM_DEV_MINI_GPS_MINI_SETTING"/>
                <MENUITEM id = "MENU_ID_EM_DEV_MINI_GPS_MINI_MA_STATUS" str = "STR_ID_EM_DEV_MINI_GPS_MINI_MA_STATUS"/>
        <MENU id = "MENU_ID_EM_DEV_MINI_GPS_MINIGPS" type = "APP_SUB" str = "STR_ID_EM_DEV_MINI_GPS_MINIGPS">
                <MENUITEM_ID>MENU_ID_EM_DEV_MINI_GPS_MINI_SKY_CHART</MENUITEM_ID>
                <MENUITEM_ID>MENU_ID_EM_DEV_MINI_GPS_MINI_STATUS</MENUITEM_ID>
                <MENUITEM_ID>MENU_ID_EM_DEV_MINI_GPS_MINI_NMEA</MENUITEM_ID>
                <MENUITEM_ID>MENU_ID_EM_DEV_MINI_GPS_MINI_SETTING</MENUITEM_ID>
                <MENUITEM_ID>MENU_ID_EM_DEV_MINI_GPS_MINI_TTFF</MENUITEM_ID>
                <MENUITEM_ID>MENU_ID_EM_DEV_MINI_GPS_MINI_MA_STATUS</MENUITEM_ID>
                <MENUITEM_ID>MENU_ID_EM_DEV_MINI_GPS_MINI_POWER_SAVING</MENUITEM_ID>
    </MENU>

    <MENU id = "MENU_ID_EM_DEV_MINI_GPS_MINI_TTFF" type = "APP_SUB" str = "STR_ID_EM_DEV_MINI_GPS_MINI_TTFF">
                <MENUITEM id = "MENU_ID_EM_DEV_MINI_GPS_MINI_TTFF_HOT_START" str = "STR_ID_EM_DEV_MINI_GPS_MINI_TTFF_HOT"/>
                <MENUITEM id = "MENU_ID_EM_DEV_MINI_GPS_MINI_TTFF_WARM_START" str = "STR_ID_EM_DEV_MINI_GPS_MINI_TTFF_WARM"/>
                <MENUITEM id = "MENU_ID_EM_DEV_MINI_GPS_MINI_TTFF_COLD_START" str = "STR_ID_EM_DEV_MINI_GPS_MINI_TTFF_COLD"/>
    </MENU>

        <MENU id = "MENU_ID_EM_DEV_MINI_GPS_MINI_POWER_SAVING" type = "APP_SUB" str = "STR_ID_EM_DEV_MINI_GPS_MINI_POWER_SAVING">
                <MENUITEM id = "MENU_ID_EM_DEV_MINI_GPS_MINI_SLEEP_MODE" str = "STR_ID_EM_DEV_MINI_GPS_MINI_SLEEP_MODE"/>
                <MENUITEM id = "MENU_ID_EM_DEV_MINI_GPS_MINI_WAKE_MODE" str = "STR_ID_EM_DEV_MINI_GPS_MINI_WAKE_MODE"/>
                <MENUITEM id = "MENU_ID_EM_DEV_MINI_GPS_MINI_STOP_MODE" str = "STR_ID_EM_DEV_MINI_GPS_MINI_STOP_MODE"/>
        </MENU>
# 2460 "temp/res/EngineerMode.c"
    <MENUITEM id = "MENU_ID_EM_DEV_MINI_GPS_FACTORY_RESET" str = "STR_ID_EM_DEV_MINI_GPS_FACTORY_RESET"/>
    <MENU id = "MENU_ID_EM_DEV_MINI_GPS_GPS_EM_SHORTCUT" type = "APP_SUB" str = "STR_ID_EM_DEV_MINI_GPS_GPS_EM_SHORTCUT" flag = "RADIO">
        <MENUITEM id = "MENU_ID_EM_DEV_MINI_GPS_GPS_EM_SHORTCUT_ON" str = "STR_GLOBAL_ON"/>
        <MENUITEM id = "MENU_ID_EM_DEV_MINI_GPS_GPS_EM_SHORTCUT_OFF" str = "STR_GLOBAL_OFF"/>
    </MENU>
        <!----------------- Screen Id ------------------------------------------->
          <SCREEN id = "SCR_ID_EM_DEV_MINIGPS_MAIN"/>
          <SCREEN id = "SCR_ID_EM_DEV_MINIGPS_SKY_CHART"/>
          <SCREEN id = "SCR_ID_EM_DEV_MINIGPS_STATUS"/>
          <SCREEN id = "SCR_ID_EM_DEV_MINIGPS_NMEA"/>
          <SCREEN id = "SCR_ID_EM_DEV_MINIGPS_SETTING"/>
          <SCREEN id = "SCR_ID_EM_DEV_MINIGPS_TTFF"/>
          <SCREEN id = "SCR_ID_EM_DEV_MINIGPS_MA_STATUS"/>


<!----------------- EM Item End ----------------------------------------------->



<!----------------- Device | Motion ------------------------------------------->
# 2583 "temp/res/EngineerMode.c"
<!----------------- EM Item End ----------------------------------------------->


<!----------------- Device | Speed lcd ------------------------------------>
# 2598 "temp/res/EngineerMode.c"
<!----------------- Speech lcd End ---------------------------------------->

<!----------------- Device | PMU register setting ------------------------->

    <!----------------- Screen Id ----------------------------------------->

    <!----------------- String Id ----------------------------------------->
    <STRING id = "STR_ID_EM_DEV_PMU_REG_SET">PMU register setting</STRING>
    <STRING id = "STR_ID_EM_DEV_PMU_REG_SET_WRITE">Write</STRING>
    <STRING id = "STR_ID_EM_DEV_PMU_REG_SET_Addr">Address(Hex)</STRING>
    <STRING id = "STR_ID_EM_DEV_PMU_REG_SET_VALUE">Value(Hex)</STRING>
    <STRING id = "STR_ID_EM_DEV_PMU_REG_SET_HIGH_LOW">High\low bit(in order)</STRING>

    <!----------------- Menu Id ------------------------------------------->
    <MENUITEM id = "MENU_ID_EM_DEV_PMU_REG_SET" str = "STR_ID_EM_DEV_PMU_REG_SET"/>

<!----------------- Speech lcd End ---------------------------------------->

<!----------------- Device | PXS sensor ------------------------------------------->
# 2655 "temp/res/EngineerMode.c"
<!----------------- EM Item End ----------------------------------------------->



<!----------------- Device | WLAN EAP Mode ------------------------------------>
# 2686 "temp/res/EngineerMode.c"
<!------------------------- Switch End ---------------------------------------->


<!----------------- Device | NFC ----------------------------------------->
# 2914 "temp/res/EngineerMode.c"
<!----------------- Device | NFC end ------------------------------------->
<!----------------- EM Item End ----------------------------------------------->



<!----------------- Level2 Menu | Audio --------------------------------------->
    <!----------------- Screen Id ----------------------------------------->

    <!----------------- String Id ----------------------------------------->
    <STRING id = "STR_ID_EM_AUDIO">Audio</STRING>

    <STRING id = "STR_ID_EM_AUD_16_LELVEL_MAX_GAIN">Max analog gain</STRING>
    <STRING id = "STR_ID_EM_AUD_16_LELVEL_STEP">Step</STRING>


    <!----------------- Menu Id ------------------------------------------->
    <MENU id = "MENU_ID_EM_AUDIO" type = "APP_SUB" str = "STR_ID_EM_AUDIO">

        <MENUITEM_ID>MENU_ID_EM_AUD_SET_MODE</MENUITEM_ID>
        <MENUITEM_ID>MENU_ID_EM_AUD_NORMAL_MODE</MENUITEM_ID>
        <MENUITEM_ID>MENU_ID_EM_AUD_LOUDSP_MODE</MENUITEM_ID>
        <MENUITEM_ID>MENU_ID_EM_AUD_HEADSET_MODE</MENUITEM_ID>
        <MENUITEM_ID>MENU_ID_EM_AUD_RING_TONE</MENUITEM_ID>
        <MENUITEM_ID>MENU_ID_EM_AUD_SPEECH_ENHANCEMENT</MENUITEM_ID>
        <MENUITEM_ID>MENU_ID_EM_AUD_SET_MAX_SWING</MENUITEM_ID>



        <MENUITEM_ID>MENU_ID_EM_AUD_DEBUG_INFO</MENUITEM_ID>



        <MENUITEM_ID>MENU_ID_EM_AUD_AUTO_VM_SETTING</MENUITEM_ID>

    </MENU>


<!----------------- EM Item End ----------------------------------------------->


<!----------------- Audio | Set Mode ------------------------------------------>


    <!----------------- String Id ----------------------------------------->
    <STRING id = "STR_ID_EM_AUD_SET_MODE">Set mode</STRING>
    <STRING id = "STR_ID_EM_AUD_SET_VOLUME">Set volume</STRING>
    <STRING id = "STR_ID_EM_AUD_NORMAL_MODE">Normal mode</STRING>
    <STRING id = "STR_ID_EM_AUD_FIR">Fir</STRING>
    <STRING id = "STR_ID_EM_AUD_SPEECH">Speech</STRING>
    <STRING id = "STR_ID_EM_AUD_KEY_TONE">Key tone</STRING>
    <STRING id = "STR_ID_EM_AUD_MELODY">Melody</STRING>
    <STRING id = "STR_ID_EM_AUD_SOUND">FM radio</STRING>
    <STRING id = "STR_ID_EM_AUD_MICROPHONE">Microphone</STRING>
    <STRING id = "STR_ID_EM_AUD_SIDE_TONE">Side tone</STRING>
    <STRING id = "STR_ID_EM_AUD_LOUDSP_MODE">LoudSp mode</STRING>
    <STRING id = "STR_ID_EM_AUD_HEADSET_MODE">Headset mode</STRING>

    <STRING id = "STR_ID_EM_AUD_FIR_0">FIR 0</STRING>
    <STRING id = "STR_ID_EM_AUD_FIR_1">FIR 1</STRING>
    <STRING id = "STR_ID_EM_AUD_FIR_2">FIR 2</STRING>
    <STRING id = "STR_ID_EM_AUD_FIR_3">FIR 3</STRING>
    <STRING id = "STR_ID_EM_AUD_FIR_4">FIR 4</STRING>
    <STRING id = "STR_ID_EM_AUD_FIR_5">FIR 5</STRING>

    <STRING id = "STR_ID_EM_AUD_TV_OUT">TV out</STRING>
    <STRING id = "STR_ID_EM_AUD_VOLUME_0">Volume 0</STRING>
    <STRING id = "STR_ID_EM_AUD_VOLUME_1">Volume 1</STRING>
    <STRING id = "STR_ID_EM_AUD_VOLUME_2">Volume 2</STRING>
    <STRING id = "STR_ID_EM_AUD_VOLUME_3">Volume 3</STRING>
    <STRING id = "STR_ID_EM_AUD_VOLUME_4">Volume 4</STRING>
    <STRING id = "STR_ID_EM_AUD_VOLUME_5">Volume 5</STRING>
    <STRING id = "STR_ID_EM_AUD_VOLUME_6">Volume 6</STRING>
    <STRING id = "STR_ID_EM_AUD_16_LELVEL_VOLUME">16 level setting</STRING>
    <STRING id = "STR_ID_EM_AUD_DIRECT_APPLY">Direct Apply</STRING>

    <!----------------- Menu Id ------------------------------------------->
    <MENUSET id = "AUDIO_VOL_LIST">
        <MENUITEM id = "MENU_ID_EM_AUD_VOL_0" str = "STR_ID_EM_AUD_VOLUME_0"/>
        <MENUITEM id = "MENU_ID_EM_AUD_VOL_1" str = "STR_ID_EM_AUD_VOLUME_1"/>
        <MENUITEM id = "MENU_ID_EM_AUD_VOL_2" str = "STR_ID_EM_AUD_VOLUME_2"/>
        <MENUITEM id = "MENU_ID_EM_AUD_VOL_3" str = "STR_ID_EM_AUD_VOLUME_3"/>
        <MENUITEM id = "MENU_ID_EM_AUD_VOL_4" str = "STR_ID_EM_AUD_VOLUME_4"/>
        <MENUITEM id = "MENU_ID_EM_AUD_VOL_5" str = "STR_ID_EM_AUD_VOLUME_5"/>
        <MENUITEM id = "MENU_ID_EM_AUD_VOL_6" str = "STR_ID_EM_AUD_VOLUME_6"/>
        <MENUITEM id = "MENU_ID_EM_AUD_16_LELVEL_VOLUME" str = "STR_ID_EM_AUD_16_LELVEL_VOLUME"/>
    </MENUSET>

    <MENU id = "MENU_ID_EM_AUD_SPEECH" type = "APP_SUB" str = "STR_ID_EM_AUD_SPEECH">
        <MENUSET_ID>AUDIO_VOL_LIST</MENUSET_ID>
    </MENU>
    <MENU id = "MENU_ID_EM_AUD_KEY_TONE" type = "APP_SUB" str = "STR_ID_EM_AUD_KEY_TONE">
        <MENUSET_ID>AUDIO_VOL_LIST</MENUSET_ID>
    </MENU>
    <MENU id = "MENU_ID_EM_AUD_MELODY" type = "APP_SUB" str = "STR_ID_EM_AUD_MELODY">
        <MENUSET_ID>AUDIO_VOL_LIST</MENUSET_ID>
    </MENU>
    <MENU id = "MENU_ID_EM_AUD_SOUND" type = "APP_SUB" str = "STR_ID_EM_AUD_SOUND">
        <MENUSET_ID>AUDIO_VOL_LIST</MENUSET_ID>
    </MENU>
    <MENU id = "MENU_ID_EM_AUD_MICROPHONE" type = "APP_SUB" str = "STR_ID_EM_AUD_MICROPHONE">
        <MENUSET_ID>AUDIO_VOL_LIST</MENUSET_ID>
    </MENU>
    <MENU id = "MENU_ID_EM_AUD_SIDE_TONE" type = "APP_SUB" str = "STR_ID_EM_AUD_SIDE_TONE">
        <MENUSET_ID>AUDIO_VOL_LIST</MENUSET_ID>
    </MENU>

    <MENUSET id = "AUDIO_MODE">
        <MENUITEM_ID>MENU_ID_EM_AUD_SPEECH</MENUITEM_ID>
        <MENUITEM_ID>MENU_ID_EM_AUD_KEY_TONE</MENUITEM_ID>
        <MENUITEM_ID>MENU_ID_EM_AUD_MELODY</MENUITEM_ID>
        <MENUITEM_ID>MENU_ID_EM_AUD_SOUND</MENUITEM_ID>
        <MENUITEM_ID>MENU_ID_EM_AUD_MICROPHONE</MENUITEM_ID>
        <MENUITEM_ID>MENU_ID_EM_AUD_SIDE_TONE</MENUITEM_ID>
    </MENUSET>

    <MENU id = "MENU_ID_EM_AUD_SET_MODE" type = "APP_SUB" str = "STR_ID_EM_AUD_SET_MODE" flag = "RADIO">
        <MENUITEM id = "MENU_ID_EM_AUD_SET_NORMAL_MODE" str = "STR_ID_EM_AUD_NORMAL_MODE"/>
        <MENUITEM id = "MENU_ID_EM_AUD_SET_LOUDSP_MODE" str = "STR_ID_EM_AUD_LOUDSP_MODE"/>
        <MENUITEM id = "MENU_ID_EM_AUD_SET_HEADSET_MODE" str = "STR_ID_EM_AUD_HEADSET_MODE"/>
    </MENU>

    <MENU id = "MENU_ID_EM_AUD_FIR" type = "APP_SUB" str = "STR_ID_EM_AUD_FIR" flag = "RADIO">
        <MENUITEM id = "MENU_ID_EM_AUD_FIR_0" str = "STR_ID_EM_AUD_FIR_0"/>
        <MENUITEM id = "MENU_ID_EM_AUD_FIR_1" str = "STR_ID_EM_AUD_FIR_1"/>
        <MENUITEM id = "MENU_ID_EM_AUD_FIR_2" str = "STR_ID_EM_AUD_FIR_2"/>
        <MENUITEM id = "MENU_ID_EM_AUD_FIR_3" str = "STR_ID_EM_AUD_FIR_3"/>
        <MENUITEM id = "MENU_ID_EM_AUD_FIR_4" str = "STR_ID_EM_AUD_FIR_4"/>
        <MENUITEM id = "MENU_ID_EM_AUD_FIR_5" str = "STR_ID_EM_AUD_FIR_5"/>
    </MENU>

    <MENU id = "MENU_ID_EM_AUD_NORMAL_MODE" type = "APP_SUB" str = "STR_ID_EM_AUD_NORMAL_MODE">
        <MENUITEM_ID>MENU_ID_EM_AUD_FIR</MENUITEM_ID>
        <MENUSET_ID>AUDIO_MODE</MENUSET_ID>
    </MENU>

    <MENU id = "MENU_ID_EM_AUD_LOUDSP_MODE" type = "APP_SUB" str = "STR_ID_EM_AUD_LOUDSP_MODE">
        <MENUSET_ID>AUDIO_MODE</MENUSET_ID>
    </MENU>

    <MENU id = "MENU_ID_EM_AUD_HEADSET_MODE" type = "APP_SUB" str = "STR_ID_EM_AUD_HEADSET_MODE">
        <MENUSET_ID>AUDIO_MODE</MENUSET_ID>
    </MENU>

<!----------------- EM Item End ----------------------------------------------->


<!----------------- Audio | Speech Enhancement -------------------------------->

    <!----------------- String Id ----------------------------------------->
    <STRING id = "STR_ID_EM_AUD_SPEECH_ENHANCEMENT">Speech enhancement</STRING>
    <STRING id = "STR_ID_EM_AUD_SPH_ENH_COMMON_PARA">Common parameters</STRING>
    <STRING id = "STR_ID_EM_AUD_SPH_ENH_BT_EARPHONE_MODE">BT earphone mode</STRING>
    <STRING id = "STR_ID_EM_AUD_SPH_ENH_BT_CORDLESS_MODE">BT cordless mode</STRING>
    <STRING id = "STR_ID_EM_AUD_SPH_ENH_AUX1_MODE">AUX1 mode</STRING>
    <STRING id = "STR_ID_EM_AUD_SPH_ENH_AUX2_MODE">AUX2 mode</STRING>
    <STRING id = "STR_ID_EM_AUD_SPH_ENH_AUX3_MODE">AUX3 mode</STRING>



    <STRING id = "STR_ID_EM_AUD_PARAMETER">Parameter</STRING>

    <!----------------- Menu Id ----------------------------------------->
    <MENUSET id = "SPH_PARAM_LIST_9">
        <MENUITEM id = "MENU_ID_EM_AUD_PARAM_0" str = "STR_ID_EM_AUD_PARAMETER"/>
        <MENUITEM id = "MENU_ID_EM_AUD_PARAM_1" str = "STR_ID_EM_AUD_PARAMETER"/>
        <MENUITEM id = "MENU_ID_EM_AUD_PARAM_2" str = "STR_ID_EM_AUD_PARAMETER"/>
        <MENUITEM id = "MENU_ID_EM_AUD_PARAM_3" str = "STR_ID_EM_AUD_PARAMETER"/>
        <MENUITEM id = "MENU_ID_EM_AUD_PARAM_4" str = "STR_ID_EM_AUD_PARAMETER"/>
        <MENUITEM id = "MENU_ID_EM_AUD_PARAM_5" str = "STR_ID_EM_AUD_PARAMETER"/>
        <MENUITEM id = "MENU_ID_EM_AUD_PARAM_6" str = "STR_ID_EM_AUD_PARAMETER"/>
        <MENUITEM id = "MENU_ID_EM_AUD_PARAM_7" str = "STR_ID_EM_AUD_PARAMETER"/>
        <MENUITEM id = "MENU_ID_EM_AUD_PARAM_8" str = "STR_ID_EM_AUD_PARAMETER"/>
    </MENUSET>

    <MENUSET id = "SPH_PARAM_LIST_16">
        <MENUITEM_ID>MENU_ID_EM_AUD_PARAM_0</MENUITEM_ID>
        <MENUITEM_ID>MENU_ID_EM_AUD_PARAM_1</MENUITEM_ID>
        <MENUITEM_ID>MENU_ID_EM_AUD_PARAM_2</MENUITEM_ID>
        <MENUITEM_ID>MENU_ID_EM_AUD_PARAM_3</MENUITEM_ID>
        <MENUITEM_ID>MENU_ID_EM_AUD_PARAM_4</MENUITEM_ID>
        <MENUITEM_ID>MENU_ID_EM_AUD_PARAM_5</MENUITEM_ID>
        <MENUITEM_ID>MENU_ID_EM_AUD_PARAM_6</MENUITEM_ID>
        <MENUITEM_ID>MENU_ID_EM_AUD_PARAM_7</MENUITEM_ID>
        <MENUITEM_ID>MENU_ID_EM_AUD_PARAM_8</MENUITEM_ID>
        <MENUITEM id = "MENU_ID_EM_AUD_PARAM_9" str = "STR_ID_EM_AUD_PARAMETER"/>
        <MENUITEM id = "MENU_ID_EM_AUD_PARAM_10" str = "STR_ID_EM_AUD_PARAMETER"/>
        <MENUITEM id = "MENU_ID_EM_AUD_PARAM_11" str = "STR_ID_EM_AUD_PARAMETER"/>
        <MENUITEM id = "MENU_ID_EM_AUD_PARAM_12" str = "STR_ID_EM_AUD_PARAMETER"/>
        <MENUITEM id = "MENU_ID_EM_AUD_PARAM_13" str = "STR_ID_EM_AUD_PARAMETER"/>
        <MENUITEM id = "MENU_ID_EM_AUD_PARAM_14" str = "STR_ID_EM_AUD_PARAMETER"/>
        <MENUITEM id = "MENU_ID_EM_AUD_PARAM_15" str = "STR_ID_EM_AUD_PARAMETER"/>
    </MENUSET>



    <MENU id = "MENU_ID_EM_AUD_SPEECH_ENHANCEMENT" type = "APP_SUB" str = "STR_ID_EM_AUD_SPEECH_ENHANCEMENT">
        <MENU id = "MENU_ID_EM_AUD_SPH_ENH_COMMON_PARA" type = "APP_SUB" str = "STR_ID_EM_AUD_SPH_ENH_COMMON_PARA">
            <MENUSET_ID>SPH_PARAM_LIST_9</MENUSET_ID>
        </MENU>
        <MENU id = "MENU_ID_EM_AUD_SPH_ENH_NORMAL_MODE" type = "APP_SUB" str = "STR_ID_EM_AUD_NORMAL_MODE">
            <MENUSET_ID>SPH_PARAM_LIST_16</MENUSET_ID>
        </MENU>
        <MENU id = "MENU_ID_EM_AUD_SPH_ENH_HEADSET_MODE" type = "APP_SUB" str = "STR_ID_EM_AUD_HEADSET_MODE">
            <MENUSET_ID>SPH_PARAM_LIST_16</MENUSET_ID>
        </MENU>
        <MENU id = "MENU_ID_EM_AUD_SPH_ENH_LOUDSPK_MODE" type = "APP_SUB" str = "STR_ID_EM_AUD_LOUDSP_MODE">
            <MENUSET_ID>SPH_PARAM_LIST_16</MENUSET_ID>
        </MENU>
        <MENU id = "MENU_ID_EM_AUD_SPH_ENH_BT_EARPHONE_MODE" type = "APP_SUB" str = "STR_ID_EM_AUD_SPH_ENH_BT_EARPHONE_MODE">
            <MENUSET_ID>SPH_PARAM_LIST_16</MENUSET_ID>
        </MENU>
        <MENU id = "MENU_ID_EM_AUD_SPH_ENH_BT_CORDLESS_MODE" type = "APP_SUB" str = "STR_ID_EM_AUD_SPH_ENH_BT_CORDLESS_MODE">
            <MENUSET_ID>SPH_PARAM_LIST_16</MENUSET_ID>
        </MENU>
        <MENU id = "MENU_ID_EM_AUD_SPH_ENH_AUX1_MODE" type = "APP_SUB" str = "STR_ID_EM_AUD_SPH_ENH_AUX1_MODE">
            <MENUSET_ID>SPH_PARAM_LIST_16</MENUSET_ID>
        </MENU>
        <MENU id = "MENU_ID_EM_AUD_SPH_ENH_AUX2_MODE" type = "APP_SUB" str = "STR_ID_EM_AUD_SPH_ENH_AUX2_MODE">
            <MENUSET_ID>SPH_PARAM_LIST_16</MENUSET_ID>
        </MENU>
        <MENU id = "MENU_ID_EM_AUD_SPH_ENH_AUX3_MODE" type = "APP_SUB" str = "STR_ID_EM_AUD_SPH_ENH_AUX3_MODE">
            <MENUSET_ID>SPH_PARAM_LIST_16</MENUSET_ID>
        </MENU>
    </MENU>

<!----------------- EM Item End ----------------------------------------------->



<!----------------- Audio | Ring Tone ----------------------------------------->

    <!----------------- Screen Id ----------------------------------------->
    <SCREEN id = "SCR_ID_EM_AUD_RING_TONE"/>
    <SCREEN id = "SCR_ID_EM_AUD_RING_TONE_MENU"/>

    <!----------------- String Id ----------------------------------------->
    <STRING id = "STR_ID_EM_AUD_RING_TONE">Ring tone</STRING>

    <!----------------- Menu Id ------------------------------------------->
    <MENU id = "MENU_ID_EM_AUD_RING_TONE" type = "APP_SUB" str = "STR_ID_EM_AUD_RING_TONE">
    </MENU>


<!----------------- EM Item End ----------------------------------------------->

<!----------------- EM Item End ----------------------------------------------->



<!----------------- Audio | Debug Info ---------------------------------------->

    <!----------------- String Id ----------------------------------------->
    <STRING id = "STR_ID_EM_AUD_DEBUG_INFO">Debug info</STRING>

    <!----------------- Menu Id ------------------------------------------->
    <MENU id = "MENU_ID_EM_AUD_DEBUG_INFO" type = "APP_SUB" str = "STR_ID_EM_AUD_DEBUG_INFO">
        <MENUSET_ID>SPH_PARAM_LIST_16</MENUSET_ID>
    </MENU>

<!----------------- EM Item End ----------------------------------------------->


<!----------------- Audio | Auto VM Setting ----------------------------------->

    <!----------------- String Id ----------------------------------------->
    <STRING id = "STR_ID_EM_AUD_AUTO_VM_SETTING">Auto record setting</STRING>
    <STRING id = "STR_ID_EM_AUD_VM_SUPPORT">VM Support</STRING>
    <STRING id = "STR_ID_EM_AUD_AUTO_VM_SPH">Auto Speech Record</STRING>

    <!----------------- Menu Id ------------------------------------------->
    <MENU id = "MENU_ID_EM_AUD_VM_SUPPORT" type = "APP_SUB" str = "STR_ID_EM_AUD_VM_SUPPORT" flag = "RADIO">
        <MENUSET_ID>MENUSET_ON_OFF</MENUSET_ID>
    </MENU>
    <MENU id = "MENU_ID_EM_AUD_AUTO_VM_SPH" type = "APP_SUB" str = "STR_ID_EM_AUD_AUTO_VM_SPH" flag = "RADIO">
        <MENUSET_ID>MENUSET_ON_OFF</MENUSET_ID>
    </MENU>
    <MENU id = "MENU_ID_EM_AUD_AUTO_VM_SETTING" type = "APP_SUB" str = "STR_ID_EM_AUD_AUTO_VM_SETTING">


        <MENUSET_ID>MENUSET_ON_OFF</MENUSET_ID>
    </MENU>



<!----------------- EM Item End ----------------------------------------------->


<!----------------- Level2 Menu | GPRS Act ------------------------------------>

    <!----------------- String Id ----------------------------------------->

    <!----------------- String Id ----------------------------------------->
    <STRING id = "STR_ID_EM_GPRS_ACT">GPRS act</STRING>

    <!----------------- Menu Id ------------------------------------------->
    <MENU id = "MENU_ID_EM_GPRS_ACT" type = "APP_SUB" str = "STR_ID_EM_GPRS_ACT">

        <MENUITEM_ID>MENU_ID_EM_GPRS_AUTO_ATTACH</MENUITEM_ID>
# 3229 "temp/res/EngineerMode.c"
    </MENU>

<!----------------- EM Item End ----------------------------------------------->


<!----------------- GPRS Act | GPRS Auto Attach ------------------------------->

    <!----------------- String Id ----------------------------------------->
    <STRING id = "STR_ID_EM_GPRS_AUTO_ATTACH">Attach</STRING>

    <!----------------- Menu Id ------------------------------------------->
    <MENU id = "MENU_ID_EM_GPRS_AUTO_ATTACH" type = "APP_SUB" str = "STR_ID_EM_GPRS_AUTO_ATTACH">
    </MENU>


<!----------------- EM Item End ----------------------------------------------->


<!----------------- GPRS Act | GPRS 1st PDP ----------------------------------->
# 3283 "temp/res/EngineerMode.c"
<!----------------- EM Item End ----------------------------------------------->


<!----------------- GPRS Act | GPRS 2nd PDP ----------------------------------->
# 3305 "temp/res/EngineerMode.c"
<!----------------- EM Item End ----------------------------------------------->

<!----------------- GPRS Act | Connection management -------------------------------->
# 3341 "temp/res/EngineerMode.c"
<!----------------- GPRS Act | Fast dormancy ------------------------------->
# 3368 "temp/res/EngineerMode.c"
<!----------------- EM Item End ----------------------------------------------->



<!----------------- EM Item End ----------------------------------------------->


<!----------------- Level2 Menu | Misc.---------------------------------------->

    <!----------------- String Id ----------------------------------------->
    <STRING id = "STR_ID_EM_MISC">Misc.</STRING>

    <!----------------- Menu Id ------------------------------------------->
    <MENU id = "MENU_ID_EM_MISC" type = "APP_SUB" str = "STR_ID_EM_MISC">
# 3399 "temp/res/EngineerMode.c"
        <MENUITEM_ID>MENU_ID_EM_MISC_RAM_TEST</MENUITEM_ID>



        <MENUITEM_ID>MENU_ID_EM_MISC_MEMORY_DUMP</MENUITEM_ID>







        <MENUITEM_ID>MENU_ID_EM_MISC_INTERNET_APPLICATION</MENUITEM_ID>
# 3491 "temp/res/EngineerMode.c"
        <MENUITEM_ID>MENU_ID_EM_MRE</MENUITEM_ID>





    </MENU>

<!----------------- EM Item End ----------------------------------------------->


<!----------------- Misc. | Auto Answer --------------------------------------->
# 3512 "temp/res/EngineerMode.c"
<!----------------- EM Item End ----------------------------------------------->


<!----------------- Misc. | High Speed SIM ------------------------------------>
# 3526 "temp/res/EngineerMode.c"
<!----------------- EM Item End ----------------------------------------------->

<!----------------- Misc. | Backlight Mode ------------------------------------>
# 3539 "temp/res/EngineerMode.c"
<!----------------- EM Item End ----------------------------------------------->


<!----------------- Misc. | Auto Reset -------------------------------->
# 3552 "temp/res/EngineerMode.c"
<!----------------- EM Item End ----------------------------------------------->



<!----------------- Misc. | RAM Test ------------------------------------------>

    <!----------------- String Id ----------------------------------------->
    <STRING id = "STR_ID_EM_MISC_RAM_TEST">RAM test</STRING>

    <!----------------- Menu Id ------------------------------------------->
    <MENUITEM id = "MENU_ID_EM_MISC_RAM_TEST" str = "STR_ID_EM_MISC_RAM_TEST"/>

<!----------------- EM Item End ----------------------------------------------->



<!----------------- Misc. | Memory Dump --------------------------------------->

    <!----------------- String Id ----------------------------------------->
    <STRING id = "STR_ID_EM_MISC_MEMORY_DUMP">Memory dump</STRING>

    <!----------------- Menu Id ------------------------------------------->
    <MENU id = "MENU_ID_EM_MISC_MEMORY_DUMP" type = "APP_SUB" str = "STR_ID_EM_MISC_MEMORY_DUMP" flag = "RADIO">
        <MENUSET_ID>MENUSET_ON_OFF</MENUSET_ID>
    </MENU>

<!----------------- EM Item End ----------------------------------------------->


<!----------------- Misc. | AMR ----------------------------------------------->
# 3592 "temp/res/EngineerMode.c"
<!----------------- EM Item End ----------------------------------------------->



<!----------------- Misc. | Internet Application ------------------------------>

    <!----------------- Screen Id ----------------------------------------->
    <SCREEN id = "GRP_ID_EM_MISC_INET_APP_USER_AGENT"/>
    <SCREEN id = "GRP_ID_EM_MISC_INET_APP_ACCEPT_HEADER"/>
    <SCREEN id = "GRP_ID_EM_MISC_INET_APP_MMS_VERSION"/>

    <!----------------- String Id ----------------------------------------->
    <STRING id = "STR_ID_EM_MISC_INTERNET_APPLICATION">Internet application</STRING>
    <STRING id = "STR_ID_EM_MISC_INET_APP_USER_AGENT">User agent</STRING>
    <STRING id = "STR_ID_EM_MISC_INET_APP_ACCEPT_HEADER">Accept header</STRING>
    <STRING id = "STR_ID_EM_MISC_INET_APP_MMS_VERSION">MMS version</STRING>

    <STRING id = "STR_ID_EM_MISC_INET_APP_AH_WAP_1_2_1">WAP 1.2.1</STRING>
    <STRING id = "STR_ID_EM_MISC_INET_APP_AH_WAP_2_0">WAP 2.0</STRING>
    <STRING id = "STR_ID_EM_MISC_INET_APP_AH_WML">WML</STRING>
    <STRING id = "STR_ID_EM_MISC_INET_APP_AH_XHTML">XHTML</STRING>
    <STRING id = "STR_ID_EM_MISC_INET_APP_AH_HTML">HTML</STRING>

    <STRING id = "STR_ID_EM_MISC_INET_APP_MV_MMS_1_0">MMS 1.0</STRING>
    <STRING id = "STR_ID_EM_MISC_INET_APP_MV_MMS_1_1">MMS 1.1</STRING>
    <STRING id = "STR_ID_EM_MISC_INET_APP_MV_MMS_1_2">MMS 1.2</STRING>

    <STRING id = "STR_ID_EM_MISC_INET_APP_USER_AGENT_STRING">User agent string</STRING>
    <STRING id = "STR_ID_EM_MISC_INET_APP_USER_AGENT_PROFILE">User agent profile</STRING>

    <!----------------- Menu Id ------------------------------------------->
    <MENU id = "MENU_ID_EM_MISC_INTERNET_APPLICATION" type = "APP_SUB" str = "STR_ID_EM_MISC_INTERNET_APPLICATION" flag = "CUI_MENU_NORMAL_LIST_WITH_NUMBERED_ICONS">
        <MENUITEM id = "MENU_ID_EM_MISC_INET_APP_USER_AGENT" str = "STR_ID_EM_MISC_INET_APP_USER_AGENT"/>
        <MENUITEM_ID>MENU_ID_EM_MISC_INET_APP_ACCEPT_HEADER</MENUITEM_ID>
        <MENUITEM_ID>MENU_ID_EM_MISC_INET_APP_MMS_VERSION</MENUITEM_ID>
    </MENU>

    <MENU id = "MENU_ID_EM_MISC_INET_APP_ACCEPT_HEADER" type = "APP_SUB" str = "STR_ID_EM_MISC_INET_APP_ACCEPT_HEADER" flag = "CUI_MENU_NORMAL_RADIO_BUTTON_LIST">
        <MENUITEM id = "MENU_ID_EM_MISC_INET_APP_AH_WAP_1_2_1" str = "STR_ID_EM_MISC_INET_APP_AH_WAP_1_2_1"/>
        <MENUITEM id = "MENU_ID_EM_MISC_INET_APP_AH_WAP_2_0" str = "STR_ID_EM_MISC_INET_APP_AH_WAP_2_0"/>
        <MENUITEM id = "MENU_ID_EM_MISC_INET_APP_AH_WML" str = "STR_ID_EM_MISC_INET_APP_AH_WML"/>
        <MENUITEM id = "MENU_ID_EM_MISC_INET_APP_AH_XHTML" str = "STR_ID_EM_MISC_INET_APP_AH_XHTML"/>
        <MENUITEM id = "MENU_ID_EM_MISC_INET_APP_AH_HTML" str = "STR_ID_EM_MISC_INET_APP_AH_HTML"/>
    </MENU>

    <MENU id = "MENU_ID_EM_MISC_INET_APP_MMS_VERSION" type = "APP_SUB" str = "STR_ID_EM_MISC_INET_APP_MMS_VERSION" flag = "CUI_MENU_NORMAL_RADIO_BUTTON_LIST">
        <MENUITEM id = "MENU_ID_EM_MISC_INET_APP_MV_MMS_1_0" str = "STR_ID_EM_MISC_INET_APP_MV_MMS_1_0"/>
        <MENUITEM id = "MENU_ID_EM_MISC_INET_APP_MV_MMS_1_1" str = "STR_ID_EM_MISC_INET_APP_MV_MMS_1_1"/>
        <MENUITEM id = "MENU_ID_EM_MISC_INET_APP_MV_MMS_1_2" str = "STR_ID_EM_MISC_INET_APP_MV_MMS_1_2"/>
    </MENU>

    <MENU id = "MENU_ID_EM_MISC_INET_APP_UA_OPTIONS" type = "APP_SUB" str = "STR_GLOBAL_OPTIONS" flag = "CUI_MENU_NORMAL_LIST_WITH_NUMBERED_ICONS">
        <MENUITEM id = "MENU_ID_EM_MISC_INET_APP_UA_ACTIVATE" str = "STR_GLOBAL_ACTIVATE"/>
        <MENUITEM id = "MENU_ID_EM_MISC_INET_APP_UA_EDIT" str = "STR_GLOBAL_EDIT"/>
    </MENU>

    <!----------------- MMI Caches ------------------------------------------->
    <CACHEDATA type="byte" id="NVRAM_EM_INET_ACTIVE_USER_AGENT">
        <DEFAULT_VALUE> [0xFF] </DEFAULT_VALUE>
        <DESCRIPTION> Byte Cache </DESCRIPTION>
    </CACHEDATA>

    <CACHEDATA type="byte" id="NVRAM_EM_INET_ACTIVE_ACCEPT_HEADER">
        <DEFAULT_VALUE> [0xFF] </DEFAULT_VALUE>
        <DESCRIPTION> Byte Cache </DESCRIPTION>
    </CACHEDATA>

    <CACHEDATA type="byte" id="NVRAM_EM_INET_ACTIVE_MMS_VERSION">
        <DEFAULT_VALUE> [0xFF] </DEFAULT_VALUE>
        <DESCRIPTION> Byte Cache </DESCRIPTION>
    </CACHEDATA>

<!----------------- EM Item End ----------------------------------------------->



<!----------------- Misc. | Touch Screen -------------------------------------->
# 3688 "temp/res/EngineerMode.c"
<!----------------- EM Item End ----------------------------------------------->


<!----------------- Misc. | Video High Bit Rate ------------------------------->
# 3702 "temp/res/EngineerMode.c"
<!----------------- EM Item End ----------------------------------------------->



<!----------------- Misc. | Cell reselection ---------------------------------->
# 3722 "temp/res/EngineerMode.c"
<!----------------- EM Item End ----------------------------------------------->


<!----------------- Misc. | Cascade Menu ---------------------------------------->
# 3735 "temp/res/EngineerMode.c"
<!----------------- EM Item End ----------------------------------------------->


<!----------------- Misc. | Check Drive --------------------------------------->
# 3752 "temp/res/EngineerMode.c"
<!----------------- EM Item End ----------------------------------------------->


<!----------------- Misc. | Software Tracer ----------------------------------->
# 3766 "temp/res/EngineerMode.c"
<!----------------- EM Item End ----------------------------------------------->


<!----------------- Misc. | DM Self Register --------------------------------------->
# 3806 "temp/res/EngineerMode.c"
<!----------------- DM Self Register Item End ----------------------------->

<!----------------- Misc. | DM Self Register --------------------------------------->
# 3835 "temp/res/EngineerMode.c"
<!----------------- DM Self Register Item End ----------------------------->


<!----------------- Misc. | DCD Network Paramter ------------------------------>
# 3867 "temp/res/EngineerMode.c"
<!----------------- EM Item End ----------------------------------------------->


<!----------------- Misc. | FOTA Debug ---------------------------------------->
# 3894 "temp/res/EngineerMode.c"
<!----------------- EM Item End ----------------------------------------------->


<!----------------- Misc. | DM Add APN ---------------------------------------->
# 3915 "temp/res/EngineerMode.c"
<!----------------- EM Item End ----------------------------------------------->


<!----------------- Misc. | Video Parameter ----------------------------------->
# 3940 "temp/res/EngineerMode.c"
<!----------------- EM Item End ----------------------------------------------->
# 3975 "temp/res/EngineerMode.c"
<!----------------- Misc. | Software Patch ------------------------------------>
# 3986 "temp/res/EngineerMode.c"
<!----------------- EM Item End ----------------------------------------------->



<!----------------- Level3 Menu | JAVA ---------------------------------------->
# 4012 "temp/res/EngineerMode.c"
<!----------------- EM Item End ----------------------------------------------->
# 4167 "temp/res/EngineerMode.c"
<!----------------- JAVA | Heap Size Setting ---------------------------------->
# 4201 "temp/res/EngineerMode.c"
<!----------------- EM Item End ----------------------------------------------->



<!----------------- JAVA | Performance ---------------------------------------->
# 4229 "temp/res/EngineerMode.c"
<!----------------- EM Item End ----------------------------------------------->



<!----------------- JAVA | JUI Debug ------------------------------------------>
# 4253 "temp/res/EngineerMode.c"
<!----------------- EM Item End ----------------------------------------------->

<!----------------- MED Memory Setting ------------------------------------------>
# 4271 "temp/res/EngineerMode.c"
<!----------------- EM Item End ----------------------------------------------->

<!----------------- Misc | Rf desense ----------------------------------------->
# 4288 "temp/res/EngineerMode.c"
<!----------------- Misc | Rf desense end ------------------------------------->


<!----------------- X download ----------------------------------------------->
# 4303 "temp/res/EngineerMode.c"
<!----------------- EM Item End ----------------------------------------------->


<!----------------- Level3 Menu | MRE ---------------------------------------->
    <!----------------- String Id ----------------------------------------->
    <STRING id = "STR_ID_EM_MRE">MRE</STRING>

    <!----------------- Screen Id ----------------------------------------->
    <SCREEN id = "SCR_ID_EM_MISC_MRE_INFO"></SCREEN>

    <!----------------- Menu Id ------------------------------------------->

    <MENUITEM id = "MENU_ID_EM_MRE" str = "STR_ID_EM_MRE"/>


<!----------------- EM Item End ----------------------------------------------->


<!----------------- Misc. | Power on CPU query ------------------------------->
# 4337 "temp/res/EngineerMode.c"
<!----------------- EM Item End ----------------------------------------------->



<!----------------- Level2 Menu | Debug Info ---------------------------------->
# 4362 "temp/res/EngineerMode.c"
<!----------------- EM Item End ----------------------------------------------->


<!----------------- Debug Info | Last Exception ------------------------------->
# 4374 "temp/res/EngineerMode.c"
<!----------------- EM Item End ----------------------------------------------->


<!----------------- Debug Info | System Stats --------------------------------->
# 4391 "temp/res/EngineerMode.c"
<!----------------- EM Item End ----------------------------------------------->


<!----------------- Debug Info | Drive Letter --------------------------------->
# 4408 "temp/res/EngineerMode.c"
<!----------------- EM Item End ----------------------------------------------->


<!----------------- Iperf ----------------------------------------------------->
# 4494 "temp/res/EngineerMode.c"
<!----------------- EM Item End ----------------------------------------------->


<!----------------- Level2 Menu | Bluetooth ----------------------------------->


    <!----------------- String Id ----------------------------------------->
    <STRING id = "STR_ID_EM_BLUETOOTH">Bluetooth</STRING>

    <!----------------- Menu Id ------------------------------------------->
    <MENU id = "MENU_ID_EM_BLUETOOTH" type = "APP_SUB" str = "STR_ID_EM_BLUETOOTH">

        <MENUITEM_ID>MENU_ID_EM_BT_GENERAL_TEST</MENUITEM_ID>



        <MENUITEM_ID>MENU_ID_EM_BT_RF_TEST</MENUITEM_ID>







        <MENUITEM_ID>MENU_ID_EM_BT_UPF_IOT_TEST</MENUITEM_ID>





    </MENU>


<!----------------- Bluetooth Item End ----------------------------------------------->



<!----------------- Bluetooth | General Test --------------------------------->

    <!----------------- String Id ----------------------------------------->
    <STRING id = "STR_ID_EM_BT_BD_ADDR">BD address</STRING>


    <STRING id = "STR_ID_EM_BT_GENERAL_TEST">Genernal test</STRING>
    <STRING id = "STR_ID_EM_BT_ENTRY_TEST">Start testing</STRING>
    <STRING id = "STR_ID_EM_BT_ENTRY_TEST_RESERVED">Reserved</STRING>
    <STRING id = "STR_ID_EM_BT_LOOKBACK">Far end lookback</STRING>
    <STRING id = "STR_ID_EM_BT_BD_ADDR">BD address</STRING>
    <STRING id = "STR_ID_EM_BT_BD_PASSWORD">BD password</STRING>
    <STRING id = "STR_ID_EM_BT_EXIT_TEST_MODE">Exit test moded</STRING>


    <STRING id = "STR_ID_EM_BT_ADD_AUDIO_CONNECTION">Add audio conn</STRING>
    <STRING id = "STR_ID_EM_BT_REMOVE_AUDIO_CONNECTION">Remove audio conn</STRING>







    <STRING id = "STR_ID_EM_BT_AVRCP_CONNECT_TG_ACTIVELY">AVRCP connect TG actively</STRING>
# 4604 "temp/res/EngineerMode.c"
    <!----------------- Menu Id ------------------------------------------->

    <MENU id = "MENU_ID_EM_BT_GENERAL_TEST" type = "APP_SUB" str = "STR_ID_EM_BT_GENERAL_TEST">


        <MENUITEM id = "MENU_ID_EM_BT_ENTRY_TEST" str = "STR_ID_EM_BT_ENTRY_TEST"/>



        <MENUITEM id = "MENU_ID_EM_BT_ADD_AUDIO_CONNECTION" str = "STR_ID_EM_BT_ADD_AUDIO_CONNECTION"/>
        <MENUITEM id = "MENU_ID_EM_BT_REMOVE_AUDIO_CONNECTION" str = "STR_ID_EM_BT_REMOVE_AUDIO_CONNECTION"/>



        <MENUITEM id = "MENU_ID_EM_BT_ENTRY_LOOKBACK" str = "STR_ID_EM_BT_LOOKBACK"/>
        <MENUITEM id = "MENU_ID_EM_BT_EXIT_TEST_MODE" str = "STR_ID_EM_BT_EXIT_TEST_MODE"/>







        <MENUITEM_ID>MENU_ID_EM_BT_AVRCP_CONNECT_TG_ACTIVELY</MENUITEM_ID>



        <MENUITEM id = "MENU_ID_EM_BT_ENTRY_TEST_RESERVED" str = "STR_ID_EM_BT_ENTRY_TEST_RESERVED"/>

    </MENU>



<!----------------- Bluetooth | Avrcp connect tg actively -------------------->

    <!----------------- Menu Id ------------------------------------------->
    <MENU id = "MENU_ID_EM_BT_AVRCP_CONNECT_TG_ACTIVELY" type = "APP_SUB" str = "STR_ID_EM_BT_AVRCP_CONNECT_TG_ACTIVELY">
        <MENUSET_ID>MENUSET_ON_OFF</MENUSET_ID>
    </MENU>


<!----------------- Avrcp connect tg actively Item End ------------------------>



<!----------------- Bluetooth | RF Test --------------------------------------->

    <!----------------- Screen Id ----------------------------------------->
    <SCREEN id = "SCR_ID_EM_BT_RF_TEST_RESLUT_SCRN"></SCREEN>
    <SCREEN id = "SCR_ID_EM_BT_NON_SIGNALING_RX_RET_SCRN"></SCREEN>

    <!----------------- String Id ----------------------------------------->
    <STRING id = "STR_ID_EM_BT_RF_TEST">Bluetooth RF Test</STRING>
    <STRING id = "STR_ID_EM_DEVICE_BT_RF_TEST_TX">TX Test</STRING>
    <STRING id = "STR_ID_EM_DEVICE_BT_RF_TEST_RX">RX Test</STRING>
    <STRING id = "STR_ID_EM_BT_RF_TEST_NON_SIGNALING_RX">Non_Signaling Rx Test</STRING>
    <STRING id = "STR_ID_EM_DEVICE_BT_RF_TEST_MODE">Enter Test Mode</STRING>

    <STRING id = "STR_ID_EM_DEV_BT_RF_TEST_NO_HOPING">No hoping</STRING>
    <STRING id = "STR_ID_EM_DEV_BT_RF_TEST_HOPIN">Hoping</STRING>
    <STRING id = "STR_ID_EM_DEV_BT_RF_TEST_CHANNEL">Channel</STRING>
    <STRING id = "STR_ID_EM_DEV_BT_RF_TEST_CTRL_PWR_LEVEL">Ctrl pwr lvl</STRING>
    <STRING id = "STR_ID_EM_DEV_BT_RF_TEST_PACKET_TYPE">Packet type</STRING>
    <STRING id = "STR_ID_EM_DEV_BT_RF_TEST_PACKET_TYPE_DH1">DH 1</STRING>
    <STRING id = "STR_ID_EM_DEV_BT_RF_TEST_PACKET_TYPE_DH3">DH 3</STRING>
    <STRING id = "STR_ID_EM_DEV_BT_RF_TEST_PACKET_TYPE_DH5">DH 5</STRING>

    <STRING id = "STR_ID_EM_DEV_BT_RF_TEST_PACKET_TYPE_DM1">DM 1</STRING>
    <STRING id = "STR_ID_EM_DEV_BT_RF_TEST_PACKET_TYPE_DM3">DM 3</STRING>
    <STRING id = "STR_ID_EM_DEV_BT_RF_TEST_PACKET_TYPE_DM5">DM 5</STRING>

    <STRING id = "STR_ID_EM_DEV_BT_RF_TEST_PACKET_TYPE_2DH1">2DH 1</STRING>
    <STRING id = "STR_ID_EM_DEV_BT_RF_TEST_PACKET_TYPE_2DH3">2DH 3</STRING>
    <STRING id = "STR_ID_EM_DEV_BT_RF_TEST_PACKET_TYPE_2DH5">2DH 5</STRING>

    <STRING id = "STR_ID_EM_DEV_BT_RF_TEST_PACKET_TYPE_3DH1">3DH 1</STRING>
    <STRING id = "STR_ID_EM_DEV_BT_RF_TEST_PACKET_TYPE_3DH3">3DH 3</STRING>
    <STRING id = "STR_ID_EM_DEV_BT_RF_TEST_PACKET_TYPE_3DH5">3DH 5</STRING>

    <STRING id = "STR_ID_EM_DEV_BT_RF_TEST_PATTERN_TYPE">Pattern Type</STRING>
    <STRING id = "STR_ID_EM_DEV_BT_RF_TEST_PATTERN_TYPE_1">0000</STRING>
    <STRING id = "STR_ID_EM_DEV_BT_RF_TEST_PATTERN_TYPE_2">1111</STRING>
    <STRING id = "STR_ID_EM_DEV_BT_RF_TEST_PATTERN_TYPE_3">1010</STRING>
    <STRING id = "STR_ID_EM_DEV_BT_RF_TEST_PATTERN_TYPE_4">Pseudo Random</STRING>
    <STRING id = "STR_ID_EM_DEV_BT_RF_TEST_PATTERN_TYPE_5">11110000</STRING>

        <STRING id = "STR_ID_EM_DEV_BT_RF_TEST_BT_ADDR">BT addr(0x+8)</STRING>

    <STRING id = "STR_ID_EM_DEV_BT_RF_TEST_PACKET_TYPE_NON_MOD">Non-modulate</STRING>
    <STRING id = "STR_ID_EM_DEV_BT_RF_TEST_DATA_LEN">Data len</STRING>
    <STRING id = "STR_ID_EM_DEV_BT_RF_TEST_POLL_PERIOD">Poll period</STRING>
    <STRING id = "STR_ID_EM_DEV_BT_RF_TEST_TURN_OFF_BT">Turn off BT first!</STRING>

    <!----------------- Menu Id ------------------------------------------->
    <MENUITEM id = "MENU_ID_EM_BT_RF_TEST" str = "STR_ID_EM_BT_RF_TEST"/>
    <MENU id = "MENU_ID_EM_BT_RF_TEST_LIST" type = "APP_SUB" str = "STR_ID_EM_BT_RF_TEST">
        <MENUITEM id = "MENU_ID_EM_DEVICE_BT_RF_TEST_TX" str = "STR_ID_EM_DEVICE_BT_RF_TEST_TX"/>
        <MENUITEM id = "MENU_ID_EM_DEVICE_BT_RF_TEST_RX" str = "STR_ID_EM_DEVICE_BT_RF_TEST_RX"/>
        <MENUITEM id = "MENU_ID_EM_BT_RF_TEST_NON_SIGNALING_RX" str = "STR_ID_EM_BT_RF_TEST_NON_SIGNALING_RX"/>
        <MENUITEM id = "MENU_ID_EM_DEVICE_BT_RF_TEST_BD_ADDR" str = "STR_ID_EM_BT_BD_ADDR"/>
        <MENUITEM id = "MENU_ID_EM_DEVICE_BT_RF_TEST_MODE" str = "STR_ID_EM_DEVICE_BT_RF_TEST_MODE"/>
    </MENU>


<!----------------- EM Item End ----------------------------------------------->


<!----------------- Bluetooth | Get Chip Version ------------------------------>
# 4721 "temp/res/EngineerMode.c"
<!----------------- EM Item End ----------------------------------------------->


<!----------------- Bluetooth | UPF IOT Test ---------------------------------->

    <!----------------- String Id ----------------------------------------->
    <STRING id = "STR_ID_EM_BT_UPF_IOT_TEST">Bluetooth UPF test</STRING>

    <!----------------- Menu Id ------------------------------------------->
    <MENU id = "MENU_ID_EM_BT_UPF_IOT_TEST" type = "APP_SUB" str = "STR_ID_EM_BT_UPF_IOT_TEST">
    </MENU>



<!----------------- EM Item End ----------------------------------------------->





<!----------------- Level2 Menu | Profiling ----------------------------------->
    <SCREEN id = "GRP_ID_EM_MISC_MEDIA_MEMORY_SETTING"></SCREEN>
# 4794 "temp/res/EngineerMode.c"
<!----------------- EM Item End ----------------------------------------------->


<!----------------- Profiling | SWLA ----------------------------->
# 4817 "temp/res/EngineerMode.c"
<!----------------- EM Item End ----------------------------------------------->






<!----------------- Profiling | GDI Profiling -------------------------->
# 4887 "temp/res/EngineerMode.c"
<!----------------- EM Item End ----------------------------------------------->

<!----------------- Profiling | MultiMedia Profiling -------------------------->
# 4955 "temp/res/EngineerMode.c"
<!----------------- EM Item End ----------------------------------------------->



<!----------------- Profiling | Framework Profiling -------------------------->
# 4978 "temp/res/EngineerMode.c"
<!----------------- EM Item End ----------------------------------------------->



<!----------------- Profiling | UI Benchmark ---------------------------------->
# 4997 "temp/res/EngineerMode.c"
<!----------------- EM Item End ----------------------------------------------->



<!----------------- Profiling | Memory Monitor -------------------------------->
# 5030 "temp/res/EngineerMode.c"
<!----------------- EM Item End ----------------------------------------------->


<!----------------- Profiling | Memory Stat. ---------------------------------->
# 5054 "temp/res/EngineerMode.c"
<!----------------- EM Item End ----------------------------------------------->


<!----------------- Profiling | Venus Debug Panel ----------------------------->
# 5080 "temp/res/EngineerMode.c"
<!----------------- EM Item End ----------------------------------------------->


<!----------------- Profiling | FS Test -------------------------------------->
# 5094 "temp/res/EngineerMode.c"
<!----------------- EM Item End ----------------------------------------------->



<!----------------- Profiling | CSB Browser ----------------------------------->
# 5110 "temp/res/EngineerMode.c"
<!----------------- EM Item End ----------------------------------------------->

<!----------------- Profiling | Multimedia | xxx --------------------------------->
    <!----------------- Screen Id ----------------------------------------->
    <SCREEN id = "GRP_ID_EM_PROFILING_AUTO_PLAY"></SCREEN>
    <SCREEN id = "GRP_ID_EM_PROFILING_VDOPLY"></SCREEN>
# 5124 "temp/res/EngineerMode.c"
    <SCREEN id = "GRP_ID_EM_PROFILING_CAMERA"></SCREEN>
    <SCREEN id = "GRP_ID_EM_PROFILING_CAMERA_APP_CAPTURE"></SCREEN>
    <SCREEN id = "GRP_ID_EM_PROFILING_IMAGE_DECODE"></SCREEN>
    <SCREEN id = "GRP_ID_EM_PROFILING_VDOREC"></SCREEN>

    <!----------------- String Id ------------------------------------------->
# 5158 "temp/res/EngineerMode.c"
    <!----------------- String Id ------------------------------------------->
    <STRING id = "STR_ID_EM_PROFILING_EXTRA_LAYER">Extra layer</STRING>
    <STRING id = "STR_ID_EM_PROFILING_ROTATE">Rotate</STRING>
    <STRING id = "STR_ID_EM_PROFILING_PLAY_SIZE">Play size</STRING>
    <STRING id = "STR_ID_EM_PROFILING_TVOUT_MODE">TV-Out mode</STRING>
    <STRING id = "STR_ID_EM_PROFILING_ROTATE_0">Rotate 0</STRING>
    <STRING id = "STR_ID_EM_PROFILING_ROTATE_90">Rotate 90</STRING>
    <STRING id = "STR_ID_EM_PROFILING_ROTATE_180">Rotate 180</STRING>
    <STRING id = "STR_ID_EM_PROFILING_ROTATE_270">Rotate 270</STRING>
    <STRING id = "STR_ID_EM_PROFILING_TV_FULL_SCREEN">Full screen</STRING>
    <STRING id = "STR_ID_EM_PROFILING_TV_LCD_SCREEN">LCD screen</STRING>
    <STRING id = "STR_ID_EM_PROFILING_SIZE_SQCIF">SQCIF (128x96)</STRING>
    <STRING id = "STR_ID_EM_PROFILING_SIZE_QCIF">SQCIF (128x96)</STRING>
    <STRING id = "STR_ID_EM_PROFILING_SIZE_CIF">CIF (352x288)</STRING>
    <STRING id = "STR_ID_EM_PROFILING_SIZE_QQVGA">QQVGA (160x120)</STRING>
    <STRING id = "STR_ID_EM_PROFILING_SIZE_QVGA">QVGA (320x240)</STRING>
    <STRING id = "STR_ID_EM_PROFILING_SIZE_VGA">VGA (640x480)</STRING>
    <STRING id = "STR_ID_EM_PROFILING_SIZE_LCD">LCD Size</STRING>
    <STRING id = "STR_ID_EM_PROFILING_RECORD_SIZE">Record Size</STRING>
    <STRING id = "STR_ID_EM_PROFILING_PREVIEW_SIZE">Preview Size</STRING>
    <STRING id = "STR_ID_EM_PROFILING_SETTING">Setting</STRING>

    <!----------------- Menu Id ------------------------------------------->

    <MENU id="MENU_ID_EM_PROFILING_OPTION" type="OPTION" str="STR_GLOBAL_OPTIONS">
        <MENUITEM_ID>MENU_ID_EM_PROFILING_START</MENUITEM_ID>
        <MENUITEM_ID>MENU_ID_EM_PROFILING_SETTING</MENUITEM_ID>
    </MENU>
    <MENUITEM id="MENU_ID_EM_PROFILING_START" str="STR_GLOBAL_START"/>
    <MENUITEM id="MENU_ID_EM_PROFILING_SETTING" str="STR_GLOBAL_SETTINGS"/>



<!----------------- EM Item End ----------------------------------------------->


<!----------------- Profiling | Gesture Test --------------------------------->
# 5204 "temp/res/EngineerMode.c"
<!----------------- EM Item End ----------------------------------------------->

<!----------------- Level2 Menu | RF Test Tool -------------------------------->
    <!----------------- Screen Id ----------------------------------------->
    <SCREEN id = "SCR_ID_EM_DUALMODE_SWITCH_PROGRESS"/>

    <!----------------- String Id ----------------------------------------->

    <STRING id = "STR_ID_EM_RF_TEST_TOOL">RF test tool</STRING>

    <STRING id = "STR_ID_EM_RF_TEST_GSM_CONFIRM_NOTIFY_TEST">Wifi must be off. Will power off after test.</STRING> <!-- Engineer Mode RF Test GSM Menu Caption String-->

    <!----------------- Menu Id ------------------------------------------->

    <MENU id = "MENU_ID_EM_RF_TEST_TOOL" type = "APP_SUB" str = "STR_ID_EM_RF_TEST_TOOL">


        <MENUITEM_ID>MENU_ID_EM_RF_TEST_TOOL_GSM</MENUITEM_ID>



        <MENUITEM_ID>MENU_ID_EM_RF_TEST_TOOL_WIFI</MENUITEM_ID>

    </MENU>
# 5336 "temp/res/EngineerMode.c"
<!----------------- RF Test Tool | GSM RF Test -------------------------------->

    <!----------------- String Id ----------------------------------------->
    <SCREEN id = "SCR_ID_EM_RF_TEST_GSM_POWER_SCAN_RESULT"/>

    <!----------------- String Id ----------------------------------------->
    <STRING id = "STR_ID_EM_RF_TEST_TOOL_GSM">GSM</STRING>
    <STRING id = "STR_ID_EM_RF_GSM_TX_TEST">TX test</STRING>
    <STRING id = "STR_ID_EM_RF_GSM_RX_TEST">RX test</STRING>
    <STRING id = "STR_ID_EM_RF_GSM_POWER_SCAN">Power scan</STRING>
    <STRING id = "STR_ID_EM_AUD_SET_SUCCES">Successfully Set!!</STRING>
        <STRING id = "STR_ID_EM_AUD_SET_ERROR">Set Error!!</STRING>


    <STRING id = "STR_ID_EM_RF_GSM_TX_BAND">Band</STRING>
    <STRING id = "STR_ID_EM_RF_GSM_TX_BAND_GSM850">GSM850</STRING>
    <STRING id = "STR_ID_EM_RF_GSM_TX_BAND_GSM900">GSM900</STRING>
    <STRING id = "STR_ID_EM_RF_GSM_TX_BAND_DCS1800">DCS1800</STRING>
    <STRING id = "STR_ID_EM_RF_GSM_TX_BAND_PCS1900">PCS1900</STRING>

    <STRING id = "STR_ID_EM_RF_GSM_TX_ARFCN">ARFCN</STRING>
    <STRING id = "STR_ID_EM_RF_GSM_TX_TSC">TSC</STRING>
    <STRING id = "STR_ID_EM_RF_GSM_TX_PCL">PCL</STRING>
    <STRING id = "STR_ID_EM_RF_GSM_TX_AFC">AFC</STRING>

    <STRING id = "STR_ID_EM_RF_GSM_TX_BURST_TYPE">Burst type</STRING>
    <STRING id = "STR_ID_EM_RF_GSM_TX_BURST_NB">NB</STRING>
    <STRING id = "STR_ID_EM_RF_GSM_TX_BURST_AB">AB</STRING>

    <STRING id = "STR_ID_EM_RF_GSM_TX_GAIN">Gain</STRING>
    <STRING id = "STR_ID_EM_RF_GSM_RX_BURST_BURST_RX">Burst RX</STRING>

    <!----------------- Menu Id ------------------------------------------->
    <MENU id = "MENU_ID_EM_RF_TEST_TOOL_GSM" str = "STR_ID_EM_RF_TEST_TOOL_GSM"/>

    <MENU id = "MENU_ID_EM_RF_TEST_TOOL_GSM_LIST" type = "APP_SUB" str = "STR_ID_EM_RF_TEST_TOOL_GSM">
        <MENUITEM id = "MENU_ID_EM_RF_GSM_TX_TEST" str = "STR_ID_EM_RF_GSM_TX_TEST"/>
        <MENUITEM id = "MENU_ID_EM_RF_GSM_RX_TEST" str = "STR_ID_EM_RF_GSM_RX_TEST"/>
        <MENUITEM id = "MENU_ID_EM_RF_GSM_POWER_SCAN" str = "STR_ID_EM_RF_GSM_POWER_SCAN"/>
    </MENU>


<!----------------- EM Item End ----------------------------------------------->



<!----------------- RF Test Tool | WIFI RF Test ------------------------------->

    <!----------------- Screen Id ----------------------------------------->
    <SCREEN id = "SCR_ID_EM_RF_WIFI_TX_DAC_OFFSET"/>
    <SCREEN id = "SCR_ID_EM_RF_WIFI_RX_CONT_PKT"/>

    <!----------------- String Id ----------------------------------------->
    <STRING id = "STR_ID_EM_RF_TEST_TOOL_WIFI">Wifi</STRING>
    <STRING id = "STR_ID_EM_RF_TEST_WIFI_CLOSE">Please close wifi first.</STRING>

        <STRING id = "STR_ID_EM_RF_WIFI_TX_TESTS">Tx test</STRING> <!-- Engineer Mode RF Test WiFi TX Tests Menu Caption String -->
        <STRING id = "STR_ID_EM_RF_WIFI_CONT_PKT_RX">Rx test</STRING> <!-- Engineer Mode RF Test WiFi PKT RX Menu Caption String -->
        <STRING id = "STR_ID_EM_RF_WIFI_POWER_SAVE">Sleep mode</STRING> <!-- Engineer Mode RF Test WiFi Power Save Menu Caption String -->
        <STRING id = "STR_ID_EM_RF_WIFI_STORAGE">Storage access</STRING> <!-- Engineer Mode RF Test WiFi Register Access Menu Caption String -->
        <STRING id = "STR_ID_EM_RF_WIFI_REGISTER">Register access</STRING> <!-- Engineer Mode RF Test WiFi Register Access Menu Caption String -->


        <STRING id = "STR_ID_EM_RF_WIFI_TX_OUTPUT_POWER">Tx output power</STRING> <!-- Engineer Mode RF Test WiFi TX Output Power Menu Caption String -->
        <STRING id = "STR_ID_EM_RF_WIFI_TX_LOCAL_FREQUENCY">Local frequency</STRING> <!-- Engineer Mode RF Test WiFi TX Local Freq. Menu Caption String -->
        <STRING id = "STR_ID_EM_RF_WIFI_TX_CONT_PKT_TX">Cont PKT tx</STRING> <!-- Engineer Mode RF Test WiFi TX Cont PKT Menu Caption String -->


        <STRING id = "STR_ID_EM_RF_WIFI_TX_CH_FREQ">CH freq (MHz)</STRING> <!-- Engineer Mode RF Test WiFi TX Caption String -->
        <STRING id = "STR_ID_EM_RF_WIFI_TX_CH_FREQ_1">2412</STRING> <!-- Engineer Mode RF Test WiFi TX Caption String -->
        <STRING id = "STR_ID_EM_RF_WIFI_TX_CH_FREQ_2">2417</STRING> <!-- Engineer Mode RF Test WiFi TX Caption String -->
        <STRING id = "STR_ID_EM_RF_WIFI_TX_CH_FREQ_3">2422</STRING> <!-- Engineer Mode RF Test WiFi TX Caption String -->
        <STRING id = "STR_ID_EM_RF_WIFI_TX_CH_FREQ_4">2427</STRING> <!-- Engineer Mode RF Test WiFi TX Caption String -->
        <STRING id = "STR_ID_EM_RF_WIFI_TX_CH_FREQ_5">2432</STRING> <!-- Engineer Mode RF Test WiFi TX Caption String -->
        <STRING id = "STR_ID_EM_RF_WIFI_TX_CH_FREQ_6">2437</STRING> <!-- Engineer Mode RF Test WiFi TX Caption String -->
        <STRING id = "STR_ID_EM_RF_WIFI_TX_CH_FREQ_7">2442</STRING> <!-- Engineer Mode RF Test WiFi TX Caption String -->
        <STRING id = "STR_ID_EM_RF_WIFI_TX_CH_FREQ_8">2447</STRING> <!-- Engineer Mode RF Test WiFi TX Caption String -->
        <STRING id = "STR_ID_EM_RF_WIFI_TX_CH_FREQ_9">2452</STRING> <!-- Engineer Mode RF Test WiFi TX Caption String -->
        <STRING id = "STR_ID_EM_RF_WIFI_TX_CH_FREQ_10">2457</STRING> <!-- Engineer Mode RF Test WiFi TX Caption String -->
        <STRING id = "STR_ID_EM_RF_WIFI_TX_CH_FREQ_11">2462</STRING> <!-- Engineer Mode RF Test WiFi TX Caption String -->
        <STRING id = "STR_ID_EM_RF_WIFI_TX_CH_FREQ_12">2467</STRING> <!-- Engineer Mode RF Test WiFi TX Caption String -->
        <STRING id = "STR_ID_EM_RF_WIFI_TX_CH_FREQ_13">2472</STRING> <!-- Engineer Mode RF Test WiFi TX Caption String -->
        <STRING id = "STR_ID_EM_RF_WIFI_TX_CH_FREQ_14">2483.5</STRING> <!-- Engineer Mode RF Test WiFi TX Caption String -->



        <STRING id = "STR_ID_EM_RF_WIFI_TX_RATE">TX rate</STRING> <!-- Engineer Mode RF Test WiFi TX Caption String -->
        <STRING id = "STR_ID_EM_RF_WIFI_TX_RATE_1M">1M</STRING> <!-- Engineer Mode RF Test WiFi TX Caption String -->
        <STRING id = "STR_ID_EM_RF_WIFI_TX_RATE_2M">2M</STRING> <!-- Engineer Mode RF Test WiFi TX Caption String -->
        <STRING id = "STR_ID_EM_RF_WIFI_TX_RATE_5_5M">5.5M</STRING> <!-- Engineer Mode RF Test WiFi TX Caption String -->
        <STRING id = "STR_ID_EM_RF_WIFI_TX_RATE_11M">11M</STRING> <!-- Engineer Mode RF Test WiFi TX Caption String -->
        <STRING id = "STR_ID_EM_RF_WIFI_TX_RATE_6M">6M</STRING> <!-- Engineer Mode RF Test WiFi TX Caption String -->
        <STRING id = "STR_ID_EM_RF_WIFI_TX_RATE_9M">9M</STRING> <!-- Engineer Mode RF Test WiFi TX Caption String -->
        <STRING id = "STR_ID_EM_RF_WIFI_TX_RATE_12M">12M</STRING> <!-- Engineer Mode RF Test WiFi TX Caption String -->
        <STRING id = "STR_ID_EM_RF_WIFI_TX_RATE_18M">18M</STRING> <!-- Engineer Mode RF Test WiFi TX Caption String -->
        <STRING id = "STR_ID_EM_RF_WIFI_TX_RATE_24M">24M</STRING> <!-- Engineer Mode RF Test WiFi TX Caption String -->
        <STRING id = "STR_ID_EM_RF_WIFI_TX_RATE_36M">36M</STRING> <!-- Engineer Mode RF Test WiFi TX Caption String -->
        <STRING id = "STR_ID_EM_RF_WIFI_TX_RATE_48M">48M</STRING> <!-- Engineer Mode RF Test WiFi TX Caption String -->
        <STRING id = "STR_ID_EM_RF_WIFI_TX_RATE_54M">54M</STRING> <!-- Engineer Mode RF Test WiFi TX Caption String -->
        <STRING id = "STR_ID_EM_RF_WIFI_TX_RATE_MCS0">MCS0</STRING>
        <STRING id = "STR_ID_EM_RF_WIFI_TX_RATE_MCS1">MCS1</STRING>
        <STRING id = "STR_ID_EM_RF_WIFI_TX_RATE_MCS2">MCS2</STRING>
        <STRING id = "STR_ID_EM_RF_WIFI_TX_RATE_MCS3">MCS3</STRING>
        <STRING id = "STR_ID_EM_RF_WIFI_TX_RATE_MCS4">MCS4</STRING>
        <STRING id = "STR_ID_EM_RF_WIFI_TX_RATE_MCS5">MCS5</STRING>
        <STRING id = "STR_ID_EM_RF_WIFI_TX_RATE_MCS6">MCS6</STRING>
        <STRING id = "STR_ID_EM_RF_WIFI_TX_RATE_MCS7">MCS7</STRING>
        <STRING id = "STR_ID_EM_RF_WIFI_TX_RATE_MCS32">MCS32</STRING>

        <STRING id = "STR_ID_EM_RF_WIFI_11NBW">11n BW</STRING>

        <STRING id = "STR_ID_EM_RF_WIFI_11NBW_HT20">HT20</STRING>
        <STRING id = "STR_ID_EM_RF_WIFI_11NBW_HT40">HT40</STRING>
        <STRING id = "STR_ID_EM_RF_WIFI_11NBW_L20">L20</STRING>
        <STRING id = "STR_ID_EM_RF_WIFI_11NBW_U20">U20</STRING>

        <STRING id = "STR_ID_EM_RF_WIFI_11NGI">11n GI</STRING>
        <STRING id = "STR_ID_EM_RF_WIFI_11NGI_NG">NG</STRING>
        <STRING id = "STR_ID_EM_RF_WIFI_11NGI_SG">SG</STRING>
        <STRING id = "STR_ID_EM_RF_WIFI_11NPF">11n PF</STRING>
    <STRING id = "STR_ID_EM_RF_WIFI_11NPF_GF">GF</STRING>
    <STRING id = "STR_ID_EM_RF_WIFI_11NPF_MM">MM</STRING>
    <STRING id = "STR_ID_EM_RF_WIFI_REGISTER_EFUSE">EFuse(32bit)</STRING>
    <STRING id = "STR_ID_EM_RF_WIFI_POWER_UPDATE">Power(dBm)</STRING>


        <STRING id = "STR_ID_EM_RF_WIFI_TX_GAIN">Gain (hex)</STRING> <!-- Engineer Mode RF Test WiFi TX Caption String -->
        <STRING id = "STR_ID_EM_RF_WIFI_TX_PKT_COUNT">PKT count</STRING> <!-- Engineer Mode RF Test WiFi TX Caption String -->
        <STRING id = "STR_ID_EM_RF_WIFI_TX_PKT_LENGTH">PKT length (byte)</STRING> <!-- Engineer Mode RF Test WiFi TX Caption String -->

        <STRING id = "STR_ID_EM_RF_WIFI_TX_PATTERN">TX pattern</STRING> <!-- Engineer Mode RF Test WiFi TX Caption String -->
        <STRING id = "STR_ID_EM_RF_WIFI_TX_PATTERN_ALL_0">All 0</STRING> <!-- Engineer Mode RF Test WiFi TX Caption String -->
        <STRING id = "STR_ID_EM_RF_WIFI_TX_PATTERN_ALL_1">All 1</STRING> <!-- Engineer Mode RF Test WiFi TX Caption String -->
        <STRING id = "STR_ID_EM_RF_WIFI_TX_PATTERN_ALTER_BITS">Alter bits</STRING> <!-- Engineer Mode RF Test WiFi TX Caption String -->
        <STRING id = "STR_ID_EM_RF_WIFI_TX_PATTERN_RANDOM">Random</STRING> <!-- Engineer Mode RF Test WiFi TX Caption String -->

        <STRING id = "STR_ID_EM_RF_WIFI_POWER_SAVE_NORMAL">Normal</STRING> <!-- Engineer Mode RF Test WiFi Power Save Caption String -->
        <STRING id = "STR_ID_EM_RF_WIFI_POWER_SAVE_IDLE">Idle</STRING> <!-- Engineer Mode RF Test WiFi Power Save Caption String -->
        <STRING id = "STR_ID_EM_RF_WIFI_POWER_SAVE_SLEEP">Sleep</STRING> <!-- Engineer Mode RF Test WiFi Power Save Caption String -->


        <STRING id = "STR_ID_EM_RF_WIFI_REGISTER_MCR">Mcr</STRING> <!-- Engineer Mode RF Test WiFi Register MCR Menu Caption String -->

        <STRING id = "STR_ID_EM_RF_WIFI_REGISTER_EEPROM">Eeprom</STRING> <!-- Engineer Mode RF Test WiFi Register EEPROM Menu Caption String -->

        <STRING id = "STR_ID_EM_RF_WIFI_REGISTER_TYPE">Type</STRING> <!-- Engineer Mode RF Test WiFi Caption String -->
        <STRING id = "STR_ID_EM_RF_WIFI_REGISTER_16">16</STRING> <!-- Engineer Mode RF Test WiFi Caption String -->
        <STRING id = "STR_ID_EM_RF_WIFI_REGISTER_32">32</STRING> <!-- Engineer Mode RF Test WiFi Caption String -->

        <STRING id = "STR_ID_EM_RF_WIFI_REGISTER_ACCESS">Access</STRING> <!-- Engineer Mode RF Test WiFi Caption String -->
        <STRING id = "STR_ID_EM_RF_WIFI_REGISTER_WRITE">Write</STRING> <!-- Engineer Mode RF Test WiFi Caption String -->

        <STRING id = "STR_ID_EM_RF_WIFI_REGISTER_ADDRESS">Address(hex)</STRING> <!-- Engineer Mode RF Test WiFi Caption String -->
        <STRING id = "STR_ID_EM_RF_WIFI_REGISTER_DATA">Data (hex)</STRING> <!-- Engineer Mode RF Test WiFi Caption String -->

    <!----------------- Menu Id ------------------------------------------->
    <MENUITEM id = "MENU_ID_EM_RF_TEST_TOOL_WIFI" str = "STR_ID_EM_RF_TEST_TOOL_WIFI"/>
    <MENU id = "MENU_ID_EM_RF_TEST_TOOL_WIFI_LIST" type = "APP_SUB" str = "STR_ID_EM_RF_TEST_TOOL_WIFI">
        <MENU id = "MENU_ID_EM_RF_WIFI_TX_TESTS" str = "STR_ID_EM_RF_WIFI_TX_TESTS">
            <MENUITEM id = "MENU_ID_EM_RF_WIFI_TX_OUTPUT_POWER" str = "STR_ID_EM_RF_WIFI_TX_OUTPUT_POWER"/>
            <MENUITEM id = "MENU_ID_EM_RF_WIFI_TX_LOCAL_FREQUENCY" str = "STR_ID_EM_RF_WIFI_TX_LOCAL_FREQUENCY"/>
            <MENUITEM id = "MENU_ID_EM_RF_WIFI_TX_CONT_PKT_TX" str = "STR_ID_EM_RF_WIFI_TX_CONT_PKT_TX"/>
        </MENU>
        <MENUITEM id = "MENU_ID_EM_RF_WIFI_CONT_PKT_RX" str = "STR_ID_EM_RF_WIFI_CONT_PKT_RX"/>
        <MENUITEM id = "MENU_ID_EM_RF_WIFI_POWER_SAVE" str = "STR_ID_EM_RF_WIFI_POWER_SAVE"/>
        <MENU id = "MENU_ID_EM_RF_WIFI_REGISTER_ACCESS" str = "STR_ID_EM_RF_WIFI_REGISTER">
            <MENUITEM id = "MENU_ID_EM_RF_WIFI_REGISTER_MCR" str = "STR_ID_EM_RF_WIFI_REGISTER_MCR"/>
            <MENUITEM id = "MENU_ID_EM_RF_WIFI_REGISTER_EEPROM" str = "STR_ID_EM_RF_WIFI_REGISTER_EEPROM"/>
                        <MENUITEM id = "MENU_ID_EM_RF_WIFI_REGISTER_EFUSE" str = "STR_ID_EM_RF_WIFI_REGISTER_EFUSE"/>
        </MENU>
    </MENU>


<!----------------- EM Item End ----------------------------------------------->



<!----------------- Level2 Menu | VoIP ---------------------------------------->
# 5553 "temp/res/EngineerMode.c"
<!----------------- EM Item End ----------------------------------------------->



<!----------------- VoIP | VoIP Settings -------------------------------------->






<!----------------- EM Item End ----------------------------------------------->



<!----------------- VoIP | SIP Support ---------------------------------------->
# 5579 "temp/res/EngineerMode.c"
<!----------------- EM Item End ----------------------------------------------->


<!----------------- VoIP | SIP Require ---------------------------------------->
# 5593 "temp/res/EngineerMode.c"
<!----------------- EM Item End ----------------------------------------------->


<!----------------- VoIP | VoIP Log ------------------------------------------->
# 5608 "temp/res/EngineerMode.c"
<!----------------- EM Item End ----------------------------------------------->




<!----------------- Audio | CacheData ----------------------------------------->
    <CACHEDATA type="double" id="NVRAM_AUDIO_DEBUG_INFO1" restore_flag="FALSE" restore_id="@NVRAM_CACHE_ID_RESERVED">
        <DEFAULT_VALUE> [0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF] </DEFAULT_VALUE>
        <DESCRIPTION> Double cache </DESCRIPTION>
    </CACHEDATA>

    <CACHEDATA type="double" id="NVRAM_AUDIO_DEBUG_INFO2" restore_flag="FALSE" restore_id="@NVRAM_CACHE_ID_RESERVED">
        <DEFAULT_VALUE> [0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF] </DEFAULT_VALUE>
        <DESCRIPTION> Double cache </DESCRIPTION>
    </CACHEDATA>

    <CACHEDATA type="double" id="NVRAM_AUDIO_DEBUG_INFO3" restore_flag="FALSE" restore_id="@NVRAM_CACHE_ID_RESERVED">
        <DEFAULT_VALUE> [0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF] </DEFAULT_VALUE>
        <DESCRIPTION> Double cache </DESCRIPTION>
    </CACHEDATA>

    <CACHEDATA type="double" id="NVRAM_AUDIO_DEBUG_INFO4" restore_flag="FALSE" restore_id="@NVRAM_CACHE_ID_RESERVED">
        <DEFAULT_VALUE> [0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF] </DEFAULT_VALUE>
        <DESCRIPTION> Double cache </DESCRIPTION>
    </CACHEDATA>



<!----------------- EM Item End ----------------------------------------------->

<!----------------- GDI image decode ------------------------------------------>
# 5656 "temp/res/EngineerMode.c"
<!----------------- EM Item End ----------------------------------------------->

<!----------------- XML END --------------------------------------------------->

</APP>
