
#define KMX_BEGIN_TRANSLATE_TABLE(id) switch(id) { default: break
#define KMX_END_TRANSLATE_TABLE() }
#define KMX_ADD_TRANSLATE_ENTRY(e)  case e: return #e

const char* kmx_translate_sdk_msg_name(mmi_ime_sdk_msg_id_enum msg_id)
{
    KMX_BEGIN_TRANSLATE_TABLE(msg_id);
    KMX_ADD_TRANSLATE_ENTRY(MMI_IME_SDK_MSG_NONE);    
    KMX_ADD_TRANSLATE_ENTRY(MMI_IME_SDK_MSG_RESET);    
    KMX_ADD_TRANSLATE_ENTRY(MMI_IME_SDK_MSG_KEY_EVENT);
    KMX_ADD_TRANSLATE_ENTRY(MMI_IME_SDK_MSG_IMUI_CONTROL_TRANSLATE_PEN_EVENT);
    KMX_ADD_TRANSLATE_ENTRY(MMI_IME_SDK_MSG_CHANGE_INPUT_MODE);
    KMX_ADD_TRANSLATE_ENTRY(MMI_IME_SDK_MSG_ADD_ALL_CONTROLS);
    KMX_ADD_TRANSLATE_ENTRY(MMI_IME_SDK_MSG_DRAW_CURRENT_FIXED_UI_CONTROLS);
    KMX_ADD_TRANSLATE_ENTRY(MMI_IME_SDK_MSG_CLEAR_LAST_FIXED_UI_CONTROLS);    
    KMX_ADD_TRANSLATE_ENTRY(MMI_IME_SDK_MSG_DRAW_CURRENT_FLOATING_UI_CONTROLS);
    KMX_ADD_TRANSLATE_ENTRY(MMI_IME_SDK_MSG_REDRAW_UI_CONTROLS);
    KMX_ADD_TRANSLATE_ENTRY(MMI_IME_SDK_MSG_GET_CURRENT_FIXED_CONTROL_SET);
    KMX_ADD_TRANSLATE_ENTRY(MMI_IME_SDK_MSG_GET_UI_CONTROL_HEIGHT);    
    KMX_ADD_TRANSLATE_ENTRY(MMI_IME_SDK_MSG_CONFIG_UI_CONTROLS_BY_IME_STATE);
    KMX_ADD_TRANSLATE_ENTRY(MMI_IME_SDK_MSG_GET_CURRENT_FLOATING_UI_RECT);
    KMX_ADD_TRANSLATE_ENTRY(MMI_IME_SDK_MSG_SET_SOFTKEY_BY_STATE);
    KMX_ADD_TRANSLATE_ENTRY(MMI_IME_SDK_MSG_REDRAW_SOFTKEY_BY_STATE);        
    KMX_ADD_TRANSLATE_ENTRY(MMI_IME_SDK_MSG_EDITOR_CONNECTED);    
    KMX_ADD_TRANSLATE_ENTRY(MMI_IME_SDK_MSG_EDITOR_DISCONNECTED);
    KMX_ADD_TRANSLATE_ENTRY(MMI_IME_SDK_MSG_STATE_CHANGED);
    KMX_ADD_TRANSLATE_ENTRY(MMI_IME_SDK_MSG_IMUI_BG_FILLER_CHANGED);
    KMX_ADD_TRANSLATE_ENTRY(MMI_IME_SDK_MSG_VK_EVENT);
    KMX_ADD_TRANSLATE_ENTRY(MMI_IME_SDK_MSG_EDITOR_CURSOR_MOVED);
    KMX_ADD_TRANSLATE_ENTRY(MMI_IME_SDK_MSG_GET_INVALID_QWERTY_SPECIAL_KEY);
    KMX_ADD_TRANSLATE_ENTRY(MMI_IME_SDK_MSG_GET_CURRENT_IME_INDICATOR_SIZE);    
    KMX_ADD_TRANSLATE_ENTRY(MMI_IME_SDK_MSG_DRAW_CURRENT_IME_INDICATOR);
    KMX_ADD_TRANSLATE_ENTRY(MMI_IME_SDK_MSG_UPDATE_SPECIAL_KEY_STATUS);
    KMX_ADD_TRANSLATE_ENTRY(MMI_IME_SDK_MSG_SPECIAL_KEY_STATUS_CHANGED);
    KMX_ADD_TRANSLATE_ENTRY(MMI_IME_SDK_MSG_GET_CURRENT_FLOATING_CONTROL_SET);
    KMX_ADD_TRANSLATE_ENTRY(MMI_IME_SDK_MSG_CONFIG_VK_IN_MTK_STATE);
    KMX_ADD_TRANSLATE_ENTRY(MMI_IME_SDK_MSG_CHECK_INPUT_MODE_AVAILABLE);    
    KMX_ADD_TRANSLATE_ENTRY(MMI_IME_SDK_MSG_VK_CALLBACK_EVENT);
    KMX_END_TRANSLATE_TABLE();

    return "------------>UNKNOWN SDK MSG!";
}
