#pragma once
#include <fstream>
# include <iostream>
#include <vector>
#include <string>
#include "IEmployeeFileReader.hpp"
#include "Employee.hpp"

class EmployeeCSVReader: public IEmployeeFileReader
{
	// pola potrzebne do obslugi plików



public:
	std::vector <Employee> readEmployees(std::string filePath) override;


};


