#include <curses.h>
#include "map.cpp"
#include "Snake2.cpp"
#include "Item.cpp"

void printBlockAt(int x, int y, int colorPair) {
	move(x, y);
	attron(COLOR_PAIR(colorPair));
	addch(ACS_BLOCK);
	addch(ACS_BLOCK);
	attron(COLOR_PAIR(colorPair));
}

int main() {
	initscr();

	start_color();
	init_pair(1, COLOR_BLUE, COLOR_BLUE);
	init_pair(2, COLOR_WHITE, COLOR_WHITE);
	init_pair(3, COLOR_YELLOW, COLOR_BLACK);
	init_pair(4, COLOR_BLACK, COLOR_WHITE);
	init_pair(5, COLOR_YELLOW, COLOR_YELLOW);
	MAP map;
	map.draw_map();
	Snake snake(3, RIGHT, MAP_SIZE / 2, MAP_SIZE / 2);
	keypad(stdscr, true);
	noecho();
	while (true) {
		map.draw_map();

		// Snake Visualization
		for (int index = 0; ; ++index) {
			if (snake.getPositionOf(index)[0] == -1 ||
				snake.getPositionOf(index)[1] == -1)
				break;

			printBlockAt(START_X + snake.getPositionOf(index)[0],
				START_Y + snake.getPositionOf(index)[1] * 2,
				5);
		}
		refresh();

		// Snake Update
		int keyboardInput = getch();
		switch (keyboardInput) {
		case KEY_UP:    snake.setDirectionTo(LEFT);  break;
		case KEY_DOWN:  snake.setDirectionTo(RIGHT); break;
		case KEY_RIGHT: snake.setDirectionTo(UP);    break;
		case KEY_LEFT:  snake.setDirectionTo(DOWN);  break;
		}
		snake.move();
	}

	endwin();
	return 0;
}
