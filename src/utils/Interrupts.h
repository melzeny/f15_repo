/*
 * Interrupts.h
 *
 *  Created on: Jul 13, 2019
 *      Author: Muhammad.Elzeiny
 */

#ifndef F15_REPO_SRC_UTILS_INTERRUPTS_H_
#define F15_REPO_SRC_UTILS_INTERRUPTS_H_


#define TIMER0_COMP			__vector_10
#define TIMER0_OVF			__vector_11

#define ISR(vect)			vect(void) __attribute__((signal,used));\
							void vect(void)



#endif /* F15_REPO_SRC_UTILS_INTERRUPTS_H_ */
