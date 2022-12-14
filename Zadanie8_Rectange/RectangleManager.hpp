#pragma once
#include <vector>
#include "RectangleGenerator.hpp"
#include "RectangleManager.hpp"
#include "Rectangle.hpp"

//Utw?rz wektor 100 prostok?t?w o losowych d?ugo?ciach bok?w z przedzia?u 0, 10 (u?yj liczb ca?kowitych)
//a) void printRectangles() - Wypisz wszystkie prostok?ty(for_each + unary function)
//b) size_t countRectangleBiggerThen(int area) - Wypisz ile jest prostok?t?w o polu wi?kszym ni? 50 (count_if)
//c) std::vector copyRectangles() - Przekopiuj wszystkie prostk?ty, kt?re s? kwadratami do drugiego vectora(copy_if) i go wypisz(for_each)
//d) void sortAreaDescending() - Posortuj vector prostok?t?w malejaco wed?ug pola powierzchni
//e) void deleteInvalid() Usu? wszystkie prostok?ty, kt?re maj? przynajmniej jeden bok r?wny 0

class RectangleManager
{
public:
    RectangleManager(int howMany);
	void printRectangles();
	size_t countRectangleBiggerThen(int area);
	std::vector<Rectangle> getRectangles();
	std::vector<Rectangle> copyRectangles();
	bool printEachRectangles(Rectangle rect);

private:
    std::vector<Rectangle> rectVect;


};

  