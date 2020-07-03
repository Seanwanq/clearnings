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
	//随机生成一张剩余牌集合中有的牌，添加到currentCards集合中
	//从surplusCards中删除这张牌
	srand(time(NULL));		//时间种子
	for (int i = 0; i < cardcount; i++)
	{
		int randIndex = rand() % 54;		//1-54之间的随机数字
		//判断：随机生成的这张牌是否在剩余牌集合中
		if(isContains(packCards[randIndex]))
		{
			currentCards.push_back(packCards[randIndex]);	//将摸得牌放入当前手牌数组
			//在剩余牌集合中删除这张牌
			deleteCard(surplusCards, packCards[randIndex]);
		}
		else
		{
			i--;	//重新摸牌
		}
		
	}
	cout << "<Landowner Touch The Cards> - current cards: " << endl;
	ShowCards(currentCards);
	cout << "<After Landowner's Touch> - left cards: " << endl;
	ShowCards(surplusCards);
}

bool LandOwner::isContains(int cardNum)		//TODO 	在声明方法时可能有问题
{
	/*//使用算法查找
	vector<int>::iterator iter = find(surplusCards.begin(), surplusCards.end(), cardNum);
	if (iter == surplusCards.end())
	{
		return false;
	}
	return true;	*/

	vector<int>::iterator iter = find(surplusCards.begin(),surplusCards.end(), cardNum);
	return iter != surplusCards.end();
}

void LandOwner::deleteCard(vector<int>& cardVec, int card)
{
	//普通做法
/*  for (auto iter = cardVec.begin(); iter != cardVec.end(); )
	{
		if (*iter == card)
		{
			//如果找到就删除元素
			iter = cardVec.erase(card);	//这里的返回值指向已删除元素的下一元素
		}
		else
		{
			++iter;	//继续判断下一个元素是否相同
		}
		
	}
*/

	//使用算法删除
	auto iter = find(cardVec.begin(), cardVec.end(), card);
	if (iter != cardVec.end())
	{
		cardVec.erase(iter);
	}
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
	for (auto card:cards)
	{
		cout << card << ": " << getColor(card) << "--" << getValue(card) << ", ";
	}
	cout << endl; 

	//使用算法的方式将容器(vector)的内容复制到cout绑定的迭代器中
	//需要导入<iterator>和<algorithm>
	//copy(cards.cbegin(), cards.cend(), ostream_iterator<int>(cout, ", "));
	//cout << endl;
}

//获得牌的花色
string LandOwner::getColor(int card)		//注意这里，card不是下标
{
	if (card == 53)
	{
		return "Black Joker";
	}
	else if (card ==54)
	{
		return "Red Joker";
	}
	string colors[] = {
		"Spade", "Heart", "Diamond", "Club"
	};
	return colors[(card - 1) / 13];
}

//获得牌面
string LandOwner::getValue(int card)
{
	if (card == 53)
	{
		return "Black Joker";
	}
	else if (card == 54)
	{
		return "Red Joker";
	}
	string values[] = {
		"A", "1", "2", "3", "4", "5", "6", "7", "8", "9", "10",
		"J", "Q", "K"
	};
	return values[(card - 1) / 13];
}


LandOwner::~LandOwner()
{
	cout << GetNickName() << "\t has been released. " << endl;
}