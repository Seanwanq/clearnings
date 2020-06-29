#include "LandOwnerV4.h"

LandOwnerV4::LandOwnerV4()
{
    //一般使用构造函数进行成员变量的初始化
    _name = "default LO";
    _score = 0;
    //将用户的手牌数组初始化为0
    memset(cards, 0, sizeof(cards));

    cout <<  "LandOwner4's no-arg-constructor (default constructor) has been used." << endl;

    cout << "the result of initialization is as followed: " << endl;
    cout << "name\t" << _name << endl;
    cout << "score\t" << _score <<endl;
    cout << "cards array\t";
    for (int i = 0; i < sizeof(cards) / sizeof(cards[0]); i++)
    {
        cout << cards[i] << ", ";
    }
    cout << endl;
}