#include "EmployeeCSVWriter.hpp"
#include <iostream>
#include <fstream>

void EmployeeCSVWriter::writeEmployees(std::vector<Employee> employees, std::string filePath)
{
	std::fstream file(filePath);

	if (file.is_open())
	{
		for (unsigned int i = 0; i < employees.size(); ++i)
		{
			if (file.good())
			{
				file << employees[i].getName() << " ," << employees[i].getLastName() << " ," << employees[i].getEmail() << " ," << employees[i].getSalary() << "\n";
			}
		}
		file.close();
	}
	else
	{
		std::cout << "Nie mo¿na otworzyc pliku do zapisu";
	}


}
