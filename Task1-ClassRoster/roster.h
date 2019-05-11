#pragma once
#include <string>
#include <iostream>
#include "student.h"
using namespace std;
class roster
{
public:
	roster();
	~roster();
	Student *classRosterArray[5];
	void add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, Degree degreeProgram);
	void remove(string studentID);
	void printAll();
	void printDaysInCourse(string studentID);
	void printInvalidEmails();
	void printByDegreeProgram(int degreeProgram);
	int arrIndex = 0;
};






