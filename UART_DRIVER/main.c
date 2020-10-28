/*
 * UART_DRIVER.c
 *
 * Created: 10/28/2020 5:33:56 PM
 * Author : Mohamed Salem
 */ 

#include "UART.h"
#include "LCD.h"


int main(void)
{
	uint8 data = 0;
	
    UART_Init();
	LCD_Init();
	
	
    while (1) 
    {
		data = UART_RX();
		
		if(data)
		{
			LCD_WriteChar(data);
			data = 0;
		}
    }
}

