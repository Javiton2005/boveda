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

---
### Design elements of an ISA

==Six Basic elements that differentiate some sets from others==
1. Number of addresses
	- Number of addresses: number or explicit references to operand in arithmetic of logic operations, 
	- They may have 0 1 2 3[#Number of Addresses]
2. Operand location
	- The data to be operated on may be in memory, but also in internal register of the processor or even in the instruction itself.
	- The location of the data is specified by using an addressing mode.
3. Addressing modes
	- Is the location of the data
	- there a multiple to fetch data in memory, differ in size needed and time it takes.
4. Instruction number and types
	- Arithmetic instructions: 
		- add
		- sub
		- mult
		- div
	- Logic instruction
		- and 
		- or 
		- comp
	- Data transfer instructions
		- load
		- store 
		- move
	- Flow control
		- Jump 
		- BEQ
		- BNE
	- I/O instruction
5. Data size and types
	- Integers 8, 15, 32
	- Floating point of 32, 64, 128 bits
	- Binary coded
	- ASCII Chars
6. Machine format
	Instructions in a ISA must be encoded in binary, is called machine format
	- Fixed size
	- variable size	
### Operand Types
Number of Addresses
- 3 address architecture:
	ADD position_store = num1 + num2
- 2 address architecture:
	The instruction specifies two operands, one also acts as the result.
	ADD (Storing point/num1) + (num2)
- 1 address architecture:
	Uses a special-purpose register called Accumulator (a)
	ADD num2
- 0 address architecture:
	They uses the stack to operate operations
	ADD --> Top of stack + Top of stack - 1 = top of stack 
### Operation Types
Data can be found in three different places 
- In the very instruction itself (constant data) 
- In CPU internal registers 
- In Memory
### Addressing Modes
### Number of addresses
### Machine Format
### CISC and RISC architecture philosophies

----
Clase apuntes rapidos

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

it is better to push thing to the stack from the right side of the operation
base + display ment