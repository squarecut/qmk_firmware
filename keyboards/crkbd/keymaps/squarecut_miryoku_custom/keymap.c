/*
Copyright 2019 @foostan
Copyright 2020 Drashna Jaelre <@drashna>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include QMK_KEYBOARD_H
#define KC_AGIN LCTL(KC_Y)
#define KC_UNDO LCTL(KC_Z)
#define KC_CUT LCTL(KC_X) 
#define KC_COPY LCTL(KC_C) 
#define KC_PSTE LCTL(KC_V)

#define OS_SFT  OSM(MOD_LSFT)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_split_3x5_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                                 KC_Y,    KC_U,    KC_I,    KC_O,   KC_P,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      LSFT_T(KC_A),LALT_T(KC_S),LCTL_T(KC_D),LGUI_T(KC_F),KC_G,                 KC_H,LGUI_T(KC_J),LCTL_T(KC_K),LALT_T(KC_L), LSFT_T(KC_QUOT), 
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      LCTL_T(KC_Z),   RALT_T(KC_X),KC_C,KC_V,    KC_B,                          KC_N,    KC_M, KC_COMM,  RALT_T(KC_DOT), KC_SLSH, 
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
            LT(MO(3),KC_ESC),  LT(MO(1),KC_BSPC),   LT(MO(2),KC_DEL),     LT(MO(5),KC_ENT),    LT(MO(4), KC_SPC), LT(MO(6),KC_TAB)
                                                  //`--------------------------'  `--------------------------'

  ),

    [1] = LAYOUT_split_3x5_3(
     QK_BOOT, KC_NO, KC_NO, KC_NO, KC_NO, 		    KC_AGIN, KC_UNDO, KC_CUT, KC_COPY, KC_PSTE,  
	 KC_LSFT, KC_LALT, KC_LCTL, KC_LGUI, KC_NO, 	  KC_CAPS, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT,  
	 KC_NO, KC_RALT, KC_NO, KC_NO, KC_NO, 		      KC_INS, KC_HOME, KC_PGDN, KC_PGUP, KC_END,  
	                  KC_NO, KC_BSPC,   KC_DEL, 		      KC_ENT,    KC_NO, KC_NO
  ),

    [2] = LAYOUT_split_3x5_3(
	QK_BOOT, KC_NO, KC_NO, KC_NO, KC_NO, 		      KC_NO, KC_NO, KC_NO, KC_NO,  KC_NO, 
	KC_LSFT, KC_LALT, KC_LCTL, KC_LGUI, KC_NO, 	  KC_NO, KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R,  
	KC_RALT, KC_NO, KC_NO, KC_NO, KC_NO,		      KC_NO, KC_WH_L, KC_WH_D, KC_WH_U, KC_WH_R, 
	                      KC_NO, KC_NO, KC_NO, 			      KC_BTN1, KC_BTN3, KC_BTN2
  ),
 
    [3] = LAYOUT_split_3x5_3(
	QK_BOOT, KC_NO, KC_NO, KC_NO, KC_NO, 		    RGB_TOG, RGB_MOD, RGB_HUI, RGB_SAI, RGB_VAI,
	KC_LSFT, KC_LALT, KC_LCTL, KC_LGUI, KC_NO, 	KC_NO, KC_MPRV, KC_VOLD, KC_VOLU, KC_MNXT,
	KC_RALT, KC_NO, KC_NO, KC_NO, KC_NO, 		    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, 
	                KC_NO, KC_NO, KC_NO, 				    KC_MSTP, KC_MPLY, KC_MUTE
  ),
    [4] = LAYOUT_split_3x5_3(
  	KC_LBRC, KC_7, KC_8, KC_9, KC_RBRC, 	      KC_NO, KC_NO, KC_NO, KC_NO, QK_BOOT, 
	KC_SCLN, KC_4, KC_5, KC_6, KC_EQL, 		        KC_NO, KC_LGUI, KC_LCTL, KC_LALT, KC_LSFT, 
	KC_GRV, KC_1, KC_2, KC_3, KC_BSLS, 		        KC_NO, KC_NO, KC_NO, KC_RALT, KC_NO,  
	                  KC_DOT, KC_0, KC_MINS, 				      KC_NO, KC_NO, KC_NO
  ),
    [5] = LAYOUT_split_3x5_3(
	KC_LCBR, KC_AMPR, KC_ASTR, KC_LPRN, KC_RCBR, 		KC_NO, KC_NO, KC_NO, KC_NO, QK_BOOT,  
	KC_COLN, KC_DLR, KC_PERC, KC_CIRC, KC_PLUS, 			KC_NO, KC_LGUI, KC_LCTL, KC_LALT, KC_LSFT,  
	KC_TILD, KC_EXLM, KC_AT, KC_HASH, KC_PIPE, 			KC_NO, KC_NO, KC_NO, KC_RALT, KC_NO,  
	              KC_LPRN, KC_RPRN, KC_UNDS, 				        KC_NO, KC_NO, KC_NO
  ),

	[6] = LAYOUT_split_3x5_3(
	KC_F12, KC_F7, KC_F8, KC_F9, KC_PSCR, 		  KC_NO, KC_NO, KC_NO, KC_NO, QK_BOOT,  
	KC_F11, KC_F4, KC_F5, KC_F6, KC_NO, 		    KC_NO, KC_LGUI, KC_LCTL, KC_LALT, KC_LSFT,  
	KC_F10, KC_F1, KC_F2, KC_F3, KC_PAUS, 		  KC_NO, KC_NO, KC_NO, KC_RALT, KC_NO,  
	                KC_APP, KC_SPC, KC_TAB, 				  KC_NO, KC_SPC, KC_TAB
  )


};

uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case LGUI_T(KC_F): case LGUI_T(KC_J): case LSFT_T(KC_QUOT): case LSFT_T(KC_A):
            return TAPPING_TERM + 80; //- 100;     
        default:
            return TAPPING_TERM + 200;
            
    }
}
