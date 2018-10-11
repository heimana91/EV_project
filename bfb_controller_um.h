// This file is generated by FBC.

#ifndef BFB_CONTROLLER_UM_H_
#define BFB_CONTROLLER_UM_H_

#include "fbtypes.h"

typedef union {
    UDINT events;
    struct {
        UDINT Tick_controller : 1; // 
        UDINT OffPeakCharge : 1; // 
        UDINT OffPeak : 1; // 
        UDINT Peak : 1; // 
        UDINT tick : 1; // 
        UDINT Grey_area : 1; // 
    } event;
} bfb_controller_umIEvents;

typedef union {
    UDINT events;
    struct {
        UDINT Discharging : 1; // 
        UDINT Charging : 1; // 
        UDINT Do_nothing : 1; // 
        UDINT Tick_time : 1; // 
    } event;
} bfb_controller_umOEvents;

typedef struct {
    UINT _state;
    BOOL _entered;
    bfb_controller_umIEvents _input;
    REAL Power_Demand; // 
    REAL _Power_Demand;
    REAL SoC; // 
    REAL _SoC;
    REAL day; // 
    REAL _day;
    DINT minute; // 
    DINT _minute;
    bfb_controller_umOEvents _output;
    REAL Power_Discharging; // 
    REAL _Power_Discharging;
    REAL Power_Charging; // 
    REAL _Power_Charging;
    REAL SoC_out; // 
    REAL _SoC_out;
    REAL Demand; // 
    REAL _Demand;
} bfb_controller_um;

/* Function block initialization function */
void bfb_controller_uminit(bfb_controller_um* me);

/* Function block execution function */
void bfb_controller_umrun(bfb_controller_um* me);

/* ECC algorithms */
void bfb_controller_um_Algorithm1(bfb_controller_um* me);
void bfb_controller_um_Algorithm2(bfb_controller_um* me);
void bfb_controller_um_Algorithm3(bfb_controller_um* me);
void bfb_controller_um_Algorithm4(bfb_controller_um* me);

#endif // BFB_CONTROLLER_UM_H_
