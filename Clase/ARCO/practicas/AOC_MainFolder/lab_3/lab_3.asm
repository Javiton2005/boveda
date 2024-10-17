        DEVICE ZXSPECTRUM48
        SLDOPT COMMENT WPMEM, LOGPOINT, ASSERTION
        org $8000               ; Program is located from memory address $8000 = 32768

begin:          di              ; Disable Interrupts
                ld sp,0      ; Set stack pointer to top of ram (RAMTOP)
        
;-------------------------------------------------------------------------------------------------
; Student Code
mainloop:
        ld e, 3
        ld c, 3

        ld a, 3;$4d
        call XY2MEM

        ld (hl), a
        ;ld hl, $594f
        ld b, 2
        ld de, 1
loop:   ld (hl), a
        add hl, de
        djnz loop
        ;jr mainloop
;-------------------------------------------------------------------------------------------------
endofcode:
        jr endofcode
        
        include "XY2MEM.asm"
        include "demo_level.asm"