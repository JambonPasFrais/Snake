#include "apple.h"
apple::apple() {
	srand(time(NULL));
	this->coordX = rand() % height + 1;
	this->coordY = rand() % width + 1;
	this->print();
}
void apple::createApple() {
	srand(time(NULL));
	this->coordX = rand() % height + 1;
	this->coordY = rand() % width + 1;
}
void apple::print() {
	std::cout << "X: " << this->coordX << " Y: " << this->coordY << std::endl;
}
int apple::getCoordX() {
	return this->coordX;
}
int apple::getCoordY() {
	return this->coordY;
}