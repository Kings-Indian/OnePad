#pragma once

#include "config_common.h"

/* USB Device descriptor parameters */
#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0x0000
#define DEVICE_VER      0x0001
#define MANUFACTURER    Tanishq Goyal
#define PRODUCT         OnePad

/* Key Matrix */
#define MATRIX_ROWS 3
#define MATRIX_COLS 3

#define MATRIX_ROW_PINS { GP29, GP28, GP27 }
#define MATRIX_COL_PINS { GP1, GP2, GP4 }
#define DIODE_DIRECTION COL2ROW

/* Encoder */
#define ENCODERS_PAD_A { GP0 }
#define ENCODERS_PAD_B { GP26 }
#define ENCODER_RESOLUTION 4
#define ENCODER_MAP_ENABLE

/* WS2812 RGB */
#define RGB_DI_PIN GP3
#define RGBLED_NUM 8
#define RGBLIGHT_LIMIT_VAL 150
#define RGBLIGHT_EFFECT_RAINBOW_SWIRL
#define RGBLIGHT_EFFECT_BREATHING
#define RGBLIGHT_EFFECT_KNIGHT
#define RGBLIGHT_EFFECT_STATIC_GRADIENT

/* OLED (SSD1306 via I2C) */
#define I2C_DRIVER I2CD1
#define I2C1_SDA_PIN GP6
#define I2C1_SCL_PIN GP7
#define OLED_BRIGHTNESS 120

/* Debounce */
#define DEBOUNCE 5

/* NKRO */
#define NKRO_ENABLE
#define FORCE_NKRO
#define ENCODER_MAP_ENABLE
#define ENCODER_RESOLUTION 4
