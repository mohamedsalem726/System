/*****************************************************/
/* Auther    : Mohamed Salem                         */
/* Date      : 18 FEB 2021                           */ 
/* Version   : V01                                   */
/*****************************************************/

#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "7SEGMENT_interface.h"
#include "7SEGMENT_config.h"


u8 7SEGMENT_voidDisplay(u8 common , u8 number)
{
	u8 LOC_u8Number = 0;
	
	if(common == COMMON_ANODE){
		
		switch(number){
		case 0 :
		
		    LOC_u8Number = 0b1000000;
			
			break;
		case 1 :
		
		    LOC_u8Number = 0b1111001;
			
			break;
		case 2 :
		
		    LOC_u8Number = 0b0100100;
			
			break;
		case 3 :
		
		    LOC_u8Number = 0b0110000;
			
			break;
		case 4 :
		
		    LOC_u8Number = 0b0011001;
			
			break;
		case 5 :
		
		    LOC_u8Number = 0b0010010;
			
			break;
		case 6 :
		
		    LOC_u8Number = 0b0000010;
			
			break;
		case 7 :
		
		    LOC_u8Number = 0b1111000;
			
			break;
	    case 8 :
		
		    LOC_u8Number = 0b0000000;
			
			break;
		case 9 :
		
		    LOC_u8Number = 0b0010000;
			
			break;
		
		default : break;
		}
	}else if(common == COMMON_CATHODE){
		
	    switch(number){
		case 0 :
		
		    LOC_u8Number = 0b0111111;
			
			break;
		case 1 :
		
		    LOC_u8Number = 0b0000110;
			
			break;
		case 2 :
		
		    LOC_u8Number = 0b1011011;
			
			break;
		case 3 :
		
		    LOC_u8Number = 0b1001111;
			
			break;
		case 4 :
		
		    LOC_u8Number = 0b1100110;
			
			break;
		case 5 :
		
		    LOC_u8Number = 0b1101101;
			
			break;
		case 6 :
		
		    LOC_u8Number = 0b1111101;
			
			break;
		case 7 :
		
		    LOC_u8Number = 0b0000111;
			
			break;
	    case 8 :
		
		    LOC_u8Number = 0b1111111;
			
			break;
		case 9 :
		
		    LOC_u8Number = 0b1101111;
			
			break;
		
		default : break;
		}
		
	}
}