#pragma once
#include <string>
#include <algorithm>
#include <vector>
//Zadanie 5
//Klasa: StringCensor
//Napisz klas� kt�ra b�dzie cenzurowa� podane stringi(zamienia� wymagane litery na gwiazk�), operacje kt�ra ma wspiera� ta klasa :
//-addCensoredLetter(char c)
//- std::string censor(std::string)

const char asterisk { '*' };

class StringCensor
{
	std::string _censoredLettersBox;
public:
	void addCensoredLetter(char c)
	{
		_censoredLettersBox += c;

	};

	std::string censor(std::string s)
	{
		//std::replace_if(s.begin(), s.end(), [](char c) {return c == _censoredLettersBox; }, asterisk);
		std::replace_if(s.begin(), s.end(), [this](char c) {return std::string::npos != _censoredLettersBox.find(c); }, asterisk);
		std::cout << s << std::endl;
		return s;
	};

	
	

	auto getAllCensoredLetters()
	{
		return _censoredLettersBox;
	}

};

