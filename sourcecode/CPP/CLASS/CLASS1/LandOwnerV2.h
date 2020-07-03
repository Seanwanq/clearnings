#ifndef LANDOWNERV2_H
#define LANDOWNERV2_H

#include <iostream>

using namespace std;

class LandOwnerV2
{
    public:
        string name;
        long score;
        int cards[20];

    public:
        LandOwnerV2() {}        //构造函数的声明
        ~LandOwnerV2() {}       //析构函数的声明

        void TourchCard(int cardCount);     //声明摸牌方法
        void ShowScore();


};

#endif