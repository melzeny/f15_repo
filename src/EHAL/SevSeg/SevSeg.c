/*
 * SevSeg.c
 *
 *  Created on: Jun 29, 2019
 *      Author: Muhammad.Elzeiny
 */
#define SevSeg_COMMON_CATHOD		0
#define SevSeg_COMMON_ANOD			1

#include "../../utils/Std_Types.h"
#include "../../utils/Bit_Math.h"
#include "../../MCAL/DIO/DIO.h"

#include "../../config/SevSeg_cfg.h"
#include "SevSeg.h"

void SevSeg_DisplayNum(uint8 Num)
{


}
void SevSeg_enable_1()
{
#if (SevSeg_COMMON_TYPE == SevSeg_COMMON_CATHOD)

#else

#endif
}
void SevSeg_enable_2()
{

}
void SevSeg_disable_1()
{

}
void SevSeg_disable_2()
{

}
