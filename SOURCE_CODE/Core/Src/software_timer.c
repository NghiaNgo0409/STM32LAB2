/*
 * software_timer.c
 *
 *  Created on: Oct 9, 2023
 *      Author: Nghia
 */


#include "software_timer.h"

int timer_counter = 0;
int timer_flag = 0;
int timer_red_counter = 0;
int timer_red_flag = 0;
int timer0_counter = 0;
int timer0_flag = 0;
int timer_matrix_counter = 0;
int timer_matrix_flag = 0;
int TIMER_CYCLE = 10;

void setTimer(int duration){
	timer_counter = duration;
	timer_flag = 0;
}
void setTimerRed(int duration) {
	timer_red_counter = duration;
	timer_red_flag = 0;
}
void setTimer0(int duration) {
	timer0_counter = duration / TIMER_CYCLE;
	timer0_flag = 0;
}
void setTimerMatrix(int duration) {
	timer_matrix_counter = duration;
	timer_matrix_flag = 0;
}
void timerRun(){
	if(timer_counter > 0){
		timer_counter--;
		if(timer_counter <= 0){
			timer_flag = 1;
		}
	}

	if(timer_red_counter > 0){
		timer_red_counter--;
		if(timer_red_counter <= 0) {
			timer_red_flag = 1;
		}
	}

	if(timer0_counter > 0) {
		timer0_counter--;
		if(timer0_counter <= 0) {
			timer0_flag = 1;
		}
	}

	if(timer_matrix_counter > 0) {
		timer_matrix_flag--;
		if(timer_matrix_flag <= 0) {
			timer_matrix_flag = 1;
		}
	}
}
