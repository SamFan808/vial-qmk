/* Copyright 2021 projectcain
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#define ENCODERS_PAD_A { D6 }
#define ENCODERS_PAD_B { D7 }
#define ENCODER_RESOLUTION 2
#define COMBO_COUNT 9
#define COMBO_TERM 50
#define TAPPING_FORCE_HOLD
/* WS2812 RGB LEDs */
#ifdef RGBLIGHT_ENABLE
  #define RGB_DI_PIN D0
  #define RGBLED_NUM 13   // Number of LEDs

  #define RGBLIGHT_ANIMATIONS
#endif