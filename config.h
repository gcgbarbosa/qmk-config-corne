/* set mouse emulation options */

// Enable constant mode
#define MK_3_SPEED
// Enable momentary acceleration (tap to select)
#define MK_MOMENTARY_ACCEL

// Remove delay
#define MOUSEKEY_DELAY 0
#define MOUSEKEY_WHEEL_DELAY 0

// Time between cursor movements in milliseconds
#define MOUSEKEY_INTERVAL 8
// Step size for accelerating from initial to base speed
#define MOUSEKEY_MOVE_DELTA 8

// Increase time to max
#define MOUSEKEY_TIME_TO_MAX 64
#define MOUSEKEY_MAX_SPEED 32

//
#define MK_C_OFFSET_0 4
#define MK_C_INTERVAL_0 16
#define MK_C_OFFSET_UNMOD 24
#define MK_C_INTERVAL_UNMOD 16
#define MK_C_OFFSET_1 48
#define MK_C_INTERVAL_1 16
#define MK_C_OFFSET_2 96
#define MK_C_INTERVAL_2 16

// define scroll movement speeds
#define MK_W_INTERVAL_0 32
#define MK_W_INTERVAL_1 8
#define MK_W_INTERVAL_2 2


/* set unicode mode to windows */
#define UNICODE_SELECTED_MODES UNICODE_MODE_WINCOMPOSE, UNICODE_MODE_LINUX, UNICODE_KEY_MAC

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

#ifdef RGBLIGHT_ENABLE
    #define RGBLIGHT_EFFECT_BREATHING
    #define RGBLIGHT_EFFECT_RAINBOW_MOOD
    #define RGBLIGHT_EFFECT_RAINBOW_SWIRL
    #define RGBLIGHT_EFFECT_SNAKE
    #define RGBLIGHT_EFFECT_KNIGHT
    #define RGBLIGHT_EFFECT_CHRISTMAS
    #define RGBLIGHT_EFFECT_STATIC_GRADIENT
    #define RGB_DISABLE_WHEN_USB_SUSPENDED true // turn off effects when suspended
#endif

#ifdef RGB_MATRIX_ENABLE
    #define RGB_MATRIX_SPLIT \
        { 27, 27 }
    #define SPLIT_TRANSPORT_MIRROR
    #define RGB_MATRIX_KEYPRESSES // reacts to keypresses

    #define ENABLE_RGB_MATRIX_GRADIENT_UP_DOWN
    #define ENABLE_RGB_MATRIX_GRADIENT_LEFT_RIGHT
    #define ENABLE_RGB_MATRIX_BREATHING
    #define ENABLE_RGB_MATRIX_BAND_SAT
    #define ENABLE_RGB_MATRIX_BAND_PINWHEEL_SAT
    #define ENABLE_RGB_MATRIX_BAND_SPIRAL_SAT
    #define ENABLE_RGB_MATRIX_CYCLE_ALL
    #define ENABLE_RGB_MATRIX_CYCLE_LEFT_RIGHT
    #define ENABLE_RGB_MATRIX_CYCLE_UP_DOWN
    #define ENABLE_RGB_MATRIX_RAINBOW_MOVING_CHEVRON
    #define ENABLE_RGB_MATRIX_CYCLE_PINWHEEL
    #define ENABLE_RGB_MATRIX_CYCLE_SPIRAL
    #define ENABLE_RGB_MATRIX_DUAL_BEACON
    #define ENABLE_RGB_MATRIX_RAINBOW_BEACON
    #define ENABLE_RGB_MATRIX_RAINBOW_PINWHEELS
    #define ENABLE_RGB_MATRIX_RAINDROPS
    #define ENABLE_RGB_MATRIX_JELLYBEAN_RAINDROPS
    #define ENABLE_RGB_MATRIX_HUE_BREATHING
    #define ENABLE_RGB_MATRIX_HUE_PENDULUM
#endif

// Configure the global tapping term (default: 150ms)
#define TAPPING_TERM 150

// Enable rapid switch from tap to hold, disables double tap hold auto-repeat.
#define TAPPING_FORCE_HOLD

// Desperatly try to scrape space
#define NO_ACTION_MACRO
#define NO_ACTION_FUNCTION
