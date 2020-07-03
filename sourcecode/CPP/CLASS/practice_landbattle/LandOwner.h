#ifndef LANDOWNER_H
#define LANDOWNER_H

#include <vector>
#include <iostream>
#include <iterator>
#include <algorithm>
#include <cstdlib>
#include <ctime>
using namespace std;

class LandOwner
{
private:
    string _nickname;
    string _gender;
    int _gold;
    long _exp;

    vector<int> packCards;      //默认的一副牌 从1-54
    vector<int> surplusCards;   //摸牌后剩余的牌
    vector<int> currentCards;   //当前玩家的手牌数组

    bool isContains(int);       //剩余牌中是否包含cardNum这个牌面   <- 方法声明可能有问题

    void deleteCard(vector<int>&, int);     //删除集合中的数字      <- 方法声明可能有问题

public:
    LandOwner();
    LandOwner(string);
    LandOwner(string, string, int, long);


    ~LandOwner();

    string GetNickName()
    {
        return _nickname;
    }

    void SetNickName(string nickname)
    {
        _nickname = nickname;
    }

    string GetGender()
    {
        return _gender;
    }

    void SetGender(string gender)
    {
        if (gender != "male" && gender != "female" && gender != "ignored")
        {
            cout << "input gender err. " << endl;
        }
        else
        {
            _gender = gender;
        }
    }

    int GetGold()
    {
        return _gold;
    }

    void SetGold(int val)
    {
        if (val <= 0)
        {
            cout << "input value err. " << endl;
            _gold = 0;
        }
        else
        {
            _gold = val;
        }
    }

    long GetExp()
    {
        return _exp;
    }

    void SetExp(long val)
    {
        if (val < 0)
        {
            cout << "input exp err. " << endl;
            _exp = 0;
        }
        else
        {
            _exp = val;
        }
    }

    void ShowInfo();

    void TouchCard(int);            //摸牌

    void InitCards();               //初始化packCards, surplusCards, currentCards

    void ShowCards(const vector<int>&);    //显示集合中的牌面

protected:


};


#endif