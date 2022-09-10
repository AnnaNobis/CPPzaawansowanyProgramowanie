// Zadanie18_JSON1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Zadanie 18 JSON1
//Utw�rz jason z podanego stringa :
//{
//    "company":{
//        "employee":{
//            "name":"Stefan",
//                "payroll" : {
//                "salary":1500,
//                    "bonus" : 800
//            }
//        }
//    }
//}
//Nast�pnie wypisz sum� wynagrodzenia wraz z bonusem dla Stefana

#include <iostream>
#include "json.hpp"

using json = nlohmann::json;


int main()
{
    std::string jsonString(R"({
 "company":{
        "employee":{
           "name":"Stefan",
                "payroll" : {
                "salary":1500,
                    "bonus" : 800
            }
        }
    }
})");

    json j = json::parse(jsonString);

   
    json employee = j["company"]["employee"];
    std::string employeeName = employee["name"];
    int salary = employee["payroll"]["salary"];
    int bonus = employee["payroll"]["bonus"];
    int sum = salary + bonus;
    //int sum = employee["payroll"]["salary"].get<int>() + employee["payroll"]["bonus"].get<int>();//mo�emy wymusi� konwersj� na konkretny typ

    std::cout << "Zarobki pracownika " << employeeName << " to: " << sum << std::endl; 

  
 



}

