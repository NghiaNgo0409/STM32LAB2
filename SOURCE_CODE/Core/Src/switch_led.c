/*
 * switch_led.c
 *
 *  Created on: Oct 7, 2023
 *      Author: Nghia
 */


#include "switch_led.h"

void switching_led() {
	switch (state) {
		case INIT:
			state = LED_1;
			setTimer(50);
			break;
		case LED_1:
			HAL_GPIO_WritePin(BUTTON_0_GPIO_Port, BUTTON_0_Pin, RESET);
			HAL_GPIO_WritePin(BUTTON_1_GPIO_Port, BUTTON_1_Pin, SET);
			display7SEG(1);
			if (timer_flag == 1) {
				state = LED_2;
				setTimer(50);
			}
			break;
		case LED_2:
			HAL_GPIO_WritePin(BUTTON_0_GPIO_Port, BUTTON_0_Pin, SET);
			HAL_GPIO_WritePin(BUTTON_1_GPIO_Port, BUTTON_1_Pin, RESET);
			display7SEG(2);
			if (timer_flag == 1) {
				state = LED_1;
				setTimer(50);
			}
			break;
		default:
			break;
	}
}
