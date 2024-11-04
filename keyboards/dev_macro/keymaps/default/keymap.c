// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

//insert encoder map here
// see chat for multiple encoder map
// for encoder button press add to matrix
// idea: 3 x 4 Matrix -> 2 Encoder übereinander -> Sliding potis

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┬────┐
     * │ 7 │ 8 │ 9 │    │
     * ├───┼───┼───┤rot1│
     * │ 4 │ 5 │ 6 │    │
     * ├───┼───┼───┼────┤
     * │ 1 │ 2 │ 3 │    │
     * ├───┼───┼───┤rot2│
     * │   │   │ . │    │
     * └───┴───┴───┴────┘
     */
    [0] = LAYOUT_numpad_4x4(
        KC_P7,   KC_P8,   KC_P9,   KC_PPLS,
        KC_P4,   KC_P5,   KC_P6,   _______,
        KC_P1,   KC_P2,   KC_P3,   KC_PENT,
        KC_P0,   _______,   KC_PDOT, _______
    )
};
