Tema: [[Eda]]
Apartado: #

## Apuntes:

```c
char linea[7] = {76,81,75,88,77,74,0}
char linea1[7] = {'+','-'.'+','|','+','+',0}
76 esquina arriba izquierda;
81 linea horizontal
75 esquina arriba derecha;
88 vertical
77 esquina abajo izq
74 esquina abajo der

wattron (WVentana, A_ALTCHARSET);
mvwaddch(WVentana, y, x, linea[0]);
int i = 0;

for(i=0; i<cols - 2; i++){
	waddch(WVentana, linea[1]);
}
waddch(WVentana, liena[2]);
for(i=0; i<lineas-2; i++){
	mvwaddch(WVentana, y+1+i,x,linea[3]);
	mv2addch(WVentana, y+1+i,x,linea[3]);
}
```