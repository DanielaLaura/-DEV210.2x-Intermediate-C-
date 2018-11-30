#include "person.h"
#include "student.h"
#include <iostream>

Student::Student() //default constructor
{

}
Student::Student(std::string firstName, std::string lastName, int age, std::string phone) :Person(age){
	this->first_name = lastName;
	this->last_name - lastName;
	this->phone = phone;
}
Student::~Student() {

}
void Student::OputputIdentity()
{
	std::cout << "I am a student" << std::endl;
}
void Student::OutputAge()
{
	OutputIdentity();
	Person::OutputAge();

}