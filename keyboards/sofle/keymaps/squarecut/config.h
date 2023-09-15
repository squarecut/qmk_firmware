#pragma once

// wiring of each half
#define MATRIX_ROW_PINS { C6, D7, E6, B4, B5 }
#define MATRIX_COL_PINS { F6, F7, B1, B3, B2, B6 }
#define DIODE_DIRECTION COL2ROW

#define TAPPING_TERM_PER_KEY
#define IGNORE_MOD_TAP_INTERRUPT //using with LT

#define TAP_CODE_DELAY 10

//to differentiate left and right PCBs with pro micro USB-C
#define SPLIT_USB_DETECT
#define SPLIT_USB_TIMEOUT 2500