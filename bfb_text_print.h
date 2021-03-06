// This file is generated by FBC.

#ifndef BFB_TEXT_PRINT_H_
#define BFB_TEXT_PRINT_H_

#include "fbtypes.h"

typedef union {
    UDINT events;
    struct {
        UDINT Tick_array : 1; // 
        UDINT tick_stop : 1; // 
        UDINT Tick_SoC : 1; // 
    } event;
} bfb_text_printIEvents;

typedef union {
    UDINT events;
    struct {
        UDINT Done : 1; // 
    } event;
} bfb_text_printOEvents;

typedef struct {
    UINT _state;
    BOOL _entered;
    bfb_text_printIEvents _input;
    DINT Min; // 
    DINT _Min;
    REAL Demand; // 
    REAL _Demand;
    REAL Pgrid; // 
    REAL _Pgrid;
    REAL Pbc; // 
    REAL _Pbc;
    REAL Pbd; // 
    REAL _Pbd;
    REAL Price; // 
    REAL _Price;
    BOOL Stop; // 
    BOOL _Stop;
    INT lenght; // 
    INT _lenght;
    REAL SoC; // 
    REAL _SoC;
    REAL Day; // 
    REAL _Day;
    REAL SMA; // 
    REAL _SMA;
    REAL Std_dev; // 
    REAL _Std_dev;
    bfb_text_printOEvents _output;
} bfb_text_print;

/* Function block initialization function */
void bfb_text_printinit(bfb_text_print* me);

/* Function block execution function */
void bfb_text_printrun(bfb_text_print* me);

/* ECC algorithms */
void bfb_text_print_Algorithm1(bfb_text_print* me);

#endif // BFB_TEXT_PRINT_H_
