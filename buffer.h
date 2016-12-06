/*
 * buffer.h
 *
 *  Created on: 27/07/2016
 *      Author: Tyler Lypaczewski
 */

#ifndef BUFFER_H_
#define BUFFER_H_

typedef struct struct_cBuffer {
	unsigned char* 	dataptr;
	unsigned short 	size;
	unsigned short 	datalength;
	unsigned short 	dataindex;
} cBuffer;


typedef struct struct_cBuffer  	cBuffer;


// referenced: uartInitBuffers()
void bufferInit(cBuffer *buffer, unsigned char *start, unsigned short size){
}

// referenced: uartFlushReceiveBuffer()
void bufferFlush(cBuffer *buffer){
}

// referenced: SIGNAL(), uartReceiveByte(), uartSendTxBuffer()
unsigned char bufferGetFromFront(cBuffer *buffer);

// referenced:
unsigned char bufferGetAtIndex(cBuffer *buffer, unsigned short index);

// referenced:
unsigned char bufferAddtoEnd(cBuffer *buffer, unsigned char data);

// referenced:
unsigned char bufferIsNotFull(cBuffer *buffer);





#endif /* BUFFER_H_ */
