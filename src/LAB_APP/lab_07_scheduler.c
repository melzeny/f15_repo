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
/*Timer0 ISR periodicity: 10ms*/
ISR(TIMER0_COMP)
{
	static uint32 counter =0 ;
	if(counter % 1 == 0)
	{
		Task_refreshBcdSevSeg();
	}
	if(counter % 3 == 0)
	{
		Task_InputPassword();
	}
	if(counter % 100 == 0)
	{
		Task_updateCounter();

	}
	counter++;
}






void lab_07_scheduler(void)
{




}
