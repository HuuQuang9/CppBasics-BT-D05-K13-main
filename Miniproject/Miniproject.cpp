#include <iostream>
#include <string>
#include "Employee.h"
#include "Programmer.h"
#include "Testter.h"
#include <vector>
#include "Manager.h"
#include <fstream>
#include "Utils.h"

void showmenu() {
    cout << "--------------------Menu-------------------" << '\n';
    cout << "1. ADD Employee" << endl;
    cout << "2. EDIT Employee" << endl;
    cout << "3. REMOVE Employee" << endl;
    cout << "4. Sort Employee by name" << endl;
    cout << "5. Show all Employee" << endl;
    cout << "0. Exit" << endl;
    cout << "-------------------------------------------" << endl;
}

void showall(vector<Employee*> list) {
    for (Employee* a : list) {
        a->show();
    }
}

void menunv() {
    cout << "--------------- Lua chon nhan vien ---------------" << '\n';
    cout << "1.Nhan vien Programmer" << '\n';
    cout << "2.Nhan vien Testter" << '\n';
    cout << "3.Nhan vien Manager" << '\n';
    cout << "0.exit" << '\n';
    cout << "--------------------------------------------------" << '\n';

}

void addemployee(vector<Employee*> &list) {
    
    int chose;
    menunv();
    
    
    bool exit{ false };
    
    while (true) {
        cin >> chose;
        switch(chose) {
        

        case 1:
        {
            Employee* e{ new Programmer{} };

			e->input();

			list.push_back(e);
        }
            
            break;
            
        case 2:
        {   
            Employee* e{ new Testter{} };
            e->input();
            list.push_back(e);
        }
            break;
        case 3:
        {
            Employee* e{ new Manager{} };
            e->input();
            list.push_back(e);
        }
            break;
        case 0:
            exit = true;
            break;

        }
        
        if (exit) {
            break;
        }
        menunv();

            



    }
   
}


using namespace std;

int main()
{
     /*Employee* e{ new Employee() };*/

   /* e->input();

    e->show();*/

 /*   Employee* p{ new Programmer() };
    Employee* t{ new Testter() };
    Employee* m{ new Manager() };*/
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

   /* vector<Employee*> list{};*/


    /*list.push_back(p);
    list.push_back(t);
    list.push_back(m);

    for (int i = 0; i < list.size(); i++) {
        list.at(i)->input();
    }


    for (Employee* e : list) {
        e->show();
    }*/


    vector<Employee*> list{};
    ifstream filein{ "input.txt" };
    //doc du lieu tu file.
    string line;
    while (getline(filein, line)) {
        auto vec = Utils::split(line, ",");

        if (vec.at(0) == "1") {
            list.push_back(new Programmer(stoi(vec.at(1)), vec.at(2)));
        }
        else if (vec.at(0) == "2") {
            list.push_back(new Testter(stoi(vec.at(1)), vec.at(2)));
        }
        else if (vec.at(0) == "3") {
            list.push_back(new Manager(stoi(vec.at(1)), vec.at(2))); 
        }
    }

    
    /*for (Employee*  a: list) {
        a ->show();
    }*/
    int choose;
    bool exit{ false };

    showmenu();
    while (true) {
        cout << "Please choose: ";
        cin >> choose;
        switch (choose) {
        case 1:
            cout << "ADD Emloyee" << endl;
            addemployee(list);
            break;
        case 2:
            cout << "EDIT Employee" << endl;
            break;
        case 3 :
            cout << "REMOVE Employee" << endl;
            break;
        case 4:
            cout << "Shprt Employee by name" << endl;
            break;
        case 5 :
            cout << "Show all Employee" << endl;
            showall(list);
            break;
        case 0:
            cout << "Exit" << endl;
            exit = true;
            break;
        }
        if (exit) {
            break;
        }
        showmenu();
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

//9/12/2021 
//- ADD Employee
// + Menu chọn loại nhân viên (pr,tr,mr)
// + if ...=> new nhân viên mới => list.push_back()
// +