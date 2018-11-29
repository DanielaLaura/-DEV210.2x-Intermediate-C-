#pragma once
#include <string>
class Person
{
private:
	int age;
protected:
	std::string phone;
public:
	std::string first_name;
	std::string last_name;
	Person(); //default constructor
	Person(int age); //constructor containing member age
	virtual ~Person();//deconstructor
	virtual void OutputIdentity() = 0;//pure virtual fuction
	virtual void OutputAge();
};