#include <iostream>
#include <string>
#include "Employee.h"

using namespace std;

int main()
{
    Employee* e{ new Employee() };

    e->input();

    e->show();
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