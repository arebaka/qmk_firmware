#pragma once

#define MASTER_LEFT
// #define MASTER_RIGHT
// #define EE_HANDS

#define DEBOUNCE 5

#define TRI_LAYER_LOWER_LAYER 2
#define CUSTOM_LAYER_READ  // if you remove this it causes issues - needs better guarding

// #define CUSTOM_FONT
// #define OLED_FONT_H "lib/sofle_logo.c"

// Disabled to save space
#define NO_ACTION_ONESHOT  // 332
#define NO_ACTION_MACRO    // 0
#define NO_ACTION_FUNCTION // 0
#define DISABLE_LEADER     // 0

#ifdef OLED_ENABLE
#   define OLED_TIMEOUT 80000
#   define OLED_BRIGHTNESS 90
#   define SPLIT_WPM_ENABLE
#   define SPLIT_OLED_ENABLE
#endif

// Add RGB underglow
// #define RGB_DI_PIN D3
// #define RGBLED_NUM 74
// #define RGBLED_SPLIT {37,37}
// //#define RGBLIGHT_ANIMATIONS // Very memory intensive
// #define RGBLIGHT_EFFECT_STATIC_GRADIENT //Firmware size (+262)
// #define RGBLIGHT_LIMIT_VAL 160 //Power draw may exceed 0.6A at max brightness with white colour.
// #define RGBLIGHT_LAYERS
// #define RGBLIGHT_LAYERS_OVERRIDE_RGB_OFF
// #define RGBLIGHT_SLEEP
