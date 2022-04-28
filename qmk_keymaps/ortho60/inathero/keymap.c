// Zach Nielsen     Custom Planck Keyboard layout
#include QMK_KEYBOARD_H
#include "zach_common_functions.c"
#include "keymap_steno.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_COLEMAK] = LAYOUT_ortho_5x12( /* Base Layer */
    KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,   KC_6,   KC_7,    KC_8,    KC_9,    KC_0,    KC_BSPC,
    KC_ESC,  KC_Q,    KC_W,    KC_F,    KC_P,    KC_G,   KC_J,   KC_L,    KC_U,    KC_Y,    KC_QUOT, KC_BSPC,
    KC_BSPC, KC_A,    KC_R,    KC_S,    KC_T,    KC_D,   KC_H,   KC_N,    KC_E,    KC_I,    KC_O,    KC_ENT,
    SHFT_CAP, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,   KC_K,   KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
    KC_LCTRL,   TD(SUP), KC_LALT, TD(SUP), TD(LOW), KC_SPC, KC_SPC, TD(RAI), KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT
  ),

  [_QWERTY] = LAYOUT_ortho_5x12( /* Base Layer */
    KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,   KC_6,   KC_7,    KC_8,    KC_9,    KC_0,    KC_BSPC,
    KC_ESC,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,   KC_Y,   KC_U,    KC_I,    KC_O,    KC_P, KC_QUOT,
    KC_BSPC, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,   KC_H,   KC_J,    KC_K,    KC_L,    KC_SCLN,    KC_ENT,
    SHFT_CAP, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,   KC_N,   KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
    KC_LCTRL,   TD(SUP), KC_LALT, TD(SUP), TD(LOW), KC_SPC, KC_SPC, TD(RAI), KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT
  ),
  [_FPS] = LAYOUT_ortho_5x12( /* Base Layer */
    KC_ESC,  KC_1,    KC_2,       KC_3,    KC_4,    KC_5,   KC_6,   KC_7,    KC_8,    KC_9,    KC_0,    KC_F5,
    KC_TAB,  KC_Q,    KC_W,       KC_N,    KC_1,    KC_2,   KC_3,   KC_L,    KC_U,    KC_Y,    KC_QUOT, KC_ENT,
    KC_BSPC, KC_A,    KC_R,       KC_Q,    KC_W,    KC_R,   KC_E,   KC_N,    KC_E,    KC_I,    KC_O,    KC_ENT,
    SHFT_CAP, KC_Z,    KC_M,     KC_A,    KC_S,    KC_D,   KC_F,   KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
    KC_LCTRL,   TD(SUP), KC_LSHIFT,  TD(SUP), KC_3,    KC_C,   KC_SPC, KC_7,    KC_8, KC_DOWN, KC_UP,   COLEMAK
  ),

  [_DEUS] = LAYOUT_ortho_5x12( /* Base Layer */
    KC_ESC,  KC_LCTRL,    KC_2,   KC_3,     KC_4,    KC_5,   KC_6,   KC_7,    KC_8,    KC_9,    KC_PSLS,  KC_KP_PLUS,
    KC_ESC,  KC_Q,    KC_W,   KC_F,     KC_1,    KC_2,   KC_3,   KC_L,    KC_U,    KC_Y,    KC_QUOT, KC_ENT,
    KC_C,   KC_F5,    KC_F6,  KC_F7,    KC_F8,    KC_R,   KC_E,   KC_N,    KC_E,    KC_I,    KC_O,    KC_ENT,
    KC_T,   KC_F1,    KC_F2,  KC_F3,    KC_F4,    KC_F5,   KC_F6,   KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
    KC_I,   KC_1,     KC_2,   KC_3,     KC_4,    KC_LBRC, KC_SPC, KC_7,    KC_8, KC_DOWN, KC_UP,   COLEMAK
  ),
  [_GAMEONE] = LAYOUT_ortho_5x12( /* Base Layer */
    KC_I,       KC_5,     KC_6,    KC_7,    KC_8,    KC_9,   KC_6,   KC_7,    KC_8,    KC_U,    KC_Y,    KC_LCTRL,
    KC_ESC,     KC_1,     KC_2,    KC_3,    KC_4,    KC_G,   KC_J,   KC_L,    KC_U,    KC_Y,    KC_PLUS, KC_P,
    KC_F1,      KC_Q,     KC_W,    KC_E,    KC_R,    KC_G,   KC_H,   KC_N,    KC_E,    KC_I,    KC_O,    KC_J,
    KC_TAB,     KC_A,     KC_S,    KC_D,    KC_F,    KC_G,   KC_K,   KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_B,
    KC_F3,      KC_Z,     KC_X,    TD(SUP), KC_K, KC_SPC, KC_T,   KC_F5,   KC_LEFT, KC_DOWN, KC_UP,   COLEMAK
  ),
  [_GAMETWO] = LAYOUT_ortho_5x12( /* Base Layer */
    KC_ESC,  KC_1,    KC_2,       	KC_4,    KC_5,    KC_6,   KC_7,   KC_7,    KC_8,    KC_9,    KC_0,    KC_F5,
    KC_TAB,  KC_Q,    KC_W,       	KC_1,    KC_2,    KC_3,   KC_3,   KC_L,    KC_U,    KC_Y,    KC_QUOT, KC_ENT,
    KC_BSPC, KC_A,    KC_R,       	KC_Q,    KC_W,    KC_E,   KC_R,   KC_N,    KC_E,    KC_I,    KC_O,    KC_ENT,
    SHFT_CAP, KC_Z,   KC_M,     	KC_A,    KC_S,    KC_D,   KC_F,   KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
    KC_LCTRL, KC_G, KC_LSHIFT,  	KC_X, KC_3,    KC_C,   KC_SPC, KC_LCTRL,    KC_8, KC_DOWN, KC_UP,   COLEMAK
  ),
  [_GAMETHREE] = LAYOUT_ortho_5x12( /* Base Layer */
    KC_TAB,  KC_1,    KC_2,       KC_3,    KC_4,    KC_5,   KC_6,   KC_7,    KC_8,    KC_9,    KC_0,    KC_F5,
    S(KC_TAB),  KC_Q,    KC_W,       KC_F,    KC_1,    KC_2,   KC_3,   KC_L,    KC_U,    KC_Y,    KC_QUOT, KC_ENT,
    KC_BSPC, KC_A,    KC_R,       KC_Q,    KC_W,    KC_E,   KC_R,   KC_N,    KC_E,    KC_I,    KC_O,    KC_ENT,
    SHFT_CAP, KC_Z,    KC_M,     KC_A,    KC_S,    KC_D,   KC_F,   KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
    KC_LCTRL,   TD(SUP), KC_LSHIFT,  TD(SUP), KC_3,    KC_Z,   KC_SPC, KC_7,    KC_8, KC_DOWN, KC_UP,   COLEMAK
  ),

  [_ANKIT] = LAYOUT_ortho_5x12( /* Anki Test and Dev Layer */
    C(KC_B),  C(S(KC_C)), CLOZE_SAME,  C(KC_ENT),  KC_4,    KC_5,   KC_6,   KC_7,    KC_8,    KC_9,     C(KC_1), KC_4,
    C(KC_I),  INL_MATH,   XXXXXXX,      XXXXXXX,    KC_P,    KC_G,   KC_J,   KC_L,    KC_U,    KC_Y,     C(KC_2), KC_3,
    C(KC_U),  XXXXXXX,    XXXXXXX,      XXXXXXX,    KC_T,    KC_D,   KC_H,   KC_N,    KC_E,    KC_I,     C(KC_3), KC_2,
    XXXXXXX,  XXXXXXX,    XXXXXXX,      XXXXXXX,    KC_V,    KC_B,   KC_K,   KC_M,    KC_COMM, C(KC_DEL), S(KC_2), KC_1,
    C(KC_Z),  KC_1,       KC_2,         KC_3,     COLEMAK, KC_SPC, KC_SPC, COLEMAK, KC_LEFT, KC_DOWN,  C(KC_Z), KC_SPC
  ),

   /* Plover layer (http://opensteno.org)
136  * ,-----------------------------------------------------------------------------------.
137  * |   #  |   #  |   #  |   #  |   #  |   #  |   #  |   #  |   #  |   #  |   #  |   #  |
138  * |------+------+------+------+------+------+------+------+------+------+------+------|
139  * |      |   S  |   T  |   P  |   H  |   *  |   *  |   F  |   P  |   L  |   T  |   D  |
140  * |------+------+------+------+------+------+------+------+------+------+------+------|
141  * |      |   S  |   K  |   W  |   R  |   *  |   *  |   R  |   B  |   G  |   S  |   Z  |
142  * |------+------+------+------+------+------+------+------+------+------+------+------|
143  * | Exit |      |      |   A  |   O  |             |   E  |   U  |      |      |      |
144  * `-----------------------------------------------------------------------------------'
145  */
 [_PLOVER] = LAYOUT_ortho_5x12(

  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX ,
  STN_N1,  STN_N2,  STN_N3,  STN_N4,  STN_N5,  STN_N6,  STN_N7,  STN_N8,  STN_N9,  STN_NA,  STN_NB,  STN_NC ,
  STN_FN,  STN_S1,  STN_TL,  STN_PL,  STN_HL,  STN_ST1, STN_ST3, STN_FR,  STN_PR,  STN_LR,  STN_TR,  STN_DR ,
  XXXXXXX, STN_S2,  STN_KL,  STN_WL,  STN_RL,  STN_ST2, STN_ST4, STN_RR,  STN_BR,  STN_GR,  STN_SR,  STN_ZR ,
  COLEMAK, XXXXXXX, XXXXXXX, XXXXXXX, STN_A,   STN_O,   STN_E,   STN_U,   XXXXXXX, STN_PWR, STN_RE1, STN_RE2
 ),


  [_RAISE] = LAYOUT_ortho_5x12( /* RAISE - Numpad and Unicode symbols */
    KC_GRV,  KC_F1,   KC_F2,  KC_F3,    KC_F4,    KC_F5,    KC_F6,   KC_F7,   KC_F8, KC_F9,       KC_F10,       KC_DEL,
    KC_GRV,  KC_F11,  KC_F12, KC_F13,   KC_F14,   XXXXXXX,  XXXXXXX, KC_7,    KC_8, KC_9,         KC_COLN,      _______,
    KC_DEL,  KC_F5,   KC_F6,  KC_F7,    KC_F8,    XXXXXXX,  KC_ENT,  KC_4,    KC_5, LGUI(KC_F9),  LGUI(KC_F10), LGUI(KC_F11),
    SHFT_CAP, KC_F9,  KC_F10, KC_F11,   KC_F12,   XXXXXXX,  KC_SPC,  KC_1,    KC_2, KC_3,         KC_MINS,       KC_PLUS,
    COLEMAK, KC_PIPE, TPUT,   _______,  _______,  KC_TAB,   KC_TAB,  _______,   KC_0, KC_0,       KC_DOT,         KC_PSCR
  ),

  [_LOWER] = LAYOUT_ortho_5x12( /* LOWER - Symbols, Paging, CtrAltDel */
    KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,       KC_8, KC_MINS,  KC_EQL,  KC_DEL,
    KC_TILD, KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC, KC_CIRC, KC_7,       KC_8, KC_LBRC,  KC_RBRC, KC_BSLS,
    KC_DEL,  KC_LBRC, KC_RBRC, KC_MINS, KC_UNDS, KC_HOME, KC_END,  KC_4,       KC_5, LGUI(KC_F9),  LGUI(KC_F10), LGUI(KC_F11),
    SHFT_CAP,  XXXXXXX, C(KC_X), KC_LABK, KC_RABK, XXXXXXX, XXXXXXX, KC_1,     KC_2, KC_3,     KC_COLN, KC_PGDN,
    COLEMAK, _______, _______, _______, _______, KC_TAB,  KC_TAB,  _______,    KC_0, KC_0,     _______, KC_PSCR
  ),

  [_ADJUST] = LAYOUT_ortho_5x12( /* ADJUST - Macros, Layer Switching, Function Keys */
    KC_GRV,  GAMEONE,  GAMETWO, GAMETHREE,KC_4,   KC_5,     KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_BSPC,
    XXXXXXX,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, ANKIT,    KC_NLCK, KC_F1,   KC_F2,   KC_F3,   KC_F4,   XXXXXXX,
    XXXXXXX,  XXXXXXX, XXXXXXX, XXXXXXX, COLEMAK, FPS,      COLEMAK, QWERTY,   KC_F6,   KC_F7,   KC_F8,   XXXXXXX,
    _______, CADKEY,  XXXXXXX, XXXXXXX, GAMEONE,  GAMEONE,  XXXXXXX, PLOVER,   KC_F10,  KC_F11,  KC_F12,  XXXXXXX,
    _______, _______, _______, _______, _______, RESET,     RESET,   _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX
  )
};