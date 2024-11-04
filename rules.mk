SRC += source.c

SPLIT_KEYBOARD = yes

MOUSEKEY_ENABLE = yes       # Mouse keys
CONSOLE_ENABLE = no         # Console for debug
COMMAND_ENABLE = no         # Commands for debug and configuration

RGBLIGHT_SUPPORTED = no
RGBLIGHT_ENABLE = no
# RGBLIGHT_DRIVER = WS2812

RGB_MATRIX_SUPPORTED = yes
RGB_MATRIX_ENABLE = yes
# RGB_MATRIX_DRIVER = WS2812

OLED_ENABLE     = yes
# OLED_DRIVER     = SSD1306

LTO_ENABLE = yes # compress 
EXTRAFLAGS += -flto # god please help


