        DEVICE ZXSPECTRUM48
	SLDOPT COMMENT WPMEM, LOGPOINT, ASSERTION
        org $8000               ; Program is located from memory address $8000 = 32768

begin:          di              ; Disable Interrupts
                ld sp,0         ; Set stack pointer to top of ram (RAMTOP)
        
;-------------------------------------------------------------------------------------------------
; Student Code

mainloop:
        ld a, 1
        ld b, -1
        add b
        out ($fe),a


        jr mainloop

;-------------------------------------------------------------------------------------------------
endofcode:      jr endofcode    ; Infinite loop
