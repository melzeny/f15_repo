/*
 * TIMER0_cfg.h
 *
 *  Created on: Jul 5, 2019
 *      Author: Muhammad.Elzeiny
 */

#ifndef F15_REPO_SRC_CONFIG_TIMER0_CFG_H_
#define F15_REPO_SRC_CONFIG_TIMER0_CFG_H_


/*
 * TIMER0_MODE_CTC
 * TIMER0_MODE_NORMAL
 * TIMER0_MODE_FAST_PWM
 * TIMER0_MODE_PHASE_CORRECTION
 * */
#define TIMER0_MODE_SELECTOR				TIMER0_MODE_CTC

/*
 * TIMER0_PRESCALER_1_msk
 * TIMER0_PRESCALER_8_msk
 * TIMER0_PRESCALER_64_msk
 * TIMER0_PRESCALER_256_msk
 * TIMER0_PRESCALER_1024_msk
 * */
#define TIMER0_PRESCALER_SELECTOR_msk		TIMER0_PRESCALER_1024_msk

/*
 * choose number between [0-255]
 * */
#define TIMER0_STEPS_TO_COUNT					100

#endif /* F15_REPO_SRC_CONFIG_TIMER0_CFG_H_ */
