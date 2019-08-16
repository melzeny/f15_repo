/*
 * UART.c
 *
 *  Created on: Aug 16, 2019
 *      Author: Muhammad.Elzeiny
 */
/*============================================================
 * DEFINES
 * ============================================================*/
#define UART_DATA_SIZE_5
#define UART_DATA_SIZE_6
#define UART_DATA_SIZE_7
#define UART_DATA_SIZE_8
#define UART_DATA_SIZE_9

#define UART_PARITY_MODE_DISABLE
#define UART_PARITY_MODE_EVEN
#define UART_PARITY_MODE_ODD

#define UART_STOP_BIT_1
#define UART_STOP_BIT_2
/*============================================================
 * INCLUDES
 *============================================================ */
#include "../../utils/Bit_Math.h"
#include "../../utils/Std_Types.h"
#include "../../utils/Interrupts.h"

#include "../../config/UART_cfg.h"
#include "UART_hw.h"
#include "UART_types.h"
#include "UART.h"

/*============================================================
 * LOCAL VARIABLES
 *============================================================ */
static uint8 UART_Tx_Buffer[UART_TX_BUFFER_SIZE],
UART_Rx_Buffer[UART_RX_BUFFER_SIZE];

/*============================================================
 * FUNCTION DEFINITIONS
 *============================================================ */

void UART_init(void)
{

}
void UART_sendMsg(const uint8 Msg[],uint8 MsgLength)
{

}
void UART_receiveMsg(uint8* MsgPtr, uint8* MsgLength)
{


}
void UART_enInterrupt(UART_IntType Interrupt)
{

}
void UART_diInterrupt(UART_IntType Interrupt)
{



}

void ISR(USART_TXC)
{


}
void ISR(USART_RXC)
{


}
void ISR(USART_UDRE)
{


}
