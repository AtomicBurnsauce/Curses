// Curses.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <curses.h>

using namespace std;

int main()
{
    initscr();

    printw("Hello World!!!");

    refresh();

    getch();

    endwin();

    return 0;
}

