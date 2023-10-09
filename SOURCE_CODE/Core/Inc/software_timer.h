/*
 * software_timer.h
 *
 *  Created on: Oct 9, 2023
 *      Author: Nghia
 */

#ifndef INC_SOFTWARE_TIMER_H_
#define INC_SOFTWARE_TIMER_H_

extern int timer_flag;
extern int timer_red_flag;

void setTimer(int duration);
void setTimerRed(int duration);

void timerRun();
void timerRedRun();

#endif /* INC_SOFTWARE_TIMER_H_ */
