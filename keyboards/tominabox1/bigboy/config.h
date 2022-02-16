/* Copyright 2022 tominabox1
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

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID 0x7431
#define PRODUCT_ID 0x6262
#define DEVICE_VER 0x0001
#define MANUFACTURER tominabox1
#define PRODUCT BigBoy

/* key matrix size */
#define DIRECT_PINS { \
    { D0, B1, B0, C7 }, \
    { B7, B2, B3, NO_PIN } \
}

#define UNUSED_PINS

#define ENCODERS_PAD_A { B6 }
#define ENCODERS_PAD_B { C6 }

#define RGB_DI_PIN B5

#ifdef RGB_DI_PIN
#define RGBLIGHT_ANIMATIONS
#define RGBLED_NUM 5
#define RGBLIGHT_HUE_STEP 8
#define RGBLIGHT_SAT_STEP 8
#define RGBLIGHT_VAL_STEP 8
#endif
