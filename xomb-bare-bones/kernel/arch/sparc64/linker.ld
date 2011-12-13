/*
 * linker.ld
 *
 *  This script is given as the only script to the linker
 *  Will map boot.S to LMA, and then everything else
 *  will be linked to the VMA and mapped at the LMA
 *  _etext, _edata, _end are defined here
 *
 */

/*
 *  KERNEL LINK LOCATIONS
 *
 *  these are the locations to map to
 *  they need to be set within boot.h
 *  as well
 *
 */

kernel_VMA = 0xffff800000000000;
kernel_LMA = 0x100000;

/* start from the entry point */
ENTRY(main)
SECTIONS
{
    	. = 0x3980;
    	.main : 
    	{
        	LONG(0x01030107);
		LONG(_boot_end - _boot_start);
		LONG(0);
		LONG(0);
		LONG(0);
		LONG(0);
		LONG(0);
        	LONG(0);
		_boot_start = .;
	}
	
	/* link from LMA */
    	/*. = kernel_LMA;*/
	
	_boot = .;

	_kernelLMA = .;

    	/* boot.S is ran in linear addresses */
	.text_boot :
	{
        	dsss_objs/O/kernel.arch.sparc64.boot.boot.o (.text*)
	}

	_eboot = .;

	/* The following is for the trampoline code, if and when
	 *   multiprocessor support will be necessary.
	 */

	/*	PROVIDE(_trampoline = .);

	.text_trampoline ALIGN(0x1000) :
	{
		dsss_objs/G/kernel.arch.x86_64.boot.trampoline.o (.text)
	}

	PROVIDE(_etrampoline = .); */
	
	/*. = . + kernel_VMA;*/
	_text = .;

	_kernel = .;
	_kernelVMA = kernel_VMA;

    	/* the rest of the code links to higher memory */
    	.text :
    	{
            	code = .;
            	*(.text)
	    	*(.text*)

            	/* read only data */
            	*(.rodata*)
            	*(.rdata*)

            	. = ALIGN(4096);
    	}

	/*PROVIDE(_ekernel = .);*/

    	/* _etext defined */
    	_etext = .; PROVIDE(etext = .);

	_data = .;

    	/* data section */
    	.data :
    	{
        	data = .;
        	*(.data)

        	/* constructors and deconstructors
        	   (if needed, doesn't hurt) */
	
        	start_ctors = .;
        	*(.ctor*)
        	end_ctors = .;

        	start_dtors = .;
        	*(.dtor*)
        	end_dtors = .;

        	. = ALIGN(4096);
    	}

    	/* _edata defined */
    	_edata = .; PROVIDE (edata = .);

	_bss = .;

    	/* static code */
    	.bss :
    	{
        	*(.bss)
        	. = ALIGN(4096);
    	}	

	_ebss = .;

        .ehframe : 
    	{
        	ehframe = .;
        	*(.ehframe)
        	. = ALIGN(4096);
    	}


    	/* _end defined (for posterity and tradition) */
    	_end = .; PROVIDE (end = .);

	_ekernel = .;    
}


