/* set mouse emulation options */

// Enable kinetic mode
#define MK_KINETIC_SPEED
// Delay between pressing a movement key and cursor movement
#define MOUSEKEY_DELAY 0
// Time between cursor movements in milliseconds
#define MOUSEKEY_INTERVAL 5
// Step size for accelerating from initial to base speed
#define MOUSEKEY_MOVE_DELTA 64

#define MOUSEKEY_INITIAL_SPEED 128

// Maximum cursor speed at which acceleration stops
#define MOUSEKEY_BASE_SPEED 5120
#define MOUSEKEY_DECELERATED_SPEED 512
#define MOUSEKEY_ACCELERATED_SPEED 2560


/* set unicode mode to windows */
#define UNICODE_SELECTED_MODES UNICODE_MODE_WINCOMPOSE, UNICODE_MODE_LINUX

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
