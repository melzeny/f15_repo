/*
 * LCD.h
 *
 *  Created on: Jul 5, 2019
 *      Author: Muhammad.Elzeiny
 */

#ifndef F15_REPO_SRC_EHAL_LCD_LCD_H_
#define F15_REPO_SRC_EHAL_LCD_LCD_H_
#include "../../utils/Std_Types.h"
void LCD_init(void);
void LCD_writeData(uint8 Data);
void LCD_writeCmd(uint8 Cmd);

#endif /* F15_REPO_SRC_EHAL_LCD_LCD_H_ */
