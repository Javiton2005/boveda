/*****************************************
 * Nombre: DibujarGestionFichero
 * Argumentos: Window *Wfichero :   Ventana donde se va a dibujar el patrón
 * Descripción: Dibuja el patrón para leer el nombre del fichero y después de tratarlo mostrar
 *              el número de fichas de libros leídas y descartadas.
 * Reglas de uso: 
 * Código de Retorno: N/A
 * Programador: 
 *****************************************/

//Include del módulo funcional
#include "Ventanas.h"

void DibujarGestionFichero(WINDOW *Wfichero)
{
    int filas, columnas;
    getmaxyx(Wfichero, filas, columnas);
    
    Cuadrado(Wfichero, 1,0,filas-1,columnas, SOLIDO);
    start_color(); 
    wbkgd(Wfichero, COLOR_PAIR(9));

    mvwprintw(Wfichero, 2, 1, "Nombre del fichero:");
    mvwprintw(Wfichero, 3, 1, "Fichas tratadas");
    mvwprintw(Wfichero, 3, 35, "Fichas descartadas");
}