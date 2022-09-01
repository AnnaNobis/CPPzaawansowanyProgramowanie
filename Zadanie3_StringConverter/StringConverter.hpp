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

		bool isBigLetter (char c)
		{
			return (c >= 65 && c <= 90);
		}


		std::string toCamelCase2(std::string snake_case)
		{
			snake_case.erase(std::remove(snake_case.begin(), snake_case.end(), '_'), snake_case.end());
			std::cout << snake_case << '\n';
			return snake_case;
		}

	
	std::string toSnakeCase(std::string camelCase)
	{
		std::string newString;

		for (auto it = camelCase.begin(); it != camelCase.end(); ++it)
		{
			if (isBigLetter(*it))
			{
				newString.push_back('_');
				newString.push_back (tolower(*it));
			
			}
			else
			{
				newString.push_back(*it);
			}
		}
		return newString;
	}
};


