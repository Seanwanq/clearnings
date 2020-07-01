#include "LandOwner.h"

LandOwner::LandOwner()
{
	SetNickName("default player");
	SetGender("ignored");
	SetExp(0);
	SetGold(1000);
	cout << "default construction" << endl;
	InitCards();
}

LandOwner::LandOwner(string nickname): _nickname(nickname)
{
	SetGender("ignored");
	SetExp(0);
	SetGold(1000);
	cout << "construction string" << endl;
	InitCards();
	//ShowCards(packCards);
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
	InitCards();
}

void LandOwner::ShowInfo()
{
	cout << "Nickname:  " << GetNickName() << endl;
	cout << "Gender:  " << GetGender() << endl;
	cout << "Gold:  " << GetGold() << endl;
	cout << "Exp:  " << GetExp() << endl;
}

//初始化packCards, surplusCards, currentCards
void LandOwner::InitCards()
{
	//生成默认的一副扑克牌
	for (int i = 0; i < 54; i++)
	{
		packCards.push_back(i + 1);
		surplusCards.push_back(packCards.at(i));
	}
	currentCards.clear();

	ShowCards(surplusCards);
}

//摸牌
void LandOwner::TouchCard(int cardcount)
{

}

//显示集合中的牌面
void LandOwner::ShowCards(const vector<int>& cards)
{
	//C语言的习惯
/*	for (int i = 0; i < cards.size(); i++)
	{
		cout << cards[i] << ", ";
	}
	cout << endl; */

	//更高级的写法
	//使用迭代器
/*	for (vector<int>::const_iterator iter = cards.begin(); iter != cards.end(); iter++)
	{
		cout << *iter << ", ";
	}
	cout << endl; */

	//c++11里面比较新式的写法
	//使用c++11的类型推断
/*	for (auto iter = cards.begin(); iter != cards.end(); iter++)
	{
		cout << *iter << ", ";
	}
	cout << endl; */

	//for区间遍历 c++11特性
/*	for (auto card:cards)
	{
		cout << card << ", ";
	}
	cout << endl; */

	//使用算法的方式将容器(vector)的内容复制到cout绑定的迭代器中
	//需要导入<iterator>和<algorithm>
	copy(cards.cbegin(), cards.cend(), ostream_iterator<int>(cout, ", "));
	cout << endl;
}

LandOwner::~LandOwner()
{
	cout << GetNickName() << "\t has been released. " << endl;
}