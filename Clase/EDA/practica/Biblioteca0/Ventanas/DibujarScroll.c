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
    // Teñimos la pantalla
    wbkgd(Wlistado, COLOR_PAIR(9));
    // Cogemos las dimensiones de la pantalla
    getmaxyx(Wlistado, filas, columnas);
    // Imprimirmos los marcos de la pantalla
    Cuadrado(Wlistado, 1,0,3,columnas, SOLIDO);
    Cuadrado(Wlistado, 3,0,filas-4,columnas, SOLIDO);
    
    //Imprimirmos el texto por la pantalla
    mvwaddstr(Wlistado, 0, 29, "Listado de Libros");    
    
    mvwprintw(Wlistado, 2, 2, "Numero");
    mvwprintw(Wlistado, 2, 22, "Titulo");
    mvwprintw(Wlistado, 2, 58, "Autor");

    mvwprintw(Wlistado, filas - 1, 6, "ESC=Salir Flechas=Subir/Bajar AvPag/RePag=Pag siguiente/anterior");

    
}