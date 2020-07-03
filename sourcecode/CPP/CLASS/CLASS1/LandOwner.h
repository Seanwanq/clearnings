#ifndef LANDOWNER_H
#define LANDOWNER_H

#include <iostream>
using namespace std;

class LandOwner
{
private:
    string _nickname;
    string _gender;
    int _gold;
    long _exp;



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





protected:


};


#endif