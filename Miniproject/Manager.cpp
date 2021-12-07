#include "Manager.h"

void Manager::input()
{
	Employee::input();
	cout << "enter year: ";
	cin >> m_year;
	cout << "enter month: ";
	cin >> m_month;

}

void Manager::show()
{
	Employee::show();
	cout << "I am Manager." << endl;
	cout << "I have been working " << m_year << " year and " << m_month << "month.";
}
