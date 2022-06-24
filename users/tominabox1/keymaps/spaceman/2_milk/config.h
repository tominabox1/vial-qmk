#undef DIRECT_PINS
#define DIRECT_PINS { \
    {D0}, \
    {C6}  \
}

#ifdef RGBLIGHT_ENABLE
#undef RGB_DI_PIN
#define RGB_DI_PIN F5
#undef RGBLED_NUM
#define RGBLED_NUM 3
#define RGBLIGHT_ANIMATIONS
#endif
