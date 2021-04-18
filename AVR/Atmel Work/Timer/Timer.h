/*
 * Timer.h
 *
 * Created: 10/21/2020 5:16:10 PM
 *  Author: Mohamed Salem
 */ 


#ifndef TIMER_H_
#define TIMER_H_

#include "Time_Cfg.h"
#include "Atmega32_Registers.h"
#include "Bit_Math.h"


 
#define  NROMAL_Mode         0
#define  CTC_Mode            1
#define  PWM_Mode            2

#define PWM0_PhaseCorrect    0
#define PWM0_Fast            1

#define PWM1_PhaseCorrect    0
#define PWM1_Fast            1

#define NonInverted_Cycle    0
#define Inverted_Cycle       1

/**************************************************  Timer0  ********************************************************/

void Timer0_Init(void); 

void Timer0_SetDelay(uint32 Delay_ms);

void Timer0_Start(void);

void Timer0_Stop(void);



/**************************************************  Timer1  ********************************************************/

void Timer1_Init(void);

void Timer1_SetDelay(uint32 Delay_ms);

void Timer1_Start(void);

void Timer1_Stop(void);




void PWM0_Init(void);

void PWM0_Generate(uint8 Duty_Cycle);

void PWM0_Start(void);


#endif /* TIMER_H_ */