/*
 * Interrupt_Interface.h
 *
 *  Created on: Nov 21, 2020
 *      Author: Mohamed Salem
 */

#ifndef INTERRUPT_INTERFACE_H_
#define INTERRUPT_INTERFACE_H_

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

#endif /* INTERRUPT_INTERFACE_H_ */
