#include "Manager.h"

void Manager::input()
{
	Employee::input();
	cout << "enter yoe: ";
	cin >> m_yoe;
	
	

}

void Manager::show()
{
	Employee::show();
	cout << "I am Manager, I have been working..." <<m_yoe << endl;
	
}
