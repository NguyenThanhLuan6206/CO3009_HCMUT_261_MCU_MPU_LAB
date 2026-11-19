/*
 * software_timer.c
 *
 *  Created on: Nov 13, 2026
 *      Author: Luan
 */


/*
 * software_timer.c
 */

#include "software_timer.h"

int timer_counter[MAX_TIMERS] = {0};
int timer_flag[MAX_TIMERS] = {0};

void setTimer(int index, int duration) {
    if (index >= 0 && index < MAX_TIMERS) {
        timer_counter[index] = duration;
        timer_flag[index] = 0;
    }
}

void timerRun(void) {
    for (int i = 0; i < MAX_TIMERS; i++) {
        if (timer_counter[i] > 0) {
            timer_counter[i]--;
            if (timer_counter[i] <= 0) {
                timer_flag[i] = 1;
            }
        }
    }
}
