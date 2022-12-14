#pragma once
#include "Rectangle.hpp"
#include <iostream>
#include <random>


//Klasa RectangleGenerator(Klasa genreująca losowy prostokąt o boku z podanego przedziału)

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

