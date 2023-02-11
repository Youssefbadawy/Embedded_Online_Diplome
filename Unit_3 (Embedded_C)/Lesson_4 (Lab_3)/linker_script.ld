/* Linker script CortexM3
	Youssef Badawy
*/

MEMORY
{
	flash(RX) : ORIGIN = 0x00000000, LENGTH = 512M
	sram(RWX) : ORIGIN = 0x20000000, LENGTH = 512M
}

SECTIONS
{
	.text : {
			*(.vectors*)
			*(.text*)
			*(.rodata)
			_E_text = . ;			
	}> flash

	.data : {
			_S_data = . ;
			*(.data)
			. = ALIGN(4) ;			/* ALLIGNMENT word */
			_E_data = 0 ;

	}> sram AT> flash

	.bss : {
			_S_bss = . ;
		    *(.bss*)	
		    _E_bss = . ;

	}>sram
}