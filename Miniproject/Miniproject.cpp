#include <iostream>
#include <string>
#include "Employee.h"
#include "Programmer.h"
#include "Testter.h"
#include <vector>
#include "Manager.h"

using namespace std;

int main()
{
     /*Employee* e{ new Employee() };*/

   /* e->input();

    e->show();*/

    Employee* p{ new Programmer() };
    Employee* t{ new Testter() };
    Employee* m{ new Manager() };
    /*

    p->input();
    
    p->show();

    Employee* t{ new Testter() };

    t->input();

    t->show();*/

 /*   vector<int> numbers{ 1, 2, 3, 4, 5 };
    cout << numbers[0] << '\n';
    cout << numbers.at(1) << endl;

    numbers.push_back(100);
    cout << numbers.at(5);
 */   

    vector<Employee*> list{};
    list.push_back(t);
    list.push_back(p);
    list.push_back(m);

    for (int i = 0; i < list.size(); i++) {
        list.at(i)->input();
    }


    for (Employee* e : list) {
        e->show();
    }



}
/*
quản lí nhân viên
- có danh sách các nhân viên
- xem, sửa thông tin của các nhân viên
- thêm, xóa nhân viên
- sắp xếp tìm kiếm nhân viên(tên, lương,...)
*/

/*
-- nhân viên: Programming, Tester, Manager, ... => Base class Employee
-- list (array) -> vector<Employee*>

-- giao diện: Consonle, Menu
*/

/*
-- Employee: id, name, email, phone,...// doWork()
-- Subclass: Programmer, Tester, Manager (public: Employe)


*/

//30/11/2021 : getters , testter, subclass

//tester : category (database, network....)

//manager : year , yoe...