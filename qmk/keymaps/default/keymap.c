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
    // [0] = LAYOUT_numpad_4x4(
    //                                KC_PPLS,
    //     KC_P6,   KC_P7,   KC_P8,   KC_P9,
    //     KC_P2,   KC_P3,   KC_P4,   KC_P5,
    //     KC_PGUP, KC_PGDN, KC_P0,   KC_P1
    // )
        [0] = LAYOUT_numpad_4x4(
                                   RGB_MOD,
        RGB_TOG,   KC_P7,   KC_P8,   KC_P9,
        RGB_M_P,   RGB_M_B,   RGB_M_R,   RGB_M_SW,
        KC_PGUP, KC_PGDN, KC_P0,   KC_P1
    )
};

#ifdef ENCODER_MAP_ENABLE
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [0] = { ENCODER_CCW_CW(RGB_SPD, RGB_SPI)},
};
#endif

#ifdef OLED_ENABLE

bool oled_task_user(void) {
    oled_write_ln_P(PSTR("Test OLED"), false);
    return false;
}
#endif

