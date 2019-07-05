/*
 * KP.c
 *
 *  Created on: Jul 5, 2019
 *      Author: Toka.Kamal
 */

#include "../../utils/Bit_Math.h"
#include "../../utils/Std_Types.h"
#include "../../config/KP_cfg.h"
#include "../../MCAL/DIO/DIO.h"

static void KP_CheckCol(uint8 ActivatedRow);

static uint8 PressedSwitch = 255 ;

void KP_init(void)
{
	/* attach Internal Pull-up Resistor*/
	Dio_WriteChannel(KP_PIN_COL_0,STD_high);
	Dio_WriteChannel(KP_PIN_COL_1,STD_high);
	Dio_WriteChannel(KP_PIN_COL_2,STD_high);
	Dio_WriteChannel(KP_PIN_COL_3,STD_high);
}
uint8 KP_getPressedSwitch(void)
{
	PressedSwitch = 255;
	/*de-active all rows except row 0*/
	Dio_WriteChannel(KP_PIN_ROW_0,KP_ACTIVE_TYPE);
	Dio_WriteChannel(KP_PIN_ROW_1,!KP_ACTIVE_TYPE);
	Dio_WriteChannel(KP_PIN_ROW_2,!KP_ACTIVE_TYPE);
	Dio_WriteChannel(KP_PIN_ROW_3,!KP_ACTIVE_TYPE);
	KP_CheckCol(0);
	if(PressedSwitch != 255)return PressedSwitch;
	/********************************************/

	Dio_WriteChannel(KP_PIN_ROW_0,!KP_ACTIVE_TYPE);
	Dio_WriteChannel(KP_PIN_ROW_1,KP_ACTIVE_TYPE);
	Dio_WriteChannel(KP_PIN_ROW_2,!KP_ACTIVE_TYPE);
	Dio_WriteChannel(KP_PIN_ROW_3,!KP_ACTIVE_TYPE);
	KP_CheckCol(1);
	if(PressedSwitch != 255)return PressedSwitch;
	/********************************************/
	Dio_WriteChannel(KP_PIN_ROW_0,!KP_ACTIVE_TYPE);
	Dio_WriteChannel(KP_PIN_ROW_1,!KP_ACTIVE_TYPE);
	Dio_WriteChannel(KP_PIN_ROW_2,KP_ACTIVE_TYPE);
	Dio_WriteChannel(KP_PIN_ROW_3,!KP_ACTIVE_TYPE);
	KP_CheckCol(2);
	if(PressedSwitch != 255)return PressedSwitch;

	/********************************************/
	Dio_WriteChannel(KP_PIN_ROW_0,!KP_ACTIVE_TYPE);
	Dio_WriteChannel(KP_PIN_ROW_1,!KP_ACTIVE_TYPE);
	Dio_WriteChannel(KP_PIN_ROW_2,!KP_ACTIVE_TYPE);
	Dio_WriteChannel(KP_PIN_ROW_3,KP_ACTIVE_TYPE);
	KP_CheckCol(3);

	/********************************************/
	return PressedSwitch;
}
static void KP_CheckCol(uint8 ActivatedRow)
{
	/*check for all cols*/
	if(Dio_ReadChannel(KP_PIN_COL_0) == KP_ACTIVE_TYPE)
	{
		/*assign PressedSwitch with 0*/
		PressedSwitch =ActivatedRow *4;
	}
	else if(Dio_ReadChannel(KP_PIN_COL_1) == KP_ACTIVE_TYPE)
	{
		/*assign PressedSwitch with 1*/
		PressedSwitch =(ActivatedRow *4) +1;
	}
	else if(Dio_ReadChannel(KP_PIN_COL_2) == KP_ACTIVE_TYPE)
	{
		PressedSwitch =(ActivatedRow *4) +2;
	}
	else if(Dio_ReadChannel(KP_PIN_COL_3) == KP_ACTIVE_TYPE)
	{
		PressedSwitch =(ActivatedRow *4) +3;
	}
	else
	{

	}

}
