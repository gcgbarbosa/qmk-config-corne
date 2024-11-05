#include QMK_KEYBOARD_H

enum unicode_names {
    THUMBS_UP,
    THANK_GOD,
    OK,
    JOY,
    HEART,
    QUESTION,
    CROSS,
    DONE,
    ATTENTION,
    SURPRISE,
    CRY
};

const uint32_t PROGMEM unicode_map[] = {
    [THUMBS_UP]  = 0x1F44D,  // 👍🏿
    [THANK_GOD] = 0x1F64F,  // 🙏🏿
    [OK]  = 0x1F91D, // 🤝🏿
    [JOY] = 0x1F639, // 😹
    [HEART] = 0x1F49A, // 💚
    [QUESTION] = 0x2753, // ❓
    [CROSS] = 0x274C, // ❌
    [DONE] = 0x2705, // ✅
    [ATTENTION] = 0x2757, // ❗
    [SURPRISE] = 0x1F640, // 🙀
    [CRY] = 0x1F63F, // 😿
};

#ifdef OLED_ENABLE

static void render_logo(void) {
    static const char PROGMEM qmk_logo[] = {
        0x80, 0x81, 0x82, 0x83, 0x84, 0x85, 0x86, 0x87, 0x88, 0x89, 0x8A, 0x8B, 0x8C, 0x8D, 0x8E, 0x8F, 0x90, 0x91, 0x92, 0x93, 0x94,
        0xA0, 0xA1, 0xA2, 0xA3, 0xA4, 0xA5, 0xA6, 0xA7, 0xA8, 0xA9, 0xAA, 0xAB, 0xAC, 0xAD, 0xAE, 0xAF, 0xB0, 0xB1, 0xB2, 0xB3, 0xB4,
        0xC0, 0xC1, 0xC2, 0xC3, 0xC4, 0xC5, 0xC6, 0xC7, 0xC8, 0xC9, 0xCA, 0xCB, 0xCC, 0xCD, 0xCE, 0xCF, 0xD0, 0xD1, 0xD2, 0xD3, 0xD4, 0x00
    };

    oled_write_P(qmk_logo, false);
}

static void render_status(void) {
    // Host Keyboard Layer Status
    oled_write_P(PSTR("Layer: "), false);

    switch (get_highest_layer(layer_state)) {
        case 0:
            oled_write_P(PSTR("Default\n"), false);
            break;
        case 1:
            oled_write_P(PSTR("Navigation\n"), false);
            break;
        case 2:
            oled_write_P(PSTR("Fun|Sym\n"), false);
            break;
        case 3:
            oled_write_P(PSTR("Num|Conf\n"), false);
            break;
        case 4:
            oled_write_P(PSTR("FPS1\n"), false);
            break;
        case 5:
            oled_write_P(PSTR("FPS2\n"), false);
            break;
        default:
            // Or use the write_ln shortcut over adding '\n' to the end of your string
            oled_write_ln_P(PSTR("Undefined"), false);
    }

    // Host Keyboard LED Status
    led_t led_state = host_keyboard_led_state();
    oled_write_P(led_state.num_lock ? PSTR("NUM ") : PSTR("    "), false);
    oled_write_P(led_state.caps_lock ? PSTR("CAP ") : PSTR("    "), false);
    oled_write_P(led_state.scroll_lock ? PSTR("SCR ") : PSTR("    "), false);
}

oled_rotation_t oled_init_user(oled_rotation_t rotation) {
    if (!is_keyboard_master()) {
        return OLED_ROTATION_180;  // flips the display 180 degrees if offhand
    }

    return rotation;
}

bool oled_task_user(void) {
    if (is_keyboard_master()) {
        render_status();  // Renders the current keyboard state (layer, lock, caps, scroll, etc)
    } else {
        render_logo();  // Renders a static logo
    }
    return false;
}

#endif
