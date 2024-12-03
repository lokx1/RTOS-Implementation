/*
 * button.c
 *
 *  Created on: Sep 24, 2024
 *      Author: ADMIN
 */


#include "button.h"

GPIO_PinState buffer1 = BUTTON_RELEASED;
GPIO_PinState buffer2 = BUTTON_RELEASED;
GPIO_PinState stbl_rec = BUTTON_RELEASED;

enum flagButton button_state = BUTTON_RELEASED;

void button_reading() {
	        buffer1 = buffer2;
	        buffer2 = HAL_GPIO_ReadPin(BUTTON_GPIO_Port, BUTTON_Pin);
	        if (buffer1 == buffer2)
	            stbl_rec = buffer1;

	    }


static int is_button_pressed() {
	return (stbl_rec == BUTTON_PRESSED);
}

void fsm_button() {
	switch (button_state) {
		case BUTTON_PRESSED:
			if (!is_button_pressed()) {
				button_state = BUTTON_RELEASED;
			}
			break;
		case BUTTON_RELEASED:
			if (is_button_pressed()) {
				button_state = BUTTON_PRESSED;
				 HAL_UART_Transmit(&huart2, (uint8_t *)data, sprintf(data, "Button is pressed\r\n"), 1000);
				SCH_Add_Task(TASK_5,1000, 2000);
			}
			break;
		default:
			break;
	}
}
