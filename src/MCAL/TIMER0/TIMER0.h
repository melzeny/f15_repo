/*
 * TIMER0.h
 *
 *  Created on: Jul 5, 2019
 *      Author: Muhammad.Elzeiny
 */

#ifndef F15_REPO_SRC_MCAL_TIMER0_TIMER0_H_
#define F15_REPO_SRC_MCAL_TIMER0_TIMER0_H_

#include "../../utils/Std_Types.h"

void TIMER0_init(void);
void TIMER0_enInterrupt(void);
void TIMER0_disInterrupt(void);
void TIMER0_setCallBackFunc(Ptr2FuncType FuncPtr);

#endif /* F15_REPO_SRC_MCAL_TIMER0_TIMER0_H_ */
