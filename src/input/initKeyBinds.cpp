
#include <map>
#include <string>
#include <vector>

#include "dependencies/SDL2/SDL_scancode.h"

#include "input.h"

using namespace Input;

std::map<SDL_Scancode, std::string> Keybinds::keys;

namespace Input{

  void initKeyBinds(){
    // Take keybinds from user preferences
    Keybinds::keys[SDL_SCANCODE_UNKNOWN] = {"assets/meow_UNKNOWN/"};
    Keybinds::keys[SDL_SCANCODE_A] = {"assets/meow_A/"};
    Keybinds::keys[SDL_SCANCODE_B] = {"assets/meow_B/"};
    Keybinds::keys[SDL_SCANCODE_C] = {"assets/meow_C/"};
    Keybinds::keys[SDL_SCANCODE_D] = {"assets/meow_D/"};
    Keybinds::keys[SDL_SCANCODE_E] = {"assets/meow_E/"};
    Keybinds::keys[SDL_SCANCODE_F] = {"assets/meow_F/"};
    Keybinds::keys[SDL_SCANCODE_G] = {"assets/meow_G/"};
    Keybinds::keys[SDL_SCANCODE_H] = {"assets/meow_H/"};
    Keybinds::keys[SDL_SCANCODE_I] = {"assets/meow_I/"};
    Keybinds::keys[SDL_SCANCODE_J] = {"assets/meow_J/"};
    Keybinds::keys[SDL_SCANCODE_K] = {"assets/meow_K/"};
    Keybinds::keys[SDL_SCANCODE_L] = {"assets/meow_L/"};
    Keybinds::keys[SDL_SCANCODE_M] = {"assets/meow_M/"};
    Keybinds::keys[SDL_SCANCODE_N] = {"assets/meow_N/"};
    Keybinds::keys[SDL_SCANCODE_O] = {"assets/meow_O/"};
    Keybinds::keys[SDL_SCANCODE_P] = {"assets/meow_P/"};
    Keybinds::keys[SDL_SCANCODE_Q] = {"assets/meow_Q/"};
    Keybinds::keys[SDL_SCANCODE_R] = {"assets/meow_R/"};
    Keybinds::keys[SDL_SCANCODE_S] = {"assets/meow_S/"};
    Keybinds::keys[SDL_SCANCODE_T] = {"assets/meow_T/"};
    Keybinds::keys[SDL_SCANCODE_U] = {"assets/meow_U/"};
    Keybinds::keys[SDL_SCANCODE_V] = {"assets/meow_V/"};
    Keybinds::keys[SDL_SCANCODE_W] = {"assets/meow_W/"};
    Keybinds::keys[SDL_SCANCODE_X] = {"assets/meow_X/"};
    Keybinds::keys[SDL_SCANCODE_Y] = {"assets/meow_Y/"};
    Keybinds::keys[SDL_SCANCODE_Z] = {"assets/meow_Z/"};
    Keybinds::keys[SDL_SCANCODE_1] = {"assets/meow_1/"};
    Keybinds::keys[SDL_SCANCODE_2] = {"assets/meow_2/"};
    Keybinds::keys[SDL_SCANCODE_3] = {"assets/meow_3/"};
    Keybinds::keys[SDL_SCANCODE_4] = {"assets/meow_4/"};
    Keybinds::keys[SDL_SCANCODE_5] = {"assets/meow_5/"};
    Keybinds::keys[SDL_SCANCODE_6] = {"assets/meow_6/"};
    Keybinds::keys[SDL_SCANCODE_7] = {"assets/meow_7/"};
    Keybinds::keys[SDL_SCANCODE_8] = {"assets/meow_8/"};
    Keybinds::keys[SDL_SCANCODE_9] = {"assets/meow_9/"};
    Keybinds::keys[SDL_SCANCODE_0] = {"assets/meow_0/"};
    Keybinds::keys[SDL_SCANCODE_RETURN] = {"assets/meow_RETURN/"};
    Keybinds::keys[SDL_SCANCODE_ESCAPE] = {"assets/meow_ESCAPE/"};
    Keybinds::keys[SDL_SCANCODE_BACKSPACE] = {"assets/meow_BACKSPACE/"};
    Keybinds::keys[SDL_SCANCODE_TAB] = {"assets/meow_TAB/"};
    Keybinds::keys[SDL_SCANCODE_SPACE] = {"assets/meow_SPACE/"};
    Keybinds::keys[SDL_SCANCODE_MINUS] = {"assets/meow_MINUS/"};
    Keybinds::keys[SDL_SCANCODE_EQUALS] = {"assets/meow_EQUALS/"};
    Keybinds::keys[SDL_SCANCODE_LEFTBRACKET] = {"assets/meow_LEFTBRACKET/"};
    Keybinds::keys[SDL_SCANCODE_RIGHTBRACKET] = {"assets/meow_RIGHTBRACKET/"};
    Keybinds::keys[SDL_SCANCODE_BACKSLASH] = {"assets/meow_BACKSLASH/"};
    Keybinds::keys[SDL_SCANCODE_NONUSHASH] = {"assets/meow_NONUSHASH/"};
    Keybinds::keys[SDL_SCANCODE_SEMICOLON] = {"assets/meow_SEMICOLON/"};
    Keybinds::keys[SDL_SCANCODE_APOSTROPHE] = {"assets/meow_APOSTROPHE/"};
    Keybinds::keys[SDL_SCANCODE_GRAVE] = {"assets/meow_GRAVE/"};
    Keybinds::keys[SDL_SCANCODE_COMMA] = {"assets/meow_COMMA/"};
    Keybinds::keys[SDL_SCANCODE_PERIOD] = {"assets/meow_PERIOD/"};
    Keybinds::keys[SDL_SCANCODE_SLASH] = {"assets/meow_SLASH/"};
    Keybinds::keys[SDL_SCANCODE_CAPSLOCK] = {"assets/meow_CAPSLOCK/"};
    Keybinds::keys[SDL_SCANCODE_F1] = {"assets/meow_F1/"};
    Keybinds::keys[SDL_SCANCODE_F2] = {"assets/meow_F2/"};
    Keybinds::keys[SDL_SCANCODE_F3] = {"assets/meow_F3/"};
    Keybinds::keys[SDL_SCANCODE_F4] = {"assets/meow_F4/"};
    Keybinds::keys[SDL_SCANCODE_F5] = {"assets/meow_F5/"};
    Keybinds::keys[SDL_SCANCODE_F6] = {"assets/meow_F6/"};
    Keybinds::keys[SDL_SCANCODE_F7] = {"assets/meow_F7/"};
    Keybinds::keys[SDL_SCANCODE_F8] = {"assets/meow_F8/"};
    Keybinds::keys[SDL_SCANCODE_F9] = {"assets/meow_F9/"};
    Keybinds::keys[SDL_SCANCODE_F10] = {"assets/meow_F10/"};
    Keybinds::keys[SDL_SCANCODE_F11] = {"assets/meow_F11/"};
    Keybinds::keys[SDL_SCANCODE_F12] = {"assets/meow_F12/"};
    Keybinds::keys[SDL_SCANCODE_PRINTSCREEN] = {"assets/meow_PRINTSCREEN/"};
    Keybinds::keys[SDL_SCANCODE_SCROLLLOCK] = {"assets/meow_SCROLLLOCK/"};
    Keybinds::keys[SDL_SCANCODE_PAUSE] = {"assets/meow_PAUSE/"};
    Keybinds::keys[SDL_SCANCODE_INSERT] = {"assets/meow_INSERT/"};
    Keybinds::keys[SDL_SCANCODE_HOME] = {"assets/meow_HOME/"};
    Keybinds::keys[SDL_SCANCODE_PAGEUP] = {"assets/meow_PAGEUP/"};
    Keybinds::keys[SDL_SCANCODE_DELETE] = {"assets/meow_DELETE/"};
    Keybinds::keys[SDL_SCANCODE_END] = {"assets/meow_END/"};
    Keybinds::keys[SDL_SCANCODE_PAGEDOWN] = {"assets/meow_PAGEDOWN/"};
    Keybinds::keys[SDL_SCANCODE_RIGHT] = {"assets/meow_RIGHT/"};
    Keybinds::keys[SDL_SCANCODE_LEFT] = {"assets/meow_LEFT/"};
    Keybinds::keys[SDL_SCANCODE_DOWN] = {"assets/meow_DOWN/"};
    Keybinds::keys[SDL_SCANCODE_UP] = {"assets/meow_UP/"};
    Keybinds::keys[SDL_SCANCODE_NUMLOCKCLEAR] = {"assets/meow_NUMLOCKCLEAR/"};
    Keybinds::keys[SDL_SCANCODE_KP_DIVIDE] = {"assets/meow_KP_DIVIDE/"};
    Keybinds::keys[SDL_SCANCODE_KP_MULTIPLY] = {"assets/meow_KP_MULTIPLY/"};
    Keybinds::keys[SDL_SCANCODE_KP_MINUS] = {"assets/meow_KP_MINUS/"};
    Keybinds::keys[SDL_SCANCODE_KP_PLUS] = {"assets/meow_KP_PLUS/"};
    Keybinds::keys[SDL_SCANCODE_KP_ENTER] = {"assets/meow_KP_ENTER/"};
    Keybinds::keys[SDL_SCANCODE_KP_1] = {"assets/meow_KP_1/"};
    Keybinds::keys[SDL_SCANCODE_KP_2] = {"assets/meow_KP_2/"};
    Keybinds::keys[SDL_SCANCODE_KP_3] = {"assets/meow_KP_3/"};
    Keybinds::keys[SDL_SCANCODE_KP_4] = {"assets/meow_KP_4/"};
    Keybinds::keys[SDL_SCANCODE_KP_5] = {"assets/meow_KP_5/"};
    Keybinds::keys[SDL_SCANCODE_KP_6] = {"assets/meow_KP_6/"};
    Keybinds::keys[SDL_SCANCODE_KP_7] = {"assets/meow_KP_7/"};
    Keybinds::keys[SDL_SCANCODE_KP_8] = {"assets/meow_KP_8/"};
    Keybinds::keys[SDL_SCANCODE_KP_9] = {"assets/meow_KP_9/"};
    Keybinds::keys[SDL_SCANCODE_KP_0] = {"assets/meow_KP_0/"};
    Keybinds::keys[SDL_SCANCODE_KP_PERIOD] = {"assets/meow_KP_PERIOD/"};
    Keybinds::keys[SDL_SCANCODE_NONUSBACKSLASH] = {"assets/meow_NONUSBACKSLASH/"};
    Keybinds::keys[SDL_SCANCODE_APPLICATION] = {"assets/meow_APPLICATION/"};
    Keybinds::keys[SDL_SCANCODE_POWER] = {"assets/meow_POWER/"};
    Keybinds::keys[SDL_SCANCODE_KP_EQUALS] = {"assets/meow_KP_EQUALS/"};
    Keybinds::keys[SDL_SCANCODE_F13] = {"assets/meow_F13/"};
    Keybinds::keys[SDL_SCANCODE_F14] = {"assets/meow_F14/"};
    Keybinds::keys[SDL_SCANCODE_F15] = {"assets/meow_F15/"};
    Keybinds::keys[SDL_SCANCODE_F16] = {"assets/meow_F16/"};
    Keybinds::keys[SDL_SCANCODE_F17] = {"assets/meow_F17/"};
    Keybinds::keys[SDL_SCANCODE_F18] = {"assets/meow_F18/"};
    Keybinds::keys[SDL_SCANCODE_F19] = {"assets/meow_F19/"};
    Keybinds::keys[SDL_SCANCODE_F20] = {"assets/meow_F20/"};
    Keybinds::keys[SDL_SCANCODE_F21] = {"assets/meow_F21/"};
    Keybinds::keys[SDL_SCANCODE_F22] = {"assets/meow_F22/"};
    Keybinds::keys[SDL_SCANCODE_F23] = {"assets/meow_F23/"};
    Keybinds::keys[SDL_SCANCODE_F24] = {"assets/meow_F24/"};
    Keybinds::keys[SDL_SCANCODE_EXECUTE] = {"assets/meow_EXECUTE/"};
    Keybinds::keys[SDL_SCANCODE_HELP] = {"assets/meow_HELP/"};
    Keybinds::keys[SDL_SCANCODE_MENU] = {"assets/meow_MENU/"};
    Keybinds::keys[SDL_SCANCODE_SELECT] = {"assets/meow_SELECT/"};
    Keybinds::keys[SDL_SCANCODE_STOP] = {"assets/meow_STOP/"};
    Keybinds::keys[SDL_SCANCODE_AGAIN] = {"assets/meow_AGAIN/"};
    Keybinds::keys[SDL_SCANCODE_UNDO] = {"assets/meow_UNDO/"};
    Keybinds::keys[SDL_SCANCODE_CUT] = {"assets/meow_CUT/"};
    Keybinds::keys[SDL_SCANCODE_COPY] = {"assets/meow_COPY/"};
    Keybinds::keys[SDL_SCANCODE_PASTE] = {"assets/meow_PASTE/"};
    Keybinds::keys[SDL_SCANCODE_FIND] = {"assets/meow_FIND/"};
    Keybinds::keys[SDL_SCANCODE_MUTE] = {"assets/meow_MUTE/"};
    Keybinds::keys[SDL_SCANCODE_VOLUMEUP] = {"assets/meow_VOLUMEUP/"};
    Keybinds::keys[SDL_SCANCODE_VOLUMEDOWN] = {"assets/meow_VOLUMEDOWN/"};
    // Keybinds::keys[SDL_SCANCODE_LOCKINGCAPSLOCK] = {"assets/meow_LOCKINGCAPSLOCK/"};
    // Keybinds::keys[SDL_SCANCODE_LOCKINGNUMLOCK] = {"assets/meow_LOCKINGNUMLOCK/"};
    // Keybinds::keys[SDL_SCANCODE_LOCKINGSCROLLLOCK] = {"assets/meow_LOCKINGSCROLLLOCK/"};
    Keybinds::keys[SDL_SCANCODE_KP_COMMA] = {"assets/meow_KP_COMMA/"};
    Keybinds::keys[SDL_SCANCODE_KP_EQUALSAS400] = {"assets/meow_KP_EQUALSAS400/"};
    Keybinds::keys[SDL_SCANCODE_INTERNATIONAL1] = {"assets/meow_INTERNATIONAL1/"};
    Keybinds::keys[SDL_SCANCODE_INTERNATIONAL2] = {"assets/meow_INTERNATIONAL2/"};
    Keybinds::keys[SDL_SCANCODE_INTERNATIONAL3] = {"assets/meow_INTERNATIONAL3/"};
    Keybinds::keys[SDL_SCANCODE_INTERNATIONAL4] = {"assets/meow_INTERNATIONAL4/"};
    Keybinds::keys[SDL_SCANCODE_INTERNATIONAL5] = {"assets/meow_INTERNATIONAL5/"};
    Keybinds::keys[SDL_SCANCODE_INTERNATIONAL6] = {"assets/meow_INTERNATIONAL6/"};
    Keybinds::keys[SDL_SCANCODE_INTERNATIONAL7] = {"assets/meow_INTERNATIONAL7/"};
    Keybinds::keys[SDL_SCANCODE_INTERNATIONAL8] = {"assets/meow_INTERNATIONAL8/"};
    Keybinds::keys[SDL_SCANCODE_INTERNATIONAL9] = {"assets/meow_INTERNATIONAL9/"};
    Keybinds::keys[SDL_SCANCODE_LANG1] = {"assets/meow_LANG1/"};
    Keybinds::keys[SDL_SCANCODE_LANG2] = {"assets/meow_LANG2/"};
    Keybinds::keys[SDL_SCANCODE_LANG3] = {"assets/meow_LANG3/"};
    Keybinds::keys[SDL_SCANCODE_LANG4] = {"assets/meow_LANG4/"};
    Keybinds::keys[SDL_SCANCODE_LANG5] = {"assets/meow_LANG5/"};
    Keybinds::keys[SDL_SCANCODE_LANG6] = {"assets/meow_LANG6/"};
    Keybinds::keys[SDL_SCANCODE_LANG7] = {"assets/meow_LANG7/"};
    Keybinds::keys[SDL_SCANCODE_LANG8] = {"assets/meow_LANG8/"};
    Keybinds::keys[SDL_SCANCODE_LANG9] = {"assets/meow_LANG9/"};
    Keybinds::keys[SDL_SCANCODE_ALTERASE] = {"assets/meow_ALTERASE/"};
    Keybinds::keys[SDL_SCANCODE_SYSREQ] = {"assets/meow_SYSREQ/"};
    Keybinds::keys[SDL_SCANCODE_CANCEL] = {"assets/meow_CANCEL/"};
    Keybinds::keys[SDL_SCANCODE_CLEAR] = {"assets/meow_CLEAR/"};
    Keybinds::keys[SDL_SCANCODE_PRIOR] = {"assets/meow_PRIOR/"};
    Keybinds::keys[SDL_SCANCODE_RETURN2] = {"assets/meow_RETURN2/"};
    Keybinds::keys[SDL_SCANCODE_SEPARATOR] = {"assets/meow_SEPARATOR/"};
    Keybinds::keys[SDL_SCANCODE_OUT] = {"assets/meow_OUT/"};
    Keybinds::keys[SDL_SCANCODE_OPER] = {"assets/meow_OPER/"};
    Keybinds::keys[SDL_SCANCODE_CLEARAGAIN] = {"assets/meow_CLEARAGAIN/"};
    Keybinds::keys[SDL_SCANCODE_CRSEL] = {"assets/meow_CRSEL/"};
    Keybinds::keys[SDL_SCANCODE_EXSEL] = {"assets/meow_EXSEL/"};
    Keybinds::keys[SDL_SCANCODE_KP_00] = {"assets/meow_KP_00/"};
    Keybinds::keys[SDL_SCANCODE_KP_000] = {"assets/meow_KP_000/"};
    Keybinds::keys[SDL_SCANCODE_THOUSANDSSEPARATOR] = {"assets/meow_THOUSANDSSEPARATOR/"};
    Keybinds::keys[SDL_SCANCODE_DECIMALSEPARATOR] = {"assets/meow_DECIMALSEPARATOR/"};
    Keybinds::keys[SDL_SCANCODE_CURRENCYUNIT] = {"assets/meow_CURRENCYUNIT/"};
    Keybinds::keys[SDL_SCANCODE_CURRENCYSUBUNIT] = {"assets/meow_CURRENCYSUBUNIT/"};
    Keybinds::keys[SDL_SCANCODE_KP_LEFTPAREN] = {"assets/meow_KP_LEFTPAREN/"};
    Keybinds::keys[SDL_SCANCODE_KP_RIGHTPAREN] = {"assets/meow_KP_RIGHTPAREN/"};
    Keybinds::keys[SDL_SCANCODE_KP_LEFTBRACE] = {"assets/meow_KP_LEFTBRACE/"};
    Keybinds::keys[SDL_SCANCODE_KP_RIGHTBRACE] = {"assets/meow_KP_RIGHTBRACE/"};
    Keybinds::keys[SDL_SCANCODE_KP_TAB] = {"assets/meow_KP_TAB/"};
    Keybinds::keys[SDL_SCANCODE_KP_BACKSPACE] = {"assets/meow_KP_BACKSPACE/"};
    Keybinds::keys[SDL_SCANCODE_KP_A] = {"assets/meow_KP_A/"};
    Keybinds::keys[SDL_SCANCODE_KP_B] = {"assets/meow_KP_B/"};
    Keybinds::keys[SDL_SCANCODE_KP_C] = {"assets/meow_KP_C/"};
    Keybinds::keys[SDL_SCANCODE_KP_D] = {"assets/meow_KP_D/"};
    Keybinds::keys[SDL_SCANCODE_KP_E] = {"assets/meow_KP_E/"};
    Keybinds::keys[SDL_SCANCODE_KP_F] = {"assets/meow_KP_F/"};
    Keybinds::keys[SDL_SCANCODE_KP_XOR] = {"assets/meow_KP_XOR/"};
    Keybinds::keys[SDL_SCANCODE_KP_POWER] = {"assets/meow_KP_POWER/"};
    Keybinds::keys[SDL_SCANCODE_KP_PERCENT] = {"assets/meow_KP_PERCENT/"};
    Keybinds::keys[SDL_SCANCODE_KP_LESS] = {"assets/meow_KP_LESS/"};
    Keybinds::keys[SDL_SCANCODE_KP_GREATER] = {"assets/meow_KP_GREATER/"};
    Keybinds::keys[SDL_SCANCODE_KP_AMPERSAND] = {"assets/meow_KP_AMPERSAND/"};
    Keybinds::keys[SDL_SCANCODE_KP_DBLAMPERSAND] = {"assets/meow_KP_DBLAMPERSAND/"};
    Keybinds::keys[SDL_SCANCODE_KP_VERTICALBAR] = {"assets/meow_KP_VERTICALBAR/"};
    Keybinds::keys[SDL_SCANCODE_KP_DBLVERTICALBAR] = {"assets/meow_KP_DBLVERTICALBAR/"};
    Keybinds::keys[SDL_SCANCODE_KP_COLON] = {"assets/meow_KP_COLON/"};
    Keybinds::keys[SDL_SCANCODE_KP_HASH] = {"assets/meow_KP_HASH/"};
    Keybinds::keys[SDL_SCANCODE_KP_SPACE] = {"assets/meow_KP_SPACE/"};
    Keybinds::keys[SDL_SCANCODE_KP_AT] = {"assets/meow_KP_AT/"};
    Keybinds::keys[SDL_SCANCODE_KP_EXCLAM] = {"assets/meow_KP_EXCLAM/"};
    Keybinds::keys[SDL_SCANCODE_KP_MEMSTORE] = {"assets/meow_KP_MEMSTORE/"};
    Keybinds::keys[SDL_SCANCODE_KP_MEMRECALL] = {"assets/meow_KP_MEMRECALL/"};
    Keybinds::keys[SDL_SCANCODE_KP_MEMCLEAR] = {"assets/meow_KP_MEMCLEAR/"};
    Keybinds::keys[SDL_SCANCODE_KP_MEMADD] = {"assets/meow_KP_MEMADD/"};
    Keybinds::keys[SDL_SCANCODE_KP_MEMSUBTRACT] = {"assets/meow_KP_MEMSUBTRACT/"};
    Keybinds::keys[SDL_SCANCODE_KP_MEMMULTIPLY] = {"assets/meow_KP_MEMMULTIPLY/"};
    Keybinds::keys[SDL_SCANCODE_KP_MEMDIVIDE] = {"assets/meow_KP_MEMDIVIDE/"};
    Keybinds::keys[SDL_SCANCODE_KP_PLUSMINUS] = {"assets/meow_KP_PLUSMINUS/"};
    Keybinds::keys[SDL_SCANCODE_KP_CLEAR] = {"assets/meow_KP_CLEAR/"};
    Keybinds::keys[SDL_SCANCODE_KP_CLEARENTRY] = {"assets/meow_KP_CLEARENTRY/"};
    Keybinds::keys[SDL_SCANCODE_KP_BINARY] = {"assets/meow_KP_BINARY/"};
    Keybinds::keys[SDL_SCANCODE_KP_OCTAL] = {"assets/meow_KP_OCTAL/"};
    Keybinds::keys[SDL_SCANCODE_KP_DECIMAL] = {"assets/meow_KP_DECIMAL/"};
    Keybinds::keys[SDL_SCANCODE_KP_HEXADECIMAL] = {"assets/meow_KP_HEXADECIMAL/"};
    Keybinds::keys[SDL_SCANCODE_LCTRL] = {"assets/meow_LCTRL/"};
    Keybinds::keys[SDL_SCANCODE_LSHIFT] = {"assets/meow_LSHIFT/"};
    Keybinds::keys[SDL_SCANCODE_LALT] = {"assets/meow_LALT/"};
    Keybinds::keys[SDL_SCANCODE_LGUI] = {"assets/meow_LGUI/"};
    Keybinds::keys[SDL_SCANCODE_RCTRL] = {"assets/meow_RCTRL/"};
    Keybinds::keys[SDL_SCANCODE_RSHIFT] = {"assets/meow_RSHIFT/"};
    Keybinds::keys[SDL_SCANCODE_RALT] = {"assets/meow_RALT/"};
    Keybinds::keys[SDL_SCANCODE_RGUI] = {"assets/meow_RGUI/"};
    Keybinds::keys[SDL_SCANCODE_MODE] = {"assets/meow_MODE/"};
    Keybinds::keys[SDL_SCANCODE_AUDIONEXT] = {"assets/meow_AUDIONEXT/"};
    Keybinds::keys[SDL_SCANCODE_AUDIOPREV] = {"assets/meow_AUDIOPREV/"};
    Keybinds::keys[SDL_SCANCODE_AUDIOSTOP] = {"assets/meow_AUDIOSTOP/"};
    Keybinds::keys[SDL_SCANCODE_AUDIOPLAY] = {"assets/meow_AUDIOPLAY/"};
    Keybinds::keys[SDL_SCANCODE_AUDIOMUTE] = {"assets/meow_AUDIOMUTE/"};
    Keybinds::keys[SDL_SCANCODE_MEDIASELECT] = {"assets/meow_MEDIASELECT/"};
    Keybinds::keys[SDL_SCANCODE_WWW] = {"assets/meow_WWW/"};
    Keybinds::keys[SDL_SCANCODE_MAIL] = {"assets/meow_MAIL/"};
    Keybinds::keys[SDL_SCANCODE_CALCULATOR] = {"assets/meow_CALCULATOR/"};
    Keybinds::keys[SDL_SCANCODE_COMPUTER] = {"assets/meow_COMPUTER/"};
    Keybinds::keys[SDL_SCANCODE_AC_SEARCH] = {"assets/meow_AC_SEARCH/"};
    Keybinds::keys[SDL_SCANCODE_AC_HOME] = {"assets/meow_AC_HOME/"};
    Keybinds::keys[SDL_SCANCODE_AC_BACK] = {"assets/meow_AC_BACK/"};
    Keybinds::keys[SDL_SCANCODE_AC_FORWARD] = {"assets/meow_AC_FORWARD/"};
    Keybinds::keys[SDL_SCANCODE_AC_STOP] = {"assets/meow_AC_STOP/"};
    Keybinds::keys[SDL_SCANCODE_AC_REFRESH] = {"assets/meow_AC_REFRESH/"};
    Keybinds::keys[SDL_SCANCODE_AC_BOOKMARKS] = {"assets/meow_AC_BOOKMARKS/"};
    Keybinds::keys[SDL_SCANCODE_BRIGHTNESSDOWN] = {"assets/meow_BRIGHTNESSDOWN/"};
    Keybinds::keys[SDL_SCANCODE_BRIGHTNESSUP] = {"assets/meow_BRIGHTNESSUP/"};
    Keybinds::keys[SDL_SCANCODE_DISPLAYSWITCH] = {"assets/meow_DISPLAYSWITCH/"};
    Keybinds::keys[SDL_SCANCODE_KBDILLUMTOGGLE] = {"assets/meow_KBDILLUMTOGGLE/"};
    Keybinds::keys[SDL_SCANCODE_KBDILLUMDOWN] = {"assets/meow_KBDILLUMDOWN/"};
    Keybinds::keys[SDL_SCANCODE_KBDILLUMUP] = {"assets/meow_KBDILLUMUP/"};
    Keybinds::keys[SDL_SCANCODE_EJECT] = {"assets/meow_EJECT/"};
    Keybinds::keys[SDL_SCANCODE_SLEEP] = {"assets/meow_SLEEP/"};
    Keybinds::keys[SDL_SCANCODE_APP1] = {"assets/meow_APP1/"};
    Keybinds::keys[SDL_SCANCODE_APP2] = {"assets/meow_APP2/"};
    Keybinds::keys[SDL_SCANCODE_AUDIOREWIND] = {"assets/meow_AUDIOREWIND/"};
    Keybinds::keys[SDL_SCANCODE_AUDIOFASTFORWARD] = {"assets/meow_AUDIOFASTFORWARD/"};


  }

}