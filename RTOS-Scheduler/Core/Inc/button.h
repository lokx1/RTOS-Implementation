/*
 * button.h
 *
 *  Created on: Sep 24, 2024
 *      Author: ADMIN
 */

#ifndef INC_BUTTON_H_
#define INC_BUTTON_H_

#include "main.h"
#include "SCHEDULER.h"
#include "task.h"

#define BUTTON_PRESSED		GPIO_PIN_SET
#define BUTTON_RELEASED		GPIO_PIN_RESET


enum flagButton {
	PRESSED_FLAG,
	RELEASED_FLAG
};

void button_reading();
void fsm_button();

#endif /* INC_BUTTON_H_ */
