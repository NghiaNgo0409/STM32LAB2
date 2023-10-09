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
extern int timer0_flag;
extern int timer_matrix_flag;

void setTimer(int duration);
void setTimerRed(int duration);
void setTimer0(int duration);
void setTimerMatrix(int duration);

void timerRun();

#endif /* INC_SOFTWARE_TIMER_H_ */
