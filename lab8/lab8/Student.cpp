
#include "Student.h"
#include <iostream>
#include <string>

using namespace std;

ostream& operator<< (ostream& out, const Student& stud)
{
	out << stud.m_surname << " " << stud.m_name << " " << stud.m_midname;
	return out;
}

void Student::enterStudentInfo()
{
	cout << "Введите ФИО студента: ";
	cin >> m_surname >> m_name >> m_midname;
}