/*
 * SevSeg_cfg.h
 *
 *  Created on: Jun 29, 2019
 *      Author: Muhammad.Elzeiny
 */

#ifndef F15_REPO_SRC_CONFIG_SEVSEG_CFG_H_
#define F15_REPO_SRC_CONFIG_SEVSEG_CFG_H_

#include "../MCAL/DIO/DIO_types.h"
/*
 * define Common Type with the following options
 * SevSeg_COMMON_CATHOD
 * SevSeg_COMMON_ANOD
 * */
#define SevSeg_COMMON_TYPE				SevSeg_COMMON_CATHOD

#define SevSeg_PIN_a					Dio_Channel_A0
#define SevSeg_PIN_b					Dio_Channel_A1
#define SevSeg_PIN_c					Dio_Channel_A2
#define SevSeg_PIN_d					Dio_Channel_A3
#define SevSeg_PIN_e					Dio_Channel_A4
#define SevSeg_PIN_f					Dio_Channel_A5
#define SevSeg_PIN_g					Dio_Channel_A6

#define SevSeg_PIN_EN_1					Dio_Channel_A7
#define SevSeg_PIN_EN_2					Dio_Channel_B0

#endif /* F15_REPO_SRC_CONFIG_SEVSEG_CFG_H_ */
