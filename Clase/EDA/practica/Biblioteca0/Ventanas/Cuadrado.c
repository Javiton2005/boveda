/*****************************************
 * Nombre: Cuadrado
 * Argumentos: Window *Wventana :   Ventana donde se va a dibujar el cuadrado 
 *             int x            :   Coordenada x de la esquina superior izquierda
 *             int y            :   Coordenada y de la esquina superior izquierda
 *             int lineas       :   Alto del cuadrado medido en líneas
 *             int columnas     :   Ancho del cuadrado medido en columnas
 *             char tipo        :   SOLIDO -> Se dibuja el cuadrado con los caracteres gráficos sólidos
 *                              :   DOSRAYAS -> Se dibuja el cuadrado con los cracteres gráficos de dos rayas simples
 * Descripción: Dibuja un cuadrado en pantalla con los datos dados
 * Reglas de uso: 
 * Código de Retorno: N/A
 * Programador: 
 *****************************************/

//Include del módulo funcional
#include "Ventanas.h"

void Cuadrado(WINDOW *Wventana,int y, int x, int lineas, int columnas, char tipo)
{
    /*
    char lineaGruesa[7] = {76, 81, 75, 88, 77, 74, 0};
    char lineaFina[7] = {'+', '-', '+', '|', '+', '+', 0};
    */
    char linea[7];  // Declara 'linea' fuera de los condicionales

    if (tipo == SOLIDO) {
        wattron(Wventana, A_ALTCHARSET);

        // Dos rayas
        linea[0] = 76; // 76 esquina arriba izquierda;
        linea[1] = 81; // 81 linea horizontal
        linea[2] = 75; // 75 esquina arriba derecha;
        linea[3] = 88; // 88 vertical
        linea[4] = 77; // 77 esquina abajo izq
        linea[5] = 74; // 74 esquina abajo der
        linea[6] = 0;
    } 
    else {
        // Raya simple
        linea[0] = '+'; 
        linea[1] = '-'; 
        linea[2] = '+'; 
        linea[3] = '|';
        linea[4] = '+'; 
        linea[5] = '+'; 
        linea[6] = 0;
        
    }
    // Bucle de para las paredes del cuadrado
    int i = 0, j = 0;
    for (i = y+1; i < y+lineas-1;i++)
    {
        mvwaddch(Wventana, i,x,linea[3]);
        mvwaddch(Wventana, i, x+columnas-1,linea[3]);
    }
    //bucle para el suelo y techo del cuadrado
    for (j = x+1; j < x+columnas-1;j++)
    {
        mvwaddch(Wventana, y,j,linea[1]);
        mvwaddch(Wventana, y+lineas-1,j,linea[1]);
    }
    //imprimirmos los esquineros
    mvwaddch(Wventana, y, x, linea[0]);
    mvwaddch(Wventana, y, x+columnas-1, linea[2]);
    mvwaddch(Wventana, y+lineas-1, x, linea[4]);
    mvwaddch(Wventana, y+lineas-1, x+columnas-1, linea[5]);
    wattroff (Wventana, A_ALTCHARSET);
}