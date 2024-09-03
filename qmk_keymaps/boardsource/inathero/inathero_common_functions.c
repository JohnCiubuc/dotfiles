#ifndef INATHERO_FUNCTIONS
#define INATHERO_FUNCTIONS
#include "quantum.h"
#include "print.h"
extern keymap_config_t keymap_config;


int iAdjustLayer = 0;
bool bShiftCap = false;

#undef C
#define C(n)    RCTL(n)
#define CADKEY  RCTL(RALT(KC_DEL))


#define TAPPING_THRESH 150

void tap(uint16_t keycode) {
    register_code(keycode);
    unregister_code(keycode);
};

void persistent_default_layer_set(uint16_t default_layer) {
    eeconfig_update_default_layer(default_layer);
    default_layer_set(default_layer);
};

// Automatic number generation of important keywords
enum my_keycodes {
    // Layer numbers
    _COLEMAK = 0,
    _QWERTY,
    _GAME1,
    _GAME2,
    _GAME3,
    _GAME4,
    _NUMS,
    _FUNS,
    _MIDDLE,
    _QWERTYANKI,
    _FUNCTION,
    _ADJUST,
    _RAISE,
    _LOWER,
    // These use process_record_user()
    QWERTY = SAFE_RANGE,
    COLEMAK,
    GAME1,
    GAME2,
    GAME3,
    GAME4,
    QWERTYANKI,
    SHFT_CAP,
    FN_RAISE,
    LGUI_ROT,
    RAISE,
    LOWER
};


void dance_raise_press(qk_tap_dance_state_t *state, void *user_data) { // Called on each tap

    layer_on(_RAISE);
    update_tri_layer(_LOWER, _RAISE, _ADJUST);

};
void dance_raise_lift(qk_tap_dance_state_t *state, void *user_data) { // Called on release

    layer_off(_RAISE);
    update_tri_layer(_LOWER, _RAISE, _ADJUST);

};
/////////////////////////////////////////////////////////////////////
void dance_lower_press(qk_tap_dance_state_t *state, void *user_data) { // Called on tap

    layer_on(_LOWER);
    update_tri_layer(_LOWER, _RAISE, _ADJUST);

};
void dance_lower_lift(qk_tap_dance_state_t *state, void *user_data) { // Called on release

    layer_off(_LOWER);
    update_tri_layer(_LOWER, _RAISE, _ADJUST);

};

enum tap_dance_indexes {
    // Tap_Dance nums
    RAI,
    LOW
    // SUP
};

qk_tap_dance_action_t tap_dance_actions[] = {
    [RAI] = ACTION_TAP_DANCE_FN_ADVANCED(dance_raise_press, NULL, dance_raise_lift),
    [LOW] = ACTION_TAP_DANCE_FN_ADVANCED(dance_lower_press, NULL, dance_lower_lift),
    // [SUP] = ACTION_TAP_DANCE_FN_ADVANCED(dance_super_press, dance_super_done, dance_super_lift)
};

static uint16_t key_timer;
bool process_record_user(uint16_t keycode, keyrecord_t *record) {




    switch (keycode) {
    case QWERTY:
        if (record->event.pressed)
            layer_move(_QWERTY);
        return false;

    case COLEMAK:
        if (record->event.pressed)
            layer_move(_COLEMAK);
        return false;

    case GAME1:
    print ("GAME1");
        if (record->event.pressed)
            layer_move(_GAME1);
        return false;
    case GAME2:
    print ("GAME2");
        if (record->event.pressed)
            layer_move(_GAME2);
        return false;
    case GAME3:
    print ("GAME3");
        if (record->event.pressed)
            layer_move(_GAME3);
        return false;
    case GAME4:
    print ("GAME4");
        if (record->event.pressed)
            layer_move(_GAME4);
        return false;


    case SHFT_CAP:
        if (record->event.pressed) {
        	if (timer_elapsed(key_timer) < TAPPING_THRESH) {   
                tap(KC_CAPS);
            }
            else
            {
	            key_timer = timer_read();              
	            register_code(KC_LSHIFT);
            }
        } else {           
            unregister_code(KC_LSHIFT);
        }
        return false;


    case RAISE:
        if (record->event.pressed) {
            iAdjustLayer++;
            if (iAdjustLayer >= 2) {
                layer_off(_LOWER);
                layer_on(_ADJUST);
            }
            else
                layer_on(_RAISE);

        }
        else
        {

            iAdjustLayer--;
            layer_off(_RAISE);
        }
        return false;
    case LOWER:
        if (record->event.pressed) {
            iAdjustLayer++;
            if (iAdjustLayer >= 2) {
                layer_off(_RAISE);
                layer_on(_ADJUST);
            }
            else
                layer_on(_LOWER);

        }
        else
        {

            iAdjustLayer--;
            layer_off(_LOWER);
        }
        return false;
    }

    return true;
};


#endif

