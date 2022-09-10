#include "RectangleManager.hpp"

RectangleManager::RectangleManager(int howMany)
{

    RectangleGenerator rectGen(0, 10);

    for (unsigned int i = 0; i <= howMany; ++i)
    {
       rectVect.push_back(rectGen.generateRect()); 
    }
}

void RectangleManager::printRectangles()
{
    std::for_each(rectVect.begin(), rectVect.end(), printEachRectangles);
}

size_t RectangleManager::countRectangleBiggerThen(int area)
{
    size_t n = std::count_if(rectVect.begin(), rectVect.end(), [&](Rectangle rect) {return (rect.getField() > area); });
    return n;
}

std::vector<Rectangle> RectangleManager::getRectangles()
{
    return rectVect;
}

std::vector<Rectangle> RectangleManager::copyRectangles()
{
    std::vector<Rectangle> newRectVect;
    std::copy_if(rectVect.begin(), rectVect.end(),
        std::back_inserter(newRectVect),
        [](Rectangle rect) { return (rect.getSideA() == rect.getSideB()); });

    std::for_each(newRectVect.begin(), newRectVect.end(), printEachRectangle);

    return newRectVect;
}

bool RectangleManager::printEachRectangles(Rectangle rect)
{
    std::cout << "bok a = " << rect.getSideA() << ", bok b = " << rect.getSideB() << ", pole = " << rect.getField() << std::endl;
    return true;
}


