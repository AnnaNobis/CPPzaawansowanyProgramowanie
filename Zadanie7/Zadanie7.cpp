// Zadanie7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Zadanie  7 Stworz list� 50 liczb ca�kowitych dodatnich i wype�nij j� losowymi warto�ciami.Wypisz j�.
//Nast�pnie posortuj i wypisz list� tak, by na pocz�tku znalaz�y si� warto�ci parzyste uporz�dkowane rosn�co, a za nimi warto�ci nieparzyste uporz�dkowane malej�co.
//Podpowiedz: Podziel list� na dwie osobne, odpowiednio posortuj, a nast�pnie ja po��cz w jedn�.


#include <iostream>
#include <list>
#include <random>
#include <algorithm>


std::list <int> generateList()
{
    std::random_device device;
    std::mt19937 generator(device());
    std::uniform_int_distribution<int> dist(1, 500);

    std::list<int> listToFill;

    for (unsigned int i = 0; i <= 50; ++i)
    {
        listToFill.push_back(dist(generator));
    }

    return listToFill;
}


void printList (std::list<int> list)
{
    for (auto n : list)
    {
        std::cout << n << ", ";
    }
    std::cout << std::endl << std::endl;
}



std::list<int> sortList(std::list<int> list)
{
    std::list<int> evenNumbers;
    std::list<int> oddNumbers;
    std::list<int> sortedList;
  

    for (auto it = list.begin(); it != list.end(); ++it)
    {
        if ((*it) % 2 == 0)
        {
            evenNumbers.push_back(*it);
        }
        else
        {
            oddNumbers.push_back(*it);
        }
    }

    std::sort(evenNumbers.begin(), evenNumbers.end());
    std::sort(oddNumbers.rbegin(), oddNumbers.rend());

    sortedList = evenNumbers.merge(oddNumbers);

    return sortedList;
}


int main()
{
    std::cout << "Stworz list� 50 liczb ca�kowitych dodatnich i wype�nij j� losowymi warto�ciami.Wypisz j�." << std::endl;

    std::list<int> listOfNumbers =  generateList();
    printList(listOfNumbers);


    std::cout << "Nast�pnie posortuj i wypisz list� tak, by na pocz�tku znalaz�y si� warto�ci parzyste uporz�dkowane rosn�co, a za nimi warto�ci nieparzyste uporz�dkowane malej�co." << std::endl;
    sortList(listOfNumbers);
    
    printList(listOfNumbers);
   


}


     