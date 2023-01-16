/* Linker script CortexM3
	Youssef Badawy
*/

MEMORY
{
	flash(RX) : ORIGIN = 0x08000000, LENGTH = 128k
	sram(RWX) : ORIGIN = 0x20000000, LENGTH = 20k
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
		    . = ALIGN(4) ;
		    . = . + 0x1000 ;
		    _stack_top = . ;		/* stack top = END of bss section + 0x1000 */
	}>sram
}