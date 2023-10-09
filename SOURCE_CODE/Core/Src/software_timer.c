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

void setTimer(int duration){
	timer_counter = duration;
	timer_flag = 0;
}
void setTimerRed(int duration) {
	timer_red_counter = duration;
	timer_red_flag = 0;
}
void timerRun(){
	if(timer_counter > 0){
		timer_counter--;
		if(timer_counter <= 0){
			timer_flag = 1;
		}
	}
}
void timerRedRun() {
	if(timer_red_counter > 0){
		timer_red_counter--;
		if(timer_red_counter <= 0) {
			timer_red_flag = 1;
		}
	}
}
