#include <conio.h>
#include <stdlib.h>
#include <stdio.h>

#include "Game.h"

class Game;

int main() {

	printf("<Walking Dead> \n");
	printf("Press the 'S'.\n");

	int inputInt;
	char inputChar;

	while (true) {
		inputChar = getch();
		inputInt = atoi(&inputChar);

		if ('q' == inputChar || 'Q' == inputChar) {
			printf("\n\nGame Over \n\n");
			break;
		}
		else if ('s' == inputChar || 'S' == inputChar) {
			Game::GetInstance()->StartGame();
		}
		else {
			printf("You pressed '%c'. Press the 'S'. \n", inputChar);
		}
	}

	return 0;

}