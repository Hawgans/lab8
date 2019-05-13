#ifndef STUDENT_H
#define STUDENT_H

#include <string>

using namespace std;

class Student
{
protected:
	string m_surname;
	string m_name;
	string m_midname;

public:
	Student() {}
	Student(string surname, string name, string midname)
		: m_surname(surname), m_name(name), m_midname(midname)
	{
	}

	friend ostream& operator<< (ostream& out, const Student& stud);

	void enterStudentInfo();

	~Student() {}
};

#endif