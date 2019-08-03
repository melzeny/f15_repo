/*
 *
 * INCLUDES
 *
 * */

#include "../EHAL/BcdSevSeg/BcdSevSeg.h"
#include "../EHAL/KP/KP.h"
#include "../EHAL/LCD/LCD.h"
#include "../EHAL/ULS/ULS.h"

#include "../MCAL/ADC/ADC.h"
#include "../MCAL/TIMER0/TIMER0.h"

#include "../Scheduler/Scheduler.h"

#include "../utils/Std_Types.h"
#include "../utils/Bit_Math.h"

#include "../config/ADC_cfg.h"
#include "../config/KP_cfg.h"
#include "../config/BcdSevSeg_cfg.h"
#include "../config/Scheduler_cfg.h"
#include "../config/ULS_cfg.h"
#include "../config/TIMER0_cfg.h"

#include <stdlib.h>
#include <util/delay.h>

/*
 *
 * FUNCTION IMP
 *
 * */
static uint8 DisplayedNum = 10;

void Task_Bcd_SevSeg_Ref (void)
{
	/*periodic Task : 10ms*/
		static uint8 counter =0;
		counter++;
		if(counter == 1)
		{
			/*refresh sev segments 1*/
			BcdSevSeg_disable_2();
			BcdSevSeg_DisplayNum(DisplayedNum%10);
			BcdSevSeg_enable_1();
		}
		else if(counter == 2)
		{
			/*refresh sev segments 2*/
			BcdSevSeg_disable_1();
			BcdSevSeg_DisplayNum(DisplayedNum/10);
			BcdSevSeg_enable_2();
			counter=0;
		}
}
void Task_Bcd_SevSeg_Count(void)
{
	/*periodic Task : 1000ms and */
	DisplayedNum--;
	if (DisplayedNum==0)
	{
		BcdSevSeg_disable_1();
		BcdSevSeg_disable_2();
	}


}

void Task_Update_Canon(void)
{




}
void Task_Uls_Trig(void)
{




}

void Task_Kp(void)
{



}
void Task_Upd_Distance(void)
{


}
void Task_Fire(void)
{


}




void canon_main(void)
{
	Scheduler_createTask(0,Task_Bcd_SevSeg_Ref,1,STD_suspended);
	Scheduler_createTask(1,Task_Bcd_SevSeg_Count,100,STD_suspended);
	Scheduler_createTask(2,Task_Update_Canon,10,STD_active);
	Scheduler_createTask(3,Task_Uls_Trig,8,STD_active);
	Scheduler_createTask(4,Task_Kp,3,STD_active);
	Scheduler_createTask(5,Task_Upd_Distance,1,STD_active);
	Scheduler_createTask(6,Task_Fire,1,STD_suspended);

	while(1)
	{



	}


}
