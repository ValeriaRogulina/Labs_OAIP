
#include <iostream>
#include <string>
#include <stdlib.h>
#include <iomanip>
#include <cstdlib>

using namespace std;

class Money
{
private:
	const char d = '$';
	long double value;
	string ustring;

	const long double Max = 9999999999999990.00;

public:

	Money(long double a)
	{
		if (a <= Max)
		{
			value = a;
		}
		else
		{
			cout << "Слишком большое число" << endl;
		}
	}
	void ldtoms()
	{

		if (value < 9999999.00)
		{
			ustring = to_string(value);
			int zero = ustring.size() - 1;

			if (ustring.find(','))
			{
				zero = ustring.find(',');
				ustring[zero] = '.';
			}

			for (zero = zero - 3; zero > 0; zero -= 3) ustring.insert(zero, ",");

			ustring = "$" + ustring;

			cout << ustring << endl;
		}
	}
};

int main()
{
	setlocale(LC_ALL, "Russian");
	long double a;

	cout << "Введите денежную сумму: ";
	cin >> a;
	Money mon(a);
	mon.ldtoms();
	return 0;
}