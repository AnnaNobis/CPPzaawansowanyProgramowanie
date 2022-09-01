// Zadanie5_StringCensor.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "StringCensor.hpp"

int main()
{
    StringCensor censor;
    
    censor.addCensoredLetter('a');
    censor.addCensoredLetter('d');
    censor.addCensoredLetter('c');
    std::cout << censor.getAllCensoredLetters() << std::endl;
    censor.censor("abba");
}

