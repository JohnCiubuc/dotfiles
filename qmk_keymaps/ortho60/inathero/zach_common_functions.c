#ifndef ZACH_COMMON_FUNCTIONS
#define ZACH_COMMON_FUNCTIONS
#include "keymap_colemak.h"
#include "muse.c"
extern keymap_config_t keymap_config;

#undef C
#define C(n)    RCTL(n)
#define CADKEY  RCTL(RALT(KC_DEL))
                
void tap(uint16_t keycode){
    register_code(keycode);
    unregister_code(keycode);
};

void persistent_default_layer_set(uint16_t default_layer){
    eeconfig_update_default_layer(default_layer);
    default_layer_set(default_layer);
};

// Automatic number generation of important keywords
enum my_keycodes{
    // Layer numbers
    _COLEMAK = 0,
    _QWERTY,
    _UNICODES,
    _FPS,
    _DEUS,
    _GAMEONE,
    _GAMETWO,
    _GAMETHREE,
    _ANKIT,
    _PLOVER,
    _RAISE,
    _LOWER,
    _ADJUST,
    // These use process_record_user()
    COLEMAK = SAFE_RANGE,
    QWERTY,
    FPS,
    DEUS,
    GAMEONE,
    GAMETWO,
    GAMETHREE,
    ANKIT,
    PLOVER,
    EXT_PLV,
    SHFT_CAP,
    CTRLB,
    CPYPST,
    INL_MATH,
    CLOZE_SAME,
    FACE,
    UNIWIN,
    UNILIN,
    DISFACE,
    TFLIP,
    TPUT,
    SHRUG,
    RANDIG,
    LOWER,
    RAISE,

};


#ifdef TAP_DANCE_ENABLE
//#define TAPPING_TERM 100

void dance_raise_press(qk_tap_dance_state_t *state, void *user_data){// Called on each tap
  switch(state->count){      // Only turn the layer on once
    case 1:
        layer_off(_UNICODES);
        layer_on(_RAISE);
        update_tri_layer(_LOWER, _RAISE, _ADJUST);
        break;
  }
};
void dance_raise_lift(qk_tap_dance_state_t *state, void *user_data){ // Called on release
  switch(state->count){
    case 1:         // Normal action. Turn off layers
        layer_off(_RAISE);
        update_tri_layer(_LOWER, _RAISE, _ADJUST);
        layer_off(_UNICODES);
        break;
  }
};
/////////////////////////////////////////////////////////////////////
void dance_lower_press(qk_tap_dance_state_t *state, void *user_data){// Called on tap
  switch(state->count){
    case 1:         // Turn on lower
        layer_off(_UNICODES);
        layer_on(_LOWER);
        update_tri_layer(_LOWER, _RAISE, _ADJUST);
        break;
  }
};
void dance_lower_lift(qk_tap_dance_state_t *state, void *user_data){ // Called on release
  switch(state->count){
    case 1:         // Normal action. Turn off layers
        layer_off(_LOWER);
        update_tri_layer(_LOWER, _RAISE, _ADJUST);
        layer_off(_UNICODES);
        break;
    case 2:         // Turn on _UNICODES layer
        layer_off(_LOWER);
        update_tri_layer(_LOWER, _RAISE, _ADJUST);
        layer_on(_UNICODES);
        #ifdef AUDIO_ENABLE
            PLAY_SONG(tone_ctrl_mod);
        #endif
        break;
  }
};
/////////////////////////////////////////////////////////////////////
void dance_super_press(qk_tap_dance_state_t *state, void *user_data){   // Called on down
    if(state->count == 1){
        register_code(KC_LGUI);
    }
}
void dance_super_done(qk_tap_dance_state_t *state, void *user_data){    // Called on timeout
  switch(state->count){
    case 2:
        register_code(KC_LGUI);
        tap(KC_L);
        unregister_code(KC_LGUI);
        break;
  }
}
void dance_super_lift(qk_tap_dance_state_t *state, void *user_data){        // Called on up
    unregister_code(KC_LGUI);
}

enum tap_dance_indexes{
	    // Tap_Dance nums
    RAI,
    LOW,
    SUP
};

qk_tap_dance_action_t tap_dance_actions[] = {
    [RAI] = ACTION_TAP_DANCE_FN_ADVANCED(dance_raise_press, NULL, dance_raise_lift),
    [LOW] = ACTION_TAP_DANCE_FN_ADVANCED(dance_lower_press, NULL, dance_lower_lift),
    [SUP] = ACTION_TAP_DANCE_FN_ADVANCED(dance_super_press, dance_super_done, dance_super_lift)
};
#endif

//#ifdef UNICODE_ENABLE
// Unicode shortcuts


//#endif

static uint16_t key_timer;
static uint8_t  caps_status = 0;
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case COLEMAK:
        if(record->event.pressed){
            persistent_default_layer_set(1UL<<_COLEMAK);
        }
        return false;
        break;
    case QWERTY:
        if(record->event.pressed){
            persistent_default_layer_set(1UL<<_QWERTY);
        }
        return false;
        break;
    case FPS:
        if(record->event.pressed){
            persistent_default_layer_set(1UL<<_FPS);
        }
        return false;
        break;
    case DEUS:
        if(record->event.pressed){
            persistent_default_layer_set(1UL<<_DEUS);
        }
        return false;
        break;
    case GAMEONE:
        if(record->event.pressed){
            persistent_default_layer_set(1UL<<_GAMEONE);
        }
        return false;
        break;
    case GAMETWO:
        if(record->event.pressed){
            persistent_default_layer_set(1UL<<_GAMETWO);
        }
        return false;
        break;
    case GAMETHREE:
        if(record->event.pressed){
            persistent_default_layer_set(1UL<<_GAMETHREE);
        }
        return false;
        break;
    case ANKIT:
        if(record->event.pressed){
            persistent_default_layer_set(1UL<<_ANKIT);
        }
        return false;
        break;
    case RAISE:
        if(record->event.pressed){
            layer_on(_RAISE);
            update_tri_layer(_LOWER, _RAISE, _ADJUST);

        } else {
            layer_off(_RAISE);
            update_tri_layer(_LOWER, _RAISE, _ADJUST);
        }
        return false;
        break;
    case LOWER:
        if(record->event.pressed){
            layer_on(_LOWER);
            update_tri_layer(_LOWER, _RAISE, _ADJUST);
        } else {
            layer_off(_LOWER);
            update_tri_layer(_LOWER, _RAISE, _ADJUST);
        }
        return false;
        break;
    case SHFT_CAP:
        if(record->event.pressed){
            key_timer = timer_read();               // if the key is being pressed, we start the timer.
            register_code(KC_LSHIFT);
        } else {                                    // this means the key was just released (tap or "held down")
            if(timer_elapsed(key_timer) < 120){     // Time in ms, the threshold we pick for counting something as a tap.
                tap(KC_CAPS);
                if(caps_status == 0){
                    caps_status = 1;
                } else {
                    caps_status = 0;
                }
            }
            unregister_code(KC_LSHIFT);
        }
        return false;
        break;
    case INL_MATH:
        if(record->event.pressed){            // if the key is being pressed, we start the timer.
                register_code(KC_LCTL);
                tap(KC_M);
                unregister_code(KC_LCTL);
                tap(KC_M);
            }
    break;
    case CLOZE_SAME:
        if(record->event.pressed){            // if the key is being pressed, we start the timer.
                register_code(KC_LCTL);
                register_code(KC_LSHIFT);
                register_code(KC_LALT);
                tap(KC_C);
                unregister_code(KC_LALT);
                unregister_code(KC_LSHIFT);
                unregister_code(KC_LCTL);
            }
    break;
    case CTRLB:                                     // Control-B on tap (bold)
        if(record->event.pressed){
            key_timer = timer_read();               // if the key is being pressed, we start the timer.
            register_code(KC_LCTL);
        } else {                                    // this means the key was just released (tap or "held down")
            if (timer_elapsed(key_timer) < 152) {   // Time in ms, the threshold we pick for counting something as a tap.
                tap(KC_B);
                #ifdef AUDIO_ENABLE
                    PLAY_SONG(tone_ctrl_mod);
                #endif
                // #ifdef BACKLIGHT_BREATHING
                //     breathing_period_set(2);
                //     breathing_pulse();
                // #endif
            }
            unregister_code(KC_LCTL);
        }
        return false;
        break;

		case PLOVER:
			if (record->event.pressed) {
            persistent_default_layer_set(1UL<<_PLOVER);
			if (!eeconfig_is_enabled()) {
			eeconfig_init();
			}
			keymap_config.raw = eeconfig_read_keymap();
			keymap_config.nkro = 1;
			eeconfig_update_keymap(keymap_config.raw);
			}
			return false;
		break;
    case EXT_PLV:
      if (record->event.pressed) {
                  persistent_default_layer_set(1UL<<_COLEMAK);

      }
      break;

    case CPYPST:                                    // One key copy/paste
        if(record->event.pressed){
            key_timer = timer_read();
        } else {
            if (timer_elapsed(key_timer) > 152) {   // Hold, copy
                register_code(KC_LCTL);
                tap(KC_C);
                unregister_code(KC_LCTL);
                #ifdef AUDIO_ENABLE
                    PLAY_SONG(tone_copy);
                #endif
            } else {                                // Tap, paste
                register_code(KC_LCTL);
                tap(KC_V);
                unregister_code(KC_LCTL);
                #ifdef AUDIO_ENABLE
                    PLAY_SONG(tone_paste);
                #endif
            }
        }
        return false;
        break;
  }
  return true;
};

void matrix_init_user(void){        // Run once at startup
    #ifdef AUDIO_ENABLE
        _delay_ms(50); // gets rid of tick
        PLAY_SONG(tone_startup);
    #endif
          steno_set_mode(STENO_MODE_BOLT); // or STENO_MODE_BOLT
}

#ifdef AUDIO_ENABLE
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
