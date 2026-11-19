/*
 * software_timer.h
 *
 *  Created on: Nov 13, 2026
 *      Author: Luan
 */
#ifndef INC_SOFTWARE_TIMER_H_
#define INC_SOFTWARE_TIMER_H_

#define MAX_TIMERS 5

extern int timer_flag[MAX_TIMERS];

void setTimer(int index, int duration);
void timerRun(void);

#endif /* INC_SOFTWARE_TIMER_H_ */
