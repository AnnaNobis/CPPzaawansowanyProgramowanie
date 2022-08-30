// Zadanie1_funkcje.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Zadanie 1: Napisz funkcjê, która odwróci podanego stringa.
//Zadanie 2: Napisz funkcjê, która przyjmie dwa stringi i zwróci ile liter maj¹ wspólnych.

#include <iostream>
#include <algorithm>
#include <vector>

void reverseString(std::string s)
{
std::reverse(s.begin(), s.end());
std::cout << s << "\n";
}

int commonLetters(std::string s1, std::string s2)
{

  int count = 0;

  for (auto i = s1.begin(); i != s1.end(); ++i)
  {
      if (std::find(s2.begin(), s2.end(), *i) != s2.end())
      {
          count++;
        
      }  
      return count;

  }
 std::cout << "liczba wspólnych liter to: " << count << " times";
    
}



int main()
{
    //Zad1 
    reverseString("Sprawdzam!");

    //Zad2
    commonLetters("auto", "ala");



}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
