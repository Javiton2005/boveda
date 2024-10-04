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
- 