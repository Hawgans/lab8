#ifndef COMPLEX_H
#define COMPLEX_H

#include <iostream>

using namespace std;

class Complex
{
public:
	double m_re;
	double m_im;

	Complex() { m_re = m_im = 0.0; }
	Complex(double re, double im)
		: m_re(re), m_im(im)
	{
	}

	friend istream& operator>> (istream& in, Complex& comp);

	~Complex() {}
};

#endif