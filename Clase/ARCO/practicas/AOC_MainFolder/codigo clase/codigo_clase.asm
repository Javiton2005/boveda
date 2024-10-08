        DEVICE ZXSPECTRUM48
	SLDOPT COMMENT WPMEM, LOGPOINT, ASSERTION
        org $8000               ; Program is located from memory address $8000 = 32768

begin:          di              ; Disable Interrupts
                ld sp,0         ; Set stack pointer to top of ram (RAMTOP)
        
;-------------------------------------------------------------------------------------------------
; Student Code
;mainloop:

;     ld HL, $5800
;     ld a, $F2
;     ld(HL), a
;     ;ld($5800+10*32+14), a

;     ld HL, $5800+10*32+14
;     ld b, 7
;     ld DE, $21
; loop:
;     ld (HL),a
;     add HL, DE
;     DJNZ loop
    
;     ;jr mainloop

mainloop:
    ld a, $70
    ld b, 1
    ld c, 1
    ld HL, $5800
    
    add c,c
    add c,c
    add c,c
    add c,c
    add c,c

    add b, c

    ld D, 0
    ld E, b
    add HL, DE

    ld (HL), a





;-------------------------------------------------------------------------------------------------
endofcode:      jr endofcode    ; Infinite loop
