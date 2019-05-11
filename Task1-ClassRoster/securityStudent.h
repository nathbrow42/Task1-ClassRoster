#pragma once
#include "student.h"
class securityStudent :
	public Student
{
public:
	securityStudent();
	securityStudent(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, Degree degreeType);
	~securityStudent();
	Degree getDegreeProgram();
private:
	Degree degreeProgram;
};

