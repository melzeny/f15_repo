/*
 * lab_04_lcd.c
 *
 *  Created on: Jul 6, 2019
 *      Author: Muhammad.Elzeiny
 */

#include "../EHAL/LCD/LCD.h"
#include "../MCAL/PORT_DRIVER/PORT.h"
void lab_04_lcd(void)
{
	PORT_init();
	LCD_init();
	LCD_writeData('L');
	LCD_writeData('C');
	LCD_writeData('D');
	LCD_writeData('%');

	while(1)
	{


	}
}
