#pragma once

#include "Employee.h"
#include <string>


class Student : public Employee
{
protected:

	string m_class; // lop vd:bt-d05

public:
	Student() {};
	Student(string name, int id, string gender, string email, string classs)
		:Employee{ name, id, gender, email }, m_class{ classs }
	{}

	virtual void show();

	virtual void input();
};
