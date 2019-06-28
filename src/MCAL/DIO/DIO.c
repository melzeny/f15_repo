/*
 * DIO.c
 *
 *  Created on: Jun 28, 2019
 *      Author: Muhammad.Elzeiny
 */
#include "../../utils/Bit_Math.h"
#include "../../utils/Std_Types.h"

#include "DIO_hw.h"
#include "../../config/DIO_cfg.h"
#include "DIO_types.h"
#include "DIO.h"

void DIO_init(void)
{

}
STD_levelType Dio_ReadChannel(Dio_ChannelType ChannelId)
{

}
void Dio_WriteChannel(Dio_ChannelType ChannelId, STD_levelType Level)
{
	Dio_PortType PortId = ChannelId /8;
	uint8 ChannelPos = ChannelId % 8;
	switch(PortId)
	{
	case Dio_Port_A:
		if(Level == STD_high)
		{
			Set_Bit(PORTA_Reg,ChannelPos);
		}
		else
		{
			Clr_Bit(PORTA_Reg,ChannelPos);
		}
		break;
	case Dio_Port_B:
		if(Level == STD_high)
		{
			Set_Bit(PORTB_Reg,ChannelPos);
		}
		else
		{
			Clr_Bit(PORTB_Reg,ChannelPos);
		}
		break;
	case Dio_Port_C:
		if(Level == STD_high)
		{
			Set_Bit(PORTC_Reg,ChannelPos);
		}
		else
		{
			Clr_Bit(PORTC_Reg,ChannelPos);
		}
		break;
	case Dio_Port_D:
		if(Level == STD_high)
		{
			Set_Bit(PORTD_Reg,ChannelPos);
		}
		else
		{
			Clr_Bit(PORTD_Reg,ChannelPos);
		}
		break;
	}
}
uint8 Dio_ReadPort(Dio_PortType PortId )
{

}
void Dio_WritePort( Dio_PortType PortId, uint8 val)
{

}
void Dio_FlipChannel( Dio_ChannelType ChannelId)
{

}
void Dio_FlipPort(Dio_PortType PortId)
{

}
