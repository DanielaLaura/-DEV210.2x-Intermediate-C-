#pragma once
#include "person.h"
#include <iostream>

class Teacher :
	public Person {
public:
	Teacher();//default constructor;
	Teacher(std::string firstName, std::string lastName, int age, std::string phone);
	void ~Teacher();
	void OutputIdentity();
	void OutputAge();

};