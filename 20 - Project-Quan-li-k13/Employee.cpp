#include "Employee.h"

using namespace std;

void Employee::show() 
{
	cout <<"BKC" << m_id << " " << m_name << " " << m_gender << " " << m_email << " ";
}

void Employee::input()
{
	cout << "enter id: ";
	cin >> m_id;

	cin.ignore(100, '\n');

	cout << "enter name: ";
	getline(cin, m_name);

	cout << "enter gender: ";
	cin >> m_gender;

	cin.ignore(10, '\n');

	cout << "enter email";
	getline(cin, m_email);

}

string Employee::getname()
{
	return m_name;
}