#include QMK_KEYBOARD_H

enum layers {
    _BASE,
    _FN
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_BASE] = LAYOUT(
        KC_Q,   KC_W,   KC_E,
        KC_A,   KC_S,   KC_D,
        KC_Z,   KC_X,   KC_C
    ),

    [_FN] = LAYOUT(
        KC_1,   KC_2,   KC_3,
        KC_4,   KC_5,   KC_6,
        KC_7,   KC_8,   KC_9
    )
};

/* Encoder */
bool encoder_update_user(uint8_t index, bool clockwise) {
    if (clockwise) {
        tap_code(KC_VOLU);
    } else {
        tap_code(KC_VOLD);
    }
    return false;
}

/* OLED */
#ifdef OLED_ENABLE

static void render_logo(void) {
    oled_write_ln_P(PSTR("ONEPAD"), false);
}

bool oled_task_user(void) {
    render_logo();
    oled_write_P(PSTR("Layer: "), false);
    oled_write(get_u8_str(get_highest_layer(layer_state), ' '), false);
    return false;
}

#endif

/* RGB Init */
void keyboard_post_init_user(void) {
    rgblight_enable();
    rgblight_mode(RGBLIGHT_MODE_RAINBOW_SWIRL);
}
