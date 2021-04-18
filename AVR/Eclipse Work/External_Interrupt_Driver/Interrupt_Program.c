/*
 * Interrupt_Program.c
 *
 *  Created on: Nov 21, 2020
 *      Author: Mohamed Salem
 */


#include "STD.h"
#include "Bit_Math.h"
#include "Interrupt_Interface.h"
#include "Interrupt_Config.h"
#include "Interrupt_Private.h"


void SET_GlobalInterrupts(void)
{

	#if      GLOBAL_INTERRUPT_STATUS  ==  GLOBAL_INT_ENABLE

	SET_BIT(Interrupt->SREG,7);

	#elif    GLOBAL_INTERRUPT_STATUS  ==  GLOBAL_INT_DISABLE

	CLR_BIT(Interrupt->SREG,7);

	#endif
}

void ExternalINT0_Init(void)
{
	SET_GlobalInterrupts();

	SET_BIT(Interrupt->GICR , 6);

	#if    EXTERNAL_INT0_TRIGER == TNT_LOW_LEVEL_TRIGER

	CLR_BIT(Interrupt->MCUCR,0);
	CLR_BIT(Interrupt->MCUCR,1);

	#elif  EXTERNAL_INT0_TRIGER == TNT_RISING_EDGE_TRIGER

	SET_BIT(Interrupt->MCUCR,0);
	SET_BIT(Interrupt->MCUCR,1);

	#elif  EXTERNAL_INT0_TRIGER == TNT_FALLING_EDGE_TRIGER

	CLR_BIT(Interrupt->MCUCR,0);
	SET_BIT(Interrupt->MCUCR,1);

	#elif  EXTERNAL_INT0_TRIGER == TNT_ANY_LOGICAL_CHANGE_TRIGER

	SET_BIT(Interrupt->MCUCR,0);
	CLR_BIT(Interrupt->MCUCR,1);

	#endif

}

void ExternalINT1_Init(void)
{
	SET_GlobalInterrupts();

	SET_BIT(Interrupt->GICR,7);

	#if   EXTERNAL_INT1_TRIGER  == TNT_LOW_LEVEL_TRIGER

	CLR_BIT(Interrupt->MCUCR,2);
	CLR_BIT(Interrupt->MCUCR,3);

	#elif  EXTERNAL_INT1_TRIGER == TNT_RISING_EDGE_TRIGER

	SET_BIT(Interrupt->MCUCR,2);
	SET_BIT(Interrupt->MCUCR,3);

	#elif  EXTERNAL_INT1_TRIGER == TNT_FALLING_EDGE_TRIGER

	CLR_BIT(Interrupt->MCUCR,2);
	SET_BIT(Interrupt->MCUCR,3);

	#elif  EXTERNAL_INT1_TRIGER == TNT_ANY_LOGICAL_CHANGE_TRIGER

	SET_BIT(Interrupt->MCUCR,2);
	CLR_BIT(Interrupt->MCUCR,3);

	#endif
}

void ExternalINT2_Init(void)
{
	SET_GlobalInterrupts();

	SET_BIT(Interrupt->GICR,5);

    #if  EXTERNAL_INT2_TRIGER == TNT_RISING_EDGE_TRIGER

    SET_BIT(Interrupt->MCUCR,6);

    #elif  EXTERNAL_INT2_TRIGER == TNT_FALLING_EDGE_TRIGER

	CLR_BIT(Interrupt->MCUCR,6);

	#endif
}



