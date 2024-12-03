/*
 * task.c
 *
 *  Created on: Sep 24, 2024
 *      Author: ADMIN
 */

#include "task.h"
void TASK_0(){
	HAL_GPIO_TogglePin(LED0_GPIO_Port,LED0_Pin);
	HAL_UART_Transmit(&huart2, (uint8_t *)data, sprintf(data, "Task 0 is dispatched at %d\r\n", time_stamp), 1000);
	HAL_Delay(10);
}
void TASK_1(){
	HAL_GPIO_TogglePin(LED1_GPIO_Port,LED1_Pin);
	HAL_UART_Transmit(&huart2, (uint8_t *)data, sprintf(data, "Task 1 is dispatched at %d\r\n", time_stamp), 1000);
	HAL_Delay(10);
}
void TASK_2(){
	HAL_GPIO_TogglePin(LED2_GPIO_Port,LED2_Pin);
	HAL_UART_Transmit(&huart2, (uint8_t *)data, sprintf(data, "Task 2 is dispatched at %d\r\n", time_stamp), 1000);
	HAL_Delay(10);
}
void TASK_3(){
	HAL_GPIO_TogglePin(LED3_GPIO_Port,LED3_Pin);
	HAL_UART_Transmit(&huart2, (uint8_t *)data, sprintf(data, "Task 3 is dispatched at %d\r\n", time_stamp), 1000);
	HAL_Delay(10);
}
void TASK_4(){
	HAL_GPIO_TogglePin(LED4_GPIO_Port,LED4_Pin);
	HAL_UART_Transmit(&huart2, (uint8_t *)data, sprintf(data, "Task 4 is dispatched at %d\r\n", time_stamp), 1000);
	HAL_Delay(10);
}
void TASK_5(){
	HAL_GPIO_TogglePin(LED5_GPIO_Port,LED5_Pin);
	HAL_UART_Transmit(&huart2, (uint8_t *)data, sprintf(data, "Task 5 is dispatched at %d\r\n", time_stamp), 1000);
	HAL_Delay(10);
}
