#pragma once
#include "Employee.hpp"
#include <vector>


class IEmployeeFileWriter
{



public:
	virtual void writeEmployee( std::vector <Employee> employees, std::string filePath) = 0;
	//virtual Employee readEmployee() - można wczytywać pojedyńczych pracowników

};


