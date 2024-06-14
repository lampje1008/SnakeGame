#include <curses.h>
#include <iostream>
#include "Constants.h"

using namespace std;

class Map {
public:
	int map[MAP_SIZE][MAP_SIZE];

	Map() {}

	void print_title(WINDOW* w)
{
	int space = 8;

	mvwaddch(w, 0, 1, ACS_BLOCK);
	mvwaddch(w, 0, 2, ACS_BLOCK);
	mvwaddch(w, 0, 3, ACS_BLOCK);
	mvwaddch(w, 0, 4, ACS_BLOCK);
	mvwaddch(w, 0, 5, ACS_BLOCK);
	mvwaddch(w, 1, 0, ACS_BLOCK);
	mvwaddch(w, 1, 1, ACS_BLOCK);
	mvwaddch(w, 2, 1, ACS_BLOCK);
	mvwaddch(w, 2, 2, ACS_BLOCK);
	mvwaddch(w, 2, 3, ACS_BLOCK);
	mvwaddch(w, 2, 4, ACS_BLOCK);
	mvwaddch(w, 2, 5, ACS_BLOCK);
	mvwaddch(w, 3, 5, ACS_BLOCK);
	mvwaddch(w, 3, 6, ACS_BLOCK);
	mvwaddch(w, 4, 1, ACS_BLOCK);
	mvwaddch(w, 4, 2, ACS_BLOCK);
	mvwaddch(w, 4, 3, ACS_BLOCK);
	mvwaddch(w, 4, 4, ACS_BLOCK);
	mvwaddch(w, 4, 5, ACS_BLOCK);

	// N
	mvwaddch(w, 0, 0 + space, ACS_BLOCK);
	mvwaddch(w, 0, 1 + space, ACS_BLOCK);
	mvwaddch(w, 1, 0 + space, ACS_BLOCK);
	mvwaddch(w, 1, 1 + space, ACS_BLOCK);
	mvwaddch(w, 1, 2 + space, ACS_BLOCK);
	mvwaddch(w, 2, 0 + space, ACS_BLOCK);
	mvwaddch(w, 2, 1 + space, ACS_BLOCK);
	mvwaddch(w, 2, 3 + space, ACS_BLOCK);
	mvwaddch(w, 3, 0 + space, ACS_BLOCK);
	mvwaddch(w, 3, 1 + space, ACS_BLOCK);
	mvwaddch(w, 3, 4 + space, ACS_BLOCK);
	mvwaddch(w, 3, 5 + space, ACS_BLOCK);
	mvwaddch(w, 4, 0 + space, ACS_BLOCK);
	mvwaddch(w, 4, 1 + space, ACS_BLOCK);
	mvwaddch(w, 4, 5 + space, ACS_BLOCK);
	mvwaddch(w, 4, 6 + space, ACS_BLOCK);
	mvwaddch(w, 3, 6 + space, ACS_BLOCK);
	mvwaddch(w, 2, 5 + space, ACS_BLOCK);
	mvwaddch(w, 2, 6 + space, ACS_BLOCK);
	mvwaddch(w, 1, 5 + space, ACS_BLOCK);
	mvwaddch(w, 1, 6 + space, ACS_BLOCK);
	mvwaddch(w, 0, 5 + space, ACS_BLOCK);
	mvwaddch(w, 0, 6 + space, ACS_BLOCK);

	//A
	mvwaddch(w, 0, 2 + space * 2, ACS_BLOCK);
	mvwaddch(w, 0, 3 + space * 2, ACS_BLOCK);
	mvwaddch(w, 0, 4 + space * 2, ACS_BLOCK);
	mvwaddch(w, 1, 1 + space * 2, ACS_BLOCK);
	mvwaddch(w, 1, 2 + space * 2, ACS_BLOCK);
	mvwaddch(w, 1, 4 + space * 2, ACS_BLOCK);
	mvwaddch(w, 1, 5 + space * 2, ACS_BLOCK);
	mvwaddch(w, 2, 0 + space * 2, ACS_BLOCK);
	mvwaddch(w, 2, 1 + space * 2, ACS_BLOCK);
	mvwaddch(w, 2, 5 + space * 2, ACS_BLOCK);
	mvwaddch(w, 2, 6 + space * 2, ACS_BLOCK);
	mvwaddch(w, 3, 0 + space * 2, ACS_BLOCK);
	mvwaddch(w, 3, 1 + space * 2, ACS_BLOCK);
	mvwaddch(w, 3, 2 + space * 2, ACS_BLOCK);
	mvwaddch(w, 3, 3 + space * 2, ACS_BLOCK);
	mvwaddch(w, 3, 4 + space * 2, ACS_BLOCK);
	mvwaddch(w, 3, 5 + space * 2, ACS_BLOCK);
	mvwaddch(w, 3, 6 + space * 2, ACS_BLOCK);
	mvwaddch(w, 4, 0 + space * 2, ACS_BLOCK);
	mvwaddch(w, 4, 1 + space * 2, ACS_BLOCK);
	mvwaddch(w, 4, 5 + space * 2, ACS_BLOCK);
	mvwaddch(w, 4, 6 + space * 2, ACS_BLOCK);

	//k
	mvwaddch(w, 0, 0 + space * 3, ACS_BLOCK);
	mvwaddch(w, 0, 1 + space * 3, ACS_BLOCK);
	mvwaddch(w, 0, 5 + space * 3, ACS_BLOCK);
	mvwaddch(w, 0, 6 + space * 3, ACS_BLOCK);
	mvwaddch(w, 1, 0 + space * 3, ACS_BLOCK);
	mvwaddch(w, 1, 1 + space * 3, ACS_BLOCK);
	mvwaddch(w, 1, 3 + space * 3, ACS_BLOCK);
	mvwaddch(w, 1, 4 + space * 3, ACS_BLOCK);
	mvwaddch(w, 2, 0 + space * 3, ACS_BLOCK);
	mvwaddch(w, 2, 1 + space * 3, ACS_BLOCK);
	mvwaddch(w, 2, 2 + space * 3, ACS_BLOCK);
	mvwaddch(w, 3, 0 + space * 3, ACS_BLOCK);
	mvwaddch(w, 3, 1 + space * 3, ACS_BLOCK);
	mvwaddch(w, 3, 3 + space * 3, ACS_BLOCK);
	mvwaddch(w, 3, 4 + space * 3, ACS_BLOCK);
	mvwaddch(w, 4, 0 + space * 3, ACS_BLOCK);
	mvwaddch(w, 4, 1 + space * 3, ACS_BLOCK);
	mvwaddch(w, 4, 5 + space * 3, ACS_BLOCK);
	mvwaddch(w, 4, 6 + space * 3, ACS_BLOCK);


	//E
	mvwaddch(w, 0, 0 + space * 4, ACS_BLOCK);
	mvwaddch(w, 0, 1 + space * 4, ACS_BLOCK);
	mvwaddch(w, 0, 2 + space * 4, ACS_BLOCK);
	mvwaddch(w, 0, 3 + space * 4, ACS_BLOCK);
	mvwaddch(w, 0, 4 + space * 4, ACS_BLOCK);
	mvwaddch(w, 0, 5 + space * 4, ACS_BLOCK);
	mvwaddch(w, 0, 6 + space * 4, ACS_BLOCK);
	mvwaddch(w, 1, 0 + space * 4, ACS_BLOCK);
	mvwaddch(w, 1, 1 + space * 4, ACS_BLOCK);
	mvwaddch(w, 2, 0 + space * 4, ACS_BLOCK);
	mvwaddch(w, 2, 1 + space * 4, ACS_BLOCK);
	mvwaddch(w, 2, 2 + space * 4, ACS_BLOCK);
	mvwaddch(w, 2, 3 + space * 4, ACS_BLOCK);
	mvwaddch(w, 2, 4 + space * 4, ACS_BLOCK);
	mvwaddch(w, 2, 5 + space * 4, ACS_BLOCK);
	mvwaddch(w, 3, 0 + space * 4, ACS_BLOCK);
	mvwaddch(w, 3, 1 + space * 4, ACS_BLOCK);
	mvwaddch(w, 4, 0 + space * 4, ACS_BLOCK);
	mvwaddch(w, 4, 1 + space * 4, ACS_BLOCK);
	mvwaddch(w, 4, 2 + space * 4, ACS_BLOCK);
	mvwaddch(w, 4, 3 + space * 4, ACS_BLOCK);
	mvwaddch(w, 4, 4 + space * 4, ACS_BLOCK);
	mvwaddch(w, 4, 5 + space * 4, ACS_BLOCK);
	mvwaddch(w, 4, 6 + space * 4, ACS_BLOCK);


	//G
	mvwaddch(w, 0, 1 + space * 5 + 3, ACS_BLOCK);
	mvwaddch(w, 0, 2 + space * 5 + 3, ACS_BLOCK);
	mvwaddch(w, 0, 3 + space * 5 + 3, ACS_BLOCK);
	mvwaddch(w, 0, 4 + space * 5 + 3, ACS_BLOCK);
	mvwaddch(w, 0, 5 + space * 5 + 3, ACS_BLOCK);
	mvwaddch(w, 1, 0 + space * 5 + 3, ACS_BLOCK);
	mvwaddch(w, 1, 1 + space * 5 + 3, ACS_BLOCK);
	mvwaddch(w, 2, 0 + space * 5 + 3, ACS_BLOCK);
	mvwaddch(w, 2, 1 + space * 5 + 3, ACS_BLOCK);
	mvwaddch(w, 2, 4 + space * 5 + 3, ACS_BLOCK);
	mvwaddch(w, 2, 5 + space * 5 + 3, ACS_BLOCK);
	mvwaddch(w, 2, 6 + space * 5 + 3, ACS_BLOCK);
	mvwaddch(w, 3, 0 + space * 5 + 3, ACS_BLOCK);
	mvwaddch(w, 3, 1 + space * 5 + 3, ACS_BLOCK);
	mvwaddch(w, 3, 5 + space * 5 + 3, ACS_BLOCK);
	mvwaddch(w, 3, 6 + space * 5 + 3, ACS_BLOCK);
	mvwaddch(w, 4, 1 + space * 5 + 3, ACS_BLOCK);
	mvwaddch(w, 4, 2 + space * 5 + 3, ACS_BLOCK);
	mvwaddch(w, 4, 3 + space * 5 + 3, ACS_BLOCK);
	mvwaddch(w, 4, 4 + space * 5 + 3, ACS_BLOCK);
	mvwaddch(w, 4, 5 + space * 5 + 3, ACS_BLOCK);

	//A
	mvwaddch(w, 0, 2 + space * 6 + 3, ACS_BLOCK);
	mvwaddch(w, 0, 3 + space * 6 + 3, ACS_BLOCK);
	mvwaddch(w, 0, 4 + space * 6 + 3, ACS_BLOCK);
	mvwaddch(w, 1, 1 + space * 6 + 3, ACS_BLOCK);
	mvwaddch(w, 1, 2 + space * 6 + 3, ACS_BLOCK);
	mvwaddch(w, 1, 4 + space * 6 + 3, ACS_BLOCK);
	mvwaddch(w, 1, 5 + space * 6 + 3, ACS_BLOCK);
	mvwaddch(w, 2, 0 + space * 6 + 3, ACS_BLOCK);
	mvwaddch(w, 2, 1 + space * 6 + 3, ACS_BLOCK);
	mvwaddch(w, 2, 5 + space * 6 + 3, ACS_BLOCK);
	mvwaddch(w, 2, 6 + space * 6 + 3, ACS_BLOCK);
	mvwaddch(w, 3, 0 + space * 6 + 3, ACS_BLOCK);
	mvwaddch(w, 3, 1 + space * 6 + 3, ACS_BLOCK);
	mvwaddch(w, 3, 2 + space * 6 + 3, ACS_BLOCK);
	mvwaddch(w, 3, 3 + space * 6 + 3, ACS_BLOCK);
	mvwaddch(w, 3, 4 + space * 6 + 3, ACS_BLOCK);
	mvwaddch(w, 3, 5 + space * 6 + 3, ACS_BLOCK);
	mvwaddch(w, 3, 6 + space * 6 + 3, ACS_BLOCK);
	mvwaddch(w, 4, 0 + space * 6 + 3, ACS_BLOCK);
	mvwaddch(w, 4, 1 + space * 6 + 3, ACS_BLOCK);
	mvwaddch(w, 4, 5 + space * 6 + 3, ACS_BLOCK);
	mvwaddch(w, 4, 6 + space * 6 + 3, ACS_BLOCK);

	//M
	mvwaddch(w, 0, 0 + space * 7 + 3, ACS_BLOCK);
	mvwaddch(w, 0, 1 + space * 7 + 3, ACS_BLOCK);
	mvwaddch(w, 0, 5 + space * 7 + 3, ACS_BLOCK);
	mvwaddch(w, 0, 6 + space * 7 + 3, ACS_BLOCK);
	mvwaddch(w, 1, 0 + space * 7 + 3, ACS_BLOCK);
	mvwaddch(w, 1, 1 + space * 7 + 3, ACS_BLOCK);
	mvwaddch(w, 1, 2 + space * 7 + 3, ACS_BLOCK);
	mvwaddch(w, 1, 4 + space * 7 + 3, ACS_BLOCK);
	mvwaddch(w, 1, 5 + space * 7 + 3, ACS_BLOCK);
	mvwaddch(w, 1, 6 + space * 7 + 3, ACS_BLOCK);
	mvwaddch(w, 2, 0 + space * 7 + 3, ACS_BLOCK);
	mvwaddch(w, 2, 1 + space * 7 + 3, ACS_BLOCK);
	mvwaddch(w, 2, 3 + space * 7 + 3, ACS_BLOCK);
	mvwaddch(w, 2, 5 + space * 7 + 3, ACS_BLOCK);
	mvwaddch(w, 2, 6 + space * 7 + 3, ACS_BLOCK);
	mvwaddch(w, 3, 0 + space * 7 + 3, ACS_BLOCK);
	mvwaddch(w, 3, 1 + space * 7 + 3, ACS_BLOCK);
	mvwaddch(w, 3, 5 + space * 7 + 3, ACS_BLOCK);
	mvwaddch(w, 3, 6 + space * 7 + 3, ACS_BLOCK);
	mvwaddch(w, 4, 0 + space * 7 + 3, ACS_BLOCK);
	mvwaddch(w, 4, 1 + space * 7 + 3, ACS_BLOCK);
	mvwaddch(w, 4, 5 + space * 7 + 3, ACS_BLOCK);
	mvwaddch(w, 4, 6 + space * 7 + 3, ACS_BLOCK);


	//E
	mvwaddch(w, 0, 0 + space * 8 + 3, ACS_BLOCK);
	mvwaddch(w, 0, 1 + space * 8 + 3, ACS_BLOCK);
	mvwaddch(w, 0, 2 + space * 8 + 3, ACS_BLOCK);
	mvwaddch(w, 0, 3 + space * 8 + 3, ACS_BLOCK);
	mvwaddch(w, 0, 4 + space * 8 + 3, ACS_BLOCK);
	mvwaddch(w, 0, 5 + space * 8 + 3, ACS_BLOCK);
	mvwaddch(w, 0, 6 + space * 8 + 3, ACS_BLOCK);
	mvwaddch(w, 1, 0 + space * 8 + 3, ACS_BLOCK);
	mvwaddch(w, 1, 1 + space * 8 + 3, ACS_BLOCK);
	mvwaddch(w, 2, 0 + space * 8 + 3, ACS_BLOCK);
	mvwaddch(w, 2, 1 + space * 8 + 3, ACS_BLOCK);
	mvwaddch(w, 2, 2 + space * 8 + 3, ACS_BLOCK);
	mvwaddch(w, 2, 3 + space * 8 + 3, ACS_BLOCK);
	mvwaddch(w, 2, 4 + space * 8 + 3, ACS_BLOCK);
	mvwaddch(w, 2, 5 + space * 8 + 3, ACS_BLOCK);
	mvwaddch(w, 3, 0 + space * 8 + 3, ACS_BLOCK);
	mvwaddch(w, 3, 1 + space * 8 + 3, ACS_BLOCK);
	mvwaddch(w, 4, 0 + space * 8 + 3, ACS_BLOCK);
	mvwaddch(w, 4, 1 + space * 8 + 3, ACS_BLOCK);
	mvwaddch(w, 4, 2 + space * 8 + 3, ACS_BLOCK);
	mvwaddch(w, 4, 3 + space * 8 + 3, ACS_BLOCK);
	mvwaddch(w, 4, 4 + space * 8 + 3, ACS_BLOCK);
	mvwaddch(w, 4, 5 + space * 8 + 3, ACS_BLOCK);
	mvwaddch(w, 4, 6 + space * 8 + 3, ACS_BLOCK);

	// final: (4, 73)
}

void print_victory(WINDOW* w)
{
	int space = 8;

	//g
	mvwaddch(w, 0, 4 + 1, ACS_BLOCK);
	mvwaddch(w, 0, 4 + 2, ACS_BLOCK);
	mvwaddch(w, 0, 4 + 3, ACS_BLOCK);
	mvwaddch(w, 0, 4 + 4, ACS_BLOCK);
	mvwaddch(w, 0, 4 + 5, ACS_BLOCK);
	mvwaddch(w, 0, 4 + 5, ACS_BLOCK);
	mvwaddch(w, 1, 4 + 0, ACS_BLOCK);
	mvwaddch(w, 1, 4 + 1, ACS_BLOCK);
	mvwaddch(w, 2, 4 + 0, ACS_BLOCK);
	mvwaddch(w, 2, 4 + 1, ACS_BLOCK);
	mvwaddch(w, 2, 4 + 4, ACS_BLOCK);
	mvwaddch(w, 2, 4 + 5, ACS_BLOCK);
	mvwaddch(w, 2, 4 + 6, ACS_BLOCK);
	mvwaddch(w, 3, 4 + 0, ACS_BLOCK);
	mvwaddch(w, 3, 4 + 1, ACS_BLOCK);
	mvwaddch(w, 3, 4 + 5, ACS_BLOCK);
	mvwaddch(w, 3, 4 + 6, ACS_BLOCK);
	mvwaddch(w, 4, 4 + 1, ACS_BLOCK);
	mvwaddch(w, 4, 4 + 2, ACS_BLOCK);
	mvwaddch(w, 4, 4 + 3, ACS_BLOCK);
	mvwaddch(w, 4, 4 + 4, ACS_BLOCK);
	mvwaddch(w, 4, 4 + 5, ACS_BLOCK);

	//a
	mvwaddch(w, 0, 4 + 2 + space, ACS_BLOCK);
	mvwaddch(w, 0, 4 + 3 + space, ACS_BLOCK);
	mvwaddch(w, 0, 4 + 4 + space, ACS_BLOCK);
	mvwaddch(w, 1, 4 + 1 + space, ACS_BLOCK);
	mvwaddch(w, 1, 4 + 2 + space, ACS_BLOCK);
	mvwaddch(w, 1, 4 + 4 + space, ACS_BLOCK);
	mvwaddch(w, 1, 4 + 5 + space, ACS_BLOCK);
	mvwaddch(w, 2, 4 + 0 + space, ACS_BLOCK);
	mvwaddch(w, 2, 4 + 1 + space, ACS_BLOCK);
	mvwaddch(w, 2, 4 + 5 + space, ACS_BLOCK);
	mvwaddch(w, 2, 4 + 6 + space, ACS_BLOCK);
	mvwaddch(w, 3, 4 + 0 + space, ACS_BLOCK);
	mvwaddch(w, 3, 4 + 1 + space, ACS_BLOCK);
	mvwaddch(w, 3, 4 + 2 + space, ACS_BLOCK);
	mvwaddch(w, 3, 4 + 3 + space, ACS_BLOCK);
	mvwaddch(w, 3, 4 + 4 + space, ACS_BLOCK);
	mvwaddch(w, 3, 4 + 5 + space, ACS_BLOCK);
	mvwaddch(w, 3, 4 + 6 + space, ACS_BLOCK);
	mvwaddch(w, 4, 4 + 0 + space, ACS_BLOCK);
	mvwaddch(w, 4, 4 + 1 + space, ACS_BLOCK);
	mvwaddch(w, 4, 4 + 5 + space, ACS_BLOCK);
	mvwaddch(w, 4, 4 + 6 + space, ACS_BLOCK);


	//m
	mvwaddch(w, 0, 4 + 0 + space * 2, ACS_BLOCK);
	mvwaddch(w, 0, 4 + 1 + space * 2, ACS_BLOCK);
	mvwaddch(w, 0, 4 + 5 + space * 2, ACS_BLOCK);
	mvwaddch(w, 0, 4 + 6 + space * 2, ACS_BLOCK);
	mvwaddch(w, 1, 4 + 0 + space * 2, ACS_BLOCK);
	mvwaddch(w, 1, 4 + 1 + space * 2, ACS_BLOCK);
	mvwaddch(w, 1, 4 + 2 + space * 2, ACS_BLOCK);
	mvwaddch(w, 1, 4 + 4 + space * 2, ACS_BLOCK);
	mvwaddch(w, 1, 4 + 5 + space * 2, ACS_BLOCK);
	mvwaddch(w, 1, 4 + 6 + space * 2, ACS_BLOCK);
	mvwaddch(w, 2, 4 + 0 + space * 2, ACS_BLOCK);
	mvwaddch(w, 2, 4 + 1 + space * 2, ACS_BLOCK);
	mvwaddch(w, 2, 4 + 3 + space * 2, ACS_BLOCK);
	mvwaddch(w, 2, 4 + 5 + space * 2, ACS_BLOCK);
	mvwaddch(w, 2, 4 + 6 + space * 2, ACS_BLOCK);
	mvwaddch(w, 3, 4 + 0 + space * 2, ACS_BLOCK);
	mvwaddch(w, 3, 4 + 1 + space * 2, ACS_BLOCK);
	mvwaddch(w, 3, 4 + 5 + space * 2, ACS_BLOCK);
	mvwaddch(w, 3, 4 + 6 + space * 2, ACS_BLOCK);
	mvwaddch(w, 4, 4 + 0 + space * 2, ACS_BLOCK);
	mvwaddch(w, 4, 4 + 1 + space * 2, ACS_BLOCK);
	mvwaddch(w, 4, 4 + 5 + space * 2, ACS_BLOCK);
	mvwaddch(w, 4, 4 + 6 + space * 2, ACS_BLOCK);

	//e
	mvwaddch(w, 0, 4 + 0 + space * 3, ACS_BLOCK);
	mvwaddch(w, 0, 4 + 1 + space * 3, ACS_BLOCK);
	mvwaddch(w, 0, 4 + 2 + space * 3, ACS_BLOCK);
	mvwaddch(w, 0, 4 + 3 + space * 3, ACS_BLOCK);
	mvwaddch(w, 0, 4 + 4 + space * 3, ACS_BLOCK);
	mvwaddch(w, 0, 4 + 5 + space * 3, ACS_BLOCK);
	mvwaddch(w, 0, 4 + 6 + space * 3, ACS_BLOCK);
	mvwaddch(w, 1, 4 + 0 + space * 3, ACS_BLOCK);
	mvwaddch(w, 1, 4 + 1 + space * 3, ACS_BLOCK);
	mvwaddch(w, 2, 4 + 0 + space * 3, ACS_BLOCK);
	mvwaddch(w, 2, 4 + 1 + space * 3, ACS_BLOCK);
	mvwaddch(w, 2, 4 + 2 + space * 3, ACS_BLOCK);
	mvwaddch(w, 2, 4 + 3 + space * 3, ACS_BLOCK);
	mvwaddch(w, 2, 4 + 4 + space * 3, ACS_BLOCK);
	mvwaddch(w, 2, 4 + 5 + space * 3, ACS_BLOCK);
	mvwaddch(w, 3, 4 + 0 + space * 3, ACS_BLOCK);
	mvwaddch(w, 3, 4 + 1 + space * 3, ACS_BLOCK);
	mvwaddch(w, 4, 4 + 0 + space * 3, ACS_BLOCK);
	mvwaddch(w, 4, 4 + 1 + space * 3, ACS_BLOCK);
	mvwaddch(w, 4, 4 + 2 + space * 3, ACS_BLOCK);
	mvwaddch(w, 4, 4 + 3 + space * 3, ACS_BLOCK);
	mvwaddch(w, 4, 4 + 4 + space * 3, ACS_BLOCK);
	mvwaddch(w, 4, 4 + 5 + space * 3, ACS_BLOCK);
	mvwaddch(w, 4, 4 + 6 + space * 3, ACS_BLOCK);

	// C
	mvwaddch(w, 6, 1, ACS_BLOCK);
	mvwaddch(w, 6, 2, ACS_BLOCK);
	mvwaddch(w, 6, 3, ACS_BLOCK);
	mvwaddch(w, 6, 4, ACS_BLOCK);
	mvwaddch(w, 6, 5, ACS_BLOCK);
	mvwaddch(w, 7, 1, ACS_BLOCK);
	mvwaddch(w, 7, 0, ACS_BLOCK);
	mvwaddch(w, 7, 6, ACS_BLOCK);
	mvwaddch(w, 8, 0, ACS_BLOCK);
	mvwaddch(w, 8, 1, ACS_BLOCK);
	mvwaddch(w, 9, 1, ACS_BLOCK);
	mvwaddch(w, 9, 0, ACS_BLOCK);
	mvwaddch(w, 9, 6, ACS_BLOCK);
	mvwaddch(w, 10, 1, ACS_BLOCK);
	mvwaddch(w, 10, 2, ACS_BLOCK);
	mvwaddch(w, 10, 3, ACS_BLOCK);
	mvwaddch(w, 10, 4, ACS_BLOCK);
	mvwaddch(w, 10, 5, ACS_BLOCK);

	// L
	mvwaddch(w, 6, 0 + space, ACS_BLOCK);
	mvwaddch(w, 6, 1 + space, ACS_BLOCK);
	mvwaddch(w, 7, 0 + space, ACS_BLOCK);
	mvwaddch(w, 7, 1 + space, ACS_BLOCK);
	mvwaddch(w, 8, 0 + space, ACS_BLOCK);
	mvwaddch(w, 8, 1 + space, ACS_BLOCK);
	mvwaddch(w, 9, 0 + space, ACS_BLOCK);
	mvwaddch(w, 9, 1 + space, ACS_BLOCK);
	mvwaddch(w, 10, 0 + space, ACS_BLOCK);
	mvwaddch(w, 10, 1 + space, ACS_BLOCK);
	mvwaddch(w, 10, 2 + space, ACS_BLOCK);
	mvwaddch(w, 10, 3 + space, ACS_BLOCK);
	mvwaddch(w, 10, 4 + space, ACS_BLOCK);
	mvwaddch(w, 10, 5 + space, ACS_BLOCK);
	mvwaddch(w, 10, 6 + space, ACS_BLOCK);

	// E
	mvwaddch(w, 6, 0 + space * 2, ACS_BLOCK);
	mvwaddch(w, 6, 1 + space * 2, ACS_BLOCK);
	mvwaddch(w, 6, 2 + space * 2, ACS_BLOCK);
	mvwaddch(w, 6, 3 + space * 2, ACS_BLOCK);
	mvwaddch(w, 6, 4 + space * 2, ACS_BLOCK);
	mvwaddch(w, 6, 5 + space * 2, ACS_BLOCK);
	mvwaddch(w, 6, 6 + space * 2, ACS_BLOCK);
	mvwaddch(w, 7, 0 + space * 2, ACS_BLOCK);
	mvwaddch(w, 7, 1 + space * 2, ACS_BLOCK);
	mvwaddch(w, 8, 0 + space * 2, ACS_BLOCK);
	mvwaddch(w, 8, 1 + space * 2, ACS_BLOCK);
	mvwaddch(w, 8, 2 + space * 2, ACS_BLOCK);
	mvwaddch(w, 8, 3 + space * 2, ACS_BLOCK);
	mvwaddch(w, 8, 4 + space * 2, ACS_BLOCK);
	mvwaddch(w, 8, 5 + space * 2, ACS_BLOCK);
	mvwaddch(w, 9, 0 + space * 2, ACS_BLOCK);
	mvwaddch(w, 9, 1 + space * 2, ACS_BLOCK);
	mvwaddch(w, 10, 0 + space * 2, ACS_BLOCK);
	mvwaddch(w, 10, 1 + space * 2, ACS_BLOCK);
	mvwaddch(w, 10, 2 + space * 2, ACS_BLOCK);
	mvwaddch(w, 10, 3 + space * 2, ACS_BLOCK);
	mvwaddch(w, 10, 4 + space * 2, ACS_BLOCK);
	mvwaddch(w, 10, 5 + space * 2, ACS_BLOCK);
	mvwaddch(w, 10, 6 + space * 2, ACS_BLOCK);


	// A
	mvwaddch(w, 6, 2 + space * 3, ACS_BLOCK);
	mvwaddch(w, 6, 3 + space * 3, ACS_BLOCK);
	mvwaddch(w, 6, 4 + space * 3, ACS_BLOCK);
	mvwaddch(w, 7, 1 + space * 3, ACS_BLOCK);
	mvwaddch(w, 7, 2 + space * 3, ACS_BLOCK);
	mvwaddch(w, 7, 4 + space * 3, ACS_BLOCK);
	mvwaddch(w, 7, 5 + space * 3, ACS_BLOCK);
	mvwaddch(w, 8, 0 + space * 3, ACS_BLOCK);
	mvwaddch(w, 8, 1 + space * 3, ACS_BLOCK);
	mvwaddch(w, 8, 5 + space * 3, ACS_BLOCK);
	mvwaddch(w, 8, 6 + space * 3, ACS_BLOCK);
	mvwaddch(w, 9, 0 + space * 3, ACS_BLOCK);
	mvwaddch(w, 9, 1 + space * 3, ACS_BLOCK);
	mvwaddch(w, 9, 2 + space * 3, ACS_BLOCK);
	mvwaddch(w, 9, 3 + space * 3, ACS_BLOCK);
	mvwaddch(w, 9, 4 + space * 3, ACS_BLOCK);
	mvwaddch(w, 9, 5 + space * 3, ACS_BLOCK);
	mvwaddch(w, 9, 6 + space * 3, ACS_BLOCK);
	mvwaddch(w, 10, 0 + space * 3, ACS_BLOCK);
	mvwaddch(w, 10, 1 + space * 3, ACS_BLOCK);
	mvwaddch(w, 10, 5 + space * 3, ACS_BLOCK);
	mvwaddch(w, 10, 6 + space * 3, ACS_BLOCK);

	// R
	mvwaddch(w, 6, 0 + space * 4, ACS_BLOCK);
	mvwaddch(w, 6, 1 + space * 4, ACS_BLOCK);
	mvwaddch(w, 6, 2 + space * 4, ACS_BLOCK);
	mvwaddch(w, 6, 3 + space * 4, ACS_BLOCK);
	mvwaddch(w, 6, 4 + space * 4, ACS_BLOCK);
	mvwaddch(w, 6, 5 + space * 4, ACS_BLOCK);
	mvwaddch(w, 7, 0 + space * 4, ACS_BLOCK);
	mvwaddch(w, 7, 1 + space * 4, ACS_BLOCK);
	mvwaddch(w, 7, 5 + space * 4, ACS_BLOCK);
	mvwaddch(w, 7, 6 + space * 4, ACS_BLOCK);
	mvwaddch(w, 8, 0 + space * 4, ACS_BLOCK);
	mvwaddch(w, 8, 1 + space * 4, ACS_BLOCK);
	mvwaddch(w, 8, 2 + space * 4, ACS_BLOCK);
	mvwaddch(w, 8, 3 + space * 4, ACS_BLOCK);
	mvwaddch(w, 8, 4 + space * 4, ACS_BLOCK);
	mvwaddch(w, 8, 5 + space * 4, ACS_BLOCK);
	mvwaddch(w, 9, 0 + space * 4, ACS_BLOCK);
	mvwaddch(w, 9, 1 + space * 4, ACS_BLOCK);
	mvwaddch(w, 9, 3 + space * 4, ACS_BLOCK);
	mvwaddch(w, 9, 4 + space * 4, ACS_BLOCK);
	mvwaddch(w, 10, 0 + space * 4, ACS_BLOCK);
	mvwaddch(w, 10, 1 + space * 4, ACS_BLOCK);
	mvwaddch(w, 10, 5 + space * 4, ACS_BLOCK);
	mvwaddch(w, 10, 6 + space * 4, ACS_BLOCK);

}

void print_defeat(WINDOW* w)
{
	int space = 8;

	//g
	mvwaddch(w, 0, 1, ACS_BLOCK);
	mvwaddch(w, 0, 2, ACS_BLOCK);
	mvwaddch(w, 0, 3, ACS_BLOCK);
	mvwaddch(w, 0, 4, ACS_BLOCK);
	mvwaddch(w, 0, 5, ACS_BLOCK);
	mvwaddch(w, 0, 5, ACS_BLOCK);
	mvwaddch(w, 1, 0, ACS_BLOCK);
	mvwaddch(w, 1, 1, ACS_BLOCK);
	mvwaddch(w, 2, 0, ACS_BLOCK);
	mvwaddch(w, 2, 1, ACS_BLOCK);
	mvwaddch(w, 2, 4, ACS_BLOCK);
	mvwaddch(w, 2, 5, ACS_BLOCK);
	mvwaddch(w, 2, 6, ACS_BLOCK);
	mvwaddch(w, 3, 0, ACS_BLOCK);
	mvwaddch(w, 3, 1, ACS_BLOCK);
	mvwaddch(w, 3, 5, ACS_BLOCK);
	mvwaddch(w, 3, 6, ACS_BLOCK);
	mvwaddch(w, 4, 1, ACS_BLOCK);
	mvwaddch(w, 4, 2, ACS_BLOCK);
	mvwaddch(w, 4, 3, ACS_BLOCK);
	mvwaddch(w, 4, 4, ACS_BLOCK);
	mvwaddch(w, 4, 5, ACS_BLOCK);

	//a
	mvwaddch(w, 0, 2 + space, ACS_BLOCK);
	mvwaddch(w, 0, 3 + space, ACS_BLOCK);
	mvwaddch(w, 0, 4 + space, ACS_BLOCK);
	mvwaddch(w, 1, 1 + space, ACS_BLOCK);
	mvwaddch(w, 1, 2 + space, ACS_BLOCK);
	mvwaddch(w, 1, 4 + space, ACS_BLOCK);
	mvwaddch(w, 1, 5 + space, ACS_BLOCK);
	mvwaddch(w, 2, 0 + space, ACS_BLOCK);
	mvwaddch(w, 2, 1 + space, ACS_BLOCK);
	mvwaddch(w, 2, 5 + space, ACS_BLOCK);
	mvwaddch(w, 2, 6 + space, ACS_BLOCK);
	mvwaddch(w, 3, 0 + space, ACS_BLOCK);
	mvwaddch(w, 3, 1 + space, ACS_BLOCK);
	mvwaddch(w, 3, 2 + space, ACS_BLOCK);
	mvwaddch(w, 3, 3 + space, ACS_BLOCK);
	mvwaddch(w, 3, 4 + space, ACS_BLOCK);
	mvwaddch(w, 3, 5 + space, ACS_BLOCK);
	mvwaddch(w, 3, 6 + space, ACS_BLOCK);
	mvwaddch(w, 4, 0 + space, ACS_BLOCK);
	mvwaddch(w, 4, 1 + space, ACS_BLOCK);
	mvwaddch(w, 4, 5 + space, ACS_BLOCK);
	mvwaddch(w, 4, 6 + space, ACS_BLOCK);


	//m
	mvwaddch(w, 0, 0 + space * 2, ACS_BLOCK);
	mvwaddch(w, 0, 1 + space * 2, ACS_BLOCK);
	mvwaddch(w, 0, 5 + space * 2, ACS_BLOCK);
	mvwaddch(w, 0, 6 + space * 2, ACS_BLOCK);
	mvwaddch(w, 1, 0 + space * 2, ACS_BLOCK);
	mvwaddch(w, 1, 1 + space * 2, ACS_BLOCK);
	mvwaddch(w, 1, 2 + space * 2, ACS_BLOCK);
	mvwaddch(w, 1, 4 + space * 2, ACS_BLOCK);
	mvwaddch(w, 1, 5 + space * 2, ACS_BLOCK);
	mvwaddch(w, 1, 6 + space * 2, ACS_BLOCK);
	mvwaddch(w, 2, 0 + space * 2, ACS_BLOCK);
	mvwaddch(w, 2, 1 + space * 2, ACS_BLOCK);
	mvwaddch(w, 2, 3 + space * 2, ACS_BLOCK);
	mvwaddch(w, 2, 5 + space * 2, ACS_BLOCK);
	mvwaddch(w, 2, 6 + space * 2, ACS_BLOCK);
	mvwaddch(w, 3, 0 + space * 2, ACS_BLOCK);
	mvwaddch(w, 3, 1 + space * 2, ACS_BLOCK);
	mvwaddch(w, 3, 5 + space * 2, ACS_BLOCK);
	mvwaddch(w, 3, 6 + space * 2, ACS_BLOCK);
	mvwaddch(w, 4, 0 + space * 2, ACS_BLOCK);
	mvwaddch(w, 4, 1 + space * 2, ACS_BLOCK);
	mvwaddch(w, 4, 5 + space * 2, ACS_BLOCK);
	mvwaddch(w, 4, 6 + space * 2, ACS_BLOCK);

	//e
	mvwaddch(w, 0, 0 + space * 3, ACS_BLOCK);
	mvwaddch(w, 0, 1 + space * 3, ACS_BLOCK);
	mvwaddch(w, 0, 2 + space * 3, ACS_BLOCK);
	mvwaddch(w, 0, 3 + space * 3, ACS_BLOCK);
	mvwaddch(w, 0, 4 + space * 3, ACS_BLOCK);
	mvwaddch(w, 0, 5 + space * 3, ACS_BLOCK);
	mvwaddch(w, 0, 6 + space * 3, ACS_BLOCK);
	mvwaddch(w, 1, 0 + space * 3, ACS_BLOCK);
	mvwaddch(w, 1, 1 + space * 3, ACS_BLOCK);
	mvwaddch(w, 2, 0 + space * 3, ACS_BLOCK);
	mvwaddch(w, 2, 1 + space * 3, ACS_BLOCK);
	mvwaddch(w, 2, 2 + space * 3, ACS_BLOCK);
	mvwaddch(w, 2, 3 + space * 3, ACS_BLOCK);
	mvwaddch(w, 2, 4 + space * 3, ACS_BLOCK);
	mvwaddch(w, 2, 5 + space * 3, ACS_BLOCK);
	mvwaddch(w, 3, 0 + space * 3, ACS_BLOCK);
	mvwaddch(w, 3, 1 + space * 3, ACS_BLOCK);
	mvwaddch(w, 4, 0 + space * 3, ACS_BLOCK);
	mvwaddch(w, 4, 1 + space * 3, ACS_BLOCK);
	mvwaddch(w, 4, 2 + space * 3, ACS_BLOCK);
	mvwaddch(w, 4, 3 + space * 3, ACS_BLOCK);
	mvwaddch(w, 4, 4 + space * 3, ACS_BLOCK);
	mvwaddch(w, 4, 5 + space * 3, ACS_BLOCK);
	mvwaddch(w, 4, 6 + space * 3, ACS_BLOCK);

	// O
	mvwaddch(w, 6, 1, ACS_BLOCK);
	mvwaddch(w, 6, 2, ACS_BLOCK);
	mvwaddch(w, 6, 3, ACS_BLOCK);
	mvwaddch(w, 6, 4, ACS_BLOCK);
	mvwaddch(w, 6, 5, ACS_BLOCK);
	mvwaddch(w, 7, 0, ACS_BLOCK);
	mvwaddch(w, 7, 1, ACS_BLOCK);
	mvwaddch(w, 7, 5, ACS_BLOCK);
	mvwaddch(w, 7, 6, ACS_BLOCK);
	mvwaddch(w, 8, 0, ACS_BLOCK);
	mvwaddch(w, 8, 1, ACS_BLOCK);
	mvwaddch(w, 8, 5, ACS_BLOCK);
	mvwaddch(w, 8, 6, ACS_BLOCK);
	mvwaddch(w, 9, 0, ACS_BLOCK);
	mvwaddch(w, 9, 1, ACS_BLOCK);
	mvwaddch(w, 9, 5, ACS_BLOCK);
	mvwaddch(w, 9, 6, ACS_BLOCK);
	mvwaddch(w, 10, 1, ACS_BLOCK);
	mvwaddch(w, 10, 2, ACS_BLOCK);
	mvwaddch(w, 10, 3, ACS_BLOCK);
	mvwaddch(w, 10, 4, ACS_BLOCK);
	mvwaddch(w, 10, 5, ACS_BLOCK);

	// V
	mvwaddch(w, 6, 0 + space, ACS_BLOCK);
	mvwaddch(w, 6, 1 + space, ACS_BLOCK);
	mvwaddch(w, 6, 5 + space, ACS_BLOCK);
	mvwaddch(w, 6, 6 + space, ACS_BLOCK);
	mvwaddch(w, 7, 0 + space, ACS_BLOCK);
	mvwaddch(w, 7, 1 + space, ACS_BLOCK);
	mvwaddch(w, 7, 5 + space, ACS_BLOCK);
	mvwaddch(w, 7, 6 + space, ACS_BLOCK);
	mvwaddch(w, 8, 0 + space, ACS_BLOCK);
	mvwaddch(w, 8, 1 + space, ACS_BLOCK);
	mvwaddch(w, 8, 5 + space, ACS_BLOCK);
	mvwaddch(w, 8, 6 + space, ACS_BLOCK);
	mvwaddch(w, 9, 1 + space, ACS_BLOCK);
	mvwaddch(w, 9, 2 + space, ACS_BLOCK);
	mvwaddch(w, 9, 4 + space, ACS_BLOCK);
	mvwaddch(w, 9, 5 + space, ACS_BLOCK);
	mvwaddch(w, 10, 3 + space, ACS_BLOCK);

	// E
	mvwaddch(w, 6, 0 + space * 2, ACS_BLOCK);
	mvwaddch(w, 6, 1 + space * 2, ACS_BLOCK);
	mvwaddch(w, 6, 2 + space * 2, ACS_BLOCK);
	mvwaddch(w, 6, 3 + space * 2, ACS_BLOCK);
	mvwaddch(w, 6, 4 + space * 2, ACS_BLOCK);
	mvwaddch(w, 6, 5 + space * 2, ACS_BLOCK);
	mvwaddch(w, 6, 6 + space * 2, ACS_BLOCK);
	mvwaddch(w, 7, 0 + space * 2, ACS_BLOCK);
	mvwaddch(w, 7, 1 + space * 2, ACS_BLOCK);
	mvwaddch(w, 8, 0 + space * 2, ACS_BLOCK);
	mvwaddch(w, 8, 1 + space * 2, ACS_BLOCK);
	mvwaddch(w, 8, 2 + space * 2, ACS_BLOCK);
	mvwaddch(w, 8, 3 + space * 2, ACS_BLOCK);
	mvwaddch(w, 8, 4 + space * 2, ACS_BLOCK);
	mvwaddch(w, 8, 5 + space * 2, ACS_BLOCK);
	mvwaddch(w, 9, 0 + space * 2, ACS_BLOCK);
	mvwaddch(w, 9, 1 + space * 2, ACS_BLOCK);
	mvwaddch(w, 10, 0 + space * 2, ACS_BLOCK);
	mvwaddch(w, 10, 1 + space * 2, ACS_BLOCK);
	mvwaddch(w, 10, 2 + space * 2, ACS_BLOCK);
	mvwaddch(w, 10, 3 + space * 2, ACS_BLOCK);
	mvwaddch(w, 10, 4 + space * 2, ACS_BLOCK);
	mvwaddch(w, 10, 5 + space * 2, ACS_BLOCK);
	mvwaddch(w, 10, 6 + space * 2, ACS_BLOCK);

	// R
	mvwaddch(w, 6, 0 + space * 3, ACS_BLOCK);
	mvwaddch(w, 6, 1 + space * 3, ACS_BLOCK);
	mvwaddch(w, 6, 2 + space * 3, ACS_BLOCK);
	mvwaddch(w, 6, 3 + space * 3, ACS_BLOCK);
	mvwaddch(w, 6, 4 + space * 3, ACS_BLOCK);
	mvwaddch(w, 6, 5 + space * 3, ACS_BLOCK);
	mvwaddch(w, 7, 0 + space * 3, ACS_BLOCK);
	mvwaddch(w, 7, 1 + space * 3, ACS_BLOCK);
	mvwaddch(w, 7, 5 + space * 3, ACS_BLOCK);
	mvwaddch(w, 7, 6 + space * 3, ACS_BLOCK);
	mvwaddch(w, 8, 0 + space * 3, ACS_BLOCK);
	mvwaddch(w, 8, 1 + space * 3, ACS_BLOCK);
	mvwaddch(w, 8, 2 + space * 3, ACS_BLOCK);
	mvwaddch(w, 8, 3 + space * 3, ACS_BLOCK);
	mvwaddch(w, 8, 4 + space * 3, ACS_BLOCK);
	mvwaddch(w, 8, 5 + space * 3, ACS_BLOCK);
	mvwaddch(w, 9, 0 + space * 3, ACS_BLOCK);
	mvwaddch(w, 9, 1 + space * 3, ACS_BLOCK);
	mvwaddch(w, 9, 3 + space * 3, ACS_BLOCK);
	mvwaddch(w, 9, 4 + space * 3, ACS_BLOCK);
	mvwaddch(w, 10, 0 + space * 3, ACS_BLOCK);
	mvwaddch(w, 10, 1 + space * 3, ACS_BLOCK);
	mvwaddch(w, 10, 5 + space * 3, ACS_BLOCK);
	mvwaddch(w, 10, 6 + space * 3, ACS_BLOCK);

	// final: (10, 30)
}

};

// Test Function
/*
int main() {

	initscr();
	start_color();
	init_pair(1, COLOR_BLUE, COLOR_BLUE);
	init_pair(2, COLOR_WHITE, COLOR_WHITE);

	init_pair(3, COLOR_YELLOW, COLOR_BLACK);
	init_pair(4, COLOR_BLACK, COLOR_WHITE);





	MAP snakeMap;
	snakeMap.draw_map();
	snakeMap.draw_title();


	refresh();
	getch();
	endwin();

	return 0;
}
*/
