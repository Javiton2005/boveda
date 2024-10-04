#include <ncursesw/curses.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

void main()
{
    int CoordenadaX = 1, CoordenadaY = 1;
    int vectorX = 1, vectorY = 1;
    initscr();

    curs_set(0);
    //cuadrado(stdscr,0,0,20,80);

    while(1){
        mvaddch(CoordenadaY, CoordenadaX, "o");
        refresh();
        mvaddch(CoordenadaY, CoordenadaX, ' ');
        if((CoordenadaY+vectorY>18)|| (CoordenadaY+vectorY<1)){
            vectorY = - vectorY;
        }
        if((CoordenadaX + vectorX> 78)||(CoordenadaX+vectorX<1))
            vectorX = - vectorX;

        CoordenadaX += vectorX;
        CoordenadaY += vectorY;
        sleep(1);
    }
}