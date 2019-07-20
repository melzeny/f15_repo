/*
 * TIMER1_cfg.h
 *
 *  Created on: Jul 20, 2019
 *      Author: Muhammad.Elzeiny
 */

#ifndef F15_REPO_SRC_MCAL_TIMER1_TIMER1_CFG_H_
#define F15_REPO_SRC_MCAL_TIMER1_TIMER1_CFG_H_

/*
 *	 TIMER1_MODE_NORAMAL
 *
 *   TIMER1_MODE_PHASE_CORRECT_8
 *   TIMER1_MODE_PHASE_CORRECT_9
 *   TIMER1_MODE_PHASE_CORRECT_10
 *   TIMER1_MODE_PHASE_CORRECT_TOP_ICR1
 *   TIMER1_MODE_PHASE_CORRECT_TOP_OCR1A
 *
 *   TIMER1_MODE_FAST_PWM_8
 *   TIMER1_MODE_FAST_PWM_9
 *   TIMER1_MODE_FAST_PWM_10
 *   TIMER1_MODE_FAST_PWM_TOP_ICR1
 *   TIMER1_MODE_FAST_PWM_TOP_OCR1A
 *
 *   TIMER1_MODE_FREQ_PHASE_CORRECT_TOP_ICR
 *   TIMER1_MODE_FREQ_PHASE_CORRECT_TOP_OCR1A
 *
 *   TIMER1_MODE_CTC_TOP_OCR1A
 *   TIMER1_MODE_CTC_TOP_ICR1
 * */
#define TIMER1_MODE_SELECTOR				TIMER1_MODE_CTC_TOP_OCR1A
/*
 * TIMER1_OCU_OPERATION_DISCONNECTED
 * TIMER1_OCU_OPERATION_TOGGLE
 * TIMER1_OCU_OPERATION_CLEAR
 * TIMER1_OCU_OPERATION_SET
 * */
#define TIMER1_OCU_A_OPERATION_SELECTOR		TIMER1_OCU_OPERATION_DISCONNECTED
#define TIMER1_OCU_B_OPERATION_SELECTOR		TIMER1_OCU_OPERATION_TOGGLE

#define TIMER1_NOICE_CANCEL_EN				ENABLE
/*
TIMER1_ICU_EDGE_RISING
TIMER1_ICU_EDGE_FALLING
*/
#define TIMER1_ICU_EDGE_SELECTOR			TIMER1_ICU_EDGE_RISING

/*
 * TIMER1_PRESCALER_clr_msk
 * TIMER1_PRESCALER_1_msk
 * TIMER1_PRESCALER_8_msk
 * TIMER1_PRESCALER_64_msk
 * TIMER1_PRESCALER_256_msk
 * TIMER1_PRESCALER_1024_msk
 * */
#define TIMER1_PRESCALER_SELECTOR			TIMER1_PRESCALER_256_msk

#define TIMER1_STEPS_COMPA					600
#define TIMER1_STEPS_COMPB					200

#endif /* F15_REPO_SRC_MCAL_TIMER1_TIMER1_CFG_H_ */
