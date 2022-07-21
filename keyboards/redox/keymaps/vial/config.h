/*
Copyright 2018-2022 Mattia Dal Ben <matthewdibi@gmail.com>, Ben Williams @rufusw

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

#pragma once

#undef SOFT_SERIAL_PIN
#define SOFT_SERIAL_PIN D3 // TX on board, D1 in Ardiuno, PD0 in AVR. AVR is what we use here and we omit the P in the code so PD3 is D3
#define USE_SERIAL
#define MASTER_LEFT

#define TAPPING_TOGGLE 2

/* ws2812 RGB LED */
#undef RGB_DI_PIN
#define RGB_DI_PIN D0 // PD0 in AVR, pin 3 on the board

#define RGBLED_NUM 14    // Number of LEDs
#define RGBLIGHT_ANIMATIONS
#define RGBLIGHT_HUE_STEP 8
#define RGBLIGHT_SAT_STEP 8
#define RGBLIGHT_VAL_STEP 8

#define RGBLIGHT_SPLIT   // sync LEDs between RIGHT and LEFT hand

/* unique Vial keyboard ID and secure unlock combination Tab + Escape */
#define VIAL_KEYBOARD_UID {0x3D, 0xEE, 0xB3, 0x31, 0x5E, 0x68, 0x6C, 0x44}
#define VIAL_UNLOCK_COMBO_ROWS {1, 2}
#define VIAL_UNLOCK_COMBO_COLS {0, 0}

/* For reducing RAM and EEPROM usage when using Vial*/
#define VIAL_TAP_DANCE_ENTRIES 4
//#define VIAL_COMBO_ENTRIES 4
#define VIAL_KEY_OVERRIDE_ENTRIES 4

#undef LOCKING_SUPPORT_ENABLE
#undef LOCKING_RESYNC_ENABLE
#define NO_ACTION_ONESHOT
#define NO_MUSIC_MODE

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
// #define NO_DEBUG

/* disable print */
// #define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT