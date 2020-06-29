#include "Student.h"

Student::Student()
{
    cout << "default construction." << endl;
}

Student::Student(string name, string desc) : _name(name), _desc(desc)       //<--初始化参数列表
{
    GetName(name);
    GetDesc(desc);
    cout << "arg construction - name / desc." << endl;
}

Student::Student(int age)
{
    cout << "arg construction - age." << endl;
    if (age <= 0)
    {
        GetAge(18);
        cout << "input age err. " << endl;
    }
    else
    {
        GetAge(age);
    }
    
}

void Student::ShowInfo()
{
    cout << _desc << "\t" << _name << endl;
}