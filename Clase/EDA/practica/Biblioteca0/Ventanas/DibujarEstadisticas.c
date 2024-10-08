/*****************************************
 * Nombre: DibujarEstadisticas
 * Argumentos: Window *Westad :   Ventana donde se va a dibujar el patrón
 * Descripción: Dibuja el patrón para er las estadísticas del programa
 * Reglas de uso: 
 * Código de Retorno: N/A
 * Programador: 
 *****************************************/

//Include del módulo funcional
#include "Ventanas.h"

void DibujarEstadisticas(WINDOW *Westad)
{
    int filas, columnas;
    //frases qeu se veran por pantalla
    char frases[11][74] = {
        "Nombre del fichero:",
        "Fichas de libros:",
        "Numero de Libros con memoria reservada:",
        "Microsegundos en Importar:",
        "Microsegundos en ordenar por Seleccion:",
        "Microsegundos en ordenar por Burbuja:",
        "Microsegundos en ordenar por Insercion:",
        "Microsegundos en ordenar por Quicksort:",
        "Microsegundos en buscar por Secuencia:",
        "Microsegundos en buscar por Binario:",
        "Microsegundos en buscar por Arbol binario:"
    };
    
    //Teñimos la pantalla
    wbkgd(Westad, COLOR_PAIR(9));
    //Titulo
    mvwaddstr(Westad, 0, 28, "    Estadisticas    ");
    //Cogemos las medidas
    getmaxyx(Westad, filas, columnas);
    //Imprimirmos el cuadrado
    Cuadrado(Westad, 1,0,filas-1,columnas, SOLIDO);
    //Fucle para imprimir el contenido de la pantalla
    int i = 0;
    for (i = 0; i < 11; i++){
        mvwprintw(Westad, i+2, 2, frases[i]);
    }
    // Deberia de imprimir ese escalon que aparece en el ejemplo
    attron(COLOR_PAIR(5));
    mvwprintw(Westad, 0, 0,  "                            ");
    mvwprintw(Westad, 0, 48, "                            ");
    attroff(COLOR_PAIR(5));
}