/*
 * lab_06_timer.c
 *
 *  Created on: Jul 13, 2019
 *      Author: Muhammad.Elzeiny
 */
#include "../utils/Std_Types.h"
#include "../utils/Bit_Math.h"

#include "../MCAL/PORT_DRIVER/PORT.h"
#include "../MCAL/DIO/DIO.h"
#include "../EHAL/LCD/LCD.h"
#include "../EHAL/KP/KP.h"


void lab_06_timer(void)
{
	uint8 CurrPressedButton;
	uint8 PrevPressed;
	PORT_init();
	KP_init();
	LCD_init();
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
