#pragma once

 // place overrides here
#ifdef AUDIO_ENABLE
  #define STARTUP_SONG SONG(PLANCK_SOUND)
  #define DEFAULT_LAYER_SONGS { SONG(MARIO_GAMEOVER), /* QWERTY */ \
                                SONG(MARIO_THEME)     /* Colemak */ \
                              }
#endif

/* Use I2C or Serial, not both */
// #define USE_SERIAL
#define USE_I2C
#define SCL_CLOCK  400000L

/* Select hand configuration */
// #define MASTER_LEFT
// #define MASTER_RIGHT
#define EE_HANDS

#define MATRIX_ROW_PINS { F4, B1, B2, B3 }
#define MATRIX_ROW_PINS_RIGHT { B3, B2, B1, F4 }
#define MATRIX_COL_PINS { D2, D3, C6, D7, B5, B6 }
