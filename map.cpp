#include <curses.h>
#include <iostream>
#include "Constants.h"

using namespace std;

class Map {
public:
	int map[MAP_SIZE][MAP_SIZE];

	Map() {}

	// 추후 수정 필요: 개발 환경에 따라서 깨지는 경우 발생
	void draw_title() {

		int space = 20, space2 = 5;
		attron(COLOR_PAIR(3));

		// S
		mvprintw(1, 0 + space, " ■■■");
		mvprintw(2, 0 + space, "■    ");
		mvprintw(3, 0 + space, " ■■ ");
		mvprintw(4, 0 + space, "     ■");
		mvprintw(5, 0 + space, "■■■ ");

		// N
		mvprintw(1, 8 + space, "■    ■");
		mvprintw(2, 8 + space, "■■  ■");
		mvprintw(3, 8 + space, "■ ■ ■");
		mvprintw(4, 8 + space, "■  ■■");
		mvprintw(5, 8 + space, "■    ■");

		// A
		mvprintw(1, 17 + space, "   ■  ");
		mvprintw(2, 17 + space, " ■ ■ ");
		mvprintw(3, 17 + space, "■   ■");
		mvprintw(4, 17 + space, "■   ■");
		mvprintw(5, 17 + space, "■   ■");

		// K
		mvprintw(1, 25 + space, "■   ■");
		mvprintw(2, 25 + space, "■ ■  ");
		mvprintw(3, 25 + space, "■■   ");
		mvprintw(4, 25 + space, "■  ■ ");
		mvprintw(5, 25 + space, "■   ■");

		// E
		mvprintw(1, 33 + space, "■■■");
		mvprintw(2, 33 + space, "■    ");
		mvprintw(3, 33 + space, "■■■");
		mvprintw(4, 33 + space, "■    ");
		mvprintw(5, 33 + space, "■■■");

		attroff(COLOR_PAIR(3));

		attroff(COLOR_PAIR(4));

		// G
		mvprintw(1, 40 + space + space2, " ■■■");
		mvprintw(2, 40 + space + space2, "■    ");
		mvprintw(3, 40 + space + space2, "■  ■■");
		mvprintw(4, 40 + space + space2, "■    ■");
		mvprintw(5, 40 + space + space2, " ■■■");

		// A
		mvprintw(1, 49 + space + space2, "   ■  ");
		mvprintw(2, 49 + space + space2, " ■ ■ ");
		mvprintw(3, 49 + space + space2, "■   ■");
		mvprintw(4, 49 + space + space2, "■   ■");
		mvprintw(5, 49 + space + space2, "■   ■");

		// M
		mvprintw(1, 57 + space + space2, "■    ■");
		mvprintw(2, 57 + space + space2, "■■■■");
		mvprintw(3, 57 + space + space2, "■ ■ ■");
		mvprintw(4, 57 + space + space2, "■    ■");
		mvprintw(5, 57 + space + space2, "■    ■");

		// E
		mvprintw(1, 66 + space + space2, "■■■");
		mvprintw(2, 66 + space + space2, "■    ");
		mvprintw(3, 66 + space + space2, "■■■");
		mvprintw(4, 66 + space + space2, "■    ");
		mvprintw(5, 66 + space + space2, "■■■");

		attroff(COLOR_PAIR(4));
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
