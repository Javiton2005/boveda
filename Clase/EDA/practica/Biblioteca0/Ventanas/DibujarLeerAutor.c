/*****************************************
 * Nombre: DibujarLeerAutor
 * Argumentos: Window *Wautor:   Ventana donde se va a dibujar el patrón
 * Descripción: Dibuja el patrón para leer el comienzo del apellido del autor(es) de los que se desean
 *              buscar y listar sus libros.
 * Reglas de uso: 
 * Código de Retorno: N/A
 * Programador: 
 *****************************************/

//Include del módulo funcional
#include "Ventanas.h"

void DibujarLeerAutor(WINDOW *Wautor)
{
    int filas, columnas;
    getmaxyx(Wautor, filas, columnas);
    
    Cuadrado(Wautor, 1,0,filas-1,columnas, SOLIDO);
    start_color(); 
    wbkgd(Wautor, COLOR_PAIR(9));

    mvwprintw(Wautor, 2, 2, "Apellidos del Autor:");
    mvwaddstr(Wautor, 0, 28, "Busqueda por Autor");
}