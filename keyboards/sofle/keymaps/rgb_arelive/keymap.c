// Copyright 2024 Alexey Zhulenkov <me@are.moe> (@arelive)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

enum layers {
    _DEFAULTS = 0,
    _FN = 1,
};

enum custom_keycodes {
    KC_DEFAULTS = SAFE_RANGE,
    KC_FN,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/*
 * ,-----------------------------------.                   ,-----------------------------------.
 * |  `  |  1  |  2  |  3  |  4  |  5  |                   |  6  |  7  |  8  |  9  |  0  |  ]  |
 * |-----+-----+-----+-----+-----+-----|                   |-----+-----+-----+-----+-----+-----|
 * |  =  |  Q  |  W  |  E  |  R  |  T  |                   |  Y  |  U  |  I  |  O  |  P  |  [  |
 * |-----+-----+-----+-----+-----+-----|                   |-----+-----+-----+-----+-----+-----|
 * |  -  |  A  |  S  |  D  |  F  |  G  |------.     ,------|  H  |  J  |  K  |  L  |  ;  |  '  |
 * |-----+-----+-----+-----+-----+-----| Play |     |Light |-----+-----+-----+-----+-----+-----|
 * |PrScr|  Z  |  X  |  C  |  V  |  B  |------'     '------|  N  |  M  |  ,  |  .  |  /  |  \  |
 * `-----------------------------------/     /       \     \-----------------------------------'
 *      | Tab  | Left | Left | Fn  |  /Space/         \Enter\  | Left | Left | Back | Esc  |
 *      |      | Alt  | Ctrl |     | /     /           \     \ | Shift| Super| Space|      |
 *      `--------------------------''-----'             '-----''---------------------------'
 */
[_DEFAULTS] = LAYOUT(
    KC_GRV, KC_1,   KC_2,   KC_3,   KC_4,   KC_5,                       KC_6,   KC_7,   KC_8,   KC_9,   KC_0,   KC_RBRC,
    KC_EQL, KC_Q,   KC_W,   KC_E,   KC_R,   KC_T,                       KC_Y,   KC_U,   KC_I,   KC_O,   KC_P,   KC_LBRC,
    KC_MINS,KC_A,   KC_S,   KC_D,   KC_F,   KC_G,                       KC_H,   KC_J,   KC_K,   KC_L,   KC_SCLN,KC_QUOT,
    KC_PSCR,KC_Z,   KC_X,   KC_C,   KC_V,   KC_B,   KC_MPLY,    BL_TOGG,KC_N,   KC_M,   KC_COMM,KC_DOT, KC_SLSH,KC_BSLS,
                    KC_LGUI,KC_LALT,KC_LCTL,MO(_FN),KC_SPC,     KC_ENT, KC_LSFT,KC_TAB, KC_BSPC,KC_ESC
),
/*
 * ,-----------------------------------.                   ,-----------------------------------.
 * |Exec | F1  | F2  | F3  | F4  | F5  |                   | F6  | F7  | F8  | F9  | F10 | F11 |
 * |-----+-----+-----+-----+-----+-----|                   |-----+-----+-----+-----+-----+-----|
 * |Help |Stop |Home | Up  | End |PgUp |                   |Stop |Home |Srch |Favs |Calc | F12 |
 * |-----+-----+-----+-----+-----+-----|                   |-----+-----+-----+-----+-----+-----|
 * |Again|Slct |Left |Down |Right|PgDn |------.     ,------|Sleep|Back |Rfrsh| Fwd |Mail |Media|
 * |-----+-----+-----+-----+-----+-----| Mute |     |Power |-----+-----+-----+-----+-----+-----|
 * |Menu |Undo | Cut |Copy |Paste|Find |------'     '------|Wake |Prev |Stop |Next |Eject|My PC|
 * `-----------------------------------/     /       \     \-----------------------------------'
 *      |Insert| Left | Left | Fn  |  / Esc /         \ App \  | Left | Left |Delete| Caps |
 *      |      | Alt  | Ctrl |     | /     /           \     \ | Shift| Super|      | Lock |
 *      `--------------------------''-----'             '-----''---------------------------'
 */
[_FN] = LAYOUT(
    KC_EXEC,KC_F1,  KC_F2,  KC_F3,  KC_F4,  KC_F5,                      KC_F6,  KC_F7,  KC_F8,  KC_F9,  KC_F10, KC_F11,
    KC_HELP,KC_STOP,KC_HOME,KC_UP,  KC_END, KC_PGUP,                    KC_WSTP,KC_WHOM,KC_WSCH,KC_WFAV,KC_CALC,KC_F12,
    KC_AGIN,KC_SLCT,KC_LEFT,KC_DOWN,KC_RGHT,KC_PGDN,                    KC_SLEP,KC_WBAK,KC_WREF,KC_WFWD,KC_MAIL,KC_MSEL,
    KC_MENU,KC_UNDO,KC_CUT, KC_COPY,KC_PSTE,KC_FIND,KC_MUTE,    KC_PWR, KC_WAKE,KC_MPRV,KC_MSTP,KC_MNXT,KC_EJCT,KC_MYCM,
                    _______,_______,_______,_______,KC_TAB,     KC_APP, _______,KC_LGUI,KC_DEL, KC_CAPS
),
};

#ifdef ENCODER_MAP_ENABLE
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [0] = { ENCODER_CCW_CW(KC_VOLU, KC_VOLD), ENCODER_CCW_CW(KC_UP  , KC_DOWN) },
    [1] = { ENCODER_CCW_CW(KC_PGUP, KC_PGDN), ENCODER_CCW_CW(KC_RGHT, KC_LEFT) },
};
#endif
