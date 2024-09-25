Two's complements
Try and figure the relation between lowercase and uppercase letter encoding. Is there a quick way to transform lowercase to uppercase and the other way around?
	From uppercase --> lowercase adding 20 in decimal or 10100 in binary
	From lowercase --> uppercase subtracting 20 in decimal or 10100 in binary

Rules of Two's complement operations:
	there are 2 group the positive and the negative, the positive start with the first bite 0 and the negative with 1, we need to add to the binary to get the decimal number

b00001111 to hexadecimal --> 0F
b10101010 to hexadecimal --> AA

The steps i did was to take 4 by 4 digits, and then the first 4 digits (starting from the right) get the decimal number and then to the hexadecimal. and the same with the 2 group of 4.

0xCAFE to binary --> b1100101011111110
0xCACA0 to binary --> b11001010110010100000 

To convert from hex to binary i transformed first in to decimal and then in to binary, but some of the letters/numbers i did it straight in to binary. then i checked them by counting the amount of bites in the binary number should be 4 by each letter in hexadecimal

0xBEEF to decimal --> 11141415

It was a straight conversion, knowing that 0->0 and A->10 i counted


Sort from highest to lowest (16 bits Word size)  

– b 1001001111001110  --> 0110110000110010 --> -27698
– 0x79AD  --> 31149
– 0x8000  --> -32768
– 0x9010  --> -28400
– 0x5053  --> 20563
– 0xF0FE  --> -3842
– 0x10000 --> 65536

- `79AD` (31149)
- `5053` (20563)
- `F0FE` (-3842)
- `b1001001111001110` (-27698)
- `9010` (-28400)
- `8000` (-32768)
First we convert it from hexadecimal to binary, invert the bits and add one to the new number and get the decimal number and then with the original number if it starts with 0 we leave it positive and if it starts with 1 in negative.