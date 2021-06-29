// ConsoleGame.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

/*#include <iostream>
#include "map.h"

int main()
{
	map A;
	A.print();
}*/

#include <iostream>
#include <conio.h>

#include "game.h"

using namespace std;

bool gameover;

int x, y, score;

int tailX[100], tailY[100]; //snake coordinates

int nTail;

enum eDirecton { STOP = 0, LEFT, RIGHT, UP, DOWN }; // Controls

eDirecton dir;

//Class
apple A;

void Setup() {
	gameover = false;

	dir = STOP;

	x = width / 2;

	y = height / 2;
	
	score = 0;
}

void Draw() {
	system("cls");

	for (int i = 0; i < width + 2; i++)

		cout << "#";

	cout << endl;

	for (int i = 0; i < height; i++) {

		for (int j = 0; j < width; j++) {

			if (j == 0)

				cout << "#"; //walls

			if (i == y && j == x)

				cout << "*"; // snake tale

			else if (i == A.getCoordX() && j == A.getCoordY())

				cout << "A"; // change it to change the fruit

			else {

				bool print = false;

				for (int k = 0; k < nTail; k++) {

					if (tailX[k] == j && tailY[k] == i) {

						cout << "*"; print = true;

					}

				}

				if (!print) cout << " ";

			}

			if (j == width - 1)

				cout << "#";

		}

		cout << endl;

	}

	for (int i = 0; i < width + 2; i++)

		cout << "#";

	cout << endl;

	cout << "Score:" << score << endl;
	cout << "Coord : " << x << ' ' << y << endl;

}

void Input()
{

	if (_kbhit()) {

		switch (_getch()) {

		case 'q':

			dir = LEFT;

			break;

		case 'd':

			dir = RIGHT;

			break;

		case 'z':

			dir = UP;

			break;

		case 's':

			dir = DOWN;

			break;

		case 'x':

			gameover = true;

			break;

		}

	}

}

void algorithm()
{

	int prevX = tailX[0];

	int prevY = tailY[0];

	int prev2X, prev2Y;

	tailX[0] = x;

	tailY[0] = y;

	for (int i = 1; i < nTail; i++) {

		prev2X = tailX[i];

		prev2Y = tailY[i];

		tailX[i] = prevX;

		tailY[i] = prevY;

		prevX = prev2X;

		prevY = prev2Y;

	}

	switch (dir) {

	case LEFT:

		x--;

		break;

	case RIGHT:

		x++;

		break;

	case UP:

		y--;

		break;

	case DOWN:

		y++;

		break;

	default:

		break;

	}

	if (x >= width) x = 0; else if (x < 0) x = width - 1;

	if (y >= height) y = 0; else if (y < 0) y = height - 1;

	for (int i = 0; i < nTail; i++)

		if (tailX[i] == x && tailY[i] == y)
			gameover = true;

	if (x == A.getCoordY() && y == A.getCoordX()) {

		score += 10;

		A.createApple();

		nTail++;

	}

}

int main()
{
	srand(time(NULL));

	Setup();

	system("pause");

	while (!gameover) {

		Draw();

		Input();

		algorithm();

	}

	return 0;

}
