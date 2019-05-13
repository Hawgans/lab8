#ifndef AUTO_H
#define AUTO_H

#include <string>

using namespace std;

class Auto
{
protected:
	string m_autoName;
	string m_ownerName;

public:
	Auto() {}
	Auto(string autoName, string ownerName)
		: m_autoName(autoName), m_ownerName(ownerName)
	{
	}

	friend ostream& operator<< (ostream& out, const Auto& car);

	~Auto() {}
};

#endif