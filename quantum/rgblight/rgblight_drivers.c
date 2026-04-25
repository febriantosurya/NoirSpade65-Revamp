// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include "rgblight_drivers.h"
#include <stddef.h>

#if defined(RGBLIGHT_WS2812)
#    include "ws2812.h"

const rgblight_driver_t rgblight_driver = {
    .init          = ws2812_init,
    .set_color     = ws2812_set_color,
    .set_color_all = ws2812_set_color_all,
    .flush         = ws2812_flush,
};

#elif defined(RGBLIGHT_APA102)
#    include "apa102.h"

const rgblight_driver_t rgblight_driver = {
    .init          = apa102_init,
    .set_color     = apa102_set_color,
    .set_color_all = apa102_set_color_all,
    .flush         = apa102_flush,
};

#elif defined(RGBLIGHT_CUSTOM)
static void rgblight_custom_noop(void) {}
static void rgblight_custom_set_color(int index, uint8_t red, uint8_t green, uint8_t blue) {}
static void rgblight_custom_set_color_all(uint8_t red, uint8_t green, uint8_t blue) {}
const rgblight_driver_t rgblight_driver = {
    .init          = rgblight_custom_noop,
    .set_color     = rgblight_custom_set_color,
    .set_color_all = rgblight_custom_set_color_all,
    .flush         = rgblight_custom_noop,
};
#endif
