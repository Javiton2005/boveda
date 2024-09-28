        DEVICE ZXSPECTRUM48
	SLDOPT COMMENT WPMEM, LOGPOINT, ASSERTION
        org $8000               ; Program is located from memory address $8000 = 32768

begin:          di              ; Disable Interrupts
                ld sp,0         ; Set stack pointer to top of ram (RAMTOP)
        
;-------------------------------------------------------------------------------------------------
; Student Code
        ld a, 7
mainloop:
;memoria en la que empieza en el 5800
        out ($), a
        jr z, endofcode
        dec a
        jr mainloop  
;-------------------------------------------------------------------------------------------------
endofcode:      jr endofcode    ; Infinite loop
