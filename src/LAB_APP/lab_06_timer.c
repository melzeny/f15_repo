/*
 * lab_06_timer.c
 *
 *  Created on: Jul 13, 2019
 *      Author: Muhammad.Elzeiny
 */
#include "../utils/Std_Types.h"
#include "../utils/Bit_Math.h"

#include "../MCAL/GLOBAL_INTERRUPT/Global_Int.h"
#include "../MCAL/PORT_DRIVER/PORT.h"
#include "../MCAL/DIO/DIO.h"
#include "../MCAL/TIMER0/TIMER0.h"

#include "../EHAL/LCD/LCD.h"
#include "../EHAL/KP/KP.h"
#include "../utils/Interrupts.h"

void lab_06_timer(void)
{
	uint8 CurrPressedButton;
	uint8 PrevPressed;

	PORT_init();
	KP_init();
	LCD_init();
	GI_en();
	TIMER0_init();
	while(1)
	{
		CurrPressedButton = KP_getPressedSwitch();
		/*Check if any button has been pressed*/
		if(CurrPressedButton != 255)
		{
			if(PrevPressed == 255)
			{
				LCD_writeData(CurrPressedButton);
			}
		}
		PrevPressed = CurrPressedButton;
	}
}

void ISR(TIMER0_COMP)
{
	Dio_FlipChannel(Dio_Channel_D6);
}
