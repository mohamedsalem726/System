/*
 * LCD_03.c
 *
 * Created: 09/10/2020 11:50:48 ص
 * Author : Ali
 */ 

#include "LCD.h"


int main(void)
{
   
   LCD_Init();
   
   LCD_Goto(0,6);
   LCD_WriteString("MOHAMED");
   LCD_Goto(1,6);
   LCD_WriteString("SALEM");
   
    while (1) 
    {
    }
}

