#ifndef KEYMAP_H
#define KEYMAP_H

#include <stdint.h>

#include "Matrix.h"


enum class Key {
  LayerSym,

  A,
  B,
  C,
  D,
  E,
  F,
  G,
  H,
  I,
  J,
  K,
  L,
  M,
  N,
  O,
  P,
  Q,
  R,
  S,
  T,
  U,
  V,
  W,
  X,
  Y,
  Z,

  Num1,
  Num2,
  Num3,
  Num4,
  Num5,
  Num6,
  Num7,
  Num8,
  Num9,
  Num0,

  Enter,
  Esc,
  BSpace,
  Tab,
  Space,
  Minus,
  Equal,
  LBrace,
  RBrace,
  BSlash,
  Tilde,
  Semicolon,
  SQuote,
  Grave,
  Comma,
  Period,
  Slash,
  Percent,
  At,
  LBrack,
  RBrack,
  Carrot,
  Pound,
  Dollar,
  LParen,
  RParen,
  Asterisk,
  Bang,
  Plus,
  Underscore,
  Ampersand,
  Pipe,
  Question,

  F1,
  F2,
  F3,
  F4,
  F5,
  F6,
  F7,
  F8,
  F9,
  F10,
  F11,
  F12,
  PrintScr,
  ScrollLock,
  Pause,
  Home,
  PgUp,
  Del,
  End,
  PgDn,
  Right,
  Left,
  Down,
  Up,

  Ctrl,
  Shift,
  Alt,

  None
};

enum class Scancode {
  A,
  B,
  C,
  D,
  E,
  F,
  G,
  H,
  I,
  J,
  K,
  L,
  M,
  N,
  O,
  P,
  Q,
  R,
  S,
  T,
  U,
  V,
  W,
  X,
  Y,
  Z,

  Num1,
  Num2,
  Num3,
  Num4,
  Num5,
  Num6,
  Num7,
  Num8,
  Num9,
  Num0,

  Enter,
  Esc,
  BSpace,
  Tab,
  Space,
  Minus,
  Equal,
  LBrace,
  RBrace,
  BSlash,
  Tilde,
  Semicolon,
  SQuote,
  Grave,
  Comma,
  Period,
  Slash,

  F1,
  F2,
  F3,
  F4,
  F5,
  F6,
  F7,
  F8,
  F9,
  F10,
  F11,
  F12,
  Home,
  PgUp,
  Del,
  End,
  PgDn,
  Right,
  Left,
  Down,
  Up,

  Count,
  None
};

const uint8_t scancodes[] = {
  [(int)Scancode::A] = 0x4,
  [(int)Scancode::B] = 0x5,
  [(int)Scancode::C] = 0x6,
  [(int)Scancode::D] = 0x7,
  [(int)Scancode::E] = 0x8,
  [(int)Scancode::F] = 0x9,
  [(int)Scancode::G] = 0xa,
  [(int)Scancode::H] = 0xb,
  [(int)Scancode::I] = 0xc,
  [(int)Scancode::J] = 0xd,
  [(int)Scancode::K] = 0xe,
  [(int)Scancode::L] = 0xf,
  [(int)Scancode::M] = 0x10,
  [(int)Scancode::N] = 0x11,
  [(int)Scancode::O] = 0x12,
  [(int)Scancode::P] = 0x13,
  [(int)Scancode::Q] = 0x14,
  [(int)Scancode::R] = 0x15,
  [(int)Scancode::S] = 0x16,
  [(int)Scancode::T] = 0x17,
  [(int)Scancode::U] = 0x18,
  [(int)Scancode::V] = 0x19,
  [(int)Scancode::W] = 0x1a,
  [(int)Scancode::X] = 0x1b,
  [(int)Scancode::Y] = 0x1c,
  [(int)Scancode::Z] = 0x1d,

  [(int)Scancode::Num1] = 0x1e,
  [(int)Scancode::Num2] = 0x1f,
  [(int)Scancode::Num3] = 0x20,
  [(int)Scancode::Num4] = 0x21,
  [(int)Scancode::Num5] = 0x22,
  [(int)Scancode::Num6] = 0x23,
  [(int)Scancode::Num7] = 0x24,
  [(int)Scancode::Num8] = 0x25,
  [(int)Scancode::Num9] = 0x26,
  [(int)Scancode::Num0] = 0x27,

  [(int)Scancode::Enter] = 0x28,
  [(int)Scancode::Esc] = 0x29,
  [(int)Scancode::BSpace] = 0x2a,
  [(int)Scancode::Tab] = 0x2b,
  [(int)Scancode::Space] = 0x2c,
  [(int)Scancode::Minus] = 0x2d,
  [(int)Scancode::Equal] = 0x2e,
  [(int)Scancode::LBrace] = 0x2f,
  [(int)Scancode::RBrace] = 0x30,
  [(int)Scancode::BSlash] = 0x31,
  [(int)Scancode::Tilde] = 0x32,
  [(int)Scancode::Semicolon] = 0x33,
  [(int)Scancode::SQuote] = 0x34,
  [(int)Scancode::Grave] = 0x35,
  [(int)Scancode::Comma] = 0x36,
  [(int)Scancode::Period] = 0x37,
  [(int)Scancode::Slash] = 0x38,

  [(int)Scancode::F1] = 0x3a,
  [(int)Scancode::F2] = 0x3b,
  [(int)Scancode::F3] = 0x3c,
  [(int)Scancode::F4] = 0x3d,
  [(int)Scancode::F5] = 0x3e,
  [(int)Scancode::F6] = 0x3f,
  [(int)Scancode::F7] = 0x40,
  [(int)Scancode::F8] = 0x41,
  [(int)Scancode::F9] = 0x42,
  [(int)Scancode::F10] = 0x43,
  [(int)Scancode::F11] = 0x44,
  [(int)Scancode::F12] = 0x45,
  [(int)Scancode::Home] = 0x4a,
  [(int)Scancode::PgUp] = 0x4b,
  [(int)Scancode::Del] = 0x4c,
  [(int)Scancode::End] = 0x4d,
  [(int)Scancode::PgDn] = 0x4e,
  [(int)Scancode::Right] = 0x50,
  [(int)Scancode::Left] = 0x50,
  [(int)Scancode::Down] = 0x51,
  [(int)Scancode::Up] = 0x52
};

enum modifier {
  MODIFIER_CTRL,
  MODIFIER_SHIFT,
  MODIFIER_ALT,

  MODIFIER_COUNT,
  MODIFIER_NONE
};

const uint8_t modifiers[] = {
  [MODIFIER_CTRL] = 1 << 0,
  [MODIFIER_SHIFT] = 1 << 1,
  [MODIFIER_ALT] = 1 << 2
};

struct key_scancode {
  enum class Scancode scancode : 7;
  enum modifier modifier : 2;
};

/*
const struct key_scancode key_scancode_map = {
  [(int)Key::LayerSym] = { .scancode = Scancode::None, .modifier = MODIFIER_NONE },

  [(int)Key::A] = { .scancode = Scancode::A, .modifier = MODIFIER_NONE },
  [(int)Key::B] = { .scancode = Scancode::B, .modifier = MODIFIER_NONE },
  [(int)Key::C] = { .scancode = Scancode::C, .modifier = MODIFIER_NONE },
  [(int)Key::D] = { .scancode = Scancode::D, .modifier = MODIFIER_NONE },
  [(int)Key::E] = { .scancode = Scancode::E, .modifier = MODIFIER_NONE },
  [(int)Key::F] = { .scancode = Scancode::F, .modifier = MODIFIER_NONE },
  [(int)Key::G] = { .scancode = Scancode::G, .modifier = MODIFIER_NONE },
  [(int)Key::H] = { .scancode = Scancode::H, .modifier = MODIFIER_NONE },
  [(int)Key::I] = { .scancode = Scancode::I, .modifier = MODIFIER_NONE },
  [(int)Key::J] = { .scancode = Scancode::J, .modifier = MODIFIER_NONE },
  [(int)Key::K] = { .scancode = Scancode::K, .modifier = MODIFIER_NONE },
  [(int)Key::L] = { .scancode = Scancode::L, .modifier = MODIFIER_NONE },
  [(int)Key::M] = { .scancode = Scancode::M, .modifier = MODIFIER_NONE },
  [(int)Key::N] = { .scancode = Scancode::N, .modifier = MODIFIER_NONE },
  [(int)Key::O] = { .scancode = Scancode::O, .modifier = MODIFIER_NONE },
  [(int)Key::P] = { .scancode = Scancode::P, .modifier = MODIFIER_NONE },
  [(int)Key::Q] = { .scancode = Scancode::Q, .modifier = MODIFIER_NONE },
  [(int)Key::R] = { .scancode = Scancode::R, .modifier = MODIFIER_NONE },
  [(int)Key::S] = { .scancode = Scancode::S, .modifier = MODIFIER_NONE },
  [(int)Key::T] = { .scancode = Scancode::T, .modifier = MODIFIER_NONE },
  [(int)Key::U] = { .scancode = Scancode::U, .modifier = MODIFIER_NONE },
  [(int)Key::V] = { .scancode = Scancode::V, .modifier = MODIFIER_NONE },
  [(int)Key::W] = { .scancode = Scancode::W, .modifier = MODIFIER_NONE },
  [(int)Key::X] = { .scancode = Scancode::X, .modifier = MODIFIER_NONE },
  [(int)Key::Y] = { .scancode = Scancode::Y, .modifier = MODIFIER_NONE },
  [(int)Key::Z] = { .scancode = Scancode::Z, .modifier = MODIFIER_NONE },

  [(int)Key::Num1] = { .scancode = Scancode::Num1, .modifier = MODIFIER_NONE },
  [(int)Key::Num2] = { .scancode = Scancode::Num2, .modifier = MODIFIER_NONE },
  [(int)Key::Num3] = { .scancode = Scancode::Num3, .modifier = MODIFIER_NONE },
  [(int)Key::Num4] = { .scancode = Scancode::Num4, .modifier = MODIFIER_NONE },
  [(int)Key::Num5] = { .scancode = Scancode::Num5, .modifier = MODIFIER_NONE },
  [(int)Key::Num6] = { .scancode = Scancode::Num6, .modifier = MODIFIER_NONE },
  [(int)Key::Num7] = { .scancode = Scancode::Num7, .modifier = MODIFIER_NONE },
  [(int)Key::Num8] = { .scancode = Scancode::Num8, .modifier = MODIFIER_NONE },
  [(int)Key::Num9] = { .scancode = Scancode::Num9, .modifier = MODIFIER_NONE },
  [(int)Key::Num0] = { .scancode = Scancode::Num0, .modifier = MODIFIER_NONE },

  [(int)Key::Enter] = { .scancode = Scancode::Enter, .modifier = MODIFIER_NONE },
  [(int)Key::Esc] = { .scancode = Scancode::Esc, .modifier = MODIFIER_NONE },
  [(int)Key::BSpace] = { .scancode = Scancode::BSpace, .modifier = MODIFIER_NONE },
  [(int)Key::Tab] = { .scancode = Scancode::Tab, .modifier = MODIFIER_NONE },
  [(int)Key::Space] = { .scancode = Scancode::Space, .modifier = MODIFIER_NONE },
  [(int)Key::Minus] = { .scancode = Scancode::Minus, .modifier = MODIFIER_NONE },
  [(int)Key::Equal] = { .scancode = Scancode::Equal, .modifier = MODIFIER_NONE },
  [(int)Key::LBrace] = { .scancode = Scancode::LBrace, .modifier = MODIFIER_NONE },
  [(int)Key::RBrace] = { .scancode = Scancode::RBrace, .modifier = MODIFIER_NONE },
  [(int)Key::BSlash] = { .scancode = Scancode::BSlash, .modifier = MODIFIER_NONE },
  [(int)Key::Tilde] = { .scancode = Scancode::Tilde, .modifier = MODIFIER_NONE },
  [(int)Key::Semicolon] = { .scancode = Scancode::Semicolon, .modifier = MODIFIER_NONE },
  [(int)Key::SQuote] = { .scancode = Scancode::SQuote, .modifier = MODIFIER_NONE },
  [(int)Key::Grave] = { .scancode = Scancode::Grave, .modifier = MODIFIER_NONE },
  [(int)Key::Comma] = { .scancode = Scancode::Comma, .modifier = MODIFIER_NONE },
  [(int)Key::Period] = { .scancode = Scancode::Period, .modifier = MODIFIER_NONE },
  [(int)Key::Slash] = { .scancode = Scancode::Slash, .modifier = MODIFIER_NONE },
  [(int)Key::Percent] = { .scancode = Scancode::Num5, .modifier = MODIFIER_SHIFT },
  [(int)Key::At] = { .scancode = Scancode::Num2, .modifier = MODIFIER_SHIFT },
  [(int)Key::LBrack] = { .scancode = Scancode::LBrace, .modifier = MODIFIER_SHIFT },
  [(int)Key::RBrack] = { .scancode = Scancode::RBrace, .modifier = MODIFIER_SHIFT },
  [(int)Key::Carrot] = { .scancode = Scancode::Num6, .modifier = MODIFIER_SHIFT },
  [(int)Key::Pound] = { .scancode = Scancode::Num3, .modifier = MODIFIER_SHIFT },
  [(int)Key::Dollar] = { .scancode = Scancode::Num4, .modifier = MODIFIER_SHIFT },
  [(int)Key::LParen] = { .scancode = Scancode::Num9, .modifier = MODIFIER_SHIFT },
  [(int)Key::RParen] = { .scancode = Scancode::Num0, .modifier = MODIFIER_SHIFT },
  [(int)Key::Asterisk] = { .scancode = Scancode::Num8, .modifier = MODIFIER_SHIFT },
  [(int)Key::Bang] = { .scancode = Scancode::Num1, .modifier = MODIFIER_SHIFT },
  [(int)Key::Plus] = { .scancode = Scancode::Equal, .modifier = MODIFIER_SHIFT },
  [(int)Key::Underscore] = { .scancode = Scancode::Minus, .modifier = MODIFIER_SHIFT },
  [(int)Key::Ampersand] = { .scancode = Scancode::Num7, .modifier = MODIFIER_SHIFT },
  [(int)Key::Pipe] = { .scancode = Scancode::BSlash, .modifier = MODIFIER_SHIFT },
  [(int)Key::Question] = { .scancode = Scancode::Slash, .modifier = MODIFIER_SHIFT },

  [(int)Key::F1] = { .scancode = Scancode::F1, .modifier = MODIFIER_NONE },
  [(int)Key::F2] = { .scancode = Scancode::F2, .modifier = MODIFIER_NONE },
  [(int)Key::F3] = { .scancode = Scancode::F3, .modifier = MODIFIER_NONE },
  [(int)Key::F4] = { .scancode = Scancode::F4, .modifier = MODIFIER_NONE },
  [(int)Key::F5] = { .scancode = Scancode::F5, .modifier = MODIFIER_NONE },
  [(int)Key::F6] = { .scancode = Scancode::F6, .modifier = MODIFIER_NONE },
  [(int)Key::F7] = { .scancode = Scancode::F7, .modifier = MODIFIER_NONE },
  [(int)Key::F8] = { .scancode = Scancode::F8, .modifier = MODIFIER_NONE },
  [(int)Key::F9] = { .scancode = Scancode::F9, .modifier = MODIFIER_NONE },
  [(int)Key::F10] = { .scancode = Scancode::F10, .modifier = MODIFIER_NONE },
  [(int)Key::F11] = { .scancode = Scancode::F11, .modifier = MODIFIER_NONE },
  [(int)Key::F12] = { .scancode = Scancode::F12, .modifier = MODIFIER_NONE },
  [(int)Key::PrintScr] = { .scancode = Scancode::None, .modifier = MODIFIER_NONE },
  [(int)Key::ScrollLock] = { .scancode = Scancode::None, .modifier = MODIFIER_NONE },
  [(int)Key::Pause] = { .scancode = Scancode::None, .modifier = MODIFIER_NONE },
  [(int)Key::Home] = { .scancode = Scancode::None, .modifier = MODIFIER_NONE },
  [(int)Key::PgUp] = { .scancode = Scancode::None, .modifier = MODIFIER_NONE },
  [(int)Key::Del] = { .scancode = Scancode::None, .modifier = MODIFIER_NONE },
  [(int)Key::End] = { .scancode = Scancode::None, .modifier = MODIFIER_NONE },
  [(int)Key::PgDn] = { .scancode = Scancode::None, .modifier = MODIFIER_NONE },
  [(int)Key::Right] = { .scancode = Scancode::None, .modifier = MODIFIER_NONE },
  [(int)Key::Left] = { .scancode = Scancode::None, .modifier = MODIFIER_NONE },
  [(int)Key::Down] = { .scancode = Scancode::None, .modifier = MODIFIER_NONE },
  [(int)Key::Up] = { .scancode = Scancode::None, .modifier = MODIFIER_NONE },

  [(int)Key::Ctrl] = { .scancode = Scancode::None, .modifier = MODIFIER_CTRL },
  [(int)Key::Shift] = { .scancode = Scancode::None, .modifier = MODIFIER_SHIFT },
  [(int)Key::Alt] = { .scancode = Scancode::None, .modifier = MODIFIER_ALT },

  [(int)Key::None] = { .scancode = Scancode::None, .modifier = MODIFIER_NONE }
};
*/

enum class Layer {
  Base,
  Sym,
  Count
};

class Keymap {
  public:
    struct Report {
      uint16_t scancodes[6];
      uint8_t modifiers;
    };

    Keymap(void);
    void update(
      const Matrix::Report *mr,
      Report *kr
    );

  private:
    Layer activeLayer;

    bool shiftStuck : 1;
    bool altStuck : 1;
    bool ctrlStuck : 1;
    bool layerSymStuck : 1;
};


#endif