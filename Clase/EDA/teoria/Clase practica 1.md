Tema: [[EDA]]
Apartado: #practica

## Apuntes:

```c
difTime(struct timeval*, struct timeval*){
	gettimeofday(struct timeval*);
}
importar(Libros **filas, WINDOW *WVentana, char sumar){
	
}
```
titulo;apellidos;nombres;genero;editorial;coleccion

separarlo con strtok

token = strtok(puntero, delimitadores);

token = strtok(NULL, ";");

No funciona si hay algún null ;;

usar mejor strsep();
