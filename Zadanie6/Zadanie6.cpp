// Zadanie6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Zadanie 6: Stwórz listê liczb od 1 do 1000. Rozdziel te liczby na dwie osobne listy : liczby pierwsze i nie liczby pierwsze.


#include <iostream>
#include <list>
#include <algorithm>


std::list<int> createListWithNumbers(int n)
{
    std::list<int> numbers;
    for (int i = 1; i < n; i++)
        numbers.push_back(i);
    return numbers;
}

void printList(std::list <int> list)
{
    for (auto it = list.begin(); it != list.end(); ++it)
    {
        std::cout << *it << "; ";
    }
    std::cout << std::endl << std::endl;
}

int main()
{
    std::list<int> myList = createListWithNumbers(100);
    std::cout << std::endl << "Wygenerowane liczby to: " << std::endl;
    printList(myList);

    //tworzê listê liczb pierwszych
    std::list <int> firstNumbers;

    std::copy_if(myList.begin(), myList.end(), std::back_inserter(firstNumbers),
        [](int x)
        {
            if (x < 2)
            {
                return false;
            }
            for (int i = 2; i * i <= x; ++i)
            {
                if (x % i == 0)	return false;
            }
            return true;
        });

    std::cout << std::endl << "Liczby pierwsze to: " << std::endl;
    printList(firstNumbers);


    //tworzê listê nie liczb pierwszych
    auto removeFirstNumbers = [firstNumbers](int i) { return firstNumbers.end() != std::find(firstNumbers.begin(), firstNumbers.end(), i); };
    myList.erase(std::remove_if(myList.begin(), myList.end(), removeFirstNumbers), myList.end());

    std::list<int> notFirstNumbers = myList;

    std::cout << std::endl << "Liczby nie pierwsze to: " << std::endl;
    printList(notFirstNumbers);


    //druga wersja - zaprzeczenie lambdy z listy liczb pierwszych (chyba prostsza wersja)
    //std::copy_if(numbers.begin(), numbers.end(), std::back_inserter(notFirstNumbers),
    //    [](int x)
    //
    //  {   if (x < 2)
    //      {
    //      return true;
    //      }
    //      for (int i = 2; i * i <= x; ++i)
    //      {
    //      if (x % i == 0) return true;
    //      return false;
    //  });




}


