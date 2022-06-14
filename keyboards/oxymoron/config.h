#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0x726B
#define PRODUCT_ID      0x6F6D
#define DEVICE_VER      0x0001
#define MANUFACTURER    rainkeebs
#define PRODUCT         Oxymoron

/* key matrix size */
#define MATRIX_ROWS 4
#define MATRIX_COLS 12

/* key matrix pins */
#define MATRIX_ROW_PINS { D6, D5, D4, D3 }
#define MATRIX_COL_PINS { B0, B1, B2, B3, B4, B5, B6, B7, C7, C6, C5, C4 }
#define UNUSED_PINS

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

#define LED_CAPS_LOCK_PIN D2
#define LED_PIN_ON_STATE 1

#define ENCODERS_PAD_A { D0 }
#define ENCODERS_PAD_B { D1 }

/* Set 0 if debouncing isn't needed */
#define DEBOUNCING 5

/* key combination for command */
#define IS_COMMAND() ( \
    keyboard_report->mods == (MOD_BIT(KC_LSHIFT) | MOD_BIT(KC_RSHIFT)) \
)

/* prevent stuck modifiers */
#define PREVENT_STUCK_MODIFIERS
#define USB_POLLING_INTERVAL_MS 1
