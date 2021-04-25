#include "TYPES.h"

u8 SevenSegment( u8 Led_Num ){

	const u8 arr[]={

			0b0111111,
			0b0000110,
			0b1011011,
			0b1001111,
			0b1100110,
			0b1101101,
			0b1111101,
			0b0000111,
			0b1111111,
			0b1101111};

	return arr[ Led_Num ];
}


