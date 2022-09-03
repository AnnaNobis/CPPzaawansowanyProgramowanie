// Zadanie7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Zadanie  7 Stworz listê 50 liczb ca³kowitych dodatnich i wype³nij j¹ losowymi wartoœciami.Wypisz j¹.
//Nastêpnie posortuj i wypisz listê tak, by na pocz¹tku znalaz³y siê wartoœci parzyste uporz¹dkowane rosn¹co, a za nimi wartoœci nieparzyste uporz¹dkowane malej¹co.
//Podpowiedz: Podziel listê na dwie osobne, odpowiednio posortuj, a nastêpnie ja po³¹cz w jedn¹.


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
    std::cout << "Stworz listê 50 liczb ca³kowitych dodatnich i wype³nij j¹ losowymi wartoœciami.Wypisz j¹." << std::endl;

    std::list<int> listOfNumbers =  generateList();
    printList(listOfNumbers);


    std::cout << "Nastêpnie posortuj i wypisz listê tak, by na pocz¹tku znalaz³y siê wartoœci parzyste uporz¹dkowane rosn¹co, a za nimi wartoœci nieparzyste uporz¹dkowane malej¹co." << std::endl;
    sortList(listOfNumbers);
    
    printList(listOfNumbers);
   


}


     