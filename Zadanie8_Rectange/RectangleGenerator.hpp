#pragma once
#include "Rectangle.hpp"
#include <iostream>
#include <random>


//Klasa RectangleGenerator(Klasa genreuj¹ca losowy prostok¹t o boku z podanego przedzia³u)

class RectangleGenerator
{
private:

	std::random_device device;
	std::default_random_engine engine;
	std::uniform_int_distribution<int> dist;

public:
	RectangleGenerator(int min, int max);

	Rectangle generateRect();

};

