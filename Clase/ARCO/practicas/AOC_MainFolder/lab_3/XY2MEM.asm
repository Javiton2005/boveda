;Receives X in B and Y in C. Returns HL pointing to attribute memory
XY2MEM:   
    push af
    push de

    ld h,0
    ld l,c
    add hl, hl
    add hl, hl
    add hl, hl
    add hl, hl
    add hl, hl

    ld d,0
    ld e,b
    add hl, de
    ld de, $5800

    add hl, de

    pop de
    pop af

    ret