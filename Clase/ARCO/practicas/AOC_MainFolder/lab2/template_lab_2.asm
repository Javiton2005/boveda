        DEVICE ZXSPECTRUM48
	SLDOPT COMMENT WPMEM, LOGPOINT, ASSERTION
        org $8000               ; Program is located from memory address $8000 = 32768

begin:          di              ; Disable Interrupts
                ld sp,0         ; Set stack pointer to top of ram (RAMTOP)
        
;-------------------------------------------------------------------------------------------------
; Student Code

mainloop:
    ; = $5800 + y*32 + x
    ; b = x
    ; c = y
    ; hl = 5800 + c*32 + b
    ld e, 3
    ld c, 3

    call XY2MEM
    out (hl), $70




;-------------------------------------------------------------------------------------------------
endofcode:      jr endofcode    ; Infinite loop

XY2MEM:
        ld hl, bc
        add hl, hl
        add hl, hl
        add hl, hl
        add hl, hl
        add hl, hl

        add hl, de
        ld de, $5800

        add hl, de

        ret
