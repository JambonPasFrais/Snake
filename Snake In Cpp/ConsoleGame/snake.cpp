#include "snake.h"

snake::snake() {
	for (int i = 0; i < 5; i++) {
		this->body.push_back('#');
	}
	this->coordX = 10;
	this->coordY = 10;
	this->orientation = 'E';
}

int snake::getCoordX() {
	return this->coordX;
}
int snake::getCoordY() {
	return this->coordY;
}