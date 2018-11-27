#include "course.h"
#include <iostream>

Course::Course() {

}
Course::Course(std::string name, Student*students, Teacher teacher) {
	this->name = name;
	this->Students = students;
	this->Teacher = teacher;

}
Course::~Course() {

}
void Course::SetName(std::string name) {
	this->name = name;
}
std::string Course::GetName() {
	return this->name;
}
void Course::SetStudents(Student * students) {
	this->students = students;
}
Student* Course::GetStudents() {
	return this->students;
}
void Course::SetTeacher(Teacher teacher) {
	this->teacher = teacher;
}
Teacher Course::GetTeacher() {
	return this->teacher;
}