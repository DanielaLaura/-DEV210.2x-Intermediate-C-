#include "student.h"
#include "teacher.h"
#include "course.h"
#include <iostream>
#include "pch.h"
int main()
{
	Student *Student1 = new Student("John", "Doe", 19, "123 King St", "Toronto", "555-555-5555");
	Student *Student2 = new Student("Jane", "Jones", 21, "345 Queen St", "Edmonton", "555-666-7777");
	Student *Student3 = new Student("Bob", "Smith", 20, "321 Main St", "Moncton", "555-444-3333");

	Course *Course1 = new Course();
	Course1->SetName("Intermediate C++");
	Course1->SetStudents(new Student[3]{ *Student1, *Student2, *Student3 });
	Teacher *teacher = new Teacher("Alan", "Turing", 105, "153 Turing Ave", "Cheshire", "+44 5555 123456");
	Course1->SetTeacher(*teacher);

	std::cout << "Course Name: " << Course1->GetName() << std::endl;
	teacher->GradeStudent();

	return 0;
}