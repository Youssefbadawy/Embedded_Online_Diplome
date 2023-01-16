/* startup.c
 Youssef Badawy
 */

#include <stdint.h>


void Reset_Handler();

extern int main();
extern uint32_t _E_text ;
extern uint32_t _S_data ;
extern uint32_t _E_data ;
extern uint32_t _S_bss ;
extern uint32_t _E_bss ;
extern uint32_t _stack_top ;

void Default_Handler()
{
	Reset_Handler();
}


//Use (weak) to use it in any another file by extern it and over write on it 
//Use alias to force un-used handlers to take the same addres as the default handler
void NMI_Handler() __attribute__((weak, alias ("Default_Handler"))) ;
void H_Fault_Handler() __attribute__((weak, alias ("Default_Handler"))) ;
void MM_Fault_Handler() __attribute__((weak, alias ("Default_Handler"))) ;
void Bus_Handler() __attribute__((weak, alias ("Default_Handler"))) ;
void Usage_Handler() __attribute__((weak, alias ("Default_Handler"))) ;



/* store vectors array in section (.vectors)*/
uint32_t vectors[] __attribute__((section(".vectors"))) ={

	(uint32_t) &_stack_top,
	(uint32_t) &Reset_Handler,
	(uint32_t) &NMI_Handler,
	(uint32_t) &H_Fault_Handler,
	(uint32_t) &MM_Fault_Handler,
	(uint32_t) &Bus_Handler,
	(uint32_t) &Usage_Handler
};



void Reset_Handler()
{
	//copy data section from flash to ram
	uint32_t DATA_size = (uint8_t*)&_E_data - (uint8_t*)&_S_data ;
	uint8_t* P_src = (uint8_t*)&_E_text;
	uint8_t* P_dst = (uint8_t*)&_S_data;
	int i=0;
	for(i; i<DATA_size; i++)
	{
		*((uint8_t*)P_dst++)=*((uint8_t*)P_src++) ;
	}


	//init .bss section in SRAM = 0
	uint32_t BSS_size = (uint8_t*)&_E_bss - (uint8_t*)&_S_bss ;
	P_dst = (uint8_t*)&_S_bss;
	for( i=0; i<DATA_size; i++)
	{
		*((uint8_t*)P_dst++)=(uint8_t*)0 ;
	}

	//jump to main
	main();
}

