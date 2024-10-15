## Exercices

1: 
$$
(A+B*C)/(D-E*F-G*H)
$$
---
2:
a) The 14 is located in register.
``` assembly
ld a, 14
```
b) In the direct addressing mode you are loading the information in the 14th place of memory in to a register.
```assembly
ld a, (14)
```
c) In the indirect, the information is loaded in a mid register that later will be access by the main register 
```assembly
ld b,14
ld a,(b)
```
d) In the register mode the information is pre loaded in a register
```assembly
ld a, b ;b is preloaded with 14
```
e) It is similar that in the c and d, where you store ti is pre loaded in a register and you charge it with the value of another register 
```assembly
ld a,14
ld HL, $8000
ld (HL), a
```
---
3:
a) 102 it takes Tmem 
b) 98 it takes Treg
c) 101 it takes Tmem + Treg
d) 107 it takes 2*Tmem
e) 45 it takes Treg +T++Tmem
f) 107 it takes Treg +T++Tmem

4:
a) ld a, 20 --> 20
b) ld a, (20) --> MEM[20] = 40 --> 40
c) ld a, 20 --> MEM[20] = 40 --> MEM[40] = 60 --> 60
d) ld a, 30 --> 30
e) ld a, 30 --> MEM[30] = 50 
f) ld a, 30 --> MEM[30] = 50 --> MEM[50] = 70 --> 70

5:
```
; z --> 0xC000
; x --> 0xC001
; y --> 0xC002

ld a, (0xC001)
ld a, b
ld b, (0xC002)

add a,b   no esta mal pero deberia de ser add b
ld (0xC000), a
```
6:
- Direct
```
ld a, (0xC001)
ld b, (0xC002)

add a,b
ld (0xC000), a
```
- Register
```
ld a, (0xC001)
ld b, (0xC002)

ld d, a
ld e, b

add e, d

ld (0xC000), e
```
- Indirect register
```
ld a, (0xC001)
ld b, (0xC002)

ld (d), a
ld (e), b

add (e), (d)

ld (0xC000), (e)
```
- Base plus displacement 
	??
7:

```
ld HL, 9000h
ld DE, 9003h
ld BC, 9006h

ld a,(HL)
ld l,(DE)

add a,b

ld (B), 0
ld (C), a

inc HL
inc DE
inc BC

ld a,(HL)
ld l,(DE)

add a,l

ld (B), 0
ld (C), a

inc HL
inc DE
inc BC
d a,(HL)
ld l,(DE)

add a,b

ld (B), 0
ld (C), a
```

8:
```

ld a, num1
ld c, num2

cp c

jp z, iguales  ; ambos numero son iguales

jp c, menor   ; num1< num2 

jp mayor       ; el num1 es mayor que el num2

```
9:

we start with the counter at 1 and we add a, a and then we add 1 to the counter if the counter is equal to the number b (the product) we repeat the process

realizaremos la operacion 3x2=6
```
ld a, 3
ld b, 2
ld d, 1

loop:
	cp b, d
	jp z, end
	add a
	inc d
	loop

```
10:
pseudo code

```
vec 1
vec 2
int sum

loop with i until lenth of vec1
	sum=vec1[i]+vec2[i]
	i++

ld HL, {Dir vec1}
ld DE, {Dir vec2}
ld b, 9

for:
	add a,(HL)
	ld l,(DE)
	add a,l
	inc HL
	inc DE
	DJNZ for
```
	
11:
```
ld DE, {Dir vec2}
ld b, 9
for:
	add a,(DE)
	inc DE
	DJNZ for
```
12:
loop threw the array and sum bouth of them if the result unfer 0 the new number is greater

```
ld HL, (Dir v1)
ld b, 9
ld d, HL
for:
	inc HL
	ld a, HL
	cp b
	dec b
	JR nz, for
	ld d,a
	jr nz, for
	

```
13:
a)
- DD 86 F1
- 11011101 10000110 11110001
b)
- 3A 00 40
- 00111010 00000000 01000000
c)
- 10 FE
- 00010000 11111110
d)
- 28 E8
- 00101000 11101000
e)
- A1
- 10100001
f)
- EE FE
- 11101110 11111110
14:
	a)
		7E -> ld a
	b)
		DD7E -> ld a, (ix+d)
	c)
		FD23 -> inc iy
	d)
		DD23 -> Inc IX
	e)
		23 -> inc hl
	f)
		C20080 -> JP NZ, $8000