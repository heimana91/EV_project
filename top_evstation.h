// This file is generated by FBC.

#ifndef TOP_EVSTATION_H_
#define TOP_EVSTATION_H_

#include "fbtypes.h"
#include "sifb_bfb_inputs.h"
#include "print.h"
#include "bfb_ess_battery.h"
#include "cfb_controller.h"
#include "bfb_text_print.h"

typedef struct {
    sifb_bfb_inputs inputs;
    print Reference1;
    bfb_ess_battery battery;
    cfb_controller controller;
    bfb_text_print Reference;
} top_evstation;

/* Function block initialization function */
void top_evstationinit(top_evstation* me);

/* Function block execution function */
void top_evstationrun(top_evstation* me);

#endif // TOP_EVSTATION_H_
