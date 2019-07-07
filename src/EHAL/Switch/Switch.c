/*
 * SWITCH.c
 *
 *  Created on: Jul 6, 2019
 *      Author: Muhammad.Elzeiny
 */
#include "Switch.h"

#include "../../config/Switch_cfg.h"
#include "../../utils/Std_Types.h"
#include "../../MCAL/DIO/DIO.h"
#include "Switch_types.h"

extern SW_SwitchType SW_CfgArr[MaxNumOfSwitches];


SW_StatusType SW_getSwitchStatus(SW_NameType SwName)
{
	SW_StatusType Status;
	if(SW_CfgArr[SwName].ModeType == Active_high)
	{
		Status = Dio_ReadChannel( SW_CfgArr[SwName].Channel);
	}
	else
	{
		Status = !Dio_ReadChannel( SW_CfgArr[SwName].Channel);
	}

	return Status;
}
