#pragma once

// #include "config_common.h"

/* key matrix size */
#define MATRIX_ROWS 4
#define MATRIX_COLS 10

/* key matrix pins */
#define MATRIX_ROW_PINS { D7, B5, B4, E6 }
#define MATRIX_COL_PINS { D1, D0, D4, C6, B6, B2, B3, B1, F7, F6 }

// #define MATRIX_ROW_PINS { B1, B6, B2, B3 }
// #define MATRIX_COL_PINS { F4, F5, F6, F7, B5, B4, E6, D7, C6, D4 }

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 0

// #define WS2812_DI_PIN F4
// #ifdef WS2812_DI_PIN
// #define RGBLIGHT_EFFECT_STATIC_GRADIENT
// #define RGBLED_NUM 8
// #define RGBLIGHT_HUE_STEP 20
// #define RGBLIGHT_SAT_STEP 20
// #define RGBLIGHT_VAL_STEP 20
// #endif