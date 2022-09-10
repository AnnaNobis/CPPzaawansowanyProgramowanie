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


#pragma once
#include <string>
#include "json.hpp"

namespace Zad
{
	using json = nlohmann::json;

	struct Student
	{
		std::string _firstName;
		std::string _lastName;
		int _studentID;


	public:
		Student(std::string firstName, std::string lastName, int studentID)
			: _firstName(firstName)
			, _lastName(lastName)
			, _studentID(studentID)
		{};

		std::string getFirstName()
		{
			return _firstName;
		}

		std::string getLastName()
		{
			return _lastName;
		}
	};

	void to_json(json& j, const Student& s)
	{
		j = json{ {"firstName", s._firstName} , {"lastName", s._lastName} , {"studentID", s._studentID} };
	}


}