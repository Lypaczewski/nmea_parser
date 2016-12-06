/*
 * global.h
 *
 *  Created on: 27/07/2016
 *      Author: Tyler Lypaczewski
 */

#ifndef GLOBAL_H_
#define GLOBAL_H_


#define 	GLOBAL_H
#define 	outb(addr, data)   outp(data, addr)
#define 	inb(addr)   inp(addr)
#define 	DDR(x)   ((x)-1)
#define 	PIN(x)   ((x)-2)
#define 	MIN(a, b)   ((a<b)?(a):(b))
#define 	MAX(a, b)   ((a>b)?(a):(b))
#define 	ABS(x)   ((x>0)?(x):(-x))
#define 	PRG_RDW(a)   ( (PRG_RDB((unsigned char*)(a)) & 0x00FF) | ((PRG_RDB((unsigned char*)(a)+1))<<8) )
#define 	PI   3.14159265359
#define 	FALSE   0
#define 	TRUE   1
#define 	MAX_U08   255
#define 	MAX_U16   65535
#define 	MAX_U32   4294967296
#define 	MIN_S08   -128
#define 	MAX_S08   127
#define 	MIN_S16   -32768
#define 	MAX_S16   32767
#define 	MIN_S32   -2147483648
#define 	MAX_S32   2147483647
#define		MSIZE	81
#define		MCHANNEL	12
#define 	F_CPU   8000000
#define 	CYCLES_PER_US   ((F_CPU+500000)/1000000)
#define 	INT_RAM_BASE   0x0060
#define 	INT_RAM_END   0x0460


typedef unsigned char 	u08;
typedef char 	s08;
typedef unsigned short 	u16;
typedef short 	s16;
typedef unsigned long 	u32;
typedef long 	s32;
typedef unsigned long long 	u64;
typedef long long 	s64;
typedef unsigned char 	BOOL;
typedef unsigned char 	BYTE;
typedef unsigned int 	WORD;
typedef unsigned long 	DWORD;
typedef unsigned char 	UCHAR;
typedef unsigned int 	UINT;
typedef unsigned short 	USHORT;
typedef unsigned long 	ULONG;
typedef char 	CHAR;
typedef int 	INT;
typedef long 	LONG;



#endif /* GLOBAL_H_ */
