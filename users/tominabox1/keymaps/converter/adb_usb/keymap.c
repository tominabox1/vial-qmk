#include QMK_KEYBOARD_H
#include "tominabox1.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_BASE]=LAYOUT_ext_ansi(
    KC_ESC,  KC_F1,   KC_F2,  KC_F3,  KC_F4,  KC_F5,  KC_F6,  KC_F7,  KC_F8,   KC_F9,  KC_F10,  KC_F11,  KC_F12,                 KC_PSCR,KC_SLCK,KC_PAUS,                                KC_EJCT,
    KC_GRV,  KC_1,    KC_2,   KC_3,   KC_4,   KC_5,   KC_6,   KC_7,   KC_8,    KC_9,   KC_0,    KC_MINS, KC_EQL,  KC_BSLS,       KC_INS, KC_HOME, KC_PGUP,     KC_NLCK, KC_EQL, KC_PSLS, KC_PAST,
    KC_TAB,  KC_Q, KC_W, KC_F, KC_P, KC_G, KC_J, KC_L, KC_U, KC_Y, KC_QUOT,    KC_LBRC, KC_RBRC, KC_BSPC,       KC_DEL, KC_END,  KC_PGDN,     KC_P7,   KC_P8,  KC_P9,   KC_PMNS,
    KC_LCAP, LGUI_T(KC_A), LALT_T(KC_R), LCTL_T(KC_S), LSFT_T(KC_T), KC_D, KC_H, RSFT_T(KC_N), RCTL_T(KC_E), RALT_T(KC_I), RGUI_T(KC_O), KC_QUOT,          KC_ENT,                                      KC_P4,   KC_P5,  KC_P6,   KC_PPLS,
    KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_K, KC_M, KC_COMM, KC_DOT, KC_SLSH,                   KC_RSFT,                KC_UP,               KC_P1,   KC_P2,  KC_P3,
    KC_LCTL, KC_LALT, KC_LGUI,                LT(_NUM_SYM,KC_SPC),                                 KC_RALT, KC_RCTL,                         KC_LEFT, KC_DOWN, KC_RGHT,    KC_P0,           KC_PDOT, KC_ENT
    ),

    [_NUM_SYM]=LAYOUT_ext_ansi(
    KC_ESC,  KC_F1,   KC_F2,  KC_F3,  KC_F4,  KC_F5,  KC_F6,  KC_F7,  KC_F8,   KC_F9,  KC_F10,  KC_F11,  KC_F12,                 KC_PSCR,KC_SLCK,KC_PAUS,                                KC_EJCT,
    KC_GRV,  KC_1,    KC_2,   KC_3,   KC_4,   KC_5,   KC_6,   KC_7,   KC_8,    KC_9,   KC_0,    KC_MINS, KC_EQL,  KC_BSLS,       KC_INS, KC_HOME, KC_PGUP,     KC_NLCK, KC_EQL, KC_PSLS, KC_PAST,
    KC_TAB,  KC_1,    KC_2,   KC_3,   KC_4,   KC_5,   KC_6,   KC_7,   KC_8,    KC_9,   KC_0,    KC_LBRC, KC_RBRC, KC_BSPC,       KC_DEL, KC_END,  KC_PGDN,     KC_P7,   KC_P8,  KC_P9,   KC_PMNS,
    KC_LCAP, KC_EXLM, KC_AT, KC_HASH, TD(TD_DLR_LP), KC_PERC, KC_CIRC, TD(TD_AMP_RP), KC_ASTR, KC_EQUAL, KC_MINS, KC_QUOT,          KC_ENT,                                      KC_P4,   KC_P5,  KC_P6,   KC_PPLS,
    KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_K, KC_M, KC_COMM, KC_DOT, KC_SLSH,                   KC_RSFT,                KC_UP,               KC_P1,   KC_P2,  KC_P3,
    KC_LCTL, KC_LALT, KC_LGUI,                LT(_NUM_SYM,KC_SPC),                                  KC_RALT, KC_RCTL,                         KC_LEFT, KC_DOWN, KC_RGHT,    KC_P0,           KC_PDOT, KC_ENT
    ),
};
