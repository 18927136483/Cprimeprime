#include <iostream>
using namespace std;

class Date
{
private:
	int _year;
	int _month;
	int _day;
public:
	Date(int year = 2024, int month = 3, int day = 5)
	{
		_year = year;
		_month = month;
		_day = day;
	}
	Date(Date d)
	{
		_year = d._year;
		_month = d._month;
		_day = d._day;
	}
};

int main()
{
	Date d1(2024,1,28);
	Date d2(d1);
	return 0;
}