// Zadanie6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Zadanie 6: Stwórz listê liczb od 1 do 1000. Rozdziel te liczby na dwie osobne listy : liczby pierwsze i nie liczby pierwsze.


#include <iostream>
#include <list>
#include <algorithm>


int main()
{

std::list<int> numbers;
for (int i = 1; i < 1001; i++)
    numbers.push_back(i);


std::cout << "Liczby od 1 do 1000: " << std::endl;
for (auto it = numbers.begin(); it != numbers.end(); ++it)
{
    std::cout << *it << "; ";
}
std::cout << std::endl << std::endl;

//tworzê listê liczb pierwszych
std::list <int> firstNumbers;

std::copy_if(numbers.begin(), numbers.end(), std::back_inserter(firstNumbers),
    [](int x)
    { 
    if (x < 2)
    return false;
    for (int i = 2; i * i <= x; ++i)
    if (x % i == 0)
    return false;
    return true; 
    });

std::cout<<std::endl << "Liczby pierwsze: " << std::endl;
for (auto it =firstNumbers.begin(); it != firstNumbers.end(); ++it)
{
    std::cout << *it << "; ";
}
std::cout << std::endl << std::endl;

//tworzê listê nie liczb pierwszych
auto removeFirstNumbers = [firstNumbers](int i) { return firstNumbers.end() != std::find(firstNumbers.begin(), firstNumbers.end(), i); };
numbers.erase(std::remove_if(numbers.begin(), numbers.end(), removeFirstNumbers), numbers.end());
std::list<int> notFirstNumbers = numbers;

//druga wersja - zaprzeczenie lambdy z listy liczb pierwszych (chyba prostsza wersja)
//std::copy_if(numbers.begin(), numbers.end(), std::back_inserter(notFirstNumbers),
//    [](int x)
//
//  {   if (x < 2)
//      return true;
//      for (int i = 2; i * i <= x; ++i)
//      if (x % i == 0)
//      return true;
//      return false; });

std::cout << std::endl << "Liczby nie pierwsze to: " << std::endl;

for (auto it = notFirstNumbers.begin(); it != notFirstNumbers.end(); ++it)
{
    std::cout << *it << "; ";
}






}


