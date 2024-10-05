/*****************************************
 * Nombre: DibujarScroll
 * Argumentos: Window *Wlistado:   Ventana donde se va a dibujar el patrón
 * Descripción: Dibuja el patrón para los listados de libros, con 10 fichas por pantalla.
 * Reglas de uso: 
 * Código de Retorno: N/A
 * Programador: 
 *****************************************/

////Include del módulo funcional
#include "Ventanas.h"

void DibujarScroll(WINDOW *Wlistado)
{
    //char libros [10][74];
    int filas, columnas;
    
    start_color(); 

    wbkgd(Wlistado, COLOR_PAIR(9));
    
    mvwaddstr(Wlistado, 0, 29, "Listado de Libros");
    
    getmaxyx(Wlistado, filas, columnas);
    
    Cuadrado(Wlistado, 1,0,3,columnas, SOLIDO);
    Cuadrado(Wlistado, 3,0,filas-4,columnas, SOLIDO);
    
    mvwprintw(Wlistado, 2, 2, "Numero");
    mvwprintw(Wlistado, 2, 22, "Titulo");
    mvwprintw(Wlistado, 2, 58, "Autor");

    // bucle para imprimir informacion;

    mvwprintw(Wlistado, filas - 1, 6, "ESC=Salir Flechas=Subir/Bajar AvPag/RePag=Pag siguiente/anterior");

    
}