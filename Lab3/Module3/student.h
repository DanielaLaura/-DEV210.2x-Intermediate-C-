#pragma once
#include "person.h"
#include <iostream>

class Student :
	public Person { //takes the public members of the Person class;
public:
public:
	Student();
	Student(std::string firstName, std::string lastName, int age, std::string phone);
	virtual ~Student();

	void OutputIdentity();
	void OutputAge();
};
