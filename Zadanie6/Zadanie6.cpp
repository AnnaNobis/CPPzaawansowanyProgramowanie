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


for (auto it = numbers.begin(); it != numbers.end(); ++it)
{
    std::cout << *it << "; ";
}

std::list <int> firstNumbers;
for (int i = 1; i < 1001; i++)
    firstNumbers.push_back(i);

std::copy_if(numbers.begin(), numbers.end(), std::back_inserter(firstNumbers),
    [](int x)

    {  if (x < 2)
    return false;
for (int i = 2; i * i <= x; ++i)
if (x % i == 0)
return false;
return true; });

        
for (auto it =firstNumbers.begin(); it != firstNumbers.end(); ++it)
{
    std::cout << *it << "; ";
}


std::list<int> notFirstNumbers;
auto notFirstNumbers = numbers.erase(std::remove_if(numbers.begin(), numbers.end(), [](int x)
    {
        return std::find(firstNumbers.begin(), firstNumbers.end(), x); }));

//notFirstNumbers = (numbers.remove_if([](int x) { return n > 10; });
//std::cout << count2 << " elements greater than 10 were removed\n";

//str2.erase(std::remove_if(str2.begin(),
//    str2.end(),
//    [](unsigned char x) {return std::isspace(x); }),




}


