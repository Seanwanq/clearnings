#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>

using namespace std;

class Student
{
private:
    string _name;
    string _desc;
    int _age;

public:
    //构造函数的重载规则和普通函数重载相同
    Student();
    ~Student();
    Student(string, string);      //带参构造
    Student(int);

    void ShowInfo();

    void GetName(string name)
    {
        _name = name;
    }
    void GetDesc(string desc)
    {
        _desc = desc;
    }
    void GetAge(int age)
    {
        if (age <= 0)
        {
            _age = 18;
            cout << "input age err." << endl;
        }
        else
        {
            _age = age;
        }
        
    }

};

#endif