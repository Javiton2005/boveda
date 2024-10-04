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

void terceraIteracion(){
  initscr();
  WINDOW *win = newwin(255,255,255,255);
  refresh();
  for(int i=0; i<=255; i++){
    mvwprintw(win,i,0,"%d\n",i);
  }
  wrefresh(win);
  getch();
  endwin();
}

void main() {
    initscr();                // Inicializa ncurses
    start_color();            // Habilita colores
    cbreak();                 // Desactiva el buffer de línea
    noecho();                 // No muestra los caracteres introducidos por el usuario
    int filas, columnas;
    // Inicializar un par de colores (color de texto blanco sobre fondo negro)
    init_pair(1, COLOR_WHITE, COLOR_BLACK);
    init_pair(2, COLOR_RED, COLOR_BLACK);  // Para los caracteres especiales
    getmaxyx(stdscr, filas, columnas);
    // Imprimir cabecera
    attron(A_BOLD);            // Activar negrita
    printw("Tabla ASCII completa (0 - 255)\n");
    attroff(A_BOLD);           // Desactivar negrita
    printw("Código\tCarácter\n");
    printw("--------------------\n");

    for (int i = 0; i < 256; i++) {
        // Resaltar ciertos caracteres especiales (como las esquinas) con color y negrita
        if (i == 201 || i == 187 || i == 200 || i == 188) {
            // Usar color rojo para las esquinas (valores ASCII extendidos)
            attron(COLOR_PAIR(2) | A_BOLD);
        } else {
            // Usar color blanco para los demás
            attron(COLOR_PAIR(1));
        }
        printw("%d\t%c\n", i, i);  // Imprimir el código ASCII y su carácter

        // Desactivar cualquier atributo después de imprimir el carácter
        attroff(COLOR_PAIR(1) | COLOR_PAIR(2) | A_BOLD);
        
        if (i%40==0 && i!=0 ){
          getch();
          clear();
        }
    }

    getch();  // Esperar a que el usuario presione una tecla antes de salir
    endwin(); // Finaliza ncurses
}

