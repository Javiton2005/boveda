#include <stdio.h>
#include <ncursesw/curses.h>

void cuadrado(WINDOW *win, int y, int x, int Nlineas, int Ncolumnas){

    /*int i = inicioX; //Lineas --------------
    int j = inicioY; //Columnas |||||||||||

    for (j = inicioY; j < Nlineas; j++){
        for (i = inicioX; i < Ncolumnas; i++){
            if((j == inicioY)||(j==inicioY+Ncolumnas))
                mvwprintw(win, j, i, " ");
            else{
                mvwprintw(win, j, i, " ");
                i + Ncolumnas - 1;
            } 
        }
    }*/
    //mvwprintw(win, i, x, "");

    char palabra[7];


    char linea[7] = {76, 81, 75, 88, 77, 74, 0};
    char linea1[7] = {'+', '-', '+', '|', '+', '+', 0};
    /*
    76 esquina arriba izquierda;
    81 linea horizontal
    75 esquina arriba derecha;
    88 vertical
    77 esquina abajo izq
    74 esquina abajo der
    */
    wattron (win, A_ALTCHARSET);
    mvwaddch(win, y, x, linea[0]);
    int i = 0;

    for(i=0; i<Ncolumnas - 2; i++){
        waddch(win, linea[1]);
    }
    waddch(win, linea[2]);
    for(i=0; i<Nlineas-2; i++){
        mvwaddch(win, y+1+i,x,linea[3]);
        mvwaddch(win, y+78,x,linea[3]);
    }



}