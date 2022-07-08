#include QMK_KEYBOARD_H

#include "inathero_common_functions.c"

#define XXXX XXXXXXX


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_COLEMAK] = LAYOUT_ortho_4x12(
    KC_ESC,     KC_Q,    KC_W,    KC_F,    KC_P,    KC_G,    KC_J,    KC_L,    KC_U,    KC_Y,    KC_SCLN, KC_BSPC,
    MO(_NUMS),  KC_A,    KC_R,    KC_S,    KC_T,    KC_D,    KC_H,    KC_N,    KC_E,    KC_I,    KC_O,    KC_ENT,
    SHFT_CAP,   KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_K,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_QUOT ,
    KC_LCTL,    KC_LALT, KC_RALT, KC_LGUI, LOWER,   KC_SPC,  KC_SPC,  RAISE,   KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT
  ),

  [_QWERTY] = LAYOUT_ortho_4x12(
    KC_ESC,     KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC,
    MO(_NUMS),  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_ENT,
    SHFT_CAP,   KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_QUOT ,
    KC_LCTL,    KC_LALT, KC_RALT, KC_LGUI, LOWER,   KC_SPC,  KC_SPC,  RAISE,   KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT
  ),

  [_GAME1] = LAYOUT_ortho_4x12(
    KC_ESC,     KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    LALT(KC_TAB),    KC_TAB,
    KC_T,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_ENT,
    SHFT_CAP,   KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_QUOT ,
    KC_LCTL,    KC_LALT, KC_RALT, MO(_NUMS), KC_SPC,   KC_LGUI,  KC_SPC,  RAISE,   KC_LEFT, KC_DOWN, KC_UP,   QWERTY
  ),
  [_GAME2] = LAYOUT_ortho_4x12(
    KC_ESC,     KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC,
    KC_TAB, 	KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_ENT,
    SHFT_CAP,   KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_QUOT ,
    KC_LCTL,    KC_LALT, KC_RALT, MO(_NUMS), KC_SPC,   KC_SPC,  KC_SPC,  RAISE,   KC_LEFT, KC_DOWN, KC_UP,   QWERTY
  ),
  [_NUMS] = LAYOUT_ortho_4x12(
  KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_DEL,
  KC_DEL,  KC_F1,   KC_F2,   KC_LBRC, KC_RBRC,   KC_F5,   KC_MINS, S(KC_9), S(KC_0), KC_RBRC, KC_SCLN, KC_BSLS,
  _______, KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_MINS, KC_EQL,  KC_SLSH,  KC_SLSH, _______,
  _______, _______, _______, _______, _______, KC_TAB, KC_TAB, _______, KC_MNXT, KC_VOLD, KC_VOLU, KC_MPLY ),

  [_RAISE] = LAYOUT_ortho_4x12(
  KC_TILD, KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC, KC_CIRC, KC_AMPR,     KC_7,   KC_8, KC_9, KC_BSPC,
  KC_DEL,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_MINS,     KC_4,   KC_5, KC_6, KC_PIPE,
  _______, KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  S(KC_NUHS),  KC_1,   KC_2, KC_3,  _______,
  RESET,   _______, _______, _______, _______, KC_TAB, KC_TAB,   _______,     KC_MNXT,KC_0, KC_VOLU, KC_MPLY
  ),

  [_LOWER] = LAYOUT_ortho_4x12(
 KC_GRV,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,    KC_F10,    KC_BSPC,
 KC_DEL,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT,  KC_RGHT, KC_BSLS,
 _______, KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_LBRC, KC_RBRC, KC_EQL, KC_PGDN, _______,
 _______, _______, _______, _______, _______, KC_TAB, KC_TAB, _______, KC_MNXT, KC_VOLD, KC_VOLU, KC_PSCR
  ),

  [_ADJUST] = LAYOUT_ortho_4x12(
 KC_A,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    LGUI(KC_F9),   LGUI(KC_F9),    LGUI(KC_F10),    LGUI(KC_F11),
 KC_DEL,  KC_F1,   KC_F2,   QWERTY,   COLEMAK,   KC_F5,   KC_LEFT, GAME1, GAME2,   KC_RGHT,   KC_RGHT, KC_BSLS,
 _______, KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_MINS, KC_EQL,  KC_SLSH, _______, _______,
 RESET, _______, _______, _______, _______, KC_TAB, KC_TAB, _______, KC_MNXT, KC_VOLD, KC_VOLU, KC_PSCR
  )
}; 

