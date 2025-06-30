enum my_keycodes {
 // apple globe key
 AP_GLOB = SAFE_RANGE,
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
  case AP_GLOB:
    host_consumer_send(record->event.pressed ? AC_NEXT_KEYBOARD_LAYOUT_SELECT : 0);
    return false;
  }

  return true;
}
