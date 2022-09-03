#include "RectangleGenerator.hpp"



std::default_random_engine RectangleGenerator::engine()
{
	return std::default_random_engine (device());
}

std::uniform_int_distribution<int> RectangleGenerator::dist()
{
	return std::uniform_int_distribution<int>(engine);
}

RectangleGenerator::RectangleGenerator(int min, int max)
{
	std::random_device device;
std::default_random_engine engine(device());
std::uniform_int_distribution<int> dist(min, max);


}

Rectangle RectangleGenerator::generateRect()
{
	int a = dist(engine);
	int b = dist(engine);
	return Rectangle rect(a,b);
}






