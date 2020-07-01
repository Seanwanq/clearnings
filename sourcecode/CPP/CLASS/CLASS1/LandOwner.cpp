#include "LandOwner.h"

LandOwner::LandOwner()
{
	SetNickName("default player");
	SetGender("ignored");
	SetExp(0);
	SetGold(1000);
	cout << "default construction" << endl;
}

LandOwner::LandOwner(string nickname): _nickname(nickname)
{
	SetGender("ignored");
	SetExp(0);
	SetGold(1000);
	cout << "construction string" << endl;
}

LandOwner::LandOwner(string nickname, string gender, int value, long exp): _nickname(nickname), _gold(value), _exp(exp)
{
	if (gender != "male" && gender != "female" && gender != "ignored")
    {
        cout << "input gender err. " << endl;
		_gender = "ignored";
    }
    else
    {
        _gender = gender;
    }

	cout << "construction string, string, int, long" << endl;
}

void LandOwner::ShowInfo()
{
	cout << "Nickname:  " << GetNickName() << endl;
	cout << "Gender:  " << GetGender() << endl;
	cout << "Gold:  " << GetGold() << endl;
	cout << "Exp:  " << GetExp() << endl;
}

LandOwner::~LandOwner()
{
	cout << GetNickName() << "\t has been released. " << endl;
}