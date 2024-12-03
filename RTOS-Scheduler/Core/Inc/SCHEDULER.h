/*
 * SCHEDULER.h
 *
 *  Created on: Sep 24, 2024
 *      Author: ADMIN
 */

#ifndef INC_SCHEDULER_H_
#define INC_SCHEDULER_H_

#include "stdint.h"
#include "main.h"
#include "global.h"

#define SCH_MAX_TASK	10
#define NO_TASK_ID		0


#define TICKS			10

#define BUFFER_SIZE		SCH_MAX_TASK



typedef struct {
	void (*pTask)(void);
	int32_t Delay;
	int32_t Period;
	uint8_t RunMe;


	uint32_t TaskID;

}sTask;


typedef struct{
	sTask buffer[SCH_MAX_TASK];
	uint8_t head;
	uint8_t tail;
	uint8_t size;
}RingBuffer;

extern RingBuffer taskBuffer;

void SCH_Init(void);
unsigned char SCH_Delete_Task(const unsigned char TASK_INDEX);
void SCH_Update(void);
unsigned char SCH_Add_Task(void (* pFunction) (), unsigned int DELAY, unsigned int PERIOD);
void SCH_Dispatch_Tasks(void);
void SCH_Init1(void);
unsigned char SCH_Delete_Task1(const unsigned char TASK_INDEX);
void SCH_Update1(void);
unsigned char SCH_Add_Task1(void (* pFunction) (), unsigned int DELAY, unsigned int PERIOD);
void SCH_Dispatch_Tasks1(void);
extern sTask SCH_tasks_G[SCH_MAX_TASK];


#endif /* INC_SCHEDULER_H_ */
