#pragma once

// Tapping term settings
#undef TAPPING_TERM
#define TAPPING_TERM 50
#define IGNORE_MOD_TAP_INTERRUPT_PER_KEY
#define TAPPING_TERM_PER_KEY
#define IGNORE_TAPPING_FORCE_HOLD_PER_KEY
#define PERMISSIVE_HOLD_PER_KEY

// Combos
// #undef COMBO_COUNT
// #define COMBO_COUNT
// #define COMBO_VARIABLE_LEN
#define COMBO_TERM 30
#undef COMBO_TERM_PER_COMBO
// #define COMBO_ALLOW_ACTION_KEYS
// #define COMBO_MUST_HOLD_MODS

/* Mousekey stuff */
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

  #ifdef RGB_MATRIX_ENABLE
  #undef RGBLED_NUM
  #define RGBLED_NUM 50
  #define DRIVER_LED_TOTAL RGBLED_NUM
  #endif // RGBL_MATRIX_ENABLE
#endif // KEYBOARD_lazydesigners_dimple

// RGB_Matrix settings
#ifdef RGB_MATRIX_ENABLE
  #define RGB_MATRIX_KEYPRESSES // reacts to keypresses
  #define RGB_DISABLE_WHEN_USB_SUSPENDED // turn off effects when suspended
  #define RGB_MATRIX_LED_FLUSH_LIMIT 16 // limits in milliseconds how frequently an animation will update the LEDs. 16 (16ms) is equivalent to limiting to 60fps (increases keyboard responsiveness)
  #define RGB_MATRIX_MAXIMUM_BRIGHTNESS 150 // limits maximum brightness of LEDs to 150 out of 255. Higher may cause the controller to crash.
  #define RGB_MATRIX_HUE_STEP 8
  #define RGB_MATRIX_SAT_STEP 8
  #define RGB_MATRIX_VAL_STEP 8
  #define RGB_MATRIX_SPD_STEP 10
  #define RGB_MATRIX_STARTUP_MODE RGB_MATRIX_CYCLE_LEFT_RIGHT
  /* Disable the animations you don't want/need.  You will need to disable a good number of these
    because they take up a lot of space.  Disable until you can successfully compile your firmware. */
// #undef ENABLE_RGB_MATRIX_ALPHAS_MODS
// #undef ENABLE_RGB_MATRIX_GRADIENT_UP_DOWN
#    undef ENABLE_RGB_MATRIX_BREATHING
// #undef ENABLE_RGB_MATRIX_CYCLE_ALL
// #undef ENABLE_RGB_MATRIX_CYCLE_LEFT_RIGHT
// #undef ENABLE_RGB_MATRIX_CYCLE_UP_DOWN
// #undef ENABLE_RGB_MATRIX_CYCLE_OUT_IN
// #undef ENABLE_RGB_MATRIX_CYCLE_OUT_IN_DUAL
#    undef ENABLE_RGB_MATRIX_RAINBOW_MOVING_CHEVRON
#    undef ENABLE_RGB_MATRIX_DUAL_BEACON
#    undef ENABLE_RGB_MATRIX_RAINBOW_BEACON
#    undef ENABLE_RGB_MATRIX_RAINBOW_PINWHEELS
// #undef ENABLE_RGB_MATRIX_RAINDROPS
#    undef ENABLE_RGB_MATRIX_JELLYBEN_RAINDROPS
// # undef ENABLE_RGB_MATRIX_TYPING_HEATMAP
#    undef ENABLE_RGB_MATRIX_DIGITAL_RAIN
#    undef ENABLE_RGB_MATRIX_SOLID_REACTIVE
#    undef ENABLE_RGB_MATRIX_SOLID_REACTIVE_SIMPLE
// #undef ENABLE_RGB_MATRIX_SOLID_REACTIVE_WIDE
// #undef ENABLE_RGB_MATRIX_SOLID_REACTIVE_CROSS
// #undef ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTICROSS
#    undef ENABLE_RGB_MATRIX_SOLID_REACTIVE_NEXUS
#    undef ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTINEXUS
#    undef ENABLE_RGB_MATRIX_SPLASH
#    undef ENABLE_RGB_MATRIX_MULTISPLASH
#    undef ENABLE_RGB_MATRIX_SOLID_SPLASH
#    undef ENABLE_RGB_MATRIX_SOLID_MULTISPLASH
#endif //RGB_MATRIX_ENABLE

// Hex size reduction options
#ifndef NO_DEBUG
  #define NO_DEBUG
#endif // !NO_DEBUG
#if !defined(NO_PRINT) && !defined(CONSOLE_ENABLE)
  #define NO_PRINT
#endif // !NO_PRINT
#define NO_ACTION_ONESHOT
