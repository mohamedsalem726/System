/*
 * DIO_private.h
 *
 *  Created on: Nov 9, 2020
 *      Author: Mohamed Salem
 */

#ifndef DIO_PRIVATE_H_
#define DIO_PRIVATE_H_



typedef struct
{
	volatile uint8 PIN;
	volatile uint8 DDR;
	volatile uint8 PORT;
}Port_type;

#define DIOA	((Port_type*)(0x39))

#define DIOB    ((Port_type*)(0x36))

#define DIOC    ((Port_type*)(0x33))

#define DIOD    ((Port_type*)(0x30))



#endif /* DIO_PRIVATE_H_ */
