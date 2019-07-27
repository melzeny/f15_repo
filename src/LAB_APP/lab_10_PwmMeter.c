/*
 * lab_10_PwmMeter.c
 *
 *  Created on: Jul 27, 2019
 *      Author: Muhammad.Elzeiny
 */



void lab_10_PwmMeter(void)
{
	uint8 buff[8] ;
	itoa(345,buff,10); /*buff[] = {'3','4','5','\0'}*/
	LCD_writeString(buff,0,0);

	while(1)
	{

	}


}
