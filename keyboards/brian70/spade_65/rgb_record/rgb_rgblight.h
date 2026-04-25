// Copyright 2024 SDK (@sdk66)
// SPDX-License-Identifier: GPL-2.0-or-later

#include "rgb_matrix.h"

bool rgb_matrix_indicators_advanced_rgblight(uint8_t led_min, uint8_t led_max);

// DEPRECATED DEFINES - DO NOT USE
#if defined(RGBLED_NUM) && !defined(RGBLIGHT_LED_COUNT)
#    define RGBLIGHT_LED_COUNT RGBLED_NUM
#endif