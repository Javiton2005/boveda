#include <stdio.h>
#include <ncursesw/curses.h>
#include <stdlib.h>
#include <strings.h>

void primeraIteracion(){
    int filas = 22;
    int columnas = 22;
    initscr();
    WINDOW *win = newwin(filas, columnas, 0, 0);
    refresh();
    mvwprintw(win, 0, 0, "Hello world");
    mvwprintw(win, 1, 0, "Mi pantalla tiene %d filas y %d columnas", filas, columnas);
    wrefresh(win);
    getch();

    endwin();
}

void segundaIteracion(){

    initscr();
    printw("Hello world\n");
    printw("La patalla tiene %d lineas y %d columnas", LINES, COLS);
    mvprintw(20, 3, "Pulse una tecla para continuar");
    refresh();
    getch();

    endwin();
}


void main()
{
    //primeraIteracion;
    segundaIteracion();
}

