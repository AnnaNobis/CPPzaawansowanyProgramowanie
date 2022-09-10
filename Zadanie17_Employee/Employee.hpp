#pragma once
#include <string>

//Utwórz klasê Employee(first_name, last_name, email, gender(enum!), salary, login, password).
//Do obs³ugi pliku stwórz sobie klasy EmployeeFileReader, EmployeeFileWriter.Sproboj samemu je zaprojektowaæ.
//Dane wczytaj z pliku employee_input.csv.
//Jego struktura jest nastêpuj¹ca :
//first_name, last_name, email, gender, salary

class Employee
{

public:
	enum class Gender
	{
		MALE,
		FEMALE,
		UNKNOWN
	};

	Employee(std::string first_name, std::string last_name, std::string email, Employee::Gender gender, double salary);
	
	std::string getName();
	std::string getLastName();
	std::string getEmail();
	Employee::Gender getGender();
	double getSalary();
	std::string getLogin();
	std::string getPassword();
	static Gender toGender(std::string str);


	void setFirstName(const std::string name)
	{
		_first_name = name;
	}

	void setLastName(const std::string name)
	{
		_last_name = name;
	}

	void setEmail(const std::string mail)
	{
		_email = mail;
	}

	void setGender(const Gender gender)
	{
		this->_gender = gender;
	}

	void setSalary(const double salary)
	{
		this->_salary = salary;
	}
	
private:
	std::string _first_name;
	std::string _last_name;
	std::string _email;
	Employee::Gender _gender;
	double _salary;
	std::string _login;
	std::string _password;
};

