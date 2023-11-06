# 1 "temp/res/mcare.c"
# 1 "<built-in>"
# 1 "<command line>"
# 1 "temp/res/mcare.c"



# 1 "../../mmi/inc/mmi_features.h" 1
# 69 "../../mmi/inc/mmi_features.h"
# 1 "../../mmi/inc/MMI_features_switch.h" 1
# 67 "../../mmi/inc/MMI_features_switch.h"
# 1 "../../mmi/inc/MMI_features_type.h" 1
# 68 "../../mmi/inc/MMI_features_switch.h" 2
# 70 "../../mmi/inc/mmi_features.h" 2
# 5 "temp/res/mcare.c" 2
# 1 "../customerinc/custresdef.h" 1
# 195 "../customerinc/custresdef.h"
# 1 "../../mmi/inc/MMI_features.h" 1
# 196 "../customerinc/custresdef.h" 2
# 6 "temp/res/mcare.c" 2
# 112 "temp/res/mcare.c"
<?xml version="1.0" encoding="UTF-8"?>



<APP id="APP_TENCENT_MCARE_BG"
    package_name="native.mtk.tencent_bg"
    name="STR_MCARE_MAIN_BG"
    img="IMG_MCARE_MAIN_BG"
    launch="MCR_Entry"
    hidden_in_mainmenu="true">







           <MEMORY heap="330*1024" fg="320*1024"/>
       <APPCONCURRENT concurrent_w_order="APP_TENCENT_MCARE_BG, APP_IDLE"/>




    <STRING id="STR_MCARE_MAIN_BG"/>
# 144 "temp/res/mcare.c"
        <IMAGE id="IMG_MCARE_MAIN_BG" >"..\\\\..\\\\..\\\\vendor\\\\mcare\\\\adaption\\\\resource\\\\image\\\\""mcare.png"</IMAGE>







</APP>

<APP id="APP_TENCENT_MCARE"
    package_name="native.mtk.tencent"
    name="STR_MCARE_MAIN"
    img="IMG_MCARE_MAIN"
    launch="MCR_Entry">



    <!--Include Area-->
    <INCLUDE file="GlobalResDef.h"/>
    <INCLUDE file="GlobalMenuItems.h"/>




    <INCLUDE file = "mmi_rp_app_mainmenu_def.h"/>
# 181 "temp/res/mcare.c"
       <MEMORY heap="650*1024"/>


    <!-----------------------------------------------------String Resource Area----------------------------------------------------->

    <STRING id="STR_MCARE_MAIN"/>
    <STRING id="STR_MCARE_QQ"/>
                <STRING id="STR_MCARE_QQBROWSER"/>
                <STRING id="STR_MCARE_QQFARM"/>
                <STRING id="STR_MCARE_QQPASTURE"/>
                <STRING id="STR_MCARE_RUNNING"/>
                <STRING id="STR_MCARE_QQ_RUNNING"/>
                <STRING id="STR_MCARE_INSERT_VALID_SIM"/>
                <STRING id="STR_MCARE_IS_ON_FLY_MODE"/>
                <STRING id="STR_MCARE_STORAGE_ERROR_NOTE"/>
                <STRING id="STR_MCARE_SIM_ERROR"/>
                <STRING id="STR_MCARE_NOT_ENOUGH_MEM"/>
                <STRING id="STR_MCARE_STORAGE_NO_SPACE"/>
                <STRING id="STR_MCARE_FILE_CORRUPT_RESTART"/>
                <STRING id="STR_MCARE_LOAD_FAIL"/>
                <STRING id="STR_MCARE_FILE_CORRUPT_ERR"/>
                <STRING id="STR_MCARE_EXEC_FAIL"/>
                <STRING id="STR_MCARE_NETWORK_NOT_READY"/>
                <STRING id="STR_MCARE_USB_MODE"/>
                <STRING id="STR_MCARE_LAST"/>


                <STRING id="STR_TENCENT_MCARE_QQ_ONLINE"/>
                <STRING id="STR_TENCENT_MCARE_QQ_INVISBLE"/>
                <STRING id="STR_TENCENT_MCARE_QQ_OFFLINE"/>
                <STRING id="STR_TENCENT_MCARE_QQ_AWAY"/>
                <STRING id="STR_TENCENT_MCARE_QQ_HAVEMSG"/>


                <!-----------------------------------------------------Image Resource Area------------------------------------------------------>
# 224 "temp/res/mcare.c"
        <IMAGE id="IMG_MCARE_MAIN" >"..\\\\..\\\\..\\\\vendor\\\\mcare\\\\adaption\\\\resource\\\\image\\\\""mcare.png"</IMAGE>







    <IMAGE id="IMG_MCARE_STAT_MCR">"..\\\\..\\\\..\\\\vendor\\\\mcare\\\\adaption\\\\resource\\\\image\\\\""mcare_status.bmp"</IMAGE>
    <IMAGE id="IMG_MCARE_STAT_QQ_ON">"..\\\\..\\\\..\\\\vendor\\\\mcare\\\\adaption\\\\resource\\\\image\\\\""qq.bmp"</IMAGE>
    <IMAGE id="IMG_MCARE_STAT_QQ_OFF">"..\\\\..\\\\..\\\\vendor\\\\mcare\\\\adaption\\\\resource\\\\image\\\\""offline.bmp"</IMAGE>
    <IMAGE id="IMG_MCARE_STAT_QQ_AWAY">"..\\\\..\\\\..\\\\vendor\\\\mcare\\\\adaption\\\\resource\\\\image\\\\""away.bmp"</IMAGE>
    <IMAGE id="IMG_MCARE_STAT_QQ_INVISBLE">"..\\\\..\\\\..\\\\vendor\\\\mcare\\\\adaption\\\\resource\\\\image\\\\""hide.bmp"</IMAGE>
    <IMAGE id="IMG_MCARE_STAT_QQ_MESSEGE">"..\\\\..\\\\..\\\\vendor\\\\mcare\\\\adaption\\\\resource\\\\image\\\\""messege.bmp"</IMAGE>
    <IMAGE id="IMG_MCARE_STAT_CONTACT_ON">"..\\\\..\\\\..\\\\vendor\\\\mcare\\\\adaption\\\\resource\\\\image\\\\""contact.bmp"</IMAGE>

    <IMAGE id="IMG_MCARE_NCENTER_MCR">"..\\\\..\\\\..\\\\vendor\\\\mcare\\\\adaption\\\\resource\\\\image\\\\""ncenter_mcare_status.bmp"</IMAGE>
    <IMAGE id="IMG_MCARE_NCENTER_QQ_ON">"..\\\\..\\\\..\\\\vendor\\\\mcare\\\\adaption\\\\resource\\\\image\\\\""ncenter_qq.png"</IMAGE>
    <IMAGE id="IMG_MCARE_NCENTER_QQ_OFF">"..\\\\..\\\\..\\\\vendor\\\\mcare\\\\adaption\\\\resource\\\\image\\\\""ncenter_offline.png"</IMAGE>
    <IMAGE id="IMG_MCARE_NCENTER_QQ_AWAY">"..\\\\..\\\\..\\\\vendor\\\\mcare\\\\adaption\\\\resource\\\\image\\\\""ncenter_away.png"</IMAGE>
    <IMAGE id="IMG_MCARE_NCENTER_QQ_INVISBLE">"..\\\\..\\\\..\\\\vendor\\\\mcare\\\\adaption\\\\resource\\\\image\\\\""ncenter_hide.png"</IMAGE>
    <IMAGE id="IMG_MCARE_NCENTER_QQ_MESSEGE">"..\\\\..\\\\..\\\\vendor\\\\mcare\\\\adaption\\\\resource\\\\image\\\\""ncenter_messege.png"</IMAGE>



        <MENU id="MENU_ID_MCARE_MAIN"
          type="APP_MAIN"
          parent="MAIN_MENU_SERVICES_MENUID"
          str="STR_MCARE_MAIN"
          img="IMG_MCARE_MAIN"
          highlight="MCR_HiliteMenu"
          shortcut="ON" shortcut_img="IMG_MCARE_MAIN" launch="MCR_Entry">
        </MENU>
# 294 "temp/res/mcare.c"
    <!--------------------------------------------------------------------------------------------------------------------->
        <!--Screen ID Area-->
    <SCREEN id="SCR_ID_MCARE_LIST"/>
    <!--Screen Group Id-->
    <SCREEN id="GRP_ID_MCARE_LIST"/>
    <SCREEN id="GRP_ID_MCARE_TOTAL"/>
        <!--Screen ID Area-->
    <!--End Screen Resource Area-->
   <!--------------------------------------------------------------------------------------------------------------------->

   <!--------------------------------------------------------------------------------------------------------------------->
        <!--event handler Area-->
   <RECEIVER id="EVT_ID_USB_ENTER_MS_MODE" proc="MCR_HandleUsbPlugIn"/>
   <RECEIVER id="EVT_ID_USB_EXIT_MS_MODE" proc="MCR_HandleUsbPlugOut"/>

   <EVENT id="EVT_ID_VAPP_MCARE_UPDATE_NCENTER" type="SENDER"/>
   <RECEIVER id="EVT_ID_VAPP_MCARE_UPDATE_NCENTER" proc="vapp_mcare_on_ncenter_update"/>

    <RECEIVER id="EVT_ID_SRV_FMGRI_CARD_PLUG_OUT" proc="MCR_HandleCardPlugOut" />
  <!--event handler Area-->
  <!--------------------------------------------------------------------------------------------------------------------->

</APP>
