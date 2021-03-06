// This file is generated by FBC.

#include "bfb_off_peak_types.h"
#include <string.h>
#include <stdio.h>

/* Function block initialization function */
void bfb_off_peak_typesinit(bfb_off_peak_types* me)
{
    me->_state = 0;
    me->_entered = false;
    me->_input.events = 0;
    me->_output.events = 0;
}

/* ECC algorithms */
void bfb_off_peak_types_Algorithm1(bfb_off_peak_types* me)
{
printf("OFF_peak in Off peak types\r\n");
}

void bfb_off_peak_types_Algorithm2(bfb_off_peak_types* me)
{
printf("OFF_peak CHARGING in Off peak types\r\n");
}

void bfb_off_peak_types_Algorithm3(bfb_off_peak_types* me)
{
printf("ON PEAK IN OFF peak types\r\n");
}

/* Function block execution function */
void bfb_off_peak_typesrun(bfb_off_peak_types* me)
{
    me->_output.events = 0;

    if (me->_input.event.tick) {
        me->price = me->_price;
        me->Sma = me->_Sma;
        me->std_dev = me->_std_dev;
    }
    for (;;) {
        switch (me->_state) {
            case 0:
                // State: Off_peak
                if (!me->_entered) {
                    bfb_off_peak_types_Algorithm1(me);
                    me->_output.event.Off_peak = 1;
                    me->_output.event.Tick = 1;
                    me->_entered = true;
                }
                else {
                    if (me->_input.event.tick && (me->price < (me->Sma - me->std_dev / 2))) {
                        me->_state = 1;
                        me->_entered = false;
                        continue;
                    }
                    else if (me->_input.event.tick && (me->price < (me->Sma + me->std_dev / 2) || me->price > (me->Sma - me->std_dev / 2))) {
                        me->_state = 0;
                        me->_entered = false;
                        continue;
                    }
                    else if (me->_input.event.tick && (me->price > (me->Sma + me->std_dev / 2))) {
                        me->_state = 2;
                        me->_entered = false;
                        continue;
                    }
                }
                break;
            case 1:
                // State: Off_peak_charging
                if (!me->_entered) {
                    bfb_off_peak_types_Algorithm2(me);
                    me->_output.event.Off_peak_charging = 1;
                    me->_output.event.Tick = 1;
                    me->_entered = true;
                }
                else {
                    if (me->_input.event.tick && (me->price < (me->Sma - me->std_dev / 2))) {
                        me->_state = 1;
                        me->_entered = false;
                        continue;
                    }
                    else if (me->_input.event.tick && (me->price < (me->Sma + me->std_dev / 2) || me->price > (me->Sma - me->std_dev / 2))) {
                        me->_state = 0;
                        me->_entered = false;
                        continue;
                    }
                    else if (me->_input.event.tick && (me->price > (me->Sma + me->std_dev / 2))) {
                        me->_state = 2;
                        me->_entered = false;
                        continue;
                    }
                }
                break;
            case 2:
                // State: Onpeak
                if (!me->_entered) {
                    bfb_off_peak_types_Algorithm3(me);
                    me->_output.event.Peak = 1;
                    me->_output.event.Tick = 1;
                    me->_entered = true;
                }
                else {
                    if (me->_input.event.tick && (me->price < (me->Sma + me->std_dev / 2) || me->price > (me->Sma - me->std_dev / 2))) {
                        me->_state = 0;
                        me->_entered = false;
                        continue;
                    }
                    else if (me->_input.event.tick && (me->price < (me->Sma - me->std_dev / 2))) {
                        me->_state = 1;
                        me->_entered = false;
                        continue;
                    }
                    else if (me->_input.event.tick && (me->price > (me->Sma + me->std_dev / 2))) {
                        me->_state = 2;
                        me->_entered = false;
                        continue;
                    }
                }
                break;
        }
        break;
    }

    me->_input.events = 0;
}

