#pragma once
#include "student.h"
class securityStudent :
	public Student
{
public:
	securityStudent();
	~securityStudent();
	Degree getDegreeProgram();
private:
	Degree degreeProgram;
};

