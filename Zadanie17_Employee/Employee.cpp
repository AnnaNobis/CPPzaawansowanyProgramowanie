#include "Employee.hpp"

Employee::Employee(std::string first_name, std::string last_name, std::string email, Employee::Gender gender, double salary)
    : _first_name(first_name)
    , _last_name(last_name)
    , _email(email)
    , _gender(gender)
    , _salary(salary)
{

}

std::string Employee::getName()
{
    return _first_name;
}

std::string Employee::getLastName()
{
    return _last_name;
}

std::string Employee::getEmail()
{
    return _email;
}

Employee::Gender Employee::getGender()
{
    return _gender;
}

double Employee::getSalary()
{
    return _salary;
}

std::string Employee::getLogin()
{
    return _login;
}

std::string Employee::getPassword()
{
    return _password;
}

Gender Employee::toGender(std::string str)
{
		if (str == "Female")
		{
			return Gender::FEMALE;
		}
		else if (str == "Male")
		{
			return Gender::MALE;
		}
		else
		{
			return Gender::UNKNOWN;
		}

}
