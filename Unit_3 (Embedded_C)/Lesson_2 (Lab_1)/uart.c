
#include "uart.h"

#define UART0 *((volatile unsigned int * const)((unsigned int *)0x101f1000))


void UART_Send_String (unsigned char * P_string)
{
	while(*P_string != '\0')
	{
		UART0 = (unsigned int)(*P_string);

		P_string++ ;
	}
}