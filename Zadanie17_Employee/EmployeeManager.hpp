#pragma once
#include <string>
#include "Employee.hpp"
#include <vector>
#include "IEmployeeFileWriter.hpp"
#include "IEmployeeFileReader.hpp"
#include <memory>

class EmployeeManager
{
	std::vector <Employee> employees;
	std::shared_ptr<IEmployeeFileReader> _fileReader;
	std::shared_ptr<IEmployeeFileWriter> _fileWriter;

public:
	EmployeeManager(std::shared_ptr<IEmployeeFileReader> fileReader, std::shared_ptr<IEmployeeFileWriter> fileWriter);
	void readDataFromFile(std::string filePath);

	//readDataFromFile(std::string filePath)
	//a.
	std::string generateLogins;
	//b.
	std::string generatePasswords;
	//storeLoginDataToFile
	//c. calculate statistics: 
	//int calculateFirstNameStarting(char firstLetter)
	// std::map calculateUniqueNames ()
	//calculateAvarageSalary()
	//calculateAvarageSalaryMen()
	//calculateAvarageSalaryWomen()
	//d.
	//std::vector<E> calculateTop10Salary ()
	//std::vector<E> calculateTop10Salary ()
	//storeEmployeeSalary (std::Vector<Employee>)
};

