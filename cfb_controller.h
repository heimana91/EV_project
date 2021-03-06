// This file is generated by FBC.

#ifndef CFB_CONTROLLER_H_
#define CFB_CONTROLLER_H_

#include "fbtypes.h"
#include "bfb_controller_um.h"
#include "bfb_off_peak_types.h"

typedef union {
    UDINT events;
    struct {
        UDINT Tick : 1; // 
    } event;
} cfb_controllerIEvents;

typedef union {
    UDINT events;
    struct {
        UDINT Charging : 1; // 
        UDINT Discharging : 1; // 
        UDINT Do_nothing : 1; // 
        UDINT Tick_time : 1; // 
    } event;
} cfb_controllerOEvents;

typedef struct {
    cfb_controllerIEvents _input;
    DINT _Minute;
    REAL _Price;
    REAL _Demand_kWh;
    REAL _ESS_battery_SoC;
    REAL _day;
    REAL _Sma;
    REAL _Std_dev;
    cfb_controllerOEvents _output;
    REAL _ESS_Charging_Power_Demand;
    REAL _ESS_Discharging_Power;
    REAL _SoC;
    REAL _Demand;
    bfb_controller_um bfb_controller_um;
    bfb_off_peak_types Reference;
} cfb_controller;

/* Function block initialization function */
void cfb_controllerinit(cfb_controller* me);

/* Function block execution function */
void cfb_controllerrun(cfb_controller* me);

#endif // CFB_CONTROLLER_H_
