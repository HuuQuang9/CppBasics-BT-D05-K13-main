#include "Employee.h"
#include "Student.h"
#include "Utils.h"
#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <algorithm>

using namespace std;

void Menu() {
    cout << "--------------------Menu--------------------" << '\n';
    cout << "1.Edit student" << '\n';
    cout << "2.Update stdent" << '\n';
    cout << "3.Delete student" << '\n';
    cout << "4.Display show all student" << '\n';
    cout << "5.Sort student" << '\n';
    cout << "6.Search student" << '\n';
    cout << "0.exit" << '\n';
    cout << "--------------------------------------------" << '\n';
    cout << "Pleas choose:";
}

void Menuedit() {
    cout << "--------------------Menu--------------------" << '\n';
    cout << "1.Search by name to Edit" << '\n';
    cout << "2.Search by ID to Edit" << '\n';
    cout << "0.exit" << '\n';
    cout << "--------------------------------------------" << '\n';
    cout << "Pleas choose:";
}

void Menudelete() {
    cout << "--------------------Menu--------------------" << '\n';
    cout << "1.Search by name to Delete" << '\n';
    cout << "2.Search by ID to Delete" << '\n';
    cout << "0.exit" << '\n';
    cout << "--------------------------------------------" << '\n';
    cout << "Pleas choose:";
}

void Menusort() {
    cout << "--------------------Menu--------------------" << '\n';
    cout << "1.Sort by Name A to Z" << '\n';
    cout << "2.Sort by Name Z to A" << '\n';
    cout << "3.Sort by ID Low to High" << '\n';
    cout << "4.Sort by ID High to Low" << '\n';
    cout << "0.exit" << '\n';
    cout << "--------------------------------------------" << '\n';
    cout << "Pleas choose:";
}

Employee* Findbyname(vector<Employee*>&, string);
Employee* Findbyid(vector<Employee*>&, int);
void Edit(vector <Employee*> list) {
    int chose;
    Menuedit();

    bool exit{ false };
    while (true) {
        cin >> chose;
        switch (chose) {
        case 1:
        {
            string name;
            cout << "Search by name to Edit" << '\n';
            cout << "enter name: ";
            cin >> name;
            Findbyname(list, name)->input();

        }break;
        case 2:
        {
            int id;
            cout << "Search by id to Edit" << '\n';
            cout << "enter id: ";
            cin >> id;

            Findbyid(list, id)->input();
        }break;
        case 0:
        {
            cout << "exit" << '\n';
            exit = true;
        }break;

        }
        if (exit) {
            break;
        }
        Menuedit();
    }

}

void Update(vector<Employee*>& list) {
    Employee* e{ new Student{} };

    e->input();

    list.push_back(e);
}

//void callb(); 
//void a()
//{
//    callb(); 
//}
//void callb()
//{
//    std::cout << "hehe";
//}
void Delete(vector<Employee*>& list) {
    int chose;
    Menudelete();

    bool exit{ false };
    while (true) {
        cin >> chose;
        switch (chose) {
        case 1:
        {
            string name;
            cout << "Search by name to Edit" << '\n';
            cout << "enter name: ";
            cin >> name;
            Findbyname(list, name)->input();

        }break;
        case 2:
        {
            int id;
            cout << "Search by id to Edit" << '\n';
            cout << "enter id: ";
            cin >> id;
            Findbyid(list, id)->input();
        }break;
        case 0:
        {
            cout << "exit" << '\n';
            exit = true;
        }break;

        }
        if (exit) {
            break;
        }
        Menudelete();
    }

}

void Showall(vector<Employee*> list) {
    for (Employee* a : list) {
        a->show();
    }
}

void Sort(vector<Employee*>& list) {
    int choose;
    Menusort();

    bool exit{ false };
    while (true) {
        cin >> choose;
        switch (choose) {
        case 1:
        {
            cout << "Sort by name A to Z" << '\n';
            sort(list.begin(), list.end(),
                [](Employee* e1, Employee* e2) -> bool
                {
                    return (e1->Getname() < e2->Getname());
                }
            );
            Showall(list);
        }break;
        case 2:
        {
            cout << "Sort by name Z to A" << '\n';
            sort(list.begin(), list.end(),
                [](Employee* e1, Employee* e2) -> bool
                {
                    return (e1->Getname() > e2->Getname());
                }
            );
            Showall(list);
        }break;
        case 3:
        {
            cout << " Sort by id from Low to High" << endl;
            sort(list.begin(), list.end(), [](Employee* e1, Employee* e2)
                {
                    return e1->Getid() < e2->Getid();
                });
            Showall(list);

        }break;
        case 4:
        {
            cout << "Sort by ID from High to Low" << '\n';
            sort(list.begin(), list.end(), [](Employee* e1, Employee* e2)
                {
                    return e1->Getid() > e2->Getid();
                });
            Showall(list);
        } break;

        case 0:
        {
            cout << "exit" << '\n';
            exit = true;
        }break;

        }
        if (exit) {
            break;
        }
        Menusort();
    }

}

Employee* Findbyname(vector<Employee*>& list, string  name) {
    for (auto e : list) {
        if (e->Getname().compare(name) == 0) {
            return e;
        }
        return nullptr;
    }
}
Employee* Findbyid(vector<Employee*>& list, int id) {
    for (Employee* e : list) {

        if (e->Getid() == id) {
            return e;
        }
        return nullptr;
    }
}

void Menusearch() {
    cout << "--------------------Menu--------------------" << '\n';
    cout << "1.Search by name" << '\n';
    cout << "2.Search by ID" << '\n';
    cout << "0.exit" << '\n';
    cout << "--------------------------------------------" << '\n';
    cout << "Pleas choose:";
};

void Search(vector<Employee*> list) {
    int choose;
    Menusearch();

    bool exit{ false };
    while (true) {
        cin >> choose;
        switch (choose) {
        case 1:
        {
            string name;
            cout << "Search by name" << '\n';
            cout << "enter name: ";
            cin >> name;
            Findbyname(list, name);
        }break;
        case 2:
        {
            int id;
            cout << "Search by id" << '\n';
            cout << "enter id: ";
            cin >> id;
            Findbyid(list, id);
        }break;
        case 0:
        {
            cout << "exit" << '\n';
            exit = true;
        }break;

        }
        if (exit) {
            break;
        }
        Menusearch();
    }
}


int main()
{
    vector <Employee*> list{};
    ifstream filein{ "studentd05.txt" };
    string line; // phan tach cac thong tin dau vao
    while (getline(filein, line))
    {
        vector<string> vec = Utils::split(line, ",");// xac dinh vi tri ket thuc cua thong tin dau vao

        list.push_back(new Student(vec.at(0), stoi(vec.at(1)), vec.at(2), vec.at(3), vec.at(4)));
        // name, id, gender, email, class           
    };

    //nhap gia tri cho list 

    //
    int choose;

    Menu();
    bool exit{ false };

    while (true) {
        cin >> choose;
        switch (choose) {
        case 1:
        {
            cout << "Edit new student" << '\n';
            Edit(list);
            exit = false;
        }break;
        case 2:
        {
            cout << "Update Student" << '\n';
            Update(list);
        }break;
        case 3:
        {
            cout << "delete student" << '\n';
            Delete(list);
        }break;
        case 4:
        {
            cout << "Display show all student" << '\n';
            Showall(list);
        }break;
        case 5:
        {
            cout << "sort student" << '\n';
            Sort(list);
        }break;
        case 6:
        {
            cout << "search student" << '\n';
        }break;
        case 0:
        {
            cout << "exit" << '\n';
            exit = true;
        }break;
        }
        if (exit) { break; }
        Menu();
    }


}

