#pragma once
#include <string>
#include <vector>

//Zadanie 3
//Napisz klasê StringConverter, która bedzie mia³a dwie metody(statyczne) :
//	std::string toCamelCase(std::string)
//	std::string toSnakeCase(std::string)
//	camelCase : snake_case
//	helloSDA : hello_S_D_A
//	getColour : get_colour
//	isThisFirstEntry : is_this_first_entry


class StringConverter
{
	public:
		std::string toCamelCase(std::string snake_case)
		{
			std::vector <char> newString;

			snake_case.erase(remove_if(snake_case.begin(), snake_case.end(), [](unsigned char x) {return '_'; }), snake_case.end());
			std::cout << snake_case << '\n';
			return snake_case;
		}
	
	std::string toSnakeCase(std::string camelCase)
	{
	
	};

};


