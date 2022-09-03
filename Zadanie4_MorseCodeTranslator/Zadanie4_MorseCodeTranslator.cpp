// Zadanie4_MorseCodeTranslator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <map>
#include <string>

std::string decypher(std::string morse)
{
    std::map<std::string, char> dictionary{ {".-", 'a'}, {"-...", 'b'}, {" - . - .", 'c'}};
    
    std::string result;
    std::string tmp;

    while (morse.find(' ') != std::string::npos) //npos = -1 oznacza ¿e nie znalaz³ stringa
    {
        tmp = morse.substr(0, morse.find(' '));
        result += dictionary.at(tmp);
        morse.erase(0, morse.find(' ') + 1);

    }
    result += dictionary.at(morse);

    return result;
}

int main()
{
    std::cout << "Hello World!\n";
}

