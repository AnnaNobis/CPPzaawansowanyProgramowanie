#include "Rectangle.hpp"

double Rectangle::area(double a, double b)
{
	return a * b;
}

bool Rectangle::isSquare()
{
	if (a == b)
		return true;
	else
		false;
}
