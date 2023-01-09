#ifndef KEYCODES_H
#define KEYCODES_H

#define KC_NONE 0x00

#define KC_SPC  0x20 // ' ' SPACE
#define KC_EXLM 0x21 // !
#define KC_DQUO 0x22 // "
#define KC_HASH 0x23 // #
#define KC_DLR  0x24 // $
#define KC_PERC 0x25 // %
#define KC_AMPR 0x26 // &
#define KC_QUOT 0x27 // '
#define KC_LPRN 0x28 // (
#define KC_RPRN 0x29 // )
#define KC_ASTR 0x2A // *
#define KC_PLUS 0x2B // +
#define KC_COMM 0x2C // ,
#define KC_MINS 0x2D // -
#define KC_DOT  0x2E // .
#define KC_SLSH 0x2F // /

#define KC_0	0x30
#define KC_1	0x31
#define KC_2	0x32
#define KC_3	0x33
#define KC_4	0x34
#define KC_5	0x35
#define KC_6	0x36
#define KC_7	0x37
#define KC_8	0x38
#define KC_9	0x39
#define KC_COLN 0x3A // :
#define KC_SCLN 0x3B // ;
#define KC_LABK 0x3C // <
#define KC_EQL  0x3D // =
#define KC_RABK 0x3E // >
#define KC_QUES 0x3F // ?

#define KC_AT   0x40 // @

// 0x41..0x5A A..Z

#define KC_LBRC 0x5B // [
#define KC_BSLS 0x5C // backslash
#define KC_RBRC 0x5D // ]
#define KC_CIRC 0x5E // ^
#define KC_UNDS 0x5F // _

#define KC_GRAVE  0x60 // `
#define KC_A	0x61
#define KC_B	0x62
#define KC_C	0x63
#define KC_D	0x64
#define KC_E	0x65
#define KC_F	0x66
#define KC_G	0x67
#define KC_H	0x68
#define KC_I	0x69
#define KC_J	0x6A
#define KC_K	0x6B
#define KC_L	0x6C
#define KC_M	0x6D
#define KC_N	0x6E
#define KC_O	0x6F
#define KC_P	0x70
#define KC_Q	0x71
#define KC_R	0x72
#define KC_S	0x73
#define KC_T	0x74
#define KC_U	0x75
#define KC_V	0x76
#define KC_W	0x77
#define KC_X	0x78
#define KC_Y	0x79
#define KC_Z	0x7A
#define KC_LCBR 0x7B // {
#define KC_PIPE 0x7C // |
#define KC_RCBR 0x7D // }
#define KC_TILD 0x7E // ~

// https://www.arduino.cc/en/Reference/KeyboardModifiers
// http://www2d.biglobe.ne.jp/~msyk/keyboard/layout/usbkeycode.html

#define KC_LEFT_CTRL	0x80	// 
#define KC_LEFT_SHIFT	0x81	// 
#define KC_LEFT_ALT		0x82	// 
#define KC_LEFT_GUI		0x83	// Windows
#define KC_RIGHT_CTRL	0x84	// 
#define KC_RIGHT_SHIFT	0x85	// 
#define KC_RIGHT_ALT	0x86	// 
#define KC_RIGHT_GUI	0x87	// Windows
#define KC_UP_ARROW		0xDA	// 
#define KC_DOWN_ARROW	0xD9	// 
#define KC_LEFT_ARROW	0xD8	// 
#define KC_RIGHT_ARROW	0xD7	// 
#define KC_BACKSPACE	0xB2	// 
#define KC_TAB			0xB3	// 
#define KC_RETURN		0xB0	// 
#define KC_ESC			0xB1	// 
#define KC_INSERT		0xD1	// 
#define KC_DELETE		0xD4	// 
#define KC_PAGE_UP		0xD3	// 
#define KC_PAGE_DOWN	0xD6	// 
#define KC_HOME			0xD2	// 
#define KC_END			0xD5	// 
#define KC_CAPS_LOCK	0xC1	// 
#define KC_F1			0xC2	// 
#define KC_F2			0xC3	// 
#define KC_F3			0xC4	// 
#define KC_F4			0xC5	// 
#define KC_F5			0xC6	// 
#define KC_F6			0xC7	// 
#define KC_F7			0xC8	// 
#define KC_F8			0xC9	// 
#define KC_F9			0xCA	// 
#define KC_F10			0xCB	// 
#define KC_F11			0xCC	// 
#define KC_F12			0xCD	// 
#define KC_PSCREEN		0xCE // Print Screen
#define KC_APPLICATION	0xED

#define KC_GRV KC_GRAVE  // 0x60 // `
#define KC_LCTL	KC_LEFT_CTRL	// 0x80
#define KC_LSFT	KC_LEFT_SHIFT	// 0x81
#define KC_LALT	KC_LEFT_ALT		// 0x82
#define KC_LGUI	KC_LEFT_GUI		// 0x83
#define KC_RCTL	KC_RIGHT_CTRL	// 0x84
#define KC_RSFT	KC_RIGHT_SHIFT	// 0x85
#define KC_RALT	KC_RIGHT_ALT	// 0x86
#define KC_RGUI	KC_RIGHT_GUI	// 0x87
#define KC_UP	KC_UP_ARROW		// 0xDA
#define KC_DOWN	KC_DOWN_ARROW	// 0xD9
#define KC_LEFT	KC_LEFT_ARROW	// 0xD8
#define KC_RGHT	KC_RIGHT_ARROW	// 0xD7
#define KC_BS	KC_BACKSPACE	// 0xB2
#define KC_ENT	KC_RETURN		// 0xB0
#define KC_INS	KC_INSERT		// 0xD1
#define KC_DEL	KC_DELETE		// 0xD4
#define KC_PGUP	KC_PAGE_UP		// 0xD3
#define KC_PGDN	KC_PAGE_DOWN	// 0xD6
#define KC_CAPS	KC_CAPS_LOCK	// 0xC1
#define KC_PSCR KC_PSCREEN		// 0xCE
#define KC_PRT KC_PSCREEN    // 0xCE
#define KC_APP  KC_APPLICATION  // 0xED

#define KC_SAFE_RANGE 0xF0

#define KC_SAFE_RANGE_0 KC_SAFE_RANGE
#define KC_SAFE_RANGE_1 0xF1
#define KC_SAFE_RANGE_2 0xF2
#define KC_SAFE_RANGE_3 0xF3
#define KC_SAFE_RANGE_4 0xF4
#define KC_SAFE_RANGE_5 0xF5
#define KC_SAFE_RANGE_6 0xF6
#define KC_SAFE_RANGE_7 0xF7
#define KC_SAFE_RANGE_8 0xF8
#define KC_SAFE_RANGE_9 0xF9
#define KC_SAFE_RANGE_A 0xFA
#define KC_SAFE_RANGE_B 0xFB
#define KC_SAFE_RANGE_C 0xFC
#define KC_SAFE_RANGE_D 0xFD
#define KC_SAFE_RANGE_E 0xFE
#define KC_SAFE_RANGE_F 0xFF

#endif //KEYCODES_H
