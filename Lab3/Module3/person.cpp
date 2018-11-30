#include "person.h"
#include <iostream>

Person::Person()
{

} //default constructor
Person::Person(int age)
{
	this->age = age;

}
Person::~Person() {

}
void Person::OputputAge() {
	std::cout << "I am" << age << "years old." << std::endl;
}