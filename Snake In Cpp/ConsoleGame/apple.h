#pragma once
#include <random>
#include <iostream>

#define width 40//Y
#define height 20//X

class apple
{
private:
	int coordX;
	int coordY;
public:
	apple();
	void createApple();
	void print();
	//Getters
	int getCoordX();
	int getCoordY();
};

