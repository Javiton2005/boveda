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
    push DE
    push AF
    push HL
    ld b, 1
    ld c, 3
    call XY2MEM





;-------------------------------------------------------------------------------------------------
endofcode:      jr endofcode    ; Infinite loop

XY2MEM:
        ld HL, $5800
        ld a, 0

        add c
        add c
        add c
        add c
        add c

        ld D, 0
        ld E, c

        add E, b
        
        add HL, DE

        ld (HL), $70
        ;out($fe), a

        ret
