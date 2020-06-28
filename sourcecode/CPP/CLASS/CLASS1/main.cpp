#include <iostream>
//#include "LandOwnerV1.hpp"
#include "LandOwnerV2.h"


using namespace std;

int main()
{
    //数据类型 变量名
    int num;
    num = 0;

    /*
    LandOwnerV1 LandOwner1;     //声明了一个LandOwner1类型的变量
    //调用对象的成员方法
//  LandOwner1.cards[0] = 9;        //不能直接使用对象的私有成员
    LandOwner1.TouchCard(100);
    */

   LandOwnerV2 landOwner2;
   landOwner2.name = "Kit";
   landOwner2.TourchCard(20);

    return 0;
}