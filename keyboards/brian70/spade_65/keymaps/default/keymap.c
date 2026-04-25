// Copyright 2024 SDK (@sdk66)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H
#include "rgb_record/rgb_record.h"

enum layers {
    _BL = 0,
    _FL,
    _MBL,
    _MFL,
    _FBL, 
    _FFL,
    _FMBL,
    _FMFL,
    _DEFA
};

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [_BL] = LAYOUT( /* win Base */
        KC_ESC,   KC_1,     KC_2,     KC_3,     KC_4,    KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,  KC_EQL,   KC_BSPC,  KC_MUTE,
        KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,    KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_LBRC,  KC_RBRC,  KC_BSLS,  KC_DEL,
        KC_CAPS,  KC_A,     KC_S,     KC_D,     KC_F,    KC_G,     KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,  KC_NUBS,  KC_ENT,   KC_PGUP, 
        KC_LSFT,  KC_Z,     KC_X,     KC_C,     KC_V,    KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,             KC_SLSH,  KC_RSFT,  KC_UP,    KC_PGDN,
        KC_LCTL,  KC_LCMD,  KC_LALT,  KC_SPC,   KC_SPC,  KC_SPC,   KC_SPC,                       MO(_FL),            KC_RALT,  KC_LEFT,  KC_DOWN,  KC_RGHT
    ),  

    [_FL] = LAYOUT( /* win FN */
        KC_GRV,   KC_F1,    KC_F2,    KC_F3,    KC_F4,   KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_PSCR,   RL_MOD,   _______,
        _______,  KC_BT1,   KC_BT2,   KC_BT3,   _______, KC_USB,   _______,  _______,  _______,  _______,  KC_2G4,   _______,  _______,  RM_NEXT,  RM_TOGG,
        _______,  KC_NO,    _______,  _______,  _______, _______,  _______,  _______,  _______,  _______,  _______,  _______,  RM_NEXT,  _______,  KC_HOME,
        _______,  RM_TOGG,  LED_TOG,  _______,  _______, _______,  _______,  _______,  _______,  RM_HUEU,            _______,  KC_RSFT,  RM_VALU,  KC_END,
        KC_FTOG,  GU_TOGG,  TG(_MBL), EE_CLR,   EE_CLR,  EE_CLR,   EE_CLR,                       _______,            KC_RCTL,  RM_SPDD,  RM_VALD,  RM_SPDU
    ),

    [_MBL] = LAYOUT(
        KC_ESC,   KC_1,     KC_2,     MO(_MFL), MO(_FBL),MO(_FFL), MO(_FMBL),MO(_FMFL),KC_8,      KC_9,     KC_0,     KC_MINS,  KC_EQL,   KC_BSPC,  KC_MUTE,
        KC_TAB,   KC_Q,     KC_WAKE,  KC_E,     KC_R,    KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_PWR,   KC_LBRC,  KC_RBRC,  KC_BSLS,  KC_DEL,
        KC_CAPS,  KC_A,     KC_SLEP,  KC_D,     KC_F,    KC_G,     KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,  KC_NUBS,  KC_ENT,   KC_PGUP, 
        KC_LSFT,  KC_Z,     KC_X,     KC_C,     KC_V,    KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,             KC_SLSH,  KC_RSFT,  MS_UP,    KC_PGDN,
        KC_LCTL,  KC_LALT,  KC_LCMD,  MS_BTN1,  MS_BTN1,  MS_BTN1,  MS_BTN1,                    MO(_MFL),           MS_BTN2,   MS_LEFT,   MS_DOWN,   MS_RGHT
    ),

    [_MFL] = LAYOUT(
        KC_GRV,   KC_F1,    KC_F2,    KC_F3,    KC_F4,   KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,   RL_MOD,   _______,
        _______,  KC_BT1,   KC_BT2,   KC_BT3,   _______, KC_USB,   _______,  _______,  _______,  _______,  KC_2G4,   _______,  _______,  RM_NEXT,  _______,
        _______,  TO(_BL),  KC_NO,    _______,  _______, _______,  _______,  _______,  _______,  _______,  _______,  _______,  RM_NEXT,  _______,  KC_HOME,
        _______,  RM_TOGG,  LED_TOG,  _______,  _______, _______,  _______,  _______,  _______,  RM_HUEU,            _______,  MO(_DEFA),RM_VALU,  KC_END,
        KC_FTOG,  _______,  _______,  EE_CLR,   EE_CLR,  EE_CLR,   EE_CLR,                       _______,            KC_RCTL,  RM_SPDD,  RM_VALD,  RM_SPDU
    ),

    [_FBL] = LAYOUT(
        KC_ESC,   KC_F1,    KC_F2,    KC_F3,    KC_F4,   KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,   KC_BSPC,  KC_MUTE,
        KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,    KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_LBRC,  KC_RBRC,  KC_BSLS,  KC_DEL,
        KC_CAPS,  KC_A,     KC_S,     KC_D,     KC_F,    KC_G,     KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,  KC_NUBS,  KC_ENT,   KC_PGUP, 
        KC_LSFT,  KC_Z,     KC_X,     KC_C,     KC_V,    KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,             KC_SLSH,  KC_RSFT,  KC_UP,    KC_PGDN,
        KC_LCTL,  KC_LCMD,  KC_LALT,  KC_SPC,   KC_SPC,  KC_SPC,   KC_SPC,                       MO(_FFL),           KC_RALT,  KC_LEFT,  KC_DOWN,  KC_RGHT
    ),  

    [_FFL] = LAYOUT( 
        KC_GRV,   KC_MYCM,  KC_WHOM,  KC_MAIL,  KC_CALC, KC_MSEL,  KC_MSTP,  KC_MPRV,  KC_MPLY,  KC_MNXT,  KC_MUTE,  KC_VOLD,  KC_VOLU,  RL_MOD,   _______,
        _______,  KC_BT1,   KC_BT2,   KC_BT3,   _______, KC_USB,   _______,  _______,  _______,  _______,  KC_2G4,   _______,  _______,  RM_NEXT,  _______,
        _______,  KC_NO,    TO(_FMBL),_______,  _______, _______,  _______,  _______,  _______,  _______,  _______,  _______,  RM_NEXT,  _______,  KC_HOME,
        _______,  RM_TOGG,  LED_TOG,  _______,  _______, _______,  _______,  _______,  _______,  RM_HUEU,            _______,  MO(_DEFA),RM_VALU,  KC_END,
        KC_FTOG,  GU_TOGG,  _______,  EE_CLR,   EE_CLR,  EE_CLR,   EE_CLR,                       _______,            KC_RCTL,  RM_SPDD,  RM_VALD,  RM_SPDU
    ),

    [_FMBL] = LAYOUT(
        KC_ESC,   KC_F1,    KC_F2,    KC_F3,    KC_F4,   KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,   KC_BSPC,  KC_MUTE,
        KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,    KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_LBRC,  KC_RBRC,  KC_BSLS,  KC_DEL,
        KC_CAPS,  KC_A,     KC_S,     KC_D,     KC_F,    KC_G,     KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,  KC_NUBS,  KC_ENT,   KC_PGUP, 
        KC_LSFT,  KC_Z,     KC_X,     KC_C,     KC_V,    KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,             KC_SLSH,  KC_RSFT,  KC_UP,    KC_PGDN,
        KC_LCTL,  KC_LALT,  KC_LCMD,  KC_SPC,   KC_SPC,  KC_SPC,   KC_SPC,                       MO(_FMFL),          KC_RCMD,  KC_LEFT,  KC_DOWN,  KC_RGHT
    ),

    [_FMFL] = LAYOUT(
        KC_GRV,   KC_BRID,  KC_BRIU,  KC_F3,    KC_F4,   RM_VALD,  RM_VALU,  KC_MPRV,  KC_MPLY,  KC_MNXT,  KC_MUTE,  KC_VOLD,  KC_VOLU,  RL_MOD,   _______,
        _______,  KC_BT1,   KC_BT2,   KC_BT3,   _______, KC_USB,   _______,  _______,  _______,  _______,  KC_2G4,   _______,  _______,  RM_NEXT,  _______,
        _______,  TO(_FBL), KC_NO,    _______,  _______, _______,  _______,  _______,  _______,  _______,  _______,  _______,  RM_NEXT,  _______,  KC_HOME,
        _______,  RM_TOGG,  LED_TOG,  _______,  _______, _______,  _______,  _______,  _______,  RM_HUEU,            _______,  MO(_DEFA),RM_VALU,  KC_END,
        KC_FTOG,  _______,  _______,  EE_CLR,   EE_CLR,  EE_CLR,   EE_CLR,                       _______,            KC_RCTL,  RM_SPDD,  RM_VALD,  RM_SPDU
    ),

    [_DEFA] = LAYOUT(
        _______,  _______,  _______,  _______,  _______, _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,
        _______,  _______,  _______,  _______,  _______, _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  QK_BOOT,
        _______,  _______,  _______,  _______,  _______, _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,
        _______,  _______,  _______,  _______,  _______, _______,  _______,  _______,  _______,  _______,            _______,  _______,  _______,  _______,
        _______,  _______,  _______,  _______,  _______, _______,  _______,                      _______,            _______,  _______,  _______,  _______
    ),

};

const uint16_t PROGMEM rgbrec_default_effects[RGBREC_CHANNEL_NUM][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        HS_GREEN, ________,   ________,   ________, ________, ________, ________, ________, ________, ________, ________,   ________, ________, ________,  ________, 
        ________, ________,   HS_GREEN,   ________, ________, ________, ________, ________, ________, ________, ________,   ________, ________, ________,  ________, 
        ________, HS_GREEN,   HS_GREEN,   HS_GREEN, ________, ________, ________, ________, ________, ________, ________,   ________, ________, ________,  ________,
        ________, ________,   ________,   ________, ________, ________, ________, ________, ________, ________,             ________, ________, HS_GREEN,  ________,
        ________, ________,   ________,   ________, ________, ________, ________,                     ________,             ________, HS_GREEN, HS_GREEN,  HS_GREEN),

    [1] = LAYOUT(
        ________, HS_RED,     HS_RED,     HS_RED,   HS_RED,   HS_RED,   ________, ________, ________, ________, ________,   ________, ________, ________,  ________, 
        HS_RED,   HS_RED,     HS_RED,     HS_RED,   HS_RED,   ________, ________, ________, ________, ________, ________,   ________, ________, ________,  ________, 
        ________, HS_RED,     HS_RED,     HS_RED,   ________, HS_RED,   ________, ________, ________, ________, ________,   ________, ________, ________,  ________,
        HS_RED,   ________,   ________,   ________, ________, HS_RED,   ________, ________, ________, ________,             ________, ________, ________,  ________,
        HS_RED,   ________,   HS_RED,     ________, ________, ________, ________,                     ________,             ________, ________, ________,  ________),

    [2] = LAYOUT(
        ________, HS_BLUE,    HS_BLUE,    HS_BLUE,  HS_BLUE,  HS_BLUE,  HS_BLUE,  HS_BLUE,  ________, ________, ________,   ________, ________, ________,  ________, 
        ________, HS_BLUE,    HS_BLUE,    HS_BLUE,  HS_BLUE,  HS_BLUE,  ________, ________, ________, ________, ________,   ________, ________, ________,  ________, 
        ________, HS_BLUE,    HS_BLUE,    HS_BLUE,  HS_BLUE,  HS_BLUE,  ________, ________, ________, ________, ________,   ________, ________, ________,  ________,
        ________, ________,   ________,   HS_BLUE,  HS_BLUE,  ________, ________, ________, ________, ________,             ________, ________, ________,  ________,
        ________, ________,   ________,   ________, ________, ________, ________,                     ________,             ________, ________, ________,  ________),
};

bool rgb_matrix_indicators_advanced_user(uint8_t led_min, uint8_t led_max) {
    uint8_t layer = get_highest_layer(layer_state | default_layer_state);

    uint8_t r = 0, g = 0, b = 0;
    bool override = true;

    switch (layer) {
        case _MBL:  r = 115; g = 112; b = 255; break; // Mac base - light purple
        case _MFL:  r = 0;   g = 255; b = 255; break; // FN held (mac) - cyan
        case _FBL:  r = 255; g = 165; b = 0;   break; // FN-key win - orange
        case _FFL:  r = 255; g = 255; b = 0;   break; // FN-key win FN - yellow
        case _FMBL: r = 128; g = 0;   b = 255; break; // FN-key mac - purple
        case _FMFL: r = 255; g = 0;   b = 255; break; // FN-key mac FN - magenta
        case _DEFA: r = 255; g = 0;   b = 0;   break; // default reset - red
        default:    override = false;          break; // _BL: normal RGB effect
    }

    if (override) {
        for (uint8_t i = led_min; i < led_max; i++) {
            rgb_matrix_set_color(i, r, g, b);
        }
    }

    return true;
}

#ifdef ENCODER_MAP_ENABLE
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [0] = {ENCODER_CCW_CW(KC_VOLD, KC_VOLU)},
    [1] = {ENCODER_CCW_CW(KC_BRID, KC_BRIU)},
    [2] = {ENCODER_CCW_CW(_______, _______)},
    [3] = {ENCODER_CCW_CW(_______, _______)},
    [4] = {ENCODER_CCW_CW(_______, _______)},
    [5] = {ENCODER_CCW_CW(_______, _______)},
    [6] = {ENCODER_CCW_CW(_______, _______)},
    [7] = {ENCODER_CCW_CW(_______, _______)},
    [8] = {ENCODER_CCW_CW(_______, _______)}
};
#endif
// clang-format on
