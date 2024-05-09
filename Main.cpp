#include <curses.h>
#include "map.cpp"
#include "Snake.cpp"
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
	map.draw_title();
	Snake snake(3, RIGHT, MAP_SIZE / 2, MAP_SIZE / 2, 3, 10);
	while (true) {

		// Snake Visualization
		for (int index = 0; ; ++index) {
			if (snake.getPositionOf(index)[0] == -1 ||
				snake.getPositionOf(index)[1] == -1)
				break;

			printBlockAt(START_X + snake.getPositionOf(index)[0],
				START_Y + snake.getPositionOf(index)[1],
				5);
		}
		refresh();

		// Snake Update
		int keyboardInput = getch();
		switch (keyboardInput) {
		case KEY_UP:    snake.setDirectionTo(UP);    break;
		case KEY_DOWN:  snake.setDirectionTo(DOWN);  break;
		case KEY_RIGHT: snake.setDirectionTo(RIGHT); break;
		case KEY_LEFT:  snake.setDirectionTo(LEFT);  break;
		}
		snake.move();



	/*
	bool victory = false;

	// Curses Initialization
	initscr();

	start_color();
	init_pair(1, COLOR_BLUE, COLOR_BLUE);
	init_pair(2, COLOR_WHITE, COLOR_WHITE);
	init_pair(3, COLOR_YELLOW, COLOR_BLACK);
	init_pair(4, COLOR_BLACK, COLOR_WHITE);
	init_pair(5, COLOR_YELLOW, COLOR_YELLOW);

	// Map Initialization
	MAP map;
	map.draw_map();
	map.draw_title();

	// Snake Initialization
	Snake snake(3, RIGHT, MAP_SIZE / 2, MAP_SIZE / 2, 3, 10);

	// Item Initialization
	GrothItem growthItem;
	PoisonItem poisonItem;
	
	// Game Process
	while (true) {

		// Snake Visualization
		for (int index = 0; ; ++index) {
			if (snake.getPositionOf(index)[0] == -1 ||
				snake.getPositionOf(index)[1] == -1)
				break;

			printBlockAt(START_X + snake.getPositionOf(index)[0],
				START_Y + snake.getPositionOf(index)[1],
				5);
		}

		// Item Visualization
		printBlockAt(START_X + growthItem.x,
			START_Y + growthItem.y,
			1);

		printBlockAt(START_X + poisonItem.x,
			START_Y + poisonItem.y,
			2);

		refresh();

		// Snake Update
		int keyboardInput = getch();
		switch (keyboardInput) {
		case KEY_UP:    snake.setDirectionTo(UP);    break;
		case KEY_DOWN:  snake.setDirectionTo(DOWN);  break;
		case KEY_RIGHT: snake.setDirectionTo(RIGHT); break;
		case KEY_LEFT:  snake.setDirectionTo(LEFT);  break;
		}
		snake.move();

		// collide against walls
		if (snake.getPositionOf()[0] == 0 ||
			snake.getPositionOf()[0] == MAP_SIZE - 1 ||
			snake.getPositionOf()[1] == 0 ||
			snake.getPositionOf()[1] == MAP_SIZE - 1) {
			// Game Over
		}

		// collide against its own body
		for (int index = 1; ; ++index) {
			if (snake.getPositionOf(index)[0] == -1 ||
				snake.getPositionOf(index)[1] == -1)
				break;

			if (snake.getPositionOf() == snake.getPositionOf(index)) {
				// Game Over
			}
		}

		// get growth item
		if (snake.getPositionOf()[0] == growthItem.x &&
			snake.getPositionOf()[1] == growthItem.y) {
			snake.increaseLength();
			growthItem.onCollision();
			growthItem.respawn();
		}




	}

	if (victory) {

	}
	*/


	endwin();
	return 0;
}
