#pragma once
#include "Employee.h"


class Manager :public Employee
{
protected:
	string m_yoe;
	
	
public: 
	Manager() {};
	Manager(int id, string name) :Employee{ id, name } {};
	void input() override; 
	void show() override;

};

