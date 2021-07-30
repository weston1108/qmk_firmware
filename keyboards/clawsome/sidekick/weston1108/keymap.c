/* Copyright 2020 AAClawson (AlisGraveNil)
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include QMK_KEYBOARD_H
enum custom_keycodes {
	CMD_01,
	CMD_02,
	CMD_03,
	CMD_04,
	CMD_05,
	CMD_06,
	CMD_07,
	CMD_08,
	CMD_09,
	CMD_10,
	CMD_11,
	CMD_12,
	CMD_13,
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
	switch (keycode) {
	case CMD_01:
		if (record->event.pressed) {
			SEND_STRING("Cmd /c 01-"SS_TAP(X_TAB));
		} 
		else {
			
		}
		break;
	
	case CMD_02:
		if (record->event.pressed) {
			SEND_STRING("Cmd /c 02-"SS_TAP(X_TAB));
		} 
		else {
			
		}
		break;
	
	case CMD_03:
		if (record->event.pressed) {
			SEND_STRING("Cmd /c 03-"SS_TAP(X_TAB));
		} 
		else {
			
		}
		break;
	
	case CMD_04:
		if (record->event.pressed) {
			SEND_STRING("Cmd /c 04-"SS_TAP(X_TAB));
		} 
		else {
			
		}
		break;		

	case CMD_05:
		if (record->event.pressed) {
			SEND_STRING("Cmd /c 05-"SS_TAP(X_TAB));
		} 
		else {
			
		}
		break;
	
	case CMD_06:
		if (record->event.pressed) {
			SEND_STRING("Cmd /c 06-"SS_TAP(X_TAB));
		} 
		else {
			
		}
		break;
	
	case CMD_07:
		if (record->event.pressed) {
			SEND_STRING("Cmd /c 07-"SS_TAP(X_TAB));
		} 
		else {
			
		}
		break;
	
	case CMD_08:
		if (record->event.pressed) {
			SEND_STRING("Cmd /c 08-"SS_TAP(X_TAB));
		} 
		else {
			
		}
		break;	
	
	case CMD_09:
		if (record->event.pressed) {
			SEND_STRING("Cmd /c 09-"SS_TAP(X_TAB));
		} 
		else {
			
		}
		break;		

	case CMD_10:
		if (record->event.pressed) {
			SEND_STRING("Cmd /c 10-"SS_TAP(X_TAB));
		} 
		else {
			
		}
		break;
	
	case CMD_11:
		if (record->event.pressed) {
			SEND_STRING("Cmd /c 11-"SS_TAP(X_TAB));
		} 
		else {
			
		}
		break;
	
	case CMD_12:
		if (record->event.pressed) {
			SEND_STRING("Cmd /c 12-"SS_TAP(X_TAB));
		} 
		else {
			
		}
		break;
	
	case CMD_13:
		if (record->event.pressed) {
			SEND_STRING("Cmd /c 13-"SS_TAP(X_TAB));
		} 
		else {
			
		}
		break;	
	}
	return true;
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
   /*
    * ------------------------------------
    * |INS |HOME|PGUP|NUM | /  | *  | -  |
    * ------------------------------------
    * |DEL |END |PGDN| 7  | 8  | 9  | +  |
    * ------------------------------|    |
    * |    |    |    | 4  | 5  | 6  |    |
    * ------------------------------------
    * |    | UP |    | 1  | 2  | 3  |ENT |
    * ------------------------------|    |
    * |LEFT|DOWN|RGHT| 0       | .  |    |
    * ------------------------------------
    */
    [0] = LAYOUT(
        KC_INS,  KC_HOME, KC_PGUP, KC_NLCK, KC_PSLS, KC_PAST, KC_PMNS,
        KC_DEL,  KC_END,  KC_PGDN, CMD_07,   CMD_08,   CMD_09,   KC_PPLS,
                                   CMD_04,   CMD_05,   CMD_06,
                 KC_UP,            CMD_01,   CMD_02,   CMD_03,   KC_PENT,
        KC_LEFT, KC_DOWN, KC_RGHT, KC_P0,            KC_PDOT
    ),

};

