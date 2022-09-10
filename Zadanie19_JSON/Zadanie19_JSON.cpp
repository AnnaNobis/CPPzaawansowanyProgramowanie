// Zadanie19_JSON.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Utwórz vector<Students>. Wype³nij go kilkoma obiektami, a nastêpnie zapisz go do pliku students.json. 
//Zapisany plik powinien zawieraæ mniej wiêcej takie dane :
//{
//    "Students": [
//    {"firstName":"Sean", "lastName" : "Brown"},
//    { "firstName":"Drake", "lastName" : "Williams" },
//    { "firstName":"Tom", "lastName" : "Miller" },
//    { "firstName":"Peter", "lastName" : "Jonson" }
//    ]
//}
//Nastêpnie:
//Wczytaj plik students.json do listy, a nastêpnie wypisz na konsolê dane wszystkich studentów.
//Uwaga : https ://github.com/nlohmann/json#basic-usage

#include <iostream>
#include "json.hpp"
#include "Student.hpp"
#include <vector>
#include <fstream>

using json = nlohmann::json;



int main()
{
    std::vector <Zad::Student> students;
    students.emplace_back ("Sean", "Brown", 1);
    students.emplace_back("Drake", "Williams", 2);
    students.push_back(Zad::Student("Tom", "Miller", 3));
    students.emplace_back("Peter", "Jonson", 4);

    json j;

    j["Students"] = (students);

    //std::cout << std::setw(4) << j; //wypisuje siê w konsoli
    std::ofstream o("students.json"); 
    o << std::setw(4) << j << std::endl; //zapisuje siê w podanym pliku
   
}

