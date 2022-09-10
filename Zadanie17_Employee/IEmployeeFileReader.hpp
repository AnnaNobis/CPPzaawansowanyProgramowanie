#pragma once

#include "Employee.hpp"

#include <vector>

class IEmployeeFileReader
{


public:
	virtual std::vector <Employee> readEmployees(std::string filePath) = 0;
	//virtual Employee readEmployee()=0; - mo¿na wczytywaæ pojedyñczych pracowników

};




