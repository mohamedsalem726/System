/*
 * External_Interrupt.h
 *
 * Created: 10/15/2020 4:39:34 PM
 *  Author: Mohamed Salem
 */ 


#ifndef EXTERNAL_INTERRUPT_H_
#define EXTERNAL_INTERRUPT_H_

#include "Atmega32_Registers.h"
#include "External_Interrupt_Cfg.h"
#include "Bit_Math.h"

#define    GLOBAL_INT_ENABLE    1
#define    GLOBAL_INT_DISABLE   0
 
#define    TNT_LOW_LEVEL_TRIGER            0
#define    TNT_RISING_EDGE_TRIGER          1
#define    TNT_FALLING_EDGE_TRIGER         2
#define    TNT_ANY_LOGICAL_CHANGE_TRIGER   3





void SET_GlobalInterrupts(void);

void ExternalINT0_Init(void);

void ExternalINT1_Init(void);

void ExternalINT2_Init(void);

#endif /* EXTERNAL_INTERRUPT_H_ */