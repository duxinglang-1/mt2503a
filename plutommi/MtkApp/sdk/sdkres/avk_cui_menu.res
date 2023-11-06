/* Needed header files of the compile option in XML files, if you need others need to add here */
#include "mmi_features.h"
#ifdef __MAUI_SDK_TEST__
#include "custresdef.h"

/* Need this line to tell parser that XML start, must after all #include. */
<?xml version="1.0" encoding="UTF-8"?>

/* APP tag, include your app name defined in MMIDataType.h */
<APP id="APP_SDK_TEST">

    /* When you use any ID of other module, you need to add
       that header file here, so that Resgen can find the ID */
    <!--Include Area-->
    <INCLUDE file="GlobalResDef.h"/>

    <STRING id="STR_ID_AVK_FW_PLUTO_CUI">"CUI"</STRING>
    <STRING id="STR_ID_AVK_CUI_MENU_CASCADING">"Cascading"</STRING>

    <MENUITEM id="MENU_ID_AVK_CUI_001" str="STR_ID_AVK_FW_PLUTO_CUI" img="IMG_GLOBAL_L1"  />   
    <MENUITEM id="MENU_ID_AVK_CUI_002" str="STR_ID_AVK_FW_PLUTO_CUI" img="IMG_GLOBAL_L2" />
    <MENUITEM id="MENU_ID_AVK_CUI_003" str="STR_ID_AVK_FW_PLUTO_CUI" img="IMG_GLOBAL_L3" />
    <MENUITEM id="MENU_ID_AVK_CUI_004" str="STR_ID_AVK_FW_PLUTO_CUI" img="IMG_GLOBAL_L4" />    
    <MENUITEM id="MENU_ID_AVK_CUI_005" str="STR_ID_AVK_FW_PLUTO_CUI" img="IMG_GLOBAL_L5" />   
    <MENUITEM id="MENU_ID_AVK_CUI_006" str="STR_ID_AVK_FW_PLUTO_CUI" img="IMG_GLOBAL_L6" />
    <MENUITEM id="MENU_ID_AVK_CUI_007" str="STR_ID_AVK_FW_PLUTO_CUI" img="IMG_GLOBAL_L7" />
    <MENUITEM id="MENU_ID_AVK_CUI_008" str="STR_ID_AVK_FW_PLUTO_CUI" img="IMG_GLOBAL_L8" />
    <MENUITEM id="MENU_ID_AVK_CUI_009" str="STR_ID_AVK_FW_PLUTO_CUI" img="IMG_GLOBAL_L9" />   
    <MENUITEM id="MENU_ID_AVK_CUI_010" str="STR_ID_AVK_FW_PLUTO_CUI" img="IMG_GLOBAL_L10" />
    <MENUITEM id="MENU_ID_AVK_CUI_011" str="STR_ID_AVK_FW_PLUTO_CUI" img="IMG_GLOBAL_L11" />
    <MENUITEM id="MENU_ID_AVK_CUI_012" str="STR_ID_AVK_FW_PLUTO_CUI" img="IMG_GLOBAL_L12" />
    <MENUITEM id="MENU_ID_AVK_CUI_013" str="STR_ID_AVK_FW_PLUTO_CUI" img="IMG_GLOBAL_L13" />   
    <MENUITEM id="MENU_ID_AVK_CUI_014" str="STR_ID_AVK_FW_PLUTO_CUI" img="IMG_GLOBAL_L14" />
    <MENUITEM id="MENU_ID_AVK_CUI_015" str="STR_ID_AVK_FW_PLUTO_CUI" img="IMG_GLOBAL_L15" />
    <MENUITEM id="MENU_ID_AVK_CUI_016" str="STR_ID_AVK_FW_PLUTO_CUI" img="IMG_GLOBAL_L16" />
    <MENUITEM id="MENU_ID_AVK_CUI_017" str="STR_ID_AVK_FW_PLUTO_CUI" img="IMG_GLOBAL_L17" />
    <MENUITEM id="MENU_ID_AVK_CUI_018" str="STR_ID_AVK_FW_PLUTO_CUI" img="IMG_GLOBAL_L18" />   
    <MENUITEM id="MENU_ID_AVK_CUI_019" str="STR_ID_AVK_FW_PLUTO_CUI" img="IMG_GLOBAL_L19" />
    <MENUITEM id="MENU_ID_AVK_CUI_020" str="STR_ID_AVK_FW_PLUTO_CUI" img="IMG_GLOBAL_L20" />
    <MENUITEM id="MENU_ID_AVK_CUI_021" str="STR_ID_AVK_FW_PLUTO_CUI" img="IMG_GLOBAL_L21" />
    <MENUITEM id="MENU_ID_AVK_CUI_024" str="STR_ID_AVK_FW_PLUTO_CUI" img="IMG_GLOBAL_L24" />
    <MENUITEM id="MENU_ID_AVK_CUI_ALL" str="STR_ID_AVK_FW_PLUTO_CUI" img="IMG_GLOBAL_L22"/>   
    
    <MENU id="MENU_ID_AVK_CUI" str="STR_ID_AVK_FW_PLUTO_CUI" >
        <MENUITEM_ID>MENU_ID_AVK_CUI_001</MENUITEM_ID>
        <MENUITEM_ID>MENU_ID_AVK_CUI_002</MENUITEM_ID>
        <MENUITEM_ID>MENU_ID_AVK_CUI_003</MENUITEM_ID>
        <MENUITEM_ID>MENU_ID_AVK_CUI_004</MENUITEM_ID>
        <MENUITEM_ID>MENU_ID_AVK_CUI_005</MENUITEM_ID>
        <MENUITEM_ID>MENU_ID_AVK_CUI_006</MENUITEM_ID>
        <MENUITEM_ID>MENU_ID_AVK_CUI_007</MENUITEM_ID>
        <MENUITEM_ID>MENU_ID_AVK_CUI_008</MENUITEM_ID>
        <MENUITEM_ID>MENU_ID_AVK_CUI_009</MENUITEM_ID>
        <MENUITEM_ID>MENU_ID_AVK_CUI_010</MENUITEM_ID>
        <MENUITEM_ID>MENU_ID_AVK_CUI_011</MENUITEM_ID>
        <MENUITEM_ID>MENU_ID_AVK_CUI_012</MENUITEM_ID>
        <MENUITEM_ID>MENU_ID_AVK_CUI_013</MENUITEM_ID>
        <MENUITEM_ID>MENU_ID_AVK_CUI_014</MENUITEM_ID>
        <MENUITEM_ID>MENU_ID_AVK_CUI_015</MENUITEM_ID>
        <MENUITEM_ID>MENU_ID_AVK_CUI_016</MENUITEM_ID>
        <MENUITEM_ID>MENU_ID_AVK_CUI_017</MENUITEM_ID>
        <MENUITEM_ID>MENU_ID_AVK_CUI_018</MENUITEM_ID>
        <MENUITEM_ID>MENU_ID_AVK_CUI_019</MENUITEM_ID>
        <MENUITEM_ID>MENU_ID_AVK_CUI_020</MENUITEM_ID>
        <MENUITEM_ID>MENU_ID_AVK_CUI_021</MENUITEM_ID>
        <MENUITEM_ID>MENU_ID_AVK_CUI_024</MENUITEM_ID>
        <MENUITEM_ID>MENU_ID_AVK_CUI_ALL</MENUITEM_ID>
    </MENU>

    <MENUITEM id="MENU_ID_AVK_CUI_MENU_01" str="STR_ID_AVK_CUI_MENU_CASCADING" img="IMG_GLOBAL_L1" />
    <MENUITEM id="MENU_ID_AVK_CUI_MENU_02" str="STR_ID_AVK_CUI_MENU_CASCADING" img="IMG_GLOBAL_L2" />
    <MENUITEM id="MENU_ID_AVK_CUI_MENU_03" str="STR_ID_AVK_CUI_MENU_CASCADING" img="IMG_GLOBAL_L3" />   
    <MENUITEM id="MENU_ID_AVK_CUI_MENU_04" str="STR_ID_AVK_CUI_MENU_CASCADING" img="IMG_GLOBAL_L4" />
    <MENUITEM id="MENU_ID_AVK_CUI_MENU_05" str="STR_ID_AVK_CUI_MENU_CASCADING" img="IMG_GLOBAL_L5" />
    
	<MENU id="MENU_ID_AVK_CUI_MENU_CASCADING" str="STR_ID_AVK_CUI_MENU_CASCADING" >
		<MENUITEM_ID>MENU_ID_AVK_CUI_MENU_01</MENUITEM_ID>
	    <MENUITEM_ID>MENU_ID_AVK_CUI_MENU_02</MENUITEM_ID>
        <MENUITEM_ID>MENU_ID_AVK_CUI_MENU_03</MENUITEM_ID>
        <MENUITEM_ID>MENU_ID_AVK_CUI_MENU_04</MENUITEM_ID>
        <MENUITEM_ID>MENU_ID_AVK_CUI_MENU_05</MENUITEM_ID>
    </MENU>
</APP>

#endif    