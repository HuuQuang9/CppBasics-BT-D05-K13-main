#include "Employee.h"

using namespace std;

void Employee::show() 
{
	cout << m_id << " " << m_name << " " << m_email <<" ";
}

void Employee::input()
{
	cout << "enter id: ";
	cin >> m_id;

	cin.ignore(100, '\n');

	cout << "enter name: ";
	getline(cin, m_name);

	cout << "enter email";
	getline(cin, m_email);

}

string Employee::getname()
{
	return m_name;
}