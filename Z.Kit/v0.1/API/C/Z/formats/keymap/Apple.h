/* Z Kit C API - formats/keymap/Apple.h
	      __	   __
  _______ ___/ /______ ___/ /__
 / __/ -_) _  / __/ _ \ _  / -_)
/_/  \__/\_,_/\__/\___/_,_/\__/
Copyright © 2006-2015 Manuel Sainz de Baranda y Goñi.
Released under the terms of the GNU Lesser General Public License v3. */

#ifndef __Z_formats_keymap_Apple_H__
#define __Z_formats_keymap_Apple_H__

#define Z_KEYMAP_APPLE_RETURN		0x24
#define Z_KEYMAP_APPLE_TAB		0x30
#define Z_KEYMAP_APPLE_SPACE		0x31
#define Z_KEYMAP_APPLE_DELETE		0x33
#define Z_KEYMAP_APPLE_ESCAPE		0x35
#define Z_KEYMAP_APPLE_COMMAND		0x37
#define Z_KEYMAP_APPLE_SHIFT		0x38
#define Z_KEYMAP_APPLE_CAPSLOCK		0x39
#define Z_KEYMAP_APPLE_OPTION		0x3A
#define Z_KEYMAP_APPLE_CONTROL		0x3B
#define Z_KEYMAP_APPLE_RIGHT_SHIFT	0x3C
#define Z_KEYMAP_APPLE_RIGHT_OPTION	0x3D
#define Z_KEYMAP_APPLE_RIGHT_CONTROL	0x3E
#define Z_KEYMAP_APPLE_FUNCTION		0x3F
#define Z_KEYMAP_APPLE_F17		0x40
#define Z_KEYMAP_APPLE_VOLUME_UP	0x48
#define Z_KEYMAP_APPLE_VOLUME_DOWN	0x49
#define Z_KEYMAP_APPLE_MUTE		0x4A
#define Z_KEYMAP_APPLE_F18		0x4F
#define Z_KEYMAP_APPLE_F19		0x50
#define Z_KEYMAP_APPLE_F20		0x5A
#define Z_KEYMAP_APPLE_F5		0x60
#define Z_KEYMAP_APPLE_F6		0x61
#define Z_KEYMAP_APPLE_F7		0x62
#define Z_KEYMAP_APPLE_F3		0x63
#define Z_KEYMAP_APPLE_F8		0x64
#define Z_KEYMAP_APPLE_F9		0x65
#define Z_KEYMAP_APPLE_F11		0x67
#define Z_KEYMAP_APPLE_F13		0x69
#define Z_KEYMAP_APPLE_F16		0x6A
#define Z_KEYMAP_APPLE_F14		0x6B
#define Z_KEYMAP_APPLE_F10		0x6D
#define Z_KEYMAP_APPLE_F12		0x6F
#define Z_KEYMAP_APPLE_F15		0x71
#define Z_KEYMAP_APPLE_HELP		0x72
#define Z_KEYMAP_APPLE_HOME		0x73
#define Z_KEYMAP_APPLE_PAGE_UP		0x74
#define Z_KEYMAP_APPLE_FORWARD_DELETE	0x75
#define Z_KEYMAP_APPLE_F4		0x76
#define Z_KEYMAP_APPLE_END		0x77
#define Z_KEYMAP_APPLE_F2		0x78
#define Z_KEYMAP_APPLE_PAGE_DOWN	0x79
#define Z_KEYMAP_APPLE_F1		0x7A
#define Z_KEYMAP_APPLE_LEFT_ARROW	0x7B
#define Z_KEYMAP_APPLE_RIGHT_ARROW	0x7C
#define Z_KEYMAP_APPLE_DOWN_ARROW	0x7D
#define Z_KEYMAP_APPLE_UP_ARROW		0x7E

#define Z_KEYMAP_APPLE_ISO_SECTION 0x0A

#define Z_KEYMAP_APPLE_US_A		  0x00
#define Z_KEYMAP_APPLE_US_S		  0x01
#define Z_KEYMAP_APPLE_US_D		  0x02
#define Z_KEYMAP_APPLE_US_F		  0x03
#define Z_KEYMAP_APPLE_US_H		  0x04
#define Z_KEYMAP_APPLE_US_G		  0x05
#define Z_KEYMAP_APPLE_US_Z		  0x06
#define Z_KEYMAP_APPLE_US_X		  0x07
#define Z_KEYMAP_APPLE_US_C		  0x08
#define Z_KEYMAP_APPLE_US_V		  0x09
#define Z_KEYMAP_APPLE_US_B		  0x0B
#define Z_KEYMAP_APPLE_US_Q		  0x0C
#define Z_KEYMAP_APPLE_US_W		  0x0D
#define Z_KEYMAP_APPLE_US_E		  0x0E
#define Z_KEYMAP_APPLE_US_R		  0x0F
#define Z_KEYMAP_APPLE_US_Y		  0x10
#define Z_KEYMAP_APPLE_US_T		  0x11
#define Z_KEYMAP_APPLE_US_1		  0x12
#define Z_KEYMAP_APPLE_US_2		  0x13
#define Z_KEYMAP_APPLE_US_3		  0x14
#define Z_KEYMAP_APPLE_US_4		  0x15
#define Z_KEYMAP_APPLE_US_6		  0x16
#define Z_KEYMAP_APPLE_US_5		  0x17
#define Z_KEYMAP_APPLE_US_EQUAL		  0x18
#define Z_KEYMAP_APPLE_US_9		  0x19
#define Z_KEYMAP_APPLE_US_7		  0x1A
#define Z_KEYMAP_APPLE_US_MINUS		  0x1B
#define Z_KEYMAP_APPLE_US_8		  0x1C
#define Z_KEYMAP_APPLE_US_0		  0x1D
#define Z_KEYMAP_APPLE_US_RIGHT_BRACKET	  0x1E
#define Z_KEYMAP_APPLE_US_O		  0x1F
#define Z_KEYMAP_APPLE_US_U		  0x20
#define Z_KEYMAP_APPLE_US_LEFT_BRACKET	  0x21
#define Z_KEYMAP_APPLE_US_I		  0x22
#define Z_KEYMAP_APPLE_US_P		  0x23
#define Z_KEYMAP_APPLE_US_L		  0x25
#define Z_KEYMAP_APPLE_US_J		  0x26
#define Z_KEYMAP_APPLE_US_QUOTE		  0x27
#define Z_KEYMAP_APPLE_US_K		  0x28
#define Z_KEYMAP_APPLE_US_SEMICOLON	  0x29
#define Z_KEYMAP_APPLE_US_BACKSLASH	  0x2A
#define Z_KEYMAP_APPLE_US_COMMA		  0x2B
#define Z_KEYMAP_APPLE_US_SLASH		  0x2C
#define Z_KEYMAP_APPLE_US_N		  0x2D
#define Z_KEYMAP_APPLE_US_M		  0x2E
#define Z_KEYMAP_APPLE_US_PERIOD	  0x2F
#define Z_KEYMAP_APPLE_US_GRAVE		  0x32
#define Z_KEYMAP_APPLE_US_KEYPAD_DECIMAL  0x41
#define Z_KEYMAP_APPLE_US_KEYPAD_MULTIPLY 0x43
#define Z_KEYMAP_APPLE_US_KEYPAD_PLUS	  0x45
#define Z_KEYMAP_APPLE_US_KEYPAD_CLEAR	  0x47
#define Z_KEYMAP_APPLE_US_KEYPAD_DIVIDE	  0x4B
#define Z_KEYMAP_APPLE_US_KEYPAD_ENTER	  0x4C
#define Z_KEYMAP_APPLE_US_KEYPAD_MINUS	  0x4E
#define Z_KEYMAP_APPLE_US_KEYPAD_EQUALS	  0x51
#define Z_KEYMAP_APPLE_US_KEYPAD_0	  0x52
#define Z_KEYMAP_APPLE_US_KEYPAD_1	  0x53
#define Z_KEYMAP_APPLE_US_KEYPAD_2	  0x54
#define Z_KEYMAP_APPLE_US_KEYPAD_3	  0x55
#define Z_KEYMAP_APPLE_US_KEYPAD_4	  0x56
#define Z_KEYMAP_APPLE_US_KEYPAD_5	  0x57
#define Z_KEYMAP_APPLE_US_KEYPAD_6	  0x58
#define Z_KEYMAP_APPLE_US_KEYPAD_7	  0x59
#define Z_KEYMAP_APPLE_US_KEYPAD_8	  0x5B
#define Z_KEYMAP_APPLE_US_KEYPAD_9	  0x5C

#define Z_KEYMAP_APPLE_JIS_YEN		0x5D
#define Z_KEYMAP_APPLE_JIS_UNDERSCORE	0x5E
#define Z_KEYMAP_APPLE_JIS_KEYPAD_COMMA	0x5F
#define Z_KEYMAP_APPLE_JIS_EISU		0x66
#define Z_KEYMAP_APPLE_JIS_KANA		0x68

#endif /* __Z_formats_keymap_Apple_H__ */