SRC += source.c

# MCU name
# MCU = atmega32u4

# Bootloader selection
# BOOTLOADER = caterina

MOUSEKEY_ENABLE = yes       # Mouse keys
CONSOLE_ENABLE = no         # Console for debug
COMMAND_ENABLE = no         # Commands for debug and configuration

BACKLIGHT_ENABLE = yes       # Enable keyboard backlight functionality
RGBLIGHT_ENABLE = yes        # Enable keyboard RGB underglow

RGB_MATRIX_ENABLE = yes
RGB_MATRIX_DRIVER = WS2812

LTO_ENABLE = yes # compress 

OLED_ENABLE     = yes
OLED_DRIVER     = SSD1306

SPLIT_KEYBOARD = yes
RGBLIGHT_SUPPORTED = yes
RGB_MATRIX_SUPPORTED = yes
