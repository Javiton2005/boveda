Tema: [[Eda]]
Apartado: #apuntes

## Memoria en C:
---
```c
#include <stdlib.h>

void *malloc (size_t BlockSize) // Devuelve memoria
void *calloc (size_t ElementSize, NoElement) // Devuelve memoria Inicializada a 0
void *Realloc (void initialP) // Reasigna memoria
void *free (void * P) // Libera memoria
```

Para ver cuanto espacio ocupa un entero

```c
sizeof (int) = 4 bytes
sizeof (Num) = 4 bytes
```
Si la variable num -->10 el pnum que esta almacenada en el [05DF] que contiene la dirección de memoria [3652] hace que el num empiece en 3652 y acabe 8 bytes mas tarde

La dirección que almacena el puntero es la primera del bloque de memoria

---
### Malloc
```c
pNum = (int*) malloc(sizeof(int)*10);
```
Comprobamos si ha devuelto memoria
```c
if(pNum == null){
	printf("Memoria reservada");
}
else{
	//Manejo de puntero
}
```
---
### Free
```c
pnum = free((int*) pNum);
```
---
### Calloc
```c
pnum = (int*) calloc(sizeof(int), 10);
```
**Pone un 0 en todo para vaciarla.**
Comprobamos si ha devuelto
```c
if(pNum == null){
	printf("Memoria reservada");
}
else{
	//Manejo de puntero
}
```
---
### Realloc

```c
char *word;
int i;
char ch;

word = NULL;
i=0;
word = (char*) realloc (word, sizeof(char));//Ha aumentado el espacio de 0->1
if...

word = (char*) realloc (word, (i+1)*sizeof(char));
// Guarda lo anterior y aumenta memoria.
```
Realocamos memoria aumentando o disminuyendo la memoria

---
Cuando yo sumo uno a una dirección de memoria estoy incrementando tanto como el tipo sea el puntero
ej.
	float ArgNum;
	ArgNum+1 --> esta sumando 4 bytes

### Liberar memoria en el buffer

Alternativa estandar: 
```c
while((getchat()) != "\n")
```
Alternativa no standar:
```c
fflush(stdin);
```

el scanf() solo lee hasta un espacio para solucionar podemos 
```c
scanf("%*[^\n]", (PuntAsig + i)-> IdAsignatura);
```
Esto lee todo hasta que encuentre un \\n

Para entrar a un campo de una estructura tenemos que usar Variable -> Campo

En el scanf(); debería de usar el & para pasar la dirección de memoria de la variable en la que se va a guardar, pero si es una cadena no hace falta pasarlo por que ya de por si guarda la dirección de la array.
```c
int a;
scanf("%d", a);
char arrayChar[10];
scanf("%s", arrayChar);
```
