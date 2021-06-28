#pragma once
#include <vector>
class snake
{
private:
	int coordX;
	int coordY;
	std::vector<char>body;
	char orientation;//S N E W
public:
	snake();

	//Getters
	int getCoordX();
	int getCoordY();
};

