#include "config_common.h"

/* lighting optoins */
#define RGBLED_NUM       54 // Number of LEDs

/* ws2812 RGB LED */
#define RGB_DI_PIN      D3

/* key matrix size */
// Rows are doubled-up
#define MATRIX_ROWS  8
#define MATRIX_COLS  6
#define MATRIX_ROW_PINS \
    { D4, C6, D7, E6 }

// wiring of each half
#define MATRIX_COL_PINS \
    { F4, F5, F6, F7, B1, B3 }

#define SOFT_SERIAL_PIN D2
// COL2ROW or ROW2COL - how your matrix is configured. 
// COL2ROW means the black mark on your diode is facing to the rows, and between the switch and the rows.
#define DIODE_DIRECTION COL2ROW

#ifdef RGB_LIGHT_ENABLE
#    define RGBLIGHT_EFFECT_BREATHING	
#    define RGBLIGHT_EFFECT_CHRISTMAS
#    define RGBLIGHT_EFFECT_SNAKE
#    define RGBLIGHT_EFFECT_RAINBOW_MOOD
#    define RGB_DISABLE_WHEN_USB_SUSPENDED true // turn off effects when suspended
#endif

#ifdef RGB_MATRIX_ENABLE
#    define RGB_MATRIX_LED_COUNT RGBLED_NUM
#    define RGB_MATRIX_SPLIT \
        { 27, 27 }
#    define SPLIT_TRANSPORT_MIRROR
#    define RGB_MATRIX_KEYPRESSES // reacts to keypresses
#    define RGB_DISABLE_WHEN_USB_SUSPENDED true // turn off effects when suspended
#endif


// Configure the global tapping term (default: 150ms)
#define TAPPING_TERM 150

// Prevent normal rollover on alphas from accidentally triggering mods.
#define IGNORE_MOD_TAP_INTERRUPT

// Enable rapid switch from tap to hold, disables double tap hold auto-repeat.
#define TAPPING_FORCE_HOLD
