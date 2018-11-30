
#include "pch.h"
#include <iostream>
#include "person.h"
#include "student.h"
#include "teacher.h"
int main()
{
	Student*student = new Student("Dana", "Stuart", 23, "555-555-5555");
	Teacher*teacher = new Teacher("Tina", "Mart", 45, "456-345-2345");
	student->OutputIdentity();
	student->OutputAge();
	teacher->OutputIdentity();
	teacher->OutputAge();
	return 0;
}
