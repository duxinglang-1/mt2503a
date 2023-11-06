# 1 "temp/res/GeneralSettingSrv.c"
# 1 "<built-in>"
# 1 "<command line>"
# 1 "temp/res/GeneralSettingSrv.c"
# 55 "temp/res/GeneralSettingSrv.c"
# 1 "../../mmi/inc/MMI_features.h" 1
# 69 "../../mmi/inc/MMI_features.h"
# 1 "../../mmi/inc/MMI_features_switch.h" 1
# 67 "../../mmi/inc/MMI_features_switch.h"
# 1 "../../mmi/inc/MMI_features_type.h" 1
# 68 "../../mmi/inc/MMI_features_switch.h" 2
# 70 "../../mmi/inc/MMI_features.h" 2
# 56 "temp/res/GeneralSettingSrv.c" 2
# 1 "../customerinc/CustResDef.h" 1
# 195 "../customerinc/CustResDef.h"
# 1 "../../mmi/inc/MMI_features.h" 1
# 196 "../customerinc/CustResDef.h" 2
# 57 "temp/res/GeneralSettingSrv.c" 2


<?xml version = "1.0" encoding = "UTF-8"?>

<APP id = "SRV_GENERAL_SETTING">
    <INCLUDE file = "GlobalResDef.h"/>

<!--------------------------------------------------------------------------------------------------------------------->
    <CACHEDATA type="byte" id="TIME_FORMAT" restore_flag="TRUE">
        <DEFAULT_VALUE> [0X00] </DEFAULT_VALUE>
        <DESCRIPTION> Time format </DESCRIPTION>
        <FIELD>
           <OPTION hint = "12"> [0x00] </OPTION>
           <OPTION hint = "24"> [0x01] </OPTION>
        </FIELD>
    </CACHEDATA>

    <CACHEDATA type="byte" id="DATE_FORMAT" restore_flag="TRUE">
        <DEFAULT_VALUE> [0X00] </DEFAULT_VALUE>
        <DESCRIPTION> Date format </DESCRIPTION>
        <FIELD>
                <OPTION hint="DDMMYYYY"> [0x00]</OPTION>
                <OPTION hint="MMDDYYYY"> [0x01] </OPTION>
                <OPTION hint="YYYYMMDD"> [0x02]</OPTION>
        </FIELD>
    </CACHEDATA>

    <CACHEDATA type="byte" id="RESTORE_DEFAULT_TIME_FORMAT">
        <DEFAULT_VALUE> [0x00] </DEFAULT_VALUE>
        <DESCRIPTION> Byte Cache </DESCRIPTION>
    </CACHEDATA>

    <CACHEDATA type="byte" id="RESTORE_DEFAULT_DATE_FORMAT">
        <DEFAULT_VALUE> [0x00] </DEFAULT_VALUE>
        <DESCRIPTION> Byte Cache </DESCRIPTION>
    </CACHEDATA>

    <CACHEDATA type="byte" id="NVRAM_DT_SEP_FORMAT" restore_flag="TRUE">
        <DEFAULT_VALUE> [0x00] </DEFAULT_VALUE>
        <DESCRIPTION> Byte Cache </DESCRIPTION>
        <FIELD>
                <OPTION hint="."> [0x00]</OPTION>
                <OPTION hint=":"> [0x01] </OPTION>
                <OPTION hint="/"> [0x02]</OPTION>
                <OPTION hint="-"> [0x03] </OPTION>
        </FIELD>
    </CACHEDATA>

    <CACHEDATA type="byte" id="NVRAM_SETTING_LANG" restore_flag="TRUE">



        <DEFAULT_VALUE> [0x00] </DEFAULT_VALUE>

        <DESCRIPTION> Current language </DESCRIPTION>
        <FIELD>

            <OPTION hint="English"> [0x00]</OPTION>
# 420 "temp/res/GeneralSettingSrv.c"
        </FIELD>
    </CACHEDATA>
# 576 "temp/res/GeneralSettingSrv.c"
    <SENDER id="EVT_ID_SETTING_LANGUAGE_CHANGED" hfile="GeneralSettingSrvGprot.h"/>

    <SENDER id="EVT_ID_SRV_SETTING_UART_SETTING_CHANGED" hfile="GeneralSettingSrvGprot.h"/>
</APP>
