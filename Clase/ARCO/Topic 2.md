Tema: [[ARCO]]
Apartado: #ISA

## Apuntes:

What is a ISA --> Instruction Set Architecture

## Content
- [[#Machine instruction characteristics]]
- [[#Design elements of an ISA]]
- [[#Operand Types]]
- [[#Operation Types]]
- [[#Addressing Modes]]
- [[#Number of addresses]]
- [[#Machine Format]]
- [[#CISC and RISC architecture philosophies]]

### Machine instruction characteristics

- **Machine instruction:** Instructions executed directly by a processor.
- **Instruction set:** specific instruction a processor can execute.
- **Elements of a machine instruction:**
	- Operation code.
	- Source operands reference.
	- Destination operand reference.
	- Next instruction (PC stores where is the next instruction).
- **Instruction Encoding:** bit sequence where some groups represent each of the elements discussed before.
- **Instruction Format:** division of the bit sequence into fields.
- **Symbolic representations of machine instruction:** operation codes and operands are represented by symbols known as mnemonics.
- **Machine Language:** instruction set in binary.
- **Assembly language:** Machine instruction set in symbolic representation.
---
==Machine instruction must indicate==: Operation, Data, Result stored.
![[Pasted image 20241009200030.png]]
Alternative with different: ==Memory requirements and program execution time==
![[Pasted image 20241009200522.png]]
![[Pasted image 20241009200530.png]]
![[Pasted image 20241009200543.png]]

### Design elements of an ISA
### Operand Types
### Operation Types
### Addressing Modes
### Number of addresses
### Machine Format
### CISC and RISC architecture philosophies

PC Program Counter internal register of the processor used to manage the implicit sequencing of introducing.
Donde esta la siguiente instrucción.

Six basic Elements:
- Number of addresses 
	- Number of explicit references to operand
		- ISAs may be 3, 2, 1, 0 addresses
- Operand
	- memory, internal registers, 
- Addressing modes
- Instructions 
	- Arithmetic 
	- logic instruction
	- Data transfer
	- Flow control
	- I/O
- Data size and Types
	- Integres 
	- floating point
	- binary coded decimals
	- ASCII
-  machine format
	- Fixed size
	- Variable size

Addressees
	The z80 is 1 address.
	0 addresses use the stack 
	