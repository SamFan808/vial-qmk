/*2023 OTTIMO

 */
#include QMK_KEYBOARD_H

enum layers {
  _BASE,
  _NAV,
  _FUN,
  _NUM,
  _MOS,
};

// enum combos {
//   UI_BSPC,
//   DG_DEL,
//   QW_ESC,
//   CV_ENT,
//   DF_SPC,
//   JK_SPC,
//   SD_TAB,
//   EF_ALT
// };

// const uint16_t PROGMEM ui_combo[] = {KC_U, KC_I, COMBO_END};
// const uint16_t PROGMEM dg_combo[] = {KC_D, KC_G, COMBO_END};
// const uint16_t PROGMEM qw_combo[] = {KC_Q, KC_W, COMBO_END};
// const uint16_t PROGMEM cv_combo[] = {KC_C, KC_V, COMBO_END};
// const uint16_t PROGMEM df_combo[] = {KC_D, LT(_NAV, KC_F), COMBO_END};
// const uint16_t PROGMEM jk_combo[] = {LT(_NUM, KC_J), LT(_FUN, KC_K), COMBO_END};
// const uint16_t PROGMEM sd_combo[] = {LT(_MOS, KC_S), KC_D, COMBO_END};
// const uint16_t PROGMEM ef_combo[] = {KC_E, LT(_NAV, KC_F), COMBO_END};

// combo_t key_combos[COMBO_COUNT] = {
//   [UI_BSPC] = COMBO(ui_combo,KC_BSPC),
//   [DG_DEL] = COMBO(dg_combo,KC_DEL),
//   [QW_ESC] = COMBO(qw_combo,KC_ESC),
//   [CV_ENT] = COMBO(cv_combo,KC_ENT),
//   [DF_SPC] = COMBO(df_combo,KC_SPC),
//   [JK_SPC] = COMBO(jk_combo,KC_SPC),
//   [SD_TAB] = COMBO(sd_combo,KC_TAB),
//   [EF_ALT] = COMBO(ef_combo,KC_LALT)
// };

// enum custom_keycodes {
//     DECIM_DEC = SAFE_RANGE,
//     DECIM_INC,
// };

// bool process_record_user(uint16_t keycode, keyrecord_t *record) {
//     switch (keycode) {
//     case DECIM_DEC:
//         if (record->event.pressed) {
//             tap_code16(KC_LALT);
//             tap_code16(KC_H);
//             tap_code16(KC_9);
//         }   else {
//         }
//         break;

//     case DECIM_INC:
//         if (record->event.pressed) {
//             tap_code16(KC_LALT);
//             tap_code16(KC_H);
//             tap_code16(KC_0);
//         }   else {
//         }
//         break;

//     }
//     return true;
// };

// #define NAV_F LT(_NAV, KC_F)
// #define FUN_K LT(_FUN, KC_K)
// #define NUM_J LT(_NUM, KC_J)
// #define MOS_S LT(_MOS, KC_S)
// #define SH_A  LSFT_T(KC_A)
// #define SH_QU LSFT_T(KC_QUOT)
// #define CTL_L LCTL_T(KC_L)
// #define CTL_Z LCTL_T(KC_Z)
// #define ALT_ENT LALT(KC_ENT)
// #define ALT_TAB LALT(KC_TAB)
// #define CTL_SFT LCTL(KC_LSFT)
// #define UNDO LCTL(KC_Z)
// #define CNV_DLR LCTL(LSFT(KC_4))
// #define CNV_PCT LCTL(LSFT(KC_5))

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

	[_BASE] = LAYOUT(
		KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P,
		KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_QUOTE,
		KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT,
    	KC_LCTL, KC_SPC, KC_SPC, KC_SPC, KC_SPC, KC_SPC, KC_RALT
    ),

	[_NAV] = LAYOUT(
		KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P,
		KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_QUOTE,
		KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT,
    	KC_LCTL, KC_SPC, KC_SPC, KC_SPC, KC_SPC, KC_SPC, KC_RALT
    ),

	[_FUN] = LAYOUT(
		KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P,
		KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_QUOTE,
		KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT,
    	KC_LCTL, KC_SPC, KC_SPC, KC_SPC, KC_SPC, KC_SPC, KC_RALT
    ),

  [_NUM] = LAYOUT(
		KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P,
		KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_QUOTE,
		KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT,
    	KC_LCTL, KC_SPC, KC_SPC, KC_SPC, KC_SPC, KC_SPC, KC_RALT
    ),

	[_MOS] = LAYOUT(
		KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P,
		KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_QUOTE,
		KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT,
    	KC_LCTL, KC_SPC, KC_SPC, KC_SPC, KC_SPC, KC_SPC, KC_RALT
    )

};

// LEADER_EXTERNS();

// void matrix_scan_user(void) {
//   LEADER_DICTIONARY() {
//     leading = false;
//     leader_end();

//     SEQ_ONE_KEY(KC_L) {
//       SEND_STRING("=VLOOKUP(");
//     }
//     SEQ_ONE_KEY(KC_C) {
//       SEND_STRING("=CONCATENATE(");
//     }        
//   }
// }

// bool get_tapping_force_hold(uint16_t keycode, keyrecord_t *record) {
//     switch (keycode) {
//         case LT(_NAV, KC_F):
//             return true;
//         case LT(_FUN, KC_K):
//             return true;
//         case LT(_NUM, KC_J):
//             return true;
//         case LT(_MOS, KC_S):
//             return true;
//         default:
//             return false;
//     }
// }

// uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
//     switch (keycode) {
//         case LSFT_T(KC_A):
//             return 120;
//         case LCTL_T(KC_L):
//             return 120;
//         default:
//             return TAPPING_TERM;
//     }
// }
