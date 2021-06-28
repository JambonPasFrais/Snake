#include "map.h"
map::map() {
	//Create borders
	for (int i = 0; i < height; i++) {
		for (int j = 0; j < width; j++) {
			this->gameBoard[i][j] = ' ';
			if (!(i > 0 && i < height - 1 && j > 0 && j < width - 1)) {
				this->gameBoard[i][j] = '#';
			}
		}
	}
	//Show apple
	this->gameBoard[this->A.getCoordX()][this->A.getCoordY()] = 'A';
	//Show snake
	this->gameBoard[this->S.getCoordX()][this->S.getCoordY()] = 'S';
}
void map::print() {
	for (int i = 0; i < height; i++) {
		for (int j = 0; j < width; j++) {
			std::cout << this->gameBoard[i][j];
		}
		std::cout << std::endl;
	}
}