#pragma once

#include <iostream>
#include <string>

using namespace std;
class Employee
{
protected:
	string m_id{ 0 }; //id  vd:bkc13220
	string m_name; // ho ten  vd: nguyen huu quang
	string m_birth; // ngay thang nam sinh vd: 09/11/2003
	string m_gender; //gioi tinh : nam/nu 
	string m_email; //email  vd:quang.bkc13220@student.bkacad.edu.vn
	 


public:
	Employee() {};
	Employee(string name, string id,string birth, string gender, string email) :m_id{ id }, m_name{ name }, m_gender{ gender }, m_email{ email }
	{}

	virtual void show();

	virtual void input();

	string getname();
};

