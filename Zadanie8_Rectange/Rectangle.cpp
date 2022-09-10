#include "Rectangle.hpp"

Rectangle::Rectangle(double a, double b)
	: _a(a)
	, _b(b)
{
}

double Rectangle::area(double a, double b)
{
	return a * b;
}

bool Rectangle::isSquare()
{
	if (_a == _b)
		return true;
	else
		return false;
}

double Rectangle::getSideA()
{
	return _a;
}

double Rectangle::getSideB()
{
	return _b;
}

double Rectangle::getArea()
{
	return area();
}
