#include "stdafx.h"
#include "math.h"
#include <cmath>
#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

class bMoney 
{
private:
	long double money;
	string chislooooo;

public:
	bMoney() 
	{
		money = 0;
	};
	void mstold() 
	{
		int n = chislooooo.size();

		for (int i = 0; i < n;) 
		{
			if (chislooooo.at(i) == ',') chislooooo.erase(chislooooo.begin() + i);
			else i++;
		}
		money = atof(chislooooo.c_str());
	}

	void ldtoms() 
	{
		if (money < 9999999.00) 
		{
			chislooooo = to_string(money);
			int zero = chislooooo.size() - 1;

			if (chislooooo.find('.')) zero = chislooooo.find('.');

			for (zero = zero - 3; zero > 0; zero -= 3)	chislooooo.insert(zero, ",");

			chislooooo = "$" + chislooooo;
		}
		else cout << "Too large";
	}

	void madd(bMoney m1, bMoney m2) 
	{
		money = m1.money + m2.money;
	};

	void getmoney() 
	{
		cout << "Enter number: ";
		cin >> chislooooo;
	};

	void putmoney() 
	{
		cout << chislooooo << endl;
	};
};

int main()
{
	bMoney m1, m2, m3;

	m1.getmoney();
	m1.mstold();
	m2.getmoney();
	m2.mstold();

	m3.madd(m1, m2);
	m3.ldtoms();
	cout << "Summ: ";
	m3.putmoney();

    return 0;
}

