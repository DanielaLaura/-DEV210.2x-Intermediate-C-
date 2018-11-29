#pragma once
#include "person.h"
#include <iostream>

class Student :
	public Person { //takes the public members of the Person class;
public:
	Student(); //default constructor
	Student(std::string firstName, std::string lastName, int age, sdt::string phone); //constructor containing...
	virtual ~Student();//deconstructor
	void OutputIdentity();
	void OutputAge();


};