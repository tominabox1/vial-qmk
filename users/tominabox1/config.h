#pragma once

// Tapping term settings
#undef TAPPING_TERM
#define TAPPING_TERM 50
#define IGNORE_MOD_TAP_INTERRUPT_PER_KEY
#define TAPPING_TERM_PER_KEY
#define IGNORE_TAPPING_FORCE_HOLD_PER_KEY
#define PERMISSIVE_HOLD_PER_KEY

// Combos
#define COMBO_TERM 30
#define COMBO_TERM_PER_COMBO

// Mousekey stuff
#ifdef MOUSEKEY_ENABLE
  #define MOUSEKEY_INTERVAL 12
  #define MOUSEKEY_MAX_SPEED 6
  #define MOUSEKEY_TIME_TO_MAX 50
  #define MOUSEKEY_DELAY 20
#endif

#ifdef DYNAMIC_MACRO_ENABLE
#    define DYNAMIC_MACRO_NO_NESTING
#   // define DYNAMIC_MACRO_SIZE 24
#endif

#define NO_ACTION_MACRO
#define NO_ACTION_FUNCTION
