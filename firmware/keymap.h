#ifndef KEYMAP_H
#define KEYMAP_H

enum keymap_layer {
  KEYMAP_LAYER_BASE,
  KEYMAP_LAYER_COUNT
};

enum keymap_key {
  KEYMAP_KEY_NONE,

  KEYMAP_KEY_LAYER_TOGGLE,

  KEYMAP_KEY_A,
  KEYMAP_KEY_B,
  KEYMAP_KEY_C,
  KEYMAP_KEY_D,
  KEYMAP_KEY_E,
  KEYMAP_KEY_F,
  KEYMAP_KEY_G,
  KEYMAP_KEY_H,
  KEYMAP_KEY_I,
  KEYMAP_KEY_J,
  KEYMAP_KEY_K,
  KEYMAP_KEY_L,
  KEYMAP_KEY_M,
  KEYMAP_KEY_N,
  KEYMAP_KEY_O,
  KEYMAP_KEY_P,
  KEYMAP_KEY_Q,
  KEYMAP_KEY_R,
  KEYMAP_KEY_S,
  KEYMAP_KEY_T,
  KEYMAP_KEY_U,
  KEYMAP_KEY_V,
  KEYMAP_KEY_W,
  KEYMAP_KEY_X,
  KEYMAP_KEY_Y,
  KEYMAP_KEY_Z,

  KEYMAP_KEY_1,
  KEYMAP_KEY_2,
  KEYMAP_KEY_3,
  KEYMAP_KEY_4,
  KEYMAP_KEY_5,
  KEYMAP_KEY_6,
  KEYMAP_KEY_7,
  KEYMAP_KEY_8,
  KEYMAP_KEY_9,
  KEYMAP_KEY_0,

  KEYMAP_KEY_ENTER,
  KEYMAP_KEY_ESC,
  KEYMAP_KEY_BSPACE,
  KEYMAP_KEY_TAB,
  KEYMAP_KEY_SPACE,
  KEYMAP_KEY_MINUS,
  KEYMAP_KEY_EQUAL,
  KEYMAP_KEY_LBRACE,
  KEYMAP_KEY_RBRACE,
  KEYMAP_KEY_BSLASH,
  KEYMAP_KEY_TILDE,
  KEYMAP_KEY_SEMICOLON,
  KEYMAP_KEY_SQUOTE,
  KEYMAP_KEY_GRAVE,
  KEYMAP_KEY_COMMA,
  KEYMAP_KEY_PERIOD,
  KEYMAP_KEY_SLASH,
  KEYMAP_KEY_CAPSLOCK,

  KEYMAP_KEY_F1,
  KEYMAP_KEY_F2,
  KEYMAP_KEY_F3,
  KEYMAP_KEY_F4,
  KEYMAP_KEY_F5,
  KEYMAP_KEY_F6,
  KEYMAP_KEY_F7,
  KEYMAP_KEY_F8,
  KEYMAP_KEY_F9,
  KEYMAP_KEY_F10,
  KEYMAP_KEY_F11,
  KEYMAP_KEY_F12,
  KEYMAP_KEY_PRINTSCR,
  KEYMAP_KEY_SCROLLLOCK,
  KEYMAP_KEY_PAUSE,
  KEYMAP_KEY_INST,
  KEYMAP_KEY_HOME,
  KEYMAP_KEY_PGUP,
  KEYMAP_KEY_DEL,
  KEYMAP_KEY_END,
  KEYMAP_KEY_PGDN,
  KEYMAP_KEY_RGHT,
  KEYMAP_KEY_LEFT,
  KEYMAP_KEY_DOWN,
  KEYMAP_KEY_UP,

  KEYMAP_KEY_CTRL,
  KEYMAP_KEY_SHIFT,
  KEYMAP_KEY_ALT,
};

struct keymap {
  keymap_layer active_layer;
};

void keymap_init(struct keymap *k);
void keymap_update(struct keymap *k);

#endif