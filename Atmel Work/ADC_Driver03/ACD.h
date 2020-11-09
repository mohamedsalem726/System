/*
 * ACD.h
 *
 * Created: 10/18/2020 6:08:24 PM
 *  Author: Mohamed Salem
 */ 


#ifndef ACD_H_
#define ACD_H_

#include "Atmega32_Registers.h"
#include "Bit_Math.h"
#include "ADC_Cfg.h"



#define   ADC_VREF_AVCC       0
#define   ADC_VREF_INTERNAL   1
#define   ADC_VREF_AREF       2

#define   ADC_CHANNEL_0       0
#define   ADC_CHANNEL_1       1
#define   ADC_CHANNEL_2       2
#define   ADC_CHANNEL_3       3
#define   ADC_CHANNEL_4       4
#define   ADC_CHANNEL_5       5
#define   ADC_CHANNEL_6       6
#define   ADC_CHANNEL_7       7

#define   ACD_AUTO_TRIGGER    0
#define   ACD_MANUAL_TRIGGER  1
 
#define   ADC_RIGHT_ADJUST    0
#define   ADC_LEFT_ADJUST     1

#define   INTERRUPT_ENABLE    0
#define   INTERRUPT_DISABLED  1


#define   NON_PRESCALER       0
#define   PRESCALER_2         1
#define   PRESCALER_4         2
#define   PRESCALER_8         3
#define   PRESCALER_16        4
#define   PRESCALER_32        5 
#define   PRESCALER_64        6
#define   PRESCALER_128       7



void     ADC_Init(void);

uint16   ADC_Read(void);



#endif /* ACD_H_ */