#include "Complex.h"
#include <iostream>

using namespace std;

istream& operator>> (istream& in, Complex& comp)
{
	cout << "Введите комплексное число: ";
	in >> comp.m_re >> comp.m_im;
	return in;
}