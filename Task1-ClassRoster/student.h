#pragma once
#include <string>
#include "degree.h"
using namespace std;

class Student
{
public:
	Student();
	Student(string studentID, string firstName, string lastName, string email, int age, int* daysToCompleteCourse, Degree degree);
	~Student();
	string GetStudentID();
	void SetStudentID(string studentID);
	string GetFirstName();
	void SetFirstName(string firstName);
	string GetLastName();
	void SetLastName(string lastName);
	string GetEmail();
	void SetEmail(string email);
	int GetAge();
	void SetAge(int age);
	int GetDaysToCompleteCourses();
	void SetDateToCompleteCourses(int& daysToCompleteCourses);
	virtual void print();
	virtual Degree GetDegreeProgram();

private:
	string studentID;
	string firstName;
	string lastName;
	string email;
	int age;
	int* daysToCompleteCourses;
};

