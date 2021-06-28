#pragma once
#include <array>
#include <iostream>

//Own dependencies
#include "apple.h"
#include "snake.h"

#define ²(x) x*x

class map
{
private:
	std::array<std::array<char, width>, height>gameBoard; //Initialisation of a 2D ARRAY, i = line; j = column
	apple A;
	snake S;
public:
	map();
	//Console Fonction
	void print();
};

