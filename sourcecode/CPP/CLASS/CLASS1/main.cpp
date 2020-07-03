#include <iostream>
//#include "LandOwnerV1.hpp"
//#include "LandOwnerV2.h"
//#include "LandOwnerV3.h"
//#include "LandOwnerV4.h"
//#include "Student.h"

#include "LandOwner.h"



using namespace std;

int main()
{
    //数据类型 变量名
//  int num;
//  num = 0;

    /*
    LandOwnerV1 LandOwner1;     //声明了一个LandOwner1类型的变量
    //调用对象的成员方法
//  LandOwner1.cards[0] = 9;        //不能直接使用对象的私有成员
    LandOwner1.TouchCard(100);
    */

/*  
   LandOwnerV2 landOwner2;
   landOwner2.name = "Kit";
   landOwner2.TourchCard(20);
*/

/*
    LandOwnerV3 landOwner3;
    landOwner3.SetName("Dio");
    landOwner3.GetName();
    landOwner3.SetScore(-100);
    landOwner3.ShowScore();
*/

/*
    LandOwnerV4 landowner4;
    landowner4.GetName("DIO");
    landowner4.GetScore(120);
    landowner4.ShowName();
    landowner4.ShowScore();
    landowner4.TouchCards(20);
*/ 

/*
    Student stu1;       //在栈内存里直接分配空间 不建议 容易内存溢出
    Student stu2("Dio", "Soldier");
    //Student stu3(100);
    //Student stu4 = 50;

    stu2.ShowInfo();

    Student * stu5 = new Student("JOJO", "Golden Spitural");//堆内存不会被自动释放
    stu5->ShowInfo();

    //当对象使用完毕后,记得delete,释放内存！
    delete stu5;
*/

    LandOwner* ptr_landowner1 = new LandOwner();
    LandOwner* ptr_landowner2 = new LandOwner("Dio");
    LandOwner* ptr_landowner3 = new LandOwner("JOJO", "male", 10000, 10000);

    ptr_landowner1->ShowInfo();
    ptr_landowner2->ShowInfo();
    ptr_landowner3->ShowInfo();


    delete ptr_landowner1;
    delete ptr_landowner2;
    delete ptr_landowner3;

    return 0;
}