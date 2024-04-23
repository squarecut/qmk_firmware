#pragma once

// wiring of each half
#define MATRIX_ROW_PINS { C6, D7, E6, B4, B5 }
#define MATRIX_COL_PINS { F6, F7, B1, B3, B2, B6 }
#define DIODE_DIRECTION COL2ROW

#define TAPPING_TERM 300
#define TAPPING_TERM_PER_KEY
#define IGNORE_MOD_TAP_INTERRUPT //using with LT

#define TAP_CODE_DELAY 10
