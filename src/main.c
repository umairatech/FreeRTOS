/*
 * main.c
 *
 *  Created on: 02-Jun-2020
 *      Author: imranfarheen
 */

#include "stm32f4xx.h"
#include "FreeRTOS.h"
#include "task.h"

void vTaskHandler1(void *);
void vTaskHandler2(void *);

TaskHandle_t xTaskHandle1 = NULL;
TaskHandle_t xTaskHandle2 = NULL;

int main(void){

	xTaskCreate(vTaskHandler1,"Task-1",configMINIMAL_STACK_SIZE,NULL,2,&xTaskHandle1);
	xTaskCreate(vTaskHandler2,"Task-2",configMINIMAL_STACK_SIZE,NULL,2,&xTaskHandle2);
	vTaskStartScheduler();
	return 0;
}

void vTaskHandler1(void *parms)
{
	while(1)
	{

	}
}

void vTaskHandler2(void *parms)
{
	while(1)
	{

	}
}
