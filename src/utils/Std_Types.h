/*
 * Std_Types.h
 *
 *  Created on: Jun 22, 2019
 *      Author: Muhammad.Elzeiny
 */

#ifndef UTILS_STD_TYPES_H_
#define UTILS_STD_TYPES_H_

typedef unsigned char uint8;
typedef unsigned short int uint16;
typedef unsigned long int uint32;

typedef signed char sint8;
typedef signed short int sint16;
typedef signed long int sint32;

typedef float float32;


typedef enum
{
	STD_low=0,
	STD_high
}STD_levelType;

typedef enum
{
	false=0,
	true
}boolean;

#define ENABLE				1
#define DISABLE				0

typedef void(*Ptr2FuncType)(void);

#endif /* UTILS_STD_TYPES_H_ */
