Tema: [[Eda]]
Apartado: #apuntes

## Apuntes:
---

### Punteros:

Es una variable que apunta a una dirección de memoria.
  
  Variable Normal
```c
int num;  num -->05f8[   ]
num = 5;  num -->05f88[ 5 ]
```

  Variable putero:
```c
int *num2;  num2 -->0f560[   ]
*num2 = &num; num2 -->0f560[ 05f88 ]
```
### Struct

Definir TCiudad
```c
typedef struct{                 ----------------------
  char Nombre[50];              | Nombre    |         |
  char Pais[50];                | Pais      | TCiudad |
  char Continente[50];          | Continente|         |
}TCiudad;                       ----------------------|         
```

Acceder a TCiudad
```C
ciudad.Nombre = Madrid;
ciudad.Pais = España;
ciudad.Continente = Europa;
```

TCiudad *ciudadPtr;  Puntero de un struct

Imprimimos
	&num2 --> 0f560   Direccion
	num2  --> 05f88   Valor de la variable
	* num2 --> 5       Valor de la variable a la que apunta la dirección de memoria

Manejo de punteros.

  Imp por que es el uso dinámico de memoria.
 
### Dobles Punteros

```c
char **TodosNombresCompProf;
char *NimbreCompletoProf;
```
 2f20 [3460] TodosNombreProf 
 3560 [25F0]                               25F0 [char]        2650 [char] NombreCompProf
	  [2650]                                       [char]                 [char] 

