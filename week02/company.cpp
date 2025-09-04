#include "company.h"

Company::Company(string name, string telephone) : name(name), telephone(telephone)
{
}

void Company::print() const
{
	cout << "ȸ��� : " << name << endl;
	cout << "����ó : " << telephone << endl;
}