#include "Auto.h"
#include <iostream>

using namespace std;

ostream& operator<< (ostream& out, const Auto& car)
{
	out << car.m_ownerName << " (машина: " << car.m_autoName << ')';
	return out;
}