/*
 * switch_led.c
 *
 *  Created on: Oct 9, 2023
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
			HAL_GPIO_WritePin(BUTTON_2_GPIO_Port, BUTTON_2_Pin, SET);
			HAL_GPIO_WritePin(BUTTON_3_GPIO_Port, BUTTON_3_Pin, SET);
			display7SEG(1);
			if (timer_flag == 1) {
				state = LED_2;
				setTimer(50);
			}
			break;
		case LED_2:
			HAL_GPIO_WritePin(BUTTON_0_GPIO_Port, BUTTON_0_Pin, SET);
			HAL_GPIO_WritePin(BUTTON_1_GPIO_Port, BUTTON_1_Pin, RESET);
			HAL_GPIO_WritePin(BUTTON_2_GPIO_Port, BUTTON_2_Pin, SET);
			HAL_GPIO_WritePin(BUTTON_3_GPIO_Port, BUTTON_3_Pin, SET);
			display7SEG(2);
			if (timer_flag == 1) {
				state = LED_3;
				setTimer(50);
			}
			break;
		case LED_3:
			HAL_GPIO_WritePin(BUTTON_0_GPIO_Port, BUTTON_0_Pin, SET);
			HAL_GPIO_WritePin(BUTTON_1_GPIO_Port, BUTTON_1_Pin, SET);
			HAL_GPIO_WritePin(BUTTON_2_GPIO_Port, BUTTON_2_Pin, RESET);
			HAL_GPIO_WritePin(BUTTON_3_GPIO_Port, BUTTON_3_Pin, SET);
			display7SEG(3);
			if (timer_flag == 1) {
				state = LED_4;
				setTimer(50);
			}
			break;
		case LED_4:
			HAL_GPIO_WritePin(BUTTON_0_GPIO_Port, BUTTON_0_Pin, SET);
			HAL_GPIO_WritePin(BUTTON_1_GPIO_Port, BUTTON_1_Pin, SET);
			HAL_GPIO_WritePin(BUTTON_2_GPIO_Port, BUTTON_2_Pin, SET);
			HAL_GPIO_WritePin(BUTTON_3_GPIO_Port, BUTTON_3_Pin, RESET);
			display7SEG(0);
			if (timer_flag == 1) {
				state = LED_1;
				setTimer(50);
			}
			break;
		default:
			break;
	}
	if(timer_red_flag == 1) {
		HAL_GPIO_TogglePin(LED_DOT_GPIO_Port, LED_DOT_Pin);
		setTimerRed(100);
	}
}
