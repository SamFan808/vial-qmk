<<<<<<< HEAD
// pants map or Rain vial

#include QMK_KEYBOARD_H
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  LAYOUT( /* Qwerty */
    KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC,
    _______, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_ENTER,
    KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, _______,
    KC_LCTL, _______, KC_LGUI,                   KC_ENT,  KC_SPC,                    KC_RALT, KC_ESC,  _______
  ),
  LAYOUT( /* LAYER 1 */
    KC_GRV,  KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_DEL,
    _______, KC_BSLS, KC_QUOT, KC_MINS, KC_EQL,  KC_LBRC, KC_RBRC, KC_DOWN, KC_UP,   KC_LEFT, KC_RGHT, _______,
    _______, KC_ESC,  _______, KC_PSCR, _______, _______, _______, KC_MSTP, KC_MPLY, KC_MPRV, KC_MNXT, KC_RSFT,
    _______, KC_LGUI, _______,                   _______, _______,                   _______, _______, _______
  ),
  LAYOUT( /* LAYER 2 */
    _______, _______,  _______,  _______, _______, _______, _______, KC_7,    KC_8,    KC_9,    KC_0,    _______,
    KC_ESC,  KC_PIPE, KC_DQUO, KC_UNDS, KC_PLUS, _______, _______, KC_4,    KC_5,    KC_6,    KC_VOLU, KC_ENT,
    _______, _______, _______, _______, _______, _______, KC_0,    KC_1,    KC_2,    KC_3,    KC_VOLD, _______,
    _______, _______, _______,                   _______, _______,                   _______, _______, _______
  ),
  LAYOUT( /* LAYER 3 */
    _______, _______, _______, _______, _______, _______, _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   _______,
    KC_ESC,  _______, _______, _______, _______, _______, _______, KC_F5,   KC_F6,   KC_F7,   KC_F8,   _______,
    KC_LSFT, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_F9,   KC_F10,  KC_F11,  KC_F12,  _______,
    _______, KC_LSFT, KC_B,                      KC_SPC,  KC_C,                      _______, _______, _______
  )
};

// led_config_t g_led_config = { {
//   // Key Matrix to LED Index
//   {0,1,2,3,4,5,6,7,8,9,10,11},
//   {23,22,21,20,19,18,17,16,15,14,13,12},
//   {24,25,26,27,28,29,30,31,32,33,34,35},
//   {45,44,43,42,41,40,39,38,37,36},
// }, {
//   // LED Index to Physical Position
//   {0,0},{20,0},{40,0},{61,0},{81,0},{101,0},{122,0},{142,0},{162,0},{183,0},{203,0},{224,0},
//   {224,21},{203,21},{183,21},{162,21},{142,21},{122,21},{101,21},{81,21},{61,21},{40,21},{20,21},{0,21},
//   {0,42},{20,42},{40,42},{61,42},{81,42},{101,42},{122,42},{142,42},{162,42},{183,42},{203,42},{224,42},
//   {224,64},{203,64},{183,64},{162,64},{122,64},{101,64},{61,64},{40,64},{20,64},{0,64},
//   {10,48},{65,48},{142,48},{210,48},{210,10},{142,10},{65,10},{10,10},
// }, {
//   // LED Index to Flag
//   1,4,4,4,4,4,4,4,4,4,4,1,1,4,4,4,4,4,4,4,4,4,4,1,1,4,4,4,4,4,4,4,4,4,4,1,1,1,1,1,4,4,4,1,1,1,2,2,2,2,2,2,2,2
// } };
=======
#include "MiniVan20221213055608.h"
enum custom_keycodes {
  M_IME = SAFE_RANGE,
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  if (record->event.pressed) {
    switch(keycode) {
      case M_IME:
        SEND_STRING(SS_DOWN(X_LSFT)SS_DOWN(X_LALT));
        return false;
    }
  }
  else {
    switch(keycode) {
      case M_IME:
        SEND_STRING(SS_UP(X_LSFT)SS_UP(X_LALT));
        return false;
    }
  }
  return true;
};
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT(KC_TAB, KC_Q, KC_W, KC_F, KC_P, KC_B, KC_J, KC_L, KC_U, KC_Y, KC_SCLN, KC_BSPC,
          LCTL_T(KC_ESC), KC_A, KC_R, KC_S, KC_T, KC_G, KC_K, KC_N, KC_E, KC_I, KC_O, RSFT_T(KC_ENT),
          OSM(MOD_LSFT), KC_X, KC_C, KC_D, KC_V, KC_Z, KC_M, KC_H, KC_COMM, KC_DOT, KC_SLSH, KC_QUOT,
          LT(2, KC_LEFT), TG(1), KC_LGUI, KC_NO, LT(3, KC_ENT), LT(1, KC_SPC), RALT_T(KC_DOWN), RGUI_T(KC_UP), KC_NO, RCTL_T(KC_RIGHT)),

  [1] = LAYOUT(KC_GRV, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_TRNS,
          KC_TAB, KC_LPRN, KC_RPRN, KC_LBRC, KC_RBRC, KC_TRNS, KC_PLUS, KC_1, KC_2, KC_3, KC_ASTR, KC_TRNS,
          KC_TRNS, KC_TRNS, KC_TRNS, KC_NO, KC_TRNS, KC_TRNS, KC_MINS, KC_EQL, KC_TRNS, KC_TRNS, KC_TRNS, KC_WH_U, KC_TRNS,
          KC_TRNS, KC_TRNS, KC_NO, KC_0, KC_SPC, KC_WH_L, KC_WH_D, KC_NO, KC_WH_R),

  [2] = LAYOUT(KC_BTN2, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_PGUP, KC_HOME, KC_UP, KC_END, KC_COLN, RALT(KC_BSPC),
          KC_TRNS, KC_NO, KC_NO, KC_NO, KC_BSPC, KC_NO, KC_PGDN, KC_LEFT, KC_DOWN, KC_RIGHT, KC_ENT, RALT(KC_D),
          KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_BTN1, RALT(KC_LEFT), RALT(KC_RIGHT), KC_MS_U, RALT(KC_B), RALT(KC_F),
          KC_TRNS, KC_TRNS, KC_TRNS, KC_NO, LALT(KC_DEL), KC_DEL, KC_MS_L, KC_MS_D, KC_NO, KC_MS_R),

  [3] = LAYOUT(KC_TILD, KC_EXLM, KC_AT, KC_HASH, KC_DLR, KC_PERC, KC_CIRC, KC_AMPR, KC_NO, KC_NO, KC_TRNS, KC_TRNS,
          KC_CAPS, KC_LCBR, KC_RCBR, KC_LPRN, KC_RPRN, KC_NO, KC_PLUS, KC_DLR, KC_PIPE, KC_BSLS, KC_DQT,
          KC_TRNS, KC_NO, KC_SLCT, KC_PAUS, KC_VOLD, KC_VOLU, KC_MUTE, KC_MINS, KC_EQL, KC_LT, KC_GT, KC_QUES,
          KC_TRNS, KC_TRNS, QK_BOOT, KC_NO, KC_NO, KC_NO, KC_UNDS, KC_TRNS, KC_TRNS, KC_NO, KC_TRNS)
};

void process_indicator_update(layer_state_t state, uint8_t usb_led) {
  for (int i = 0; i < 3; i++) {
    setrgb(0, 0, 0, (LED_TYPE *)&led[i]);
  }
  if (usb_led & (1<<USB_LED_CAPS_LOCK)) {
  setrgb(255, 0, 0, (LED_TYPE *)&led[0]);
}

    if (state & (1<<1)) {
  setrgb(255, 0, 255, (LED_TYPE *)&led[0]);
}

  if (state & (1<<2)) {
  setrgb(0, 0, 255, (LED_TYPE *)&led[1]);
}

    if (state & (1<<3)) {
  setrgb(255, 255, 0, (LED_TYPE *)&led[1]);
}

  if (state & (1<<1)) {
  setrgb(10, 255, 125, (LED_TYPE *)&led[2]);
}


  rgblight_set();
};

void keyboard_post_init_user(void) {
  process_indicator_update(layer_state, host_keyboard_leds());
};

void led_set_user(uint8_t usb_led) {
  process_indicator_update(layer_state, host_keyboard_leds());
};

layer_state_t layer_state_set_user(layer_state_t state) {
  process_indicator_update(state, host_keyboard_leds());
    return state;
};

/* const uint16_t PROGMEM test_combo1[] = {KC_D, KC_V, COMBO_END}; */
/* const uint16_t PROGMEM test_combo2[] = {KC_C, KC_D, COMBO_END}; */
/* const uint16_t PROGMEM test_combo3[] = {KC_C, KC_X, COMBO_END}; */
/* const uint16_t PROGMEM test_combo4[] = {KC_COMM, KC_H, COMBO_END}; */
/* combo_t key_combos[COMBO_COUNT] = { */
/*     COMBO(test_combo1, LGUI(KC_V)), */
/*     COMBO(test_combo2, LGUI(KC_C)), */
/*     COMBO(test_combo3, LGUI(KC_X)), */
/*     COMBO(test_combo4, KC_MINS), */
/* }; */
>>>>>>> 105915582a4cfc15a9422f9633eccc656dd1cbb2
