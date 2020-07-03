#pragma once

#ifndef LANDOWNERV4_H
#define LANDOWNERV4_H

#include <iostream>
#include <memory.h>

using namespace std;

class LandOwnerV4
{
private:
	string _name;
	long _score;
	int cards[20];

public:

	LandOwnerV4();

	void GetName(string name)
	{
		_name = name;
	}
	void ShowName()
	{
		cout << _name << endl;
	}
	void GetScore(long score)
	{
		if (score < 0)
		{
			_score = 0;
			cout << "Please input a valid number. " << endl;
		}
		else
		{
			_score = score;
		}
	}
	void ShowScore()
	{
		cout << _score << endl;
	}

	void TouchCards(int CardNum)
	{
		if (CardNum < 0)
		{
			CardNum = 0;
		}
		else
		{
			cout << _name << ", you get " << CardNum << " cards." << endl;
		}
	}

};


#endif