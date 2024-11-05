SRC += source.c

SPLIT_KEYBOARD = yes

MOUSEKEY_ENABLE = yes       # Mouse keys
CONSOLE_ENABLE = no         # Console for debug
COMMAND_ENABLE = no         # Commands for debug and configuration

# emoji support
UNICODE_COMMON = yes
UNICODEMAP_ENABLE = yes

SEND_STRING_ENABLE = yes

RGBLIGHT_SUPPORTED = no
RGBLIGHT_ENABLE = no

RGB_MATRIX_SUPPORTED = yes
RGB_MATRIX_ENABLE = yes

OLED_ENABLE     = yes


LTO_ENABLE = yes # compress 
EXTRAFLAGS += -flto # god please help


