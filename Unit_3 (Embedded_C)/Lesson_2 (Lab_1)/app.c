
#include "uart.h"

unsigned char string[100]= "Learn-in-depth : <Youssef Badawy >";

void main(void)
{

	UART_Send_String (string);
	
}