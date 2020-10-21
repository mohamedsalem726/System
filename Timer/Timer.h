/*
 * Timer.h
 *
 * Created: 10/21/2020 5:16:10 PM
 *  Author: Mohamed Salem
 */ 


#ifndef TIMER_H_
#define TIMER_H_

#include "Atmega32_Registers.h"
#include "Bit_Math.h"



void Timer0_Init(void); 

void Timer0_SetDelay(uint32 Delay_ms);

void Timer0_Start(void);

void Timer0_Stop(void);



#endif /* TIMER_H_ */