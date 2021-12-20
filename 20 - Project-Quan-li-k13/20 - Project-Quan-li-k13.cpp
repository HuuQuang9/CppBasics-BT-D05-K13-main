#include "Employee.h"
#include "Student.h"
#include "Utils.h"
#include <iostream>
#include <string>
#include <fstream>
#include <vector>

using namespace std;

//

int main()
{
    vector <Employee*> list{};
    ifstream filein{ "studentd05.txt" }; 
    string line; // phan tach cac thong tin dau vao
    while (getline(filein, line)) 
    {
        vector<string> vec = Utils::split(line, ",");// xac dinh vi tri ket thuc cua thong tin dau vao
       
        list.push_back(new Student(vec.at(0),stoi(vec.at(1)), vec.at(2), vec.at(3), vec.at(4))); 
                    
    };
    /*for (Employee* a : list) {
        a->show();
    }*/
}

