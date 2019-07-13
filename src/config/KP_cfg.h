/*
 * KP_cfg.h
 *
 *  Created on: Jul 5, 2019
 *      Author: Muhammad.Elzeiny
 */

#ifndef F15_REPO_SRC_CONFIG_KP_CFG_H_
#define F15_REPO_SRC_CONFIG_KP_CFG_H_

#define KP_PIN_ROW_0		Dio_Channel_C7
#define KP_PIN_ROW_1		Dio_Channel_C6
#define KP_PIN_ROW_2		Dio_Channel_C5
#define KP_PIN_ROW_3		Dio_Channel_C4

#define KP_PIN_COL_0		Dio_Channel_C3
#define KP_PIN_COL_1		Dio_Channel_C2
#define KP_PIN_COL_2		Dio_Channel_C1
#define KP_PIN_COL_3		Dio_Channel_C0

/*
 * Please Configure values for the following layout
 *		0		1		2		3
 *
 * 		4		5		6		7
 *
 * 		8		9		10		11
 *
 * 		12		13		14		15
 *
 * */
#define KP_BUTON_0			'1'
#define KP_BUTON_1			'2'
#define KP_BUTON_2			'3'
#define KP_BUTON_3			'+'

#define KP_BUTON_4			'4'
#define KP_BUTON_5			'5'
#define KP_BUTON_6			'6'
#define KP_BUTON_7			'-'

#define KP_BUTON_8			'7'
#define KP_BUTON_9			'8'
#define KP_BUTON_10			'9'
#define KP_BUTON_11			'*'

#define KP_BUTON_12			'='
#define KP_BUTON_13			'0'
#define KP_BUTON_14			'^'
#define KP_BUTON_15			'/'

#define KP_RELEASED			255



#define KP_ACTIVE_TYPE		STD_low

#endif /* F15_REPO_SRC_CONFIG_KP_CFG_H_ */
