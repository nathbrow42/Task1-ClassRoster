#pragma once
#include "student.h"
class networkStudent :
	public Student
{
public:
	networkStudent();
	networkStudent(string studentID, string firstName, string lastName, string emailAddress, int age, int daysCourse1, int daysCourse2, int daysCourse3, Degree degreeType);
	~networkStudent();
	Degree GetDegreeProgram();
private:
	Degree degreeProgram;
};

