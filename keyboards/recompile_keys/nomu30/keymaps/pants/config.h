/* Copyright 2019 Naoto Takai
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

// place overrides here

#define IGNORE_MOD_TAP_INTERRUPT
// Apply the modifier on keys that are tapped during a short hold of a modtap
#define PERMISSIVE_HOLD
// configure the global tapping term (default 200)
#define TAPPING_TERM 165
// enable rapid switch from tap to hold, disables double tap hold auto-repeat
// #define TAPPING_FORCE_HOLD
// #define HOLD_ON_OTHER_KEY_PRESS
// Selects the hold action in more cases than Permissive hold