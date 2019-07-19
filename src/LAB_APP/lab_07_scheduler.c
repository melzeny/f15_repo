/*
 * lab_06_scheduler.c
 *
 *  Created on: Jul 19, 2019
 *      Author: Muhammad.Elzeiny
 */
#include "../utils/Std_Types.h"
#include "../utils/Bit_Math.h"

#include "../MCAL/GLOBAL_INTERRUPT/Global_Int.h"
#include "../MCAL/PORT_DRIVER/PORT.h"
#include "../MCAL/DIO/DIO.h"
#include "../MCAL/TIMER2/TIMER2.h"

#include "../EHAL/LCD/LCD.h"
#include "../EHAL/KP/KP.h"
#include "../EHAL/BcdSevSeg/BcdSevSeg.h"
#include "../utils/Interrupts.h"
#include "../Scheduler/Scheduler.h"

void Task_refreshBcdSevSeg(void)
{
	/*periodic Task : 10ms*/

}
void Task_updateCounter(void)
{
	/*periodic Task : 1000ms and changable*/

}
void Task_InputPassword(void)
{
	/*periodic Task : 30ms*/

}



void lab_07_scheduler(void)
{
	PORT_init();
	Scheduler_createTask(0,Task_refreshBcdSevSeg,1,STD_active );
	Scheduler_createTask(1,Task_updateCounter,100,STD_active );
	Scheduler_createTask(2,Task_InputPassword,3,STD_active );
	Scheduler_init();
	while(1)
	{



	}



}
