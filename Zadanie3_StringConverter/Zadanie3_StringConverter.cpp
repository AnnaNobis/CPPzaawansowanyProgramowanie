// Zadanie3_StringConverter.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "StringConverter.hpp"

int main()
{
    StringConverter conv;
    std::cout << conv.toCamelCase2("hello_S_D_A");
    std::cout << std::endl << std::endl;
    std::cout << conv.toSnakeCase("helloSDA");
    std::cout << std::endl << std::endl;
    std::cout << conv.toSnakeCase("isThisFirstEntry");
}

