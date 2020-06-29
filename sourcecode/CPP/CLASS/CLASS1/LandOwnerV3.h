/**
 * 用来演示封装的基本概念
 * 
*/


#ifndef LANDOWNERV3_H
#define LANDOWNERV3_H

#include <iostream>

using namespace std;


class LandOwnerV3
{
//private:
//private可以省略

    long score;     //积分  解决积分被赋值为负数错误的方法：将成员变量score进行隐藏并封装
    int cards[20];
    string name;


public:
    LandOwnerV3();
    ~LandOwnerV3();
    void ShowScore();

    //使用方法来实现对成员变量的封装Get/Set方法

    void SetScore(long lScore)
    {
        if (lScore < 0)
        {
            //如果传入的积分是非法情况，那么积分默认为0
            score = 0;
        }
        else
        {
            //积分为正数时，才进行赋值 - 这里就通过条件判断封装了score的赋值过程
            score = lScore;
        }
        
    }

    void SetName(string lName)
    {
        name = lName;
    }

    string GetName()
    {
        return name;
    }


};


#endif