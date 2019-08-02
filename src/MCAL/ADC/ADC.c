/*
 * ADC.c
 *
 *  Created on: Aug 2, 2019
 *      Author: Muhammad.Elzeiny
 */
/*===========================================================*/
/* DEFINES													*/
/*=========================================================*/
#define ADC_VOLTAGE_REF_clr_msk			0b00111111
#define ADC_VOLTAGE_REF_AVCC			0b01000000
#define ADC_VOLTAGE_REF_AREF			0b00000000
#define ADC_VOLTAGE_REF_2_56v			0b11000000

#define ADC_MODE_AUTO_TRIGGER			1
#define ADC_MODE_SINGLE_CONVERSION		0

#define ADC_PRESCALER_clr_msk			0b11111000
#define ADC_PRESCALER_2_msk				0b00000000
#define ADC_PRESCALER_4_msk				0b00000010
#define ADC_PRESCALER_8_msk				0b00000011
#define ADC_PRESCALER_16_msk		   	0b00000100
#define ADC_PRESCALER_32_msk			0b00000101
#define ADC_PRESCALER_64_msk			0b00000110
#define ADC_PRESCALER_128_msk			0b00000111

#define ADC_AUTO_TRIG_SRC_clr_msk					0b00011111
#define ADC_AUTO_TRIG_SRC_FREE_RUNNING_msk			0b00000000
#define ADC_AUTO_TRIG_SRC_ANALOG_COMP_msk			0b00100000
#define ADC_AUTO_TRIG_SRC_EXTI0_msk					0b01000000
#define ADC_AUTO_TRIG_SRC_TIMER0_COMP_msk			0b01100000
#define ADC_AUTO_TRIG_SRC_TIMER0_OVF_msk			0b10000000
#define ADC_AUTO_TRIG_SRC_TIMER1_COMP_msk			0b10100000
#define ADC_AUTO_TRIG_SRC_TIMER1_OVF_msk			0b11000000
#define ADC_AUTO_TRIG_SRC_TIMER1_CAPT_msk			0b11100000

/*===========================================================*/
/* INCLUDES													*/
/*=========================================================*/

#include "../../utils/Std_Types.h"
#include "../../utils/Bit_Math.h"
#include "../../config/ADC_cfg.h"
#include "ADC_hw.h"
#include "ADC.h"

/*===========================================================*/
/* FUNCTION DEFINITIONS										*/
/*=========================================================*/
void ADC_init(void)
{
	/* select voltage reference*/

	/*select adc mode */

	/*select auto trigger source */

	/*Enable ADC */


}
void ADC_startConversion(ADC_ChannelType Channel)
{
	/*select ADC channel using MUX in ADMUX */


	/*start conversion using ADSC in ADCSRA */

}
uint16 ADC_getVoltage_mv(ADC_ChannelType Channel)
{
	uint16 Voltage_mv = 0;

	/*wait for ADIF to be set - conversion complete*/

	/*read ADCL and ADC H  */

	/* calculate Voltage_mv*/

	/*return Voltage_mv*/
	return Voltage_mv;
}

void ADC_enInterrupt(void)
{
	/*set ADIE in ADCSRA */

}
void ADC_diInterrupt(void)
{
	/*clear ADIE in ADCSRA */

}
