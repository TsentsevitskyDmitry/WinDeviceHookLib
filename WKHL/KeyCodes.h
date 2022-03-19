/*
 * Virtual Keys, Standard Set
 */
#define WKHL_VK_LBUTTON        0x01
#define WKHL_VK_RBUTTON        0x02
#define WKHL_VK_CANCEL         0x03
#define WKHL_VK_MBUTTON        0x04    /* NOT contiguous with L & RBUTTON */

#if(_WIN32_WINNT >= 0x0500)
#define WKHL_VK_XBUTTON1       0x05    /* NOT contiguous with L & RBUTTON */
#define WKHL_VK_XBUTTON2       0x06    /* NOT contiguous with L & RBUTTON */
#endif /* _WIN32_WINNT >= 0x0500 */

/*
 * 0x07 : reserved
 */


#define WKHL_VK_BACK           0x08
#define WKHL_VK_TAB            0x09

/*
 * 0x0A - 0x0B : reserved
 */

#define WKHL_VK_CLEAR          0x0C
#define WKHL_VK_RETURN         0x0D

/*
 * 0x0E - 0x0F : unassigned
 */

#define WKHL_VK_SHIFT          0x10
#define WKHL_VK_CONTROL        0x11
#define WKHL_VK_MENU           0x12
#define WKHL_VK_PAUSE          0x13
#define WKHL_VK_CAPITAL        0x14

#define WKHL_VK_KANA           0x15
#define WKHL_VK_HANGEUL        0x15  /* old name - should be here for compatibility */
#define WKHL_VK_HANGUL         0x15

/*
 * 0x16 : unassigned
 */

#define WKHL_VK_JUNJA          0x17
#define WKHL_VK_FINAL          0x18
#define WKHL_VK_HANJA          0x19
#define WKHL_VK_KANJI          0x19

/*
 * 0x1A : unassigned
 */

#define WKHL_VK_ESCAPE         0x1B

#define WKHL_VK_CONVERT        0x1C
#define WKHL_VK_NONCONVERT     0x1D
#define WKHL_VK_ACCEPT         0x1E
#define WKHL_VK_MODECHANGE     0x1F

#define WKHL_VK_SPACE          0x20
#define WKHL_VK_PRIOR          0x21
#define WKHL_VK_NEXT           0x22
#define WKHL_VK_END            0x23
#define WKHL_VK_HOME           0x24
#define WKHL_VK_LEFT           0x25
#define WKHL_VK_UP             0x26
#define WKHL_VK_RIGHT          0x27
#define WKHL_VK_DOWN           0x28
#define WKHL_VK_SELECT         0x29
#define WKHL_VK_PRINT          0x2A
#define WKHL_VK_EXECUTE        0x2B
#define WKHL_VK_SNAPSHOT       0x2C
#define WKHL_VK_INSERT         0x2D
#define WKHL_VK_DELETE         0x2E
#define WKHL_VK_HELP           0x2F

/*
 * WKHL_VK_0 - WKHL_VK_9 are the same as ASCII '0' - '9' (0x30 - 0x39)
 * 0x3A - 0x40 : unassigned
 * WKHL_VK_A - WKHL_VK_Z are the same as ASCII 'A' - 'Z' (0x41 - 0x5A)
 */

#define WKHL_VK_LWIN           0x5B
#define WKHL_VK_RWIN           0x5C
#define WKHL_VK_APPS           0x5D

/*
 * 0x5E : reserved
 */

#define WKHL_VK_SLEEP          0x5F

#define WKHL_VK_NUMPAD0        0x60
#define WKHL_VK_NUMPAD1        0x61
#define WKHL_VK_NUMPAD2        0x62
#define WKHL_VK_NUMPAD3        0x63
#define WKHL_VK_NUMPAD4        0x64
#define WKHL_VK_NUMPAD5        0x65
#define WKHL_VK_NUMPAD6        0x66
#define WKHL_VK_NUMPAD7        0x67
#define WKHL_VK_NUMPAD8        0x68
#define WKHL_VK_NUMPAD9        0x69
#define WKHL_VK_MULTIPLY       0x6A
#define WKHL_VK_ADD            0x6B
#define WKHL_VK_SEPARATOR      0x6C
#define WKHL_VK_SUBTRACT       0x6D
#define WKHL_VK_DECIMAL        0x6E
#define WKHL_VK_DIVIDE         0x6F
#define WKHL_VK_F1             0x70
#define WKHL_VK_F2             0x71
#define WKHL_VK_F3             0x72
#define WKHL_VK_F4             0x73
#define WKHL_VK_F5             0x74
#define WKHL_VK_F6             0x75
#define WKHL_VK_F7             0x76
#define WKHL_VK_F8             0x77
#define WKHL_VK_F9             0x78
#define WKHL_VK_F10            0x79
#define WKHL_VK_F11            0x7A
#define WKHL_VK_F12            0x7B
#define WKHL_VK_F13            0x7C
#define WKHL_VK_F14            0x7D
#define WKHL_VK_F15            0x7E
#define WKHL_VK_F16            0x7F
#define WKHL_VK_F17            0x80
#define WKHL_VK_F18            0x81
#define WKHL_VK_F19            0x82
#define WKHL_VK_F20            0x83
#define WKHL_VK_F21            0x84
#define WKHL_VK_F22            0x85
#define WKHL_VK_F23            0x86
#define WKHL_VK_F24            0x87

#if(_WIN32_WINNT >= 0x0604)

/*
 * 0x88 - 0x8F : UI navigation
 */

#define WKHL_VK_NAVIGATION_VIEW     0x88 // reserved
#define WKHL_VK_NAVIGATION_MENU     0x89 // reserved
#define WKHL_VK_NAVIGATION_UP       0x8A // reserved
#define WKHL_VK_NAVIGATION_DOWN     0x8B // reserved
#define WKHL_VK_NAVIGATION_LEFT     0x8C // reserved
#define WKHL_VK_NAVIGATION_RIGHT    0x8D // reserved
#define WKHL_VK_NAVIGATION_ACCEPT   0x8E // reserved
#define WKHL_VK_NAVIGATION_CANCEL   0x8F // reserved

#endif /* _WIN32_WINNT >= 0x0604 */

#define WKHL_VK_NUMLOCK        0x90
#define WKHL_VK_SCROLL         0x91

/*
 * NEC PC-9800 kbd definitions
 */
#define WKHL_VK_OEM_NEC_EQUAL  0x92   // '=' key on numpad

/*
 * Fujitsu/OASYS kbd definitions
 */
#define WKHL_VK_OEM_FJ_JISHO   0x92   // 'Dictionary' key
#define WKHL_VK_OEM_FJ_MASSHOU 0x93   // 'Unregister word' key
#define WKHL_VK_OEM_FJ_TOUROKU 0x94   // 'Register word' key
#define WKHL_VK_OEM_FJ_LOYA    0x95   // 'Left OYAYUBI' key
#define WKHL_VK_OEM_FJ_ROYA    0x96   // 'Right OYAYUBI' key

/*
 * 0x97 - 0x9F : unassigned
 */

/*
 * WKHL_VK_L* & WKHL_VK_R* - left and right Alt, Ctrl and Shift virtual keys.
 * Used only as parameters to GetAsyncKeyState() and GetKeyState().
 * No other API or message will distinguish left and right keys in this way.
 */
#define WKHL_VK_LSHIFT         0xA0
#define WKHL_VK_RSHIFT         0xA1
#define WKHL_VK_LCONTROL       0xA2
#define WKHL_VK_RCONTROL       0xA3
#define WKHL_VK_LMENU          0xA4
#define WKHL_VK_RMENU          0xA5

#if(_WIN32_WINNT >= 0x0500)
#define WKHL_VK_BROWSER_BACK        0xA6
#define WKHL_VK_BROWSER_FORWARD     0xA7
#define WKHL_VK_BROWSER_REFRESH     0xA8
#define WKHL_VK_BROWSER_STOP        0xA9
#define WKHL_VK_BROWSER_SEARCH      0xAA
#define WKHL_VK_BROWSER_FAVORITES   0xAB
#define WKHL_VK_BROWSER_HOME        0xAC

#define WKHL_VK_VOLUME_MUTE         0xAD
#define WKHL_VK_VOLUME_DOWN         0xAE
#define WKHL_VK_VOLUME_UP           0xAF
#define WKHL_VK_MEDIA_NEXT_TRACK    0xB0
#define WKHL_VK_MEDIA_PREV_TRACK    0xB1
#define WKHL_VK_MEDIA_STOP          0xB2
#define WKHL_VK_MEDIA_PLAY_PAUSE    0xB3
#define WKHL_VK_LAUNCH_MAIL         0xB4
#define WKHL_VK_LAUNCH_MEDIA_SELECT 0xB5
#define WKHL_VK_LAUNCH_APP1         0xB6
#define WKHL_VK_LAUNCH_APP2         0xB7

#endif /* _WIN32_WINNT >= 0x0500 */

/*
 * 0xB8 - 0xB9 : reserved
 */

#define WKHL_VK_OEM_1          0xBA   // ';:' for US
#define WKHL_VK_OEM_PLUS       0xBB   // '+' any country
#define WKHL_VK_OEM_COMMA      0xBC   // ',' any country
#define WKHL_VK_OEM_MINUS      0xBD   // '-' any country
#define WKHL_VK_OEM_PERIOD     0xBE   // '.' any country
#define WKHL_VK_OEM_2          0xBF   // '/?' for US
#define WKHL_VK_OEM_3          0xC0   // '`~' for US

/*
 * 0xC1 - 0xC2 : reserved
 */

#if(_WIN32_WINNT >= 0x0604)

/*
 * 0xC3 - 0xDA : Gamepad input
 */

#define WKHL_VK_GAMEPAD_A                         0xC3 // reserved
#define WKHL_VK_GAMEPAD_B                         0xC4 // reserved
#define WKHL_VK_GAMEPAD_X                         0xC5 // reserved
#define WKHL_VK_GAMEPAD_Y                         0xC6 // reserved
#define WKHL_VK_GAMEPAD_RIGHT_SHOULDER            0xC7 // reserved
#define WKHL_VK_GAMEPAD_LEFT_SHOULDER             0xC8 // reserved
#define WKHL_VK_GAMEPAD_LEFT_TRIGGER              0xC9 // reserved
#define WKHL_VK_GAMEPAD_RIGHT_TRIGGER             0xCA // reserved
#define WKHL_VK_GAMEPAD_DPAD_UP                   0xCB // reserved
#define WKHL_VK_GAMEPAD_DPAD_DOWN                 0xCC // reserved
#define WKHL_VK_GAMEPAD_DPAD_LEFT                 0xCD // reserved
#define WKHL_VK_GAMEPAD_DPAD_RIGHT                0xCE // reserved
#define WKHL_VK_GAMEPAD_MENU                      0xCF // reserved
#define WKHL_VK_GAMEPAD_VIEW                      0xD0 // reserved
#define WKHL_VK_GAMEPAD_LEFT_THUMBSTICK_BUTTON    0xD1 // reserved
#define WKHL_VK_GAMEPAD_RIGHT_THUMBSTICK_BUTTON   0xD2 // reserved
#define WKHL_VK_GAMEPAD_LEFT_THUMBSTICK_UP        0xD3 // reserved
#define WKHL_VK_GAMEPAD_LEFT_THUMBSTICK_DOWN      0xD4 // reserved
#define WKHL_VK_GAMEPAD_LEFT_THUMBSTICK_RIGHT     0xD5 // reserved
#define WKHL_VK_GAMEPAD_LEFT_THUMBSTICK_LEFT      0xD6 // reserved
#define WKHL_VK_GAMEPAD_RIGHT_THUMBSTICK_UP       0xD7 // reserved
#define WKHL_VK_GAMEPAD_RIGHT_THUMBSTICK_DOWN     0xD8 // reserved
#define WKHL_VK_GAMEPAD_RIGHT_THUMBSTICK_RIGHT    0xD9 // reserved
#define WKHL_VK_GAMEPAD_RIGHT_THUMBSTICK_LEFT     0xDA // reserved

#endif /* _WIN32_WINNT >= 0x0604 */


#define WKHL_VK_OEM_4          0xDB  //  '[{' for US
#define WKHL_VK_OEM_5          0xDC  //  '\|' for US
#define WKHL_VK_OEM_6          0xDD  //  ']}' for US
#define WKHL_VK_OEM_7          0xDE  //  ''"' for US
#define WKHL_VK_OEM_8          0xDF

/*
 * 0xE0 : reserved
 */

/*
 * Various extended or enhanced keyboards
 */
#define WKHL_VK_OEM_AX         0xE1  //  'AX' key on Japanese AX kbd
#define WKHL_VK_OEM_102        0xE2  //  "<>" or "\|" on RT 102-key kbd.
#define WKHL_VK_ICO_HELP       0xE3  //  Help key on ICO
#define WKHL_VK_ICO_00         0xE4  //  00 key on ICO

#if(WINVER >= 0x0400)
#define WKHL_VK_PROCESSKEY     0xE5
#endif /* WINVER >= 0x0400 */

#define WKHL_VK_ICO_CLEAR      0xE6


#if(_WIN32_WINNT >= 0x0500)
#define WKHL_VK_PACKET         0xE7
#endif /* _WIN32_WINNT >= 0x0500 */

/*
 * 0xE8 : unassigned
 */

/*
 * Nokia/Ericsson definitions
 */
#define WKHL_VK_OEM_RESET      0xE9
#define WKHL_VK_OEM_JUMP       0xEA
#define WKHL_VK_OEM_PA1        0xEB
#define WKHL_VK_OEM_PA2        0xEC
#define WKHL_VK_OEM_PA3        0xED
#define WKHL_VK_OEM_WSCTRL     0xEE
#define WKHL_VK_OEM_CUSEL      0xEF
#define WKHL_VK_OEM_ATTN       0xF0
#define WKHL_VK_OEM_FINISH     0xF1
#define WKHL_VK_OEM_COPY       0xF2
#define WKHL_VK_OEM_AUTO       0xF3
#define WKHL_VK_OEM_ENLW       0xF4
#define WKHL_VK_OEM_BACKTAB    0xF5

#define WKHL_VK_ATTN           0xF6
#define WKHL_VK_CRSEL          0xF7
#define WKHL_VK_EXSEL          0xF8
#define WKHL_VK_EREOF          0xF9
#define WKHL_VK_PLAY           0xFA
#define WKHL_VK_ZOOM           0xFB
#define WKHL_VK_NONAME         0xFC
#define WKHL_VK_PA1            0xFD
#define WKHL_VK_OEM_CLEAR      0xFE

/*
 * 0xFF : reserved
 */
