#include "securityStudent.h"



securityStudent::securityStudent()
{
}

securityStudent::securityStudent(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, Degree degreeType) : Student(studentID, firstName, lastName, emailAddress, age, daysInCourse1, daysInCourse2, daysInCourse3)
{
	degreeProgram = degreeType;
}


securityStudent::~securityStudent()
{
}

Degree securityStudent::getDegreeProgram()
{
	return SECURITY;
}
