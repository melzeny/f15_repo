/*
 * lab_01_dio.c
 *
 *  Created on: Jun 28, 2019
 *      Author: Muhammad.Elzeiny
 */
#include "../MCAL/PORT_DRIVER/PORT.h"
#include "../MCAL/DIO/DIO.h"

void lab_01_dio(void)
{
	PORT_init();
	/*attach internal pull up resistor*/
	Dio_WriteChannel(Dio_Channel_A0,STD_high);
	while(1)
	{
		/*if switch pressed*/
		if(Dio_ReadChannel(Dio_Channel_D0) == STD_high)
		{
			/*led on */
			Dio_WriteChannel(Dio_Channel_D7,STD_high);
		}
		else
		{
			Dio_WriteChannel(Dio_Channel_D7,STD_low);
		}
	}


}
