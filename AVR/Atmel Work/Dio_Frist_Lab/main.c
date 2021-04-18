/*
 * Dio_Frist_Lab.c
 *
 * Created: 9/26/2020 1:30:13 PM
 * Author : Mohamed Salem
 */ 



#define F_CPU 16000000
#include <util/delay.h>
#include "LED.h"
#include "Button.h"



int main(void)
{
	LED0_Init();
	LED0_ON();
	
	
	while(1)
	{
		
	}
}

