/*
 * uart.h
 *
 *  Created on: 26/07/2016
 *      Author: Tyler Lypaczewski
 */

#ifndef UART_H_
#define UART_H_

#include <global.h>
#include <buffer.h>

#define 	UART_H
#define 	UART_BAUD_RATE   38400
#define 	INT_RAM_BASE   0x0060
#define 	UART_TX_BUFFER_ADDR   0x01C0
#define 	UART_TX_BUFFER_SIZE   0x0020
#define 	UART_RX_BUFFER_ADDR   0x01E0
#define 	UART_RX_BUFFER_SIZE   0x0020
#define 	INT_RAM_END   0x0260
// ALL parameters accounted for?



// UART fns
	void 	uartInitBuffers (void){
	}

	void 	uartInit (void){
	}

	void 	uartSetBaudRate (u16 baudrate){
	}

	cBuffer* uartGetRxBuffer (void);
	cBuffer* uartGetTxBuffer (void);

	void 	uartSendByte (u08 data){
	}

	u08		uartReceiveByte (u08 *data);

	u08		uartReceiveBufferIsEmpty (void);

	void 	uartFlushReceiveBuffer (void){
	}

	void 	uartSendTxBuffer (void){
	}

	u08		uartSendBuffer (char *buffer, u16 nBytes);




#endif /* UART_H_ */
