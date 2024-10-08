/*****************************************
 * Nombre: DibujarLibro
 * Argumentos: Window *Wlibro:   Ventana donde se va a dibujar el patrón
 * Descripción: Dibuja el patrón para mostrar o capturar los datos de las fichas de un libro.
 * Reglas de uso: 
 * Código de Retorno: N/A
 * Programador: 
 *****************************************/

//Include del módulo funcional
#include "Ventanas.h"

void DibujarLibro(WINDOW *Wlibro)
{
    int filas, columnas;
    // frases que imprimiremos por pantalla

    char frases[7][20] = {
        "Numero de Libro:",
        "Titulo del Libro:",
        "Apellidos del Autor:",
        "Nombre del Autor:",
        "Genero del Libro:",
        "Editorial del Libro:",
        "Coleccion del Libro:",
    };
    // Cogemos las diemnsiones de la pantalla
    getmaxyx(Wlibro, filas, columnas); 
    // Teñimos la pantalla
    wbkgd(Wlibro, COLOR_PAIR(9));
    
    mvwaddstr(Wlibro, 0, 29, "Gestion de Libros");
    // Teñimos la pantalla
    Cuadrado(Wlibro, 1,0,filas-1,columnas, SOLIDO);
    // Bucle para imprimri el texto por pantalla
    int i = 0;
    for (i = 0; i < 7; i++){
        mvwprintw(Wlibro, i+2, 2, frases[i]);
    }


}