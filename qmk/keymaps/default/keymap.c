// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     *             ┌───┐
     *             │ + │
     * ┌───┬───┬───┼───┤
     * │ 6 │ 7 │ 8 │ 9 │
     * ├───┼───┼───┼───┤
     * │ 2 │ 3 │ 4 │ 5 │
     * ├───┼───┼───┼───┤
     * │   │   │ 0 │ 1 │
     * └───┴───┴───┴───┘
     */
    [0] = LAYOUT_numpad_4x4(
                                   KC_PPLS,
        KC_P6,   KC_P7,   KC_P8,   KC_P9,
        KC_P2,   KC_P3,   KC_P4,   KC_P5,
        KC_PGUP, KC_PGDN, KC_P0,   KC_P1
    )
};

void board_init(void) {
    // initialize anything that requires ChibiOS
    int my_variable = 0;
    for (int i = 0; i < 10; i++) {
        my_variable += i;
    }
}
