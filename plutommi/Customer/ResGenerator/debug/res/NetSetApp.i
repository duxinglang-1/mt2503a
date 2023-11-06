# 1 "temp/res/NetSetApp.c"
# 1 "<built-in>"
# 1 "<command line>"
# 1 "temp/res/NetSetApp.c"
# 55 "temp/res/NetSetApp.c"
# 1 "../../mmi/inc/MMI_features.h" 1
# 69 "../../mmi/inc/MMI_features.h"
# 1 "../../mmi/inc/MMI_features_switch.h" 1
# 67 "../../mmi/inc/MMI_features_switch.h"
# 1 "../../mmi/inc/MMI_features_type.h" 1
# 68 "../../mmi/inc/MMI_features_switch.h" 2
# 70 "../../mmi/inc/MMI_features.h" 2
# 56 "temp/res/NetSetApp.c" 2
# 1 "../customerinc/CustResDef.h" 1
# 195 "../customerinc/CustResDef.h"
# 1 "../../mmi/inc/MMI_features.h" 1
# 196 "../customerinc/CustResDef.h" 2
# 57 "temp/res/NetSetApp.c" 2
# 1 "../../mmi/setting/settinginc/PhoneSetupSlim.h" 1
# 59 "../../mmi/setting/settinginc/PhoneSetupSlim.h"
# 1 "../../mmi/inc/MMI_features.h" 1
# 60 "../../mmi/setting/settinginc/PhoneSetupSlim.h" 2
# 58 "temp/res/NetSetApp.c" 2


<?xml version = "1.0" encoding = "UTF-8"?>

<APP id = "APP_NETSET">
    <INCLUDE file = "GlobalResDef.h"/>
        <INCLUDE file = "mmi_rp_app_mainmenu_def.h"/>

    <!--------------------------------------------------------------------------------------------------------------------->
    <!--String Resource Area-->
    <!--Network Setup String-->
# 77 "temp/res/NetSetApp.c"
    <!--NetSet Network Selection-->
        <STRING id="STR_ID_NETSET_NETWORK_SELECTION"/>


        <STRING id="STR_ID_NETSET_NETSEL_NEW_SEARCH"/>
        <STRING id="STR_ID_NETSET_NETSEL_SELECT_NETWORK"/>


        <STRING id="STR_ID_NETSET_NETSEL_SELECTION_MODE"/>
        <STRING id="STR_ID_NETSET_NETSEL_NETWORK_LIST"/>
        <STRING id="STR_ID_NETSET_NW_LIST_FAIL"/>
        <STRING id="STD_ID_NETSET_NW_SELECT_FAIL"/>
        <STRING id="STR_ID_NETSET_REGISTERING_NW"/>



    <!--Network selection 3G enhancement-->




        <!--NetSet Preferences-->
# 110 "temp/res/NetSetApp.c"
        <!--NetSet Preferred Mode-->

        <STRING id="STR_ID_NETSET_PREF_MODE"/>
        <STRING id="STR_ID_NETSET_PREF_MODE_GSM_ONLY"/>
        <STRING id="STR_ID_NETSET_PREF_MODE_WLAN_ONLY"/>
        <STRING id="STR_ID_NETSET_PREF_MODE_GSM_PREF"/>
        <STRING id="STR_ID_NETSET_PREF_MODE_WLAN_PREF"/>


        <!--NetSet Service Selection-->
# 128 "temp/res/NetSetApp.c"
        <!--NetSet Network Information-->
# 142 "temp/res/NetSetApp.c"
        <!--NetSet GPRS Connection-->

        <STRING id="STR_ID_NETSET_GPRS_CONNECTION"/>
        <STRING id="STR_ID_NETSET_GPRS_CONNECTION_ALWAYS"/>
        <STRING id="STR_ID_NETSET_GPRS_CONNECTION_WHENNEEDED"/>


        <!--NetSet PCH Monitor-->

        <STRING id="STR_ID_NETSET_PCH"/>
        <STRING id="STR_ID_NETSET_PCH_DATA_PREFER"/>
        <STRING id="STR_ID_NETSET_PCH_CALL_PREFER"/>

        <STRING id="STR_ID_NETSET_PCH_QUERY"/>



        <!--NetSet HSPA-->
# 171 "temp/res/NetSetApp.c"
        <!--Network Setup String-->

        <STRING id="STR_ID_NETSET_WLAN_OFF"/>
        <STRING id="STR_ID_NETSET_WLAN_ON"/>
        <STRING id="STR_ID_NETSET_INVALID_WLAN"/>


        <!--Network 3G service switch String-->






    <!--End String Resource Area-->
        <!--------------------------------------------------------------------------------------------------------------------->


        <!--------------------------------------------------------------------------------------------------------------------->
        <!--Image Resource Area-->
        <!--Network Setup Image-->

        <IMAGE id="IMG_SETTING_NETWORK">"..\\\\..\\\\Customer\\\\Images""\\\\PLUTO_ENCODE""\\\\MainLCD\\\\ToDoList\\\\icon\\\\meeting.bmp"</IMAGE>

        <IMAGE id="IMG_ID_NETSET_HOME_PLMN">"..\\\\..\\\\Customer\\\\Images""\\\\PLUTO_ENCODE""\\\\MainLCD\\\\SubMenu\\\\Settings\\\\ST_HOME.bmp"</IMAGE>
        <IMAGE id="IMG_ID_NETSET_UNKNOWN_PLMN">"..\\\\..\\\\Customer\\\\Images""\\\\PLUTO_ENCODE""\\\\MainLCD\\\\SubMenu\\\\Settings\\\\SB_Unknow.bmp"</IMAGE>
        <IMAGE id="IMG_ID_NETSET_FORBIDDEN_PLMN">"..\\\\..\\\\Customer\\\\Images""\\\\PLUTO_ENCODE""\\\\MainLCD\\\\SubMenu\\\\Settings\\\\SB_Off.bmp"</IMAGE>
    <!--Network Setup Image-->
        <!--End Image Resource Area-->
        <!--------------------------------------------------------------------------------------------------------------------->


        <!--------------------------------------------------------------------------------------------------------------------->
        <!--Audio Resource Area-->
        <!--Network Setup Audio-->

        <!--Network Setup Audio-->
        <!--End Audio Resource Area-->
        <!--------------------------------------------------------------------------------------------------------------------->


        <!--------------------------------------------------------------------------------------------------------------------->
        <!--Media Resource Area-->
        <!--Network Setup Media-->
        <!--Network Setup Media-->
        <!--End Media Resource Area-->
        <!--------------------------------------------------------------------------------------------------------------------->


        <!--------------------------------------------------------------------------------------------------------------------->
        <!--Screen ID Area-->
        <!--Network Setup Group-->
    <SCREEN id = "GRP_ID_NETSET_MAIN"/>
    <SCREEN id = "GRP_ID_NETSET_NW_SELECT"/>
        <SCREEN id = "GRP_ID_NETSET_PREF_MODE"/>
        <SCREEN id = "GRP_ID_NETSET_PREF_LIST"/>
        <SCREEN id = "GRP_ID_NETSET_SERVICE_SELECTION"/>



        <!--Network Setup Group-->

        <!--Network Setup Screen-->
        <SCREEN id = "SCR_ID_NETSET_MAIN"/>
        <SCREEN id = "SCR_ID_NETSET_SIM"/>

        <!--NetSet Network Selection-->
        <SCREEN id = "SCR_ID_NETSET_NETWORK_SELECTION"/>
        <SCREEN id = "SCR_ID_NETSET_NETWORK_SELECTION_REGISTER_PROGRESS"/>
        <SCREEN id = "SCR_ID_NETSEL_AUTO_REGISTER_PROGRESS"/>
        <SCREEN id = "SCR_ID_NETSEL_MANUAL_SEARCH_PROGRESS"/>
        <SCREEN id = "SCR_ID_NETSEL_MANUAL_REGISTER_PROGRESS"/>
        <SCREEN id = "SCR_ID_NETSEL_MANUAL_SEARCH_SHOW_PLMN"/>
        <SCREEN id = "SCR_ID_NETSEL_SELECT_MODE"/>
        <SCREEN id = "SCR_ID_NETSEL_ADDTIONAL_INFORMATION"/>
        <SCREEN id = "SCR_ID_NETSEL_ADDTIONAL_INFORMATION_PROGRESS"/>

        <!--NetSet Preferences-->






        <!--NetSet Preferred Mode-->
        <SCREEN id = "SCR_ID_NETSET_PREF_MODE"/>
        <SCREEN id = "SCR_ID_NETSET_PREF_MODE_PROGRESS"/>

    <!--NetSet Service Selection-->
        <SCREEN id = "SCR_ID_NETSET_SERVICE_SELECTION"/>
        <SCREEN id = "SCR_ID_NETSET_SET_RAT_PROGRESS"/>
        <SCREEN id = "SCR_ID_NETSET_RAT_QUERY"/>

        <!--NetSet Network Information-->
        <SCREEN id = "SCR_ID_NETSET_NETWORK_INFO"/>

    <!--NetSet GPRS Connection-->
        <SCREEN id = "SCR_ID_NETSET_GPRS_CONNECTION"/>
        <SCREEN id = "SCR_ID_NETSET_SET_GPRS_PROGRESS"/>

        <!--NetSet PCH Monitor-->
        <SCREEN id = "SCR_ID_NETSET_SET_PCH_PROGRESS"/>
        <SCREEN id = "SCR_ID_NETSET_SET_PCH_CONFIRM"/>

    <!--NetSet HSPA-->
        <SCREEN id = "SCR_ID_NETSET_HSPA"/>
        <SCREEN id = "SCR_ID_NETSET_HSPA_PROGRESS"/>
        <SCREEN id = "SCR_ID_NETSET_HSPA_LIST"/>


    <!--NetSet 3G switch-->





    <!--Network Setup Screen-->
    <!--End Screen Resource Area-->
    <!--------------------------------------------------------------------------------------------------------------------->


    <!--------------------------------------------------------------------------------------------------------------------->
    <!--Menu Item Area-->
    <!--Network Setup Menu Item-->
# 470 "temp/res/NetSetApp.c"
                <MENU id="MENU_ID_NETSET_MAIN" parent="MAIN_MENU_SETTINGS_MENUID" type="APP_MAIN" str="STR_GLOBAL_NETWORK_SETTINGS" img="IMG_SETTING_NETWORK" highlight="mmi_highlight_netset_main">



                                <MENUITEM_ID>MENU_ID_NETSET_NETWORK_SELECTION</MENUITEM_ID>




                                <MENUITEM_ID>MENU_ID_NETSET_PREF_MODE</MENUITEM_ID>
# 488 "temp/res/NetSetApp.c"
                                <MENUITEM_ID>MENU_ID_NETSET_GPRS_CONNECTION</MENUITEM_ID>


                                <MENUITEM_ID>MENU_ID_NETSET_PCH_MODE</MENUITEM_ID>
# 502 "temp/res/NetSetApp.c"
    </MENU>


    <MENU id="MENU_ID_NETSET_NETWORK_SELECTION" type="APP_SUB" str="STR_ID_NETSET_NETWORK_SELECTION">
                <MENUITEM_ID>MENU_ID_NETSET_NETSEL_AUTO</MENUITEM_ID>
                <MENUITEM_ID>MENU_ID_NETSET_NETSEL_MANUAL</MENUITEM_ID>

                <MENUITEM_ID>MENU_ID_NETSET_NETSEL_SELECT_MODE</MENUITEM_ID>

        </MENU>







    <MENUITEM id="MENU_ID_NETSET_NETSEL_AUTO" str="STR_ID_NETSET_NETSEL_NEW_SEARCH"/>
    <MENUITEM id="MENU_ID_NETSET_NETSEL_MANUAL" str="STR_ID_NETSET_NETSEL_SELECT_NETWORK"/>
    <MENUITEM id="MENU_ID_NETSET_NETSEL_SELECT_MODE" str="STR_ID_NETSET_NETSEL_SELECTION_MODE"/>
# 552 "temp/res/NetSetApp.c"
    <MENUITEM id="MENU_ID_NETSET_GPRS_CONNECTION" str="STR_ID_NETSET_GPRS_CONNECTION"/>


    <MENUITEM id="MENU_ID_NETSET_PCH_MODE" str="STR_ID_NETSET_PCH"/>
# 567 "temp/res/NetSetApp.c"
        <MENUITEM id="MENU_ID_NETSET_PREF_MODE" str="STR_ID_NETSET_PREF_MODE"/>
# 581 "temp/res/NetSetApp.c"
    <RECEIVER id="EVT_ID_SRV_DTCNT_WLAN_INIT_RES_IND" proc="mmi_netset_wlan_init_hdlr"/>


    <RECEIVER id="EVT_ID_SRV_SIM_CTRL_AVAILABILITY_CHANGED" proc="mmi_netset_availability_changed_hdlr"/>
    <RECEIVER id="EVT_ID_SRV_MODE_SWITCH_PRE_NOTIFY" proc="mmi_netset_availability_changed_hdlr"/>
    <RECEIVER id="EVT_ID_SRV_MODE_SWITCH_FINISH_NOTIFY" proc="mmi_netset_availability_changed_hdlr"/>
# 597 "temp/res/NetSetApp.c"
        <RECEIVER id="EVT_ID_SRV_SIM_CTRL_HOME_PLMN_CHANGED" proc="mmi_nw_adp_on_home_plmn_changed"/>
        <RECEIVER id="EVT_ID_SRV_NW_INFO_SERVICE_AVAILABILITY_CHANGED" proc="mmi_nw_adp_sim1_service_availability_changed"/>
        <!--Network Setup Menu Item-->
        <!--End Menu Item Area-->
        <!--------------------------------------------------------------------------------------------------------------------->

</APP>
