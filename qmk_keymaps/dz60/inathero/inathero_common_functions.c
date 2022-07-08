#ifndef ZACH_COMMON_FUNCTIONS
#define ZACH_COMMON_FUNCTIONS
#include "keymap_colemak.h"
extern keymap_config_t keymap_config;

#undef C
#define C(n)    RCTL(n)
#define CADKEY  RCTL(RALT(KC_DEL))


#define TAPPING_THRESH 150

void tap(uint16_t keycode){
    register_code(keycode);
    unregister_code(keycode);
};

// void persistent_default_layer_set(uint16_t default_layer){
//     eeconfig_update_default_layer(default_layer);
//     default_layer_set(default_layer);
// };

// Automatic number generation of important keywords
enum my_keycodes{
    // Layer numbers
    _QWERTY=0,
    _COLEMAK,
    _QWERTYANKI,
    _FUNCTION,
    _ADJUST,
    _RGBL,
    // These use process_record_user()
    QWERTY= SAFE_RANGE,
    COLEMAK,
    QWERTYANKI,
    SHFT_CAP,
    FN_RAISE,
    ROR_R,
    ROR_Y,
    ROR_N,
    RGBL
};



//#ifdef UNICODE_ENABLE
// Unicode shortcuts

//#endif~~~~~~~~~~~~~~~~~
enum tap_dance_enum{
KC_GESC_BTICK
};

void dance_simple_backtick(qk_tap_dance_state_t *state, void *user_data) {
       if (state->count == 1) {
        tap(KC_ESC);
    }
    else if(state->count == 2){
            tap(KC_GRV);
    }
    else if(state->count >= 3){
        register_code(KC_LSHIFT);
            tap(KC_GRV);
            unregister_code(KC_LSHIFT);
    }
}

qk_tap_dance_action_t tap_dance_actions[] = {
   [KC_GESC_BTICK] = ACTION_TAP_DANCE_FN( dance_simple_backtick)
};

static uint16_t key_timer;
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case QWERTY:
        if(record->event.pressed){
            // persistent_default_layer_set(1UL<<_QWERTY);

            layer_move(_QWERTY);
            //rgblight_setrgb(188,143,143);
        }
        return false;
        break;
    case COLEMAK:
        if(record->event.pressed){
            // persistent_default_layer_set(1UL<<_COLEMAK);

            layer_move(_COLEMAK);
            //rgblight_setrgb(0,254,0);
        }
        return false;
        break;
    case QWERTYANKI:
        if(record->event.pressed){
            layer_move(_QWERTYANKI);
        }
        return false;
        break;
    case RGBL:
        if (record->event.pressed) {
            key_timer = timer_read();
            layer_move(_RGBL);
        }
        else {
            if (timer_elapsed(key_timer) > TAPPING_THRESH){
                layer_off(_RGBL);
                layer_move(_QWERTY);
            }
        }
        return false;
        break;

    case FN_RAISE:
        if (record->event.pressed) {
            key_timer = timer_read();
            layer_move(_FUNCTION);
        }
        else {
            if (timer_elapsed(key_timer) > TAPPING_THRESH){
                layer_off(_FUNCTION);
                layer_move(_QWERTY);
            }
        }
        return false;
        break;
    case ROR_R:

        if(record->event.pressed){
           tap(KC_ENT);
           tap(KC_R);
           tap(KC_E);
           tap(KC_A);
           tap(KC_D);
           tap(KC_Y);
           tap(KC_ENT);
        }
        return false;
        break;
    case ROR_Y:

        if(record->event.pressed){
           tap(KC_ENT);
           tap(KC_Y);
           tap(KC_E);
           tap(KC_A);
           tap(KC_H);
           tap(KC_ENT);
        }
        return false;
        break;
    case ROR_N:

        if(record->event.pressed){
           tap(KC_ENT);
           tap(KC_N);
           tap(KC_O);
           tap(KC_T);
           tap(KC_SPC);
           tap(KC_Y);
           tap(KC_E);
           tap(KC_T);
           tap(KC_ENT);
        }
        return false;
        break;
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
        break;
    // case CPYPST:                                    // One key copy/paste
    //     if(record->event.pressed){
    //         key_timer = timer_read();
    //     } else {
    //         if (timer_elapsed(key_timer) > 152) {   // Hold, copy
    //             register_code(KC_LCTL);
    //             tap(KC_C);
    //             unregister_code(KC_LCTL);
    //             #ifdef AUDIO_ENABLE
    //                 PLAY_SONG(tone_copy);
    //             #endif
    //         } else {                                // Tap, paste
    //             register_code(KC_LCTL);
    //             tap(KC_V);
    //             unregister_code(KC_LCTL);
    //             #ifdef AUDIO_ENABLE
    //                 PLAY_SONG(tone_paste);
    //             #endif
    //         }
    //     }
    //     return false;
    //     break;
  }
  return true;
};

#ifdef AUDIO_ENABLE
void matrix_init_user(void){        // Run once at startup
        _delay_ms(50); // gets rid of tick
        PLAY_SONG(tone_startup);
}

void play_goodbye_tone(void){
  PLAY_SONG(tone_goodbye);
  _delay_ms(150);
}

void shutdown_user(){
    PLAY_SONG(tone_goodbye);
    _delay_ms(150);
    stop_all_notes();
}

void music_on_user(void){           // Run when the music layer is turned on
    PLAY_SONG(tone_startup);
}

void music_off_user(void){          // Run when music is turned off
    PLAY_SONG(tone_goodbye);
}
#endif

#endif
