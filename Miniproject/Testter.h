#pragma once

#include "Employee.h"
class Testter :public Employee
{
protected:
	string m_testcode;

public:
	Testter() {};
	Testter(int id,string name) :Employee{ id, name }
	{};
	virtual void show();
	virtual void input();
};

