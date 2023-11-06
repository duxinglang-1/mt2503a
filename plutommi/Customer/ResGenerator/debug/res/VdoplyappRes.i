# 1 "temp/res/VdoplyappRes.c"
# 1 "<built-in>"
# 1 "<command line>"
# 1 "temp/res/VdoplyappRes.c"
# 277 "temp/res/VdoplyappRes.c"
# 1 "../../mmi/inc/mmi_features.h" 1
# 69 "../../mmi/inc/mmi_features.h"
# 1 "../../mmi/inc/MMI_features_switch.h" 1
# 67 "../../mmi/inc/MMI_features_switch.h"
# 1 "../../mmi/inc/MMI_features_type.h" 1
# 68 "../../mmi/inc/MMI_features_switch.h" 2
# 70 "../../mmi/inc/mmi_features.h" 2
# 278 "temp/res/VdoplyappRes.c" 2
# 1 "../customerinc/custresdef.h" 1
# 195 "../customerinc/custresdef.h"
# 1 "../../mmi/inc/MMI_features.h" 1
# 196 "../customerinc/custresdef.h" 2
# 279 "temp/res/VdoplyappRes.c" 2
# 1 "../../mmi/inc/MMI_features_video.h" 1
# 738 "../../mmi/inc/MMI_features_video.h"
# 1 "../../mmi/inc/MMI_features.h" 1
# 739 "../../mmi/inc/MMI_features_video.h" 2
# 748 "../../mmi/inc/MMI_features_video.h"
# 1 "../../mtkapp/camera/camerainc/CameraSensorCapability.h" 1
# 749 "../../mmi/inc/MMI_features_video.h" 2
# 280 "temp/res/VdoplyappRes.c" 2

<?xml version="1.0" encoding="UTF-8"?>
<APP id="APP_VDOPLY"
name = "STR_ID_VDOPLY_APP_NAME"
type="pluto"
# 298 "temp/res/VdoplyappRes.c"
>
<INCLUDE file="GlobalResDef.h"/>
<INCLUDE file="MainMenuDef.h"/>
<INCLUDE file="CustomCfg.h"/>

<INCLUDE file="mmi_rp_app_filemanager_def.h"/>


<INCLUDE file="mmi_rp_app_a2dp_def.h"/>
# 339 "temp/res/VdoplyappRes.c"
<!-------------------------------------- Memory config area ------------------->

    <MEMORY heap= "0" extra_base="max(base(SRV_MDI_VDOPLY), base(SRV_MDI_STREAMING))" fg="VDOPLY_OSD_BUFFER_SIZE + max(fg(SRV_MDI_VDOPLY), fg(SRV_MDI_STREAMING))" inc="VdoplyGprot.h"/>

<!--------------------------------------String resource area------------------->
    <STRING id="STR_ID_VDOPLY_APP_NAME"/>


    <STRING id="STR_ID_VDOPLY_OPTION_VIDEO_SETTING"/>
# 383 "temp/res/VdoplyappRes.c"
    <STRING id="STR_ID_VDOPLY_NOTIFY_STORAGE_NOT_READY"/>
# 402 "temp/res/VdoplyappRes.c"
    <STRING id="STR_ID_VDOPLY_NOT_SUPPORT_AUTO_REPEAT"/>
    <STRING id="STR_ID_VDOPLY_AUTO_REPEAT"/>
# 447 "temp/res/VdoplyappRes.c"
    <STRING id="STR_ID_VDOPLY_AUDIO_ONLY"/>


<!--------------------------------------Image resource area------------------->






    <IMAGE id="IMG_ID_VDOPLY_APP_ICON">"..\\\\..\\\\Customer\\\\Images""\\\\PLUTO_ENCODE""\\\\MainLCD\\\\Submenu\\\\Video\\\\VideoPlayer\\\\SB_VP.bmp"</IMAGE>

    <IMAGE id="IMG_ID_VDOPLY_OSD_BUTTON">"..\\\\..\\\\Customer\\\\Images""\\\\PLUTO_ENCODE""\\\\MainLCD\\\\Multimedia\\\\""button.bmp"</IMAGE>
    <IMAGE id="IMG_ID_VDOPLY_OSD_BUTTON_PLAY">"..\\\\..\\\\Customer\\\\Images""\\\\PLUTO_ENCODE""\\\\MainLCD\\\\Multimedia\\\\""play.bmp"</IMAGE>
    <IMAGE id="IMG_ID_VDOPLY_OSD_BUTTON_PAUSE">"..\\\\..\\\\Customer\\\\Images""\\\\PLUTO_ENCODE""\\\\MainLCD\\\\Multimedia\\\\""pause.bmp"</IMAGE>
    <IMAGE id="IMG_ID_VDOPLY_OSD_BUTTON_STOP">"..\\\\..\\\\Customer\\\\Images""\\\\PLUTO_ENCODE""\\\\MainLCD\\\\Multimedia\\\\""stop.bmp"</IMAGE>
    <IMAGE id="IMG_ID_VDOPLY_OSD_BUTTON_BACK">"..\\\\..\\\\Customer\\\\Images""\\\\PLUTO_ENCODE""\\\\MainLCD\\\\Multimedia\\\\""back.bmp"</IMAGE>
    <IMAGE id="IMG_ID_VDOPLY_OSD_BUTTON_FORWARD">"..\\\\..\\\\Customer\\\\Images""\\\\PLUTO_ENCODE""\\\\MainLCD\\\\Multimedia\\\\""forward.bmp"</IMAGE>
    <IMAGE id="IMG_ID_VDOPLY_OSD_BUTTON_FULLSCREEN">"..\\\\..\\\\Customer\\\\Images""\\\\PLUTO_ENCODE""\\\\MainLCD\\\\Multimedia\\\\""fullscreen.bmp"</IMAGE>
    <IMAGE id="IMG_ID_VDOPLY_OSD_BUTTON_VOL_NULL">"..\\\\..\\\\Customer\\\\Images""\\\\PLUTO_ENCODE""\\\\MainLCD\\\\Multimedia\\\\""vol_none.bmp"</IMAGE>
    <IMAGE id="IMG_ID_VDOPLY_OSD_BUTTON_VOL_FULL">"..\\\\..\\\\Customer\\\\Images""\\\\PLUTO_ENCODE""\\\\MainLCD\\\\Multimedia\\\\""vol_full.bmp"</IMAGE>
    <IMAGE id="IMG_ID_VDOPLY_OSD_TIMER_0">"..\\\\..\\\\Customer\\\\Images""\\\\PLUTO_ENCODE""\\\\MainLCD\\\\Multimedia\\\\""0.bmp"</IMAGE>
    <IMAGE id="IMG_ID_VDOPLY_OSD_TIMER_1">"..\\\\..\\\\Customer\\\\Images""\\\\PLUTO_ENCODE""\\\\MainLCD\\\\Multimedia\\\\""1.bmp"</IMAGE>
    <IMAGE id="IMG_ID_VDOPLY_OSD_TIMER_2">"..\\\\..\\\\Customer\\\\Images""\\\\PLUTO_ENCODE""\\\\MainLCD\\\\Multimedia\\\\""2.bmp"</IMAGE>
    <IMAGE id="IMG_ID_VDOPLY_OSD_TIMER_3">"..\\\\..\\\\Customer\\\\Images""\\\\PLUTO_ENCODE""\\\\MainLCD\\\\Multimedia\\\\""3.bmp"</IMAGE>
    <IMAGE id="IMG_ID_VDOPLY_OSD_TIMER_4">"..\\\\..\\\\Customer\\\\Images""\\\\PLUTO_ENCODE""\\\\MainLCD\\\\Multimedia\\\\""4.bmp"</IMAGE>
    <IMAGE id="IMG_ID_VDOPLY_OSD_TIMER_5">"..\\\\..\\\\Customer\\\\Images""\\\\PLUTO_ENCODE""\\\\MainLCD\\\\Multimedia\\\\""5.bmp"</IMAGE>
    <IMAGE id="IMG_ID_VDOPLY_OSD_TIMER_6">"..\\\\..\\\\Customer\\\\Images""\\\\PLUTO_ENCODE""\\\\MainLCD\\\\Multimedia\\\\""6.bmp"</IMAGE>
    <IMAGE id="IMG_ID_VDOPLY_OSD_TIMER_7">"..\\\\..\\\\Customer\\\\Images""\\\\PLUTO_ENCODE""\\\\MainLCD\\\\Multimedia\\\\""7.bmp"</IMAGE>
    <IMAGE id="IMG_ID_VDOPLY_OSD_TIMER_8">"..\\\\..\\\\Customer\\\\Images""\\\\PLUTO_ENCODE""\\\\MainLCD\\\\Multimedia\\\\""8.bmp"</IMAGE>
    <IMAGE id="IMG_ID_VDOPLY_OSD_TIMER_9">"..\\\\..\\\\Customer\\\\Images""\\\\PLUTO_ENCODE""\\\\MainLCD\\\\Multimedia\\\\""9.bmp"</IMAGE>
    <IMAGE id="IMG_ID_VDOPLY_OSD_TIMER_COL">"..\\\\..\\\\Customer\\\\Images""\\\\PLUTO_ENCODE""\\\\MainLCD\\\\Multimedia\\\\""col.bmp"</IMAGE>

    <IMAGE id="IMG_ID_VDOPLY_OSD_TITLE_BG">"..\\\\..\\\\Customer\\\\Images""\\\\PLUTO_ENCODE""\\\\MainLCD\\\\Multimedia\\\\""title.9slice.png"</IMAGE>
    <IMAGE id="IMG_ID_VDOPLY_OSD_DISABLE">"..\\\\..\\\\Customer\\\\Images""\\\\PLUTO_ENCODE""\\\\MainLCD\\\\Multimedia\\\\""disable.9slice.png"</IMAGE>
    <IMAGE id="IMG_ID_VDOPLY_OSD_HIGHLIGHT">"..\\\\..\\\\Customer\\\\Images""\\\\PLUTO_ENCODE""\\\\MainLCD\\\\Multimedia\\\\""highlight.9slice.png"</IMAGE>

    <IMAGE id="IMG_ID_VDOPLY_OSD_PROGRESS_BG">"..\\\\..\\\\Customer\\\\Images""\\\\PLUTO_ENCODE""\\\\MainLCD\\\\Multimedia\\\\""progress_bg.9slice.png"</IMAGE>



    <IMAGE id="IMG_ID_VDOPLY_OSD_PROGRESS_FILL">"..\\\\..\\\\Customer\\\\Images""\\\\PLUTO_ENCODE""\\\\MainLCD\\\\Multimedia\\\\""progress_fill.9slice.png"</IMAGE>

    <IMAGE id="IMG_ID_VDOPLY_OSD_LOADING_BG">"..\\\\..\\\\Customer\\\\Images""\\\\PLUTO_ENCODE""\\\\MainLCD\\\\Multimedia\\\\""process_bg.9slice.png"</IMAGE>
    <IMAGE id="IMG_ID_VDOPLY_OSD_LOADING_FULL">"..\\\\..\\\\Customer\\\\Images""\\\\PLUTO_ENCODE""\\\\MainLCD\\\\Multimedia\\\\""progress_fill.9slice.png"</IMAGE>

    <IMAGE id="IMG_ID_VDOPLY_OSD_LOADING_EMPTY">"..\\\\..\\\\Customer\\\\Images""\\\\PLUTO_ENCODE""\\\\MainLCD\\\\Multimedia\\\\""progress_bg.9slice.png"</IMAGE>
    <IMAGE id="IMG_ID_VDOPLY_OSD_LOADING_FILL">"..\\\\..\\\\Customer\\\\Images""\\\\PLUTO_ENCODE""\\\\MainLCD\\\\Multimedia\\\\""progress_fill.9slice.png"</IMAGE>

        <IMAGE id="IMG_ID_VDOPLY_OSD_BT_CONNECTING">"..\\\\..\\\\Customer\\\\Images""\\\\PLUTO_ENCODE""\\\\MainLCD\\\\Multimedia\\\\""bt_connecting.gif"</IMAGE>
# 906 "temp/res/VdoplyappRes.c"
<!-------------------------------------------------------------------Screen resource area----------------------------------------------------------->
    <SCREEN id="SCR_ID_VDOPLY_START"/>
    <SCREEN id="GRP_ID_VDOPLY_APP"/>
    <SCREEN id="SCR_ID_VDOPLY_APP"/>
    <SCREEN id="GRP_ID_VDOPLY_PLAYER"/>
    <SCREEN id="GRP_ID_VDOPLY_STREAMING_URL"/>
    <SCREEN id="SCR_ID_VDOPLY_STREAMING_URL"/>
    <SCREEN id="SCR_ID_VDOPLY_PREDEFINED_URL"/>
    <SCREEN id="SCR_ID_VDOPLY_HISTORY_URL"/>
    <SCREEN id="GRP_ID_VDOPLY_HISTORY_OPTION"/>
    <SCREEN id="SCR_ID_VDOPLY_HISTORY_OPTION"/>
    <SCREEN id="GRP_ID_VDOPLY_URL_EDITOR"/>
    <SCREEN id="SCR_ID_VDOPLY_URL_EDITOR"/>
    <SCREEN id="SCR_ID_VDOPLY_URL_EDITOR_OPTION"/>
    <SCREEN id="GRP_ID_VDOPLY_SINGLE_PLAYER"/>
    <SCREEN id="SCR_ID_VDOPLY_PLAYER"/>
    <SCREEN id="SCR_ID_VDOPLY_OPTION"/>

    <SCREEN id="GRP_ID_VDOPLY_BROWSER"/>
    <SCREEN id="GRP_ID_VDOPLY_STORAGE"/>
    <SCREEN id="SCR_ID_VDOPLY_STORAGE"/>
    <SCREEN id="GRP_ID_VDOPLY_NETWORK_PROFILE"/>
    <SCREEN id="SCR_ID_VDOPLY_NETWORK_PROFILE"/>
    <SCREEN id="SCR_ID_VDOPLY_NETWORK_PROFILE_OPTION"/>
    <SCREEN id="GRP_ID_VDOPLY_NETWORK_PROFILE_EDIT"/>
    <SCREEN id="GRP_ID_VDOPLY_NETWORK_PROFILE_EDIT_DA"/>
    <SCREEN id="SCR_ID_VDOPLY_NETWORK_PROFILE_EDIT"/>
    <SCREEN id="SCR_ID_VDOPLY_NETWORK_PROFILE_RENAME"/>
    <SCREEN id="GRP_ID_VDOPLY_SETTINGS"/>
    <SCREEN id="GRP_ID_VDOPLY_ADJUST_OPTION"/>
    <SCREEN id="SCR_ID_VDOPLY_ADJUST_OPTION"/>
    <SCREEN id="GRP_ID_VDOPLY_STREAM_EDITOR"/>
    <SCREEN id="SCR_ID_VDOPLY_STREAM_EDITOR"/>
    <SCREEN id="SCR_ID_VDOPLY_STREAM_EDITOR_OPTION"/>
    <SCREEN id="SCR_ID_VDOPLY_END"/>


<!--------------------------------------Menu resource area------------------->
    <MENU id="MENU_ID_VDOPLY_APP" type="APP_MAIN" str="STR_ID_VDOPLY_APP_NAME" img="IMG_ID_VDOPLY_APP_ICON" highlight="mmi_vdoply_highlight_app">
    </MENU>

    <MENU id="MENU_ID_VDOPLY_FILE_OPTION" type="OPTION" str="STR_GLOBAL_OPTIONS">
                    <MENUITEM_ID>MENU_ID_VDOPLY_PLAY</MENUITEM_ID>

                    <MENUITEM_ID>MENU_ID_FMGR_GEN_OPTION_FORWARD_USE</MENUITEM_ID>
                    <MENUITEM_ID>MENU_ID_FMGR_GEN_OPTION_FORWARD_SEND</MENUITEM_ID>
                    <MENUITEM_ID>MENU_ID_FMGR_GEN_OPTION_RENAME</MENUITEM_ID>
                    <MENUITEM_ID>MENU_ID_FMGR_GEN_OPTION_DELETE</MENUITEM_ID>
                    <MENUITEM_ID>MENU_ID_FMGR_GEN_OPTION_DELETE_ALL</MENUITEM_ID>
                    <MENUITEM_ID>MENU_ID_FMGR_GEN_OPTION_SORT</MENUITEM_ID>

                    <MENUITEM_ID>MENU_ID_VDOPLY_STREAMING_URL</MENUITEM_ID>
                    <MENUITEM_ID>MENU_ID_VDOPLY_NETWORK_PROFILE</MENUITEM_ID>
                    <MENUITEM_ID>MENU_ID_VDOPLY_STORAGE</MENUITEM_ID>
    </MENU>

    <MENU id="MENU_ID_VDOPLY_EMPTY_FOLDER_OPTION" type="OPTION" str="STR_GLOBAL_OPTIONS">
                    <MENUITEM_ID>MENU_ID_VDOPLY_STREAMING_URL</MENUITEM_ID>
                    <MENUITEM_ID>MENU_ID_VDOPLY_NETWORK_PROFILE</MENUITEM_ID>
                    <MENUITEM_ID>MENU_ID_VDOPLY_STORAGE</MENUITEM_ID>
    </MENU>

    <MENU id="MENU_ID_VDOPLY_OPTION" type="OPTION" str="STR_GLOBAL_OPTIONS">
                    <MENUITEM_ID>MENU_ID_VDOPLY_OPTION_VIDEO_SETTING</MENUITEM_ID>
                    <MENUITEM_ID>MENU_ID_VDOPLY_BLUETOOTH_SETTING</MENUITEM_ID>
    </MENU>

    <MENU id="MENU_ID_VDOPLY_OPTION_STREAMING" type="OPTION" str="STR_GLOBAL_OPTIONS">
                    <MENUITEM_ID>MENU_ID_VDOPLY_OPTION_VIDEO_SETTING</MENUITEM_ID>
                    <MENUITEM_ID>MENU_ID_VDOPLY_OPTION_SAVE_CONNECTION</MENUITEM_ID>
                    <MENUITEM_ID>MENU_ID_VDOPLY_BLUETOOTH_SETTING</MENUITEM_ID>
    </MENU>




    <MENU id="MENU_ID_VDOPLY_PLAY" str="STR_GLOBAL_PLAY" highlight="mmi_vdoply_highlight_play">
    </MENU>

    <MENUITEM id="MENU_ID_VDOPLY_STORAGE" str="STR_GLOBAL_STORAGE"/>
# 998 "temp/res/VdoplyappRes.c"
    <MENUITEM id="MENU_ID_VDOPLY_OPTION_VIDEO_SETTING" str="STR_ID_VDOPLY_OPTION_VIDEO_SETTING"/>
# 1043 "temp/res/VdoplyappRes.c"
    <CACHEDATA type="byte" id="NVRAM_VDOPLY_VOLUMN" restore_flag="TRUE">
        <DEFAULT_VALUE> [0x07] </DEFAULT_VALUE>
        <DESCRIPTION> Video Player settings </DESCRIPTION>
        <FIELD min="0" max="16">
            <OPTION hint="level 0"> [0x00]</OPTION>
                        <OPTION hint="level 1"> [0x01]</OPTION>
                        <OPTION hint="level 2"> [0x02]</OPTION>
                        <OPTION hint="level 3"> [0x03]</OPTION>
                        <OPTION hint="level 4"> [0x04]</OPTION>
                        <OPTION hint="level 5"> [0x05]</OPTION>
                        <OPTION hint="level 6"> [0x06]</OPTION>
                        <OPTION hint="level 7"> [0x07]</OPTION>
                        <OPTION hint="level 8"> [0x08]</OPTION>
                        <OPTION hint="level 9"> [0x09]</OPTION>
                        <OPTION hint="level 10"> [0x0A]</OPTION>
                        <OPTION hint="level 11"> [0x0B]</OPTION>
                        <OPTION hint="level 12"> [0x0C]</OPTION>
                        <OPTION hint="level 13"> [0x0D]</OPTION>
                        <OPTION hint="level 14"> [0x0E]</OPTION>
                        <OPTION hint="level 15"> [0x0F]</OPTION>
                        <OPTION hint="mute"> [0x10]</OPTION>
                </FIELD>
    </CACHEDATA>

    <CACHEDATA type="byte" id="NVRAM_VDOPLY_ACTIVE_PROFILE_IDX" restore_flag="TRUE">
        <DEFAULT_VALUE> [0xFF] </DEFAULT_VALUE>
        <DESCRIPTION> Video Player setting </DESCRIPTION>
    </CACHEDATA>

    <CACHEDATA type="byte" id="NVRAM_VDOPLY_PROXY_IP1">
        <DEFAULT_VALUE> [0xFF] </DEFAULT_VALUE>
        <DESCRIPTION> Byte Cache </DESCRIPTION>
    </CACHEDATA>

    <CACHEDATA type="byte" id="NVRAM_VDOPLY_PROXY_IP2">
        <DEFAULT_VALUE> [0xFF] </DEFAULT_VALUE>
        <DESCRIPTION> Byte Cache </DESCRIPTION>
    </CACHEDATA>

    <CACHEDATA type="byte" id="NVRAM_VDOPLY_PROXY_IP3">
        <DEFAULT_VALUE> [0xFF] </DEFAULT_VALUE>
        <DESCRIPTION> Byte Cache </DESCRIPTION>
    </CACHEDATA>

    <CACHEDATA type="byte" id="NVRAM_VDOPLY_PROXY_IP4">
        <DEFAULT_VALUE> [0xFF] </DEFAULT_VALUE>
        <DESCRIPTION> Byte Cache </DESCRIPTION>
    </CACHEDATA>

    <CACHEDATA type="byte" id="NVRAM_VDOPLY_PROXY_ON_OFF">
        <DEFAULT_VALUE> [0xFF] </DEFAULT_VALUE>
        <DESCRIPTION> Byte Cache </DESCRIPTION>
    </CACHEDATA>

    <CACHEDATA type="short" id="NVRAM_VDOPLY_SNAPSHOT_SEQ_NO">
        <DEFAULT_VALUE> [0xFF, 0xFF] </DEFAULT_VALUE>
        <DESCRIPTION> Short Cache </DESCRIPTION>
    </CACHEDATA>

    <CACHEDATA type="short" id="NVRAM_VDOPLY_STORAGE" restore_flag="TRUE">
        <DEFAULT_VALUE> [0xFF, 0xFF] </DEFAULT_VALUE>
        <DESCRIPTION> Video Player Storage </DESCRIPTION>
    </CACHEDATA>

    <CACHEDATA type="short" id="NVRAM_VDOPLY_OPTION_BRIGHTNESS" restore_flag="TRUE">
        <DEFAULT_VALUE> [0xFF, 0xFF] </DEFAULT_VALUE>
        <DESCRIPTION> Video Player setting </DESCRIPTION>
    </CACHEDATA>

    <CACHEDATA type="short" id="NVRAM_VDOPLY_OPTION_CONTRAST" restore_flag="TRUE">
        <DEFAULT_VALUE> [0xFF, 0xFF] </DEFAULT_VALUE>
        <DESCRIPTION> Video Player setting </DESCRIPTION>
    </CACHEDATA>

    <CACHEDATA type="short" id="NVRAM_VDOPLY_OPTION_REPEAT" restore_flag="TRUE">
        <DEFAULT_VALUE> [0xFF, 0xFF] </DEFAULT_VALUE>
        <DESCRIPTION> Video Player setting </DESCRIPTION>
    </CACHEDATA>

    <CACHEDATA type="short" id="NVRAM_VDOPLY_OPTION_PLAY_MODE" restore_flag="TRUE">
        <DEFAULT_VALUE> [0xFF, 0xFF] </DEFAULT_VALUE>
        <DESCRIPTION> Video Player setting </DESCRIPTION>
    </CACHEDATA>

    <CACHEDATA type="short" id="NVRAM_VDOPLY_STREAM_SEQ_NO">
        <DEFAULT_VALUE> [0xFF, 0xFF] </DEFAULT_VALUE>
        <DESCRIPTION> Short Cache </DESCRIPTION>
    </CACHEDATA>

    <CACHEDATA type="double" id="NVRAM_VDOPLY_PROXY_PORT">
        <DEFAULT_VALUE> [0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF] </DEFAULT_VALUE>
        <DESCRIPTION> Double cache </DESCRIPTION>
    </CACHEDATA>

    <CACHEDATA type="double" id="NVRAM_VDOPLY_HIGHEST_UDP_PORT">
        <DEFAULT_VALUE> [0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF] </DEFAULT_VALUE>
        <DESCRIPTION> Double cache </DESCRIPTION>
    </CACHEDATA>

    <CACHEDATA type="double" id="NVRAM_VDOPLY_LOWEST_UDP_PORT">
        <DEFAULT_VALUE> [0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF] </DEFAULT_VALUE>
        <DESCRIPTION> Double cache </DESCRIPTION>
    </CACHEDATA>




</APP>
