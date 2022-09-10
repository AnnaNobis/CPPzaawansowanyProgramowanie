#include "RectangleGenerator.hpp"



RectangleGenerator::RectangleGenerator(int min, int max)
	:device()
	, engine(device())
	, dist(min, max)
{
}

Rectangle RectangleGenerator::generateRect()
{
	int a = dist(engine);
	int b = dist(engine);
	Rectangle rect(a,b);
	return rect;
}






