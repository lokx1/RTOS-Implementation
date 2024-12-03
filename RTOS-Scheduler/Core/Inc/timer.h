/*
 * timer.h
 *
 *  Created on: Sep 24, 2024
 *      Author: ADMIN
 */

#ifndef TIMER_H_
#define TIMER_H_

#define TIMER_CYCLE		10
extern unsigned char timer0_flag;

void setTimer0(int duration);
void timer_run();

#endif /* TIMER_H_ */
