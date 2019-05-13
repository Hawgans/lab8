#include <iostream>
#include <list>
#include <queue>
#include <vector>
#include <iterator>
#include "Student.h"
#include "Complex.h"
#include "Auto.h"

using namespace std;

int main()
{
	system("chcp 1251");
	system("cls");

	// 8_1
	int studentsCount;
	cout << "Введите количество студентов: ";
	cin >> studentsCount;
	vector<Student> students(studentsCount);

	for (int i = 0; i < static_cast<int>(students.size()); ++i)
		students[i].enterStudentInfo();

	std::cout << "[ Список студентов ]\n";
	for (int i = 0; i < static_cast<int>(students.size()); ++i)
	{
		std::cout << students[i];
		std::cout << '\n';
	}


	// 8_2
	cout << "\n[ ******************** ЗАДАНИЕ №2 ******************** ]\n";
	int complexCount;
	cout << "Введите количество комплексных чисел: ";
	cin >> complexCount;
	list<Complex> complex;

	for (int i = 0; i < complexCount; ++i)
	{
		Complex temp;
		cin >> temp;
		complex.push_back(temp);
	}

	cout << "Список комплексных чисел:\n";
	for (std::list<Complex>::iterator iter = complex.begin(); iter != complex.end(); ++iter)
		cout << iter->m_re << " + (" << iter->m_im << ")i\n";


	// 8_3
	cout << "\n[ ******************** ЗАДАНИЕ №3 ******************** ]\n";
	queue<Auto> autos;
	Auto car1{ "Ford Focus", "Denis Ion" }, car2{ "Lada Granta", "Roman Gra" };
	autos.push(car1);
	autos.push(car2);
	cout << "Текущая очередь: " << autos.size() << " клиент(-ов)\n";
	cout << "Первый в очереди: " << autos.front() << '\n';
	cout << "Машина первого клиента в очереди была вымыта.\n";
	autos.pop();
	cout << "Осталось в очереди: " << autos.size() << " клиент(-ов)\n";
	cout << "Первый в очереди: " << autos.front() << '\n';
	return 0;
}