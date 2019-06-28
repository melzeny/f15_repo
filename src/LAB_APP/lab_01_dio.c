/*
 * lab_01_dio.c
 *
 *  Created on: Jun 28, 2019
 *      Author: Muhammad.Elzeiny
 */
#include "../MCAL/DIO/DIO.h"

void lab_01_dio(void)
{
	while(1)
	{
		if(Dio_ReadChannel(Dio_Channel_D0) == STD_high)
		{
			Dio_WriteChannel(Dio_Channel_D7,STD_high);
		}
		else
		{
			Dio_WriteChannel(Dio_Channel_D7,STD_low);
		}
	}


}
