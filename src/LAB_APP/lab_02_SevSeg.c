/*
 * lab_02_SevSeg.c
 *
 *  Created on: Jun 29, 2019
 *      Author: Muhammad.Elzeiny
 */
#include "../EHAL/BcdSevSeg/BcdSevSeg.h"
#include "../MCAL/PORT_DRIVER/PORT.h"

void lab_02_SevSeg(void)
{
	PORT_init();
	BcdSevSeg_DisplayNum(5);
	BcdSevSeg_enable_1();
	BcdSevSeg_enable_2();
	while(1)
	{

		;
	}
}
