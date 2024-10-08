Tema: [[ARCO]]
Apartado: #asembly

## Apuntes:
### Loops:
```
loop:
	ld a,6
	out($fe), a
	DEC a
	jr Loop
```
JR [Label] 
### Subtract one
```asm
dec b
```
### Assign value
load  ->  ld

```
ld a , value
```

### Output
```
out($fe), a
```
### Arithmetics operations
- ADD D --> A=A+D
- ADC D --> A=A+D+Cary
- SUB 
- SBC if carry 1 if not 0
- INC increment 1
- DEC decrement 1

### Addressing modes

data could be in 3 places.
- Instruction Data - Immediate or literal
- Data in the register 

LD
Out
ADD, ADL
SUB, SNL
INC/DEC
JR/JP z,nz,c,nc
CP
DJNZ --> DEC B + JR nz

NOP -->?

push/pop
call/ret
and/or/xor
___

Addressing modes 
load ld a,7  ld c, 32

register ld b, i           ld h, b

direct Ld a, ($9000)

register indirect LD (hl), c

base pinter  ix 
		   iy