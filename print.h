// This file is generated by FBC.

#ifndef PRINT_H_
#define PRINT_H_

#include "fbtypes.h"

typedef union {
    UDINT events;
    struct {
        UDINT Discharging : 1; // 
        UDINT Charging : 1; // 
        UDINT Do_nothing : 1; // 
        UDINT Last_Tick : 1; // 
    } event;
} printIEvents;

typedef union {
    UDINT events;
    struct {
        UDINT Done : 1; // 
    } event;
} printOEvents;

typedef struct {
    UINT _state;
    BOOL _entered;
    printIEvents _input;
    DINT Minute; // 
    DINT _Minute;
    REAL Price; // 
    REAL _Price;
    REAL Power_Demand; // 
    REAL _Power_Demand;
    REAL ESS_Charging; // 
    REAL _ESS_Charging;
    REAL ESS_Discharging_Power; // 
    REAL _ESS_Discharging_Power;
    printOEvents _output;
    DINT min; // 
    DINT _min;
    REAL Demand; // 
    REAL _Demand;
    REAL Pgrid; // 
    REAL _Pgrid;
    REAL Pbc; // 
    REAL _Pbc;
    REAL Pbd; // 
    REAL _Pbd;
    REAL Price_min; // 
    REAL _Price_min;
} print;

/* Function block initialization function */
void printinit(print* me);

/* Function block execution function */
void printrun(print* me);

/* ECC algorithms */
void print_do_print(print* me);
void print_Algorithm1(print* me);
void print_Algorithm2(print* me);

#endif // PRINT_H_
