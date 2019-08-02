/*
 * ADC_cfg.h
 *
 *  Created on: Aug 2, 2019
 *      Author: Muhammad.Elzeiny
 */

#ifndef F15_REPO_SRC_CONFIG_ADC_CFG_H_
#define F15_REPO_SRC_CONFIG_ADC_CFG_H_

/*
 * Please choose voltage refrence from followings:
 * ADC_VOLTAGE_REF_AVCC
 * ADC_VOLTAGE_REF_AREF
 * ADC_VOLTAGE_REF_2_56v
 * */
#define ADC_VOLTAGE_REF_SELECTOR_msk			ADC_VOLTAGE_REF_AVCC

/*choose adc mode from followings
 * ADC_MODE_AUTO_TRIGGER
 * ADC_MODE_SINGLE_CONVERSION
 *
 * */
#define ADC_MODE_SELECTOR						ADC_MODE_AUTO_TRIGGER

/*
 * Choose ADC prescaler from followings
 *	ADC_PRESCALER_2_msk
 * ADC_PRESCALER_4_msk
 * ADC_PRESCALER_8_msk
 * ADC_PRESCALER_16_msk
 * ADC_PRESCALER_32_msk
 * ADC_PRESCALER_64_msk
 * ADC_PRESCALER_128_msk
 * */
#define ADC_PRESCALER_SELECTOR_msk				ADC_PRESCALER_64_msk

#define ADC_AUTO_TRIG_SRCE_SELECTOR

#endif /* F15_REPO_SRC_CONFIG_ADC_CFG_H_ */
