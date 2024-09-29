        DEVICE ZXSPECTRUM48
	SLDOPT COMMENT WPMEM, LOGPOINT, ASSERTION
        org $8000               ; Program is located from memory address $8000 = 32768

begin:          di              ; Disable Interrupts
                ld sp,0         ; Set stack pointer to top of ram (RAMTOP)
        
;-------------------------------------------------------------------------------------------------
; Student Code
        jp start
string:
        db "hello"
STRING_LENGTH = 5

ROM_CLS         = $0DAF
COLOR_ATTR      = $5800
ENTER           = $0D
BLACK_WHITE     = $47
start: 
        im 1
        call ROM_CLS
        ld hl, string
        ld b, STRING_LENGTH
loop:
        ld a, (hl)
        rst $10
        inc hl
        dec b
        jr nz, loop
        ld a, ENTER
        rst $10

        ld a, BLACK_WHITE
        ld (BLACK_WHITE),a

        ld ix, string
        res 5,(ix)
        ld a,(ix)
        rst $10
        ld a,(ix+1)
        rst $10
        ld a,(ix+2)
        rst $10
        ld a,(ix+3)
        rst $10
        ld a,(ix+4)
        rst $10
        ld a,ENTER
        rst $10


        ret
;-------------------------------------------------------------------------------------------------
endofcode:      jr endofcode    ; Infinite loop
