# 1 "temp/res/SoundEffect.c"
# 1 "<built-in>"
# 1 "<command line>"
# 1 "temp/res/SoundEffect.c"
# 86 "temp/res/SoundEffect.c"
# 1 "../../mmi/inc/MMI_features.h" 1
# 69 "../../mmi/inc/MMI_features.h"
# 1 "../../mmi/inc/MMI_features_switch.h" 1
# 67 "../../mmi/inc/MMI_features_switch.h"
# 1 "../../mmi/inc/MMI_features_type.h" 1
# 68 "../../mmi/inc/MMI_features_switch.h" 2
# 70 "../../mmi/inc/MMI_features.h" 2
# 87 "temp/res/SoundEffect.c" 2


# 1 "../customerinc/CustResDef.h" 1
# 195 "../customerinc/CustResDef.h"
# 1 "../../mmi/inc/MMI_features.h" 1
# 196 "../customerinc/CustResDef.h" 2
# 90 "temp/res/SoundEffect.c" 2


<?xml version = "1.0" encoding = "UTF-8"?>

<APP id = "APP_SOUNDEFFECT">
    <INCLUDE file="GlobalResDef.h"/>

    <!-----------------------------------------------------String Resource Area----------------------------------------------------->
    <STRING id="STR_ID_SETTING_SOUND_EFFECT"/>





    <STRING id="STR_ID_SETTING_AUDIO_EFFECT"/>






    <STRING id="STR_ID_SETTING_AUDIO_EQUALIZER"/>
    <STRING id="STR_ID_SETTING_AUDIO_EQUALIZER_SET_1"/>
    <STRING id="STR_ID_SETTING_AUDIO_EQUALIZER_SET_2"/>
    <STRING id="STR_ID_SETTING_AUDIO_EQUALIZER_SET_3"/>
    <STRING id="STR_ID_SETTING_AUDIO_EQUALIZER_SET_4"/>
    <STRING id="STR_ID_SETTING_AUDIO_EQUALIZER_SET_5"/>
    <STRING id="STR_ID_SETTING_AUDIO_EQUALIZER_SET_6"/>
    <STRING id="STR_ID_SETTING_AUDIO_EQUALIZER_SET_7"/>
    <STRING id="STR_ID_SETTING_AUDIO_EQUALIZER_SET_8"/>
# 146 "temp/res/SoundEffect.c"
    <!-----------------------------------------------------Image Resource Area------------------------------------------------------>
    <IMAGE id="IMG_ID_SETTING_SOUND_EFFECT">"..\\\\..\\\\Customer\\\\Images""\\\\PLUTO_ENCODE""\\\\MainLCD\\\\SubMenu\\\\Settings\\\\SB_SNDEFT.bmp"</IMAGE>




    <IMAGE id="IMG_ID_SETTING_AUDIO_REVERB_EFFECT">"..\\\\..\\\\Customer\\\\Images""\\\\PLUTO_ENCODE""\\\\MainLCD\\\\SubMenu\\\\Settings\\\\SoundEffect\\\\ST_AUDIO_REVERB.bmp"</IMAGE>


    <!------------------------------------------------------Menu Resource Area------------------------------------------------------>






    <MENUITEM id="MENU_SETTING_AUDIO_EFFECT" str="STR_ID_SETTING_AUDIO_EFFECT" img="IMG_ID_SETTING_AUDIO_REVERB_EFFECT"/>
# 181 "temp/res/SoundEffect.c"
    <MENU id="MENU_SETTING_SOUND_EFFECT" type="OPTION" str="STR_ID_SETTING_SOUND_EFFECT" img = "IMG_ID_SETTING_SOUND_EFFECT" highlight="mmi_settings_sound_effect_highlight_hdlr">
        <MENUITEM_ID>MENU_SETTING_AUDIO_EFFECT</MENUITEM_ID>
        <MENUITEM_ID>MNEU_SETTING_BASS_ENHANCEMENT</MENUITEM_ID>
    </MENU>

    <!------------------------------------------------------Other Resource---------------------------------------------------------->

    <SCREEN id="GRP_ID_SETTING_SOUND_EFFECT"/>
    <SCREEN id="SCR_ID_SETTING_SOUND_EFFECT"/>
    <SCREEN id="GRP_ID_SETTING_AUDIO_EFFECT"/>
    <SCREEN id="SCR_ID_SETTING_AUDIO_EFFECT"/>
    <SCREEN id="SCR_ID_SETTING_BASS_ENHANCEMENT"/>
    <SCREEN id="SCR_ID_SETTING_AUDIO_EQUALIZER_OPTIONS"/>
    <SCREEN id="SCR_ID_SETTING_AUDIO_EQUALIZER_OPTIONS_EDIT"/>
    <SCREEN id="SCR_ID_AUDIO_EQUALIZER_SETTING_NAME_EDIT"/>
    <SCREEN id="SCR_ID_AUDIO_EQUALIZER_SETTING_NAME_EDIT_OPTION"/>

    <CACHEDATA type="byte" id="NVRAM_BYTE_AUDIO_REVERB_INDEX" restore_flag="TRUE">
        <DEFAULT_VALUE> [0xFF] </DEFAULT_VALUE>
        <DESCRIPTION> Sound effects </DESCRIPTION>
    </CACHEDATA>

    <CACHEDATA type="byte" id="NVRAM_BYTE_AUDIO_SURROUND_INDEX" restore_flag="TRUE">
        <DEFAULT_VALUE> [0xFF] </DEFAULT_VALUE>
        <DESCRIPTION> Sound effects </DESCRIPTION>
    </CACHEDATA>

    <CACHEDATA type="byte" id="NVRAM_BYTE_AUDIO_EFFECT_INDEX" restore_flag="TRUE">
        <DEFAULT_VALUE> [0xFF] </DEFAULT_VALUE>
        <DESCRIPTION> Sound effects </DESCRIPTION>
    </CACHEDATA>

    <CACHEDATA type="byte" id="NVRAM_BYTE_AUDIO_BASS_ENHANCEMENT_INDEX" restore_flag="TRUE">
        <DEFAULT_VALUE> [0x00] </DEFAULT_VALUE>
        <DESCRIPTION> Sound effects </DESCRIPTION>
    </CACHEDATA>






    <CACHEDATA type="short" id="NVRAM_EDITABLE_EQ_RENAME_FLAG" restore_flag="TRUE">
        <DEFAULT_VALUE> [0xFF, 0xFF] </DEFAULT_VALUE>
        <DESCRIPTION> Sound effects </DESCRIPTION>
    </CACHEDATA>

</APP>
