// ConsoleApplication4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include "pch.h"
#include <iostream>
#include "person.h"
#include "student.h"
#include "teacher.h"
int main()
{
	Student*student = Student("Dana", "Stuart", 23, "555-555-5555");
	Teacher*teacher = Teacher("Tina", "Mart", 45, "456-345-2345");
	student->OutputIdentity();
	student->OutputAge();
	teacher->OutputIdentity();
	teacher->OutputAge();
	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
