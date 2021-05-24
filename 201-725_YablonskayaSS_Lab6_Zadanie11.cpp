#include <iostream>
#include <string>
#include <iomanip>


using namespace std;

class money
{
private:
	const long double MAX = 9999999999999990.00;
	const char d = '$';
	long double value;
	string ustring;
public:
	money(long double v)
	{
		if (v <= MAX)
		{
			value = v;
		}
		else
		{
			cout << "DATA ERROR! THE NUMBER IS OUT OF RANGE." << endl;
		}
	}
	void idtoms()
	{
		if (value < MAX)
		{
			ustring = to_string(value);
			int point = ustring.find('.');
			for (point = point - 3; point > 0; point -= 3) ustring.insert(point, ",");
			ustring = "$" + ustring;
			cout << ustring << endl;
		}
	}
};

int main()
{
	long double number;
	cout << "Enter the ammount of money: ";
	cin >> number;
	money mon(number);
	mon.idtoms();
	return 0;
}
