#pragma once
#include <vector>
#include "Employee.hpp"
#include "IEmployeeFileWriter.hpp"

class EmployeeCSVWriter : public IEmployeeFileWriter
{

public:
	void writeEmployees(std::vector<Employee> employees, std::string filePath) override;

};

