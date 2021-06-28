#include "apple.h"
apple::apple() {
	std::default_random_engine re;
	std::uniform_int_distribution<int>distribX{ 1, height - 1 };
	std::uniform_int_distribution<int>distribY{ 1, width - 1 };
	this->coordX = distribX(re);
	this->coordY = distribY(re);	
}
void apple::createApple() {
	std::default_random_engine re;
	std::uniform_int_distribution<int>distribX{ 1, height - 1 };
	std::uniform_int_distribution<int>distribY{ 1, width - 1 };
	this->coordX = distribX(re);
	this->coordY = distribY(re);
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