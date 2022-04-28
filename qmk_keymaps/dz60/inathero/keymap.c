#include QMK_KEYBOARD_H
#include "inathero_common_functions.c"

#define XXXX XXXXXXX

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  /* 0: qwerty */
  /*┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
    │Esc│ 1 │ 2 │ 3 │ 4 │ 5 │ 6 │ 7 │ 8 │ 9 │ 0 │ - │ = │ Bcksp │
    ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
    │ Tab │ Q │ W │ E │ R │ T │ Y │ U │ I │ O │ P │ [ │ ] │ Ent │
    ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │
    │ Ctrl │ A │ S │ D │ F │ G │ H │ J │ K │ L │ ; │ ' │ \ │    │
    ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤
    │Shft│ ` │ Z │ X │ C │ V │ B │ N │ M │ , │ . │ / │  Shift   │
    ├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤fffffffff
    │ Fn │Alt │Cmd │         Space          │Cmd │Hypr│Ctrl│Fn 2│
    └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘*/
  [_QWERTY] = LAYOUT_64_ansi( /* Layer 0: Qwerty */
        TD(KC_GESC_BTICK), KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS,   KC_EQL,     KC_BSPC,
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC,   KC_RBRC,    KC_BSLS,
        KC_BSPC, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,               KC_ENT,
        SHFT_CAP, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLASH,KC_RSFT,     RGBL,      FN_RAISE,
        KC_LCTL, KC_LALT, KC_LGUI,                     KC_SPC,                           KC_RALT, KC_LEFT, KC_DOWN,     KC_UP,   KC_RIGHT
    ),
    [_COLEMAK] = LAYOUT_64_ansi( /* Layer 0: Qwerty */
        TD(KC_GESC_BTICK),    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,     KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,    KC_BSPC,
        KC_TAB,     KC_Q,    KC_W,    KC_F,    KC_P,    KC_G,    KC_J,     KC_L,    KC_U,    KC_Y,    KC_SCLN, KC_LBRC, KC_RBRC,   KC_BSLS,
        KC_BSPC,    KC_A,    KC_R,    KC_S,    KC_T,    KC_D,    KC_H,     KC_N,    KC_E,    KC_I,    KC_O,    KC_QUOT,            KC_ENT,
        SHFT_CAP,   KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_K,     KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT, RGBL,  FN_RAISE,
        KC_LCTL, KC_LALT, KC_LGUI,                     KC_SPC,              KC_RALT, KC_LEFT, KC_DOWN,     KC_UP,   KC_RIGHT
    ),
    [_FUNCTION] = LAYOUT_64_ansi( /* Layer 0: Qwerty */
        RESET,       KC_F1,   KC_F2,  KC_F3,  KC_F4,      KC_F5, KC_F6,   KC_F7,      KC_F8,   KC_F9,  KC_F10,    KC_F11,KC_F12, KC_DEL,
        KC_HOME,       KC_F11,  KC_F12, KC_F13, QWERTY, XXXX,  XXXX,    XXXX,       KC_7,    KC_8,   KC_9,      XXXX,   XXXX,   XXXX,
        KC_INSERT,       XXXX,    XXXX,   XXXX,   QWERTY,     XXXX,  XXXX,    COLEMAK,    KC_4,    KC_5,   KC_6,      XXXX,           KC_ENT,
        SHFT_CAP,    XXXX,    XXXX,   XXXX,   XXXX,       XXXX,  XXXX,    XXXX,       KC_1,    KC_2,   KC_3,      KC_RSFT,COLEMAK, COLEMAK,
        XXXX,      KC_LALT,    KC_LGUI,                    KC_0,                                XXXX,   XXXX,      XXXX,   XXXX,   KC_PSCR
    ),
    [_RGBL] = LAYOUT_64_ansi( /* Layer 0: Qwerty */
        RGB_TOG,            RGB_MODE_FORWARD,    KC_F2,             KC_F3,              KC_F4,      KC_F5, KC_F6,   KC_F7,      KC_F8,   KC_F9,  KC_F10,    LGUI(KC_F9),LGUI(KC_F10), LGUI(KC_F11),
        RGB_HUI,            RGB_SAI,             RGB_VAI,           XXXX,               QWERTYANKI, XXXX,  XXXX,    XXXX,       XXXX,    XXXX,   XXXX,      XXXX,   XXXX,   XXXX,
        RGB_HUD,            RGB_SAD,             RGB_VAD,           XXXX,               QWERTY,     XXXX,  XXXX,    COLEMAK,    XXXX,    XXXX,   XXXX,      XXXX,           KC_ENT,
        SHFT_CAP,            RGB_MODE_PLAIN,      RGB_MODE_SWIRL,    RGB_MODE_RAINBOW,   XXXX,       XXXX,  XXXX,    XXXX,       XXXX,    XXXX,   XXXX,      KC_RSFT,QWERTY, QWERTY,
        XXXX,              XXXX,                XXXX,                    QWERTY,                                XXXX,   XXXX,      XXXX,   XXXX,   FN_RAISE
    )

};