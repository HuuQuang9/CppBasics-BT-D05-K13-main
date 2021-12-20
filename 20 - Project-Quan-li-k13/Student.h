#pragma once

#include "Employee.h"
#include <string>


class Student : public Employee 
{
protected:
	string m_degree; //khoas vd : k13
	string m_class; // lop vd:bt-d05
	string m_address;// dia chi vd:ha noi 
	

public:
	Student() {};
	Student(string name, int id, string birth, string gender, string email)/*, string classs, string degree,string address)*/
		:Employee{ name, id, birth, gender, email}/*, m_class{classs}, m_degree{degree},m_address{address}*/
	{}

	virtual void show() ;

	virtual void input() ;
};
