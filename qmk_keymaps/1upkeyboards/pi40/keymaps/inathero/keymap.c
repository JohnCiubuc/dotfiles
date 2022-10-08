/* Copyright 2022 ziptyze
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


#include "inathero_common_functions.c"

#define XXXX XXXXXXX

enum layer_names {
    _ONE = 0,
    _TWO,
    _THREE,
    _FOUR
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    /* Qwerty
    *                                                                               ╱⎺⎺⎺⎺╲
    *                                                                              |RGBTOG|
    *                                                                              ╲⎽⎽⎽⎽╱ 
    * ,-----------------------------------------------------------------------------------.
    * | Tab  |   Q  |   W  |   E  |   R  |   T  |   Y  |   U  |   I  |   O  |   P  | Bksp |
    * |------+------+------+------+------+------+------+------+------+------+------+------|
    * | Esc  |   A  |   S  |   D  |   F  |   G  |   H  |   J  |   K  |   L  |   ;  |  '   |
    * |------+------+------+------+------+------+------+------+------+------+------+------|
    * | Shift|   Z  |   X  |   C  |   V  |   B  |   N  |   M  |   ,  |   .  |   /  |Enter |
    * |------+------+------+------+------+------+------+------+------+------+------+------|
    * |Adjust| Ctrl | Alt  | GUI  |Lower |   Space     |Raise | Left | Down |  Up  |Right |
    * `-----------------------------------------------------------------------------------'
    */
    [_COLEMAK] =  LAYOUT (
                                                                                                           RGB_TOG,
    KC_ESC,     KC_Q,    KC_W,    KC_F,    KC_P,    KC_G,    KC_J,    KC_L,    KC_U,    KC_Y,    KC_SCLN, KC_BSPC,
    MO(_NUMS),  KC_A,    KC_R,    KC_S,    KC_T,    KC_D,    KC_H,    KC_N,    KC_E,    KC_I,    KC_O,    KC_ENT,
    SHFT_CAP,   KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_K,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_QUOT ,
    KC_LCTL,    KC_LALT, KC_RALT, KC_LGUI, LOWER,   KC_SPC,           RAISE,   KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT
  ),

    /* Lower
    *                                                                               ╱⎺⎺⎺⎺╲
    *                                                                              | MUTE |
    *                                                                              ╲⎽⎽⎽⎽╱ 
    * ,-----------------------------------------------------------------------------------.
    * |   ~  |   !  |   @  |   #  |   $  |   %  |   ^  |   &  |   *  |   (  |   )  | Bksp |
    * |------+------+------+------+------+------+------+------+------+------+------+------|
    * | Del  |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |   _  |   +  |   {  |   }  |  |   |
    * |------+------+------+------+------+------+------+------+------+------+------+------|
    * |      |  F7  |  F8  |  F9  |  F10 |  F11 |  F12 |ISO ~ |ISO | | Home | End  |      |
    * |------+------+------+------+------+------+------+------+------+------+------+------|
    * |      |      |      |      |      |             |      | Next | Vol- | Vol+ | Play |
    * `-----------------------------------------------------------------------------------'
    */
    [_QWERTY] = LAYOUT (
                                                                                                                 KC_MUTE,
    KC_ESC,     KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC,
    MO(_NUMS),  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_ENT,
    SHFT_CAP,   KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_QUOT ,
    KC_LCTL,    KC_LALT, KC_RALT, KC_LGUI, LOWER,   KC_SPC,           RAISE,   KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT
  ),

    /* Raise
    *                                                                               ╱⎺⎺⎺⎺╲
    *                                                                              | MUTE |
    *                                                                              ╲⎽⎽⎽⎽╱ 
    * ,-----------------------------------------------------------------------------------.
    * |   `  |   1  |   2  |   3  |   4  |   5  |   6  |   7  |   8  |   9  |   0  | Bksp |
    * |------+------+------+------+------+------+------+------+------+------+------+------|
    * | Del  |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |   -  |   =  |   [  |   ]  |  \   |
    * |------+------+------+------+------+------+------+------+------+------+------+------|
    * |      |  F7  |  F8  |  F9  |  F10 |  F11 |  F12 |ISO # |ISO / |Pg Up |Pg Dn |      |
    * |------+------+------+------+------+------+------+------+------+------+------+------|
    * |      |      |      |      |      |      | Mute |      | Next | Vol- | Vol+ | Play |
    * `-----------------------------------------------------------------------------------'
    */
    [_GAME1] = LAYOUT (
                                                                                                           KC_MUTE,
    KC_ESC,     KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    LALT(KC_TAB),    KC_TAB,
    KC_T,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_ENT,
    SHFT_CAP,   KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_QUOT ,
    KC_LCTL,    KC_LALT, KC_RALT, MO(_NUMS), KC_SPC,   KC_LGUI,  KC_SPC,          RAISE,   KC_LEFT, KC_DOWN,   QWERTY
  ),

    /* Adjust (Lower + Raise)
    *                                                                               ╱⎺⎺⎺⎺╲
    *                                                                              | MUTE |
    *                       v-----------------------RGB CONTROL------------------v ╲⎽⎽⎽⎽╱ 
    * ,-----------------------------------------------------------------------------------.
    * |      | Reset|Debug | RGB  |RGBMOD| HUE+ | HUE- | SAT+ | SAT- |BRGTH+|BRGTH-|  Del |
    * |------+------+------+------+------+------+------+------+------+------+------+------| 
    * |      |      |      |      |      |      |      |      |      |      |      |      |
    * |------+------+------+------+------+------+------+------+------+------+------+------|
    * |      |      |      |      |      |      |      |      |      |      |      |      |
    * |------+------+------+------+------+------+------+------+------+------+------+------|
    * |      |      |      |      |      |      | Mute |      |      |      |      |      |
    * `-----------------------------------------------------------------------------------'
    */
    [_GAME2] = LAYOUT (
                                                                                                           KC_MUTE,
    KC_ESC,     KC_Q,    KC_F1,   KC_1,    KC_2,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_U,    KC_O,
    KC_TAB,       KC_X,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_I,
    SHFT_CAP,   KC_Z,    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_COMM, KC_DOT,  KC_SLSH, KC_QUOT ,
    KC_G,     KC_LCTL, KC_RALT, KC_3,    KC_C,    KC_SPC,         KC_V,  RAISE,   KC_LEFT, KC_DOWN,   QWERTY
  ),

    [_NUMS] = LAYOUT (
                                                                                                           KC_MUTE,
    KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_DEL,
    KC_DEL,  KC_F1,   KC_F2,   KC_LBRC, KC_RBRC,   KC_F5,   KC_MINS, S(KC_9), S(KC_0), KC_RBRC, KC_SCLN, KC_BSLS,
    _______, KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_MINS, KC_EQL,  KC_SLSH,  KC_SLSH, _______,
    _______, _______, _______, _______, _______, KC_TAB,           _______, KC_MNXT, KC_VOLD, KC_VOLU, KC_MPLY 
  ),

    [_RAISE] = LAYOUT (
                                                                                                           KC_MUTE,
    KC_TILD, KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC, KC_CIRC, KC_AMPR,     KC_7,   KC_8, KC_9, KC_BSPC,
    KC_DEL,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_MINS,     KC_4,   KC_5, KC_6, KC_PIPE,
    _______, KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  S(KC_NUHS),  KC_1,   KC_2, KC_3,  _______,
    _______,   _______, _______, _______, _______, KC_TAB,           _______,     KC_MNXT,KC_0, KC_VOLU, KC_MPLY
  ),

    [_LOWER] = LAYOUT (
                                                                                                           KC_MUTE,
    KC_GRV,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,    KC_F10,    KC_BSPC,
    KC_DEL,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT,  KC_RGHT, KC_BSLS,
    _______, KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_LBRC, KC_RBRC, KC_EQL, KC_PGDN, _______,
    _______, _______, _______, _______, _______, KC_TAB,           _______, KC_MNXT, KC_VOLD, KC_VOLU, KC_PSCR
  ),

    [_ADJUST] = LAYOUT (
                                                                                                           KC_MUTE,
    KC_A,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    LGUI(KC_F9),   LGUI(KC_F9),    LGUI(KC_F10),    LGUI(KC_F11),
    KC_DEL,  KC_F1,   KC_F2,   QWERTY,   COLEMAK,   KC_F5,   KC_LEFT, GAME1, GAME2,   KC_RGHT,   KC_RGHT, KC_BSLS,
    _______, KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_MINS, KC_EQL,  KC_SLSH, _______, _______,
    _______, _______, _______, _______, _______, KC_TAB,         _______, KC_MNXT, KC_VOLD, KC_VOLU, KC_PSCR
  )
};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    [_COLEMAK]   =  { ENCODER_CCW_CW(KC_VOLD,  KC_VOLU) },
    [_QWERTY]   =  { ENCODER_CCW_CW(KC_VOLD,  KC_VOLU) },
    [_GAME1] =  { ENCODER_CCW_CW(KC_VOLD,  KC_VOLU) },
    [_GAME2]  =  { ENCODER_CCW_CW(KC_VOLD,  KC_VOLU) },
    [_NUMS]   =  { ENCODER_CCW_CW(KC_VOLD,  KC_VOLU) },
    [_RAISE]   =  { ENCODER_CCW_CW(KC_VOLD,  KC_VOLU) },
    [_LOWER] =  { ENCODER_CCW_CW(KC_VOLD,  KC_VOLU) },
    [_ADJUST]  =  { ENCODER_CCW_CW(KC_VOLD,  KC_VOLU) }
};
#endif
