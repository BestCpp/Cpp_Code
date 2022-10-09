#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;
class Date
{
public:
	Date(int year = 2000, int month = 1, int day = 1)
	{
		_year = year;
		_month = month;
		_day = day;
	}
	void ShowDate()
	{
		cout << _year << "." << _month << "." << _day << endl;
	}
	int GetMonthDay(int year, int month)
	{
		static int MonthDay[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
		if (month == 2 && year % 4 == 0 && year % 100 != 0 || (year % 400 == 0))
		{
			return 29;
		}
		else
		{
			return MonthDay[month];
		}
	}
	Date& operator+=(int x)
	{
		_day += x;
		while (_day > GetMonthDay(_year, _month))
		{
			_day -= GetMonthDay(_year, _month);
			_month += 1;
			if (_month == 13)
			{
				_month = 1;
				_year += 1;
			}
		}
		return *this;
	}
	Date operator++(int)
	{
		Date tmp(*this);
		*this += 1;
		return tmp;
	}
private:
	int _year;
	int _month;
	int _day;
};

int main()
{
	Date d1(2022, 10, 9);
	(d1++).ShowDate();//先使用再++
	d1.ShowDate();
	return 0;
}