#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using std::cout;
using std::endl;

class Date
{
public:
	//构造函数
	Date(int year = 2000, int month = 1, int day = 1)
	{
		_year = year;
		_month = month;
		_day = day;
	}
	//析构函数
	~Date()
	{
		cout << "析构函数" << endl;
	}
	//显示日期
	void ShowDate()
	{
		cout << _year << "." << _month << "." << _day << endl;
	}
	//拷贝构造函数
	Date(const Date& d)
	{
		_year = d._year;
		_month = d._month;
		_day = d._day;
	}

	//运算符重载
	bool operator>(const Date& d)
	{
		if (_year > d._year)
		{
			return true;
		}
		else if (_year == d._year && _month > d._month)
		{
			return true;
		}
		else if (_year == d._year && _month == d._month && _day > d._day)
		{
			return true;
		}
		return false;
	}

	bool operator==(Date& d)
	{
		return _year == d._year && _month == d._month && _day == d._day;
	}

	bool operator>=(Date& d)
	{
		return *this > d || *this == d;
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

	Date& operator+=(int day)//引用提高效率
	{
		_day += day;
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

	Date operator+(int day)
	{
		Date ret(*this);
		ret+= day;
		return ret;
	}
	Date& operator-=(int day)
	{
		_day -= day;
		while (_day < 1)
		{
			_day += GetMonthDay(_year, _month);
			_month--;
			if (_month == 0)
			{
				_month = 12;
				_year--;
			}
		}
		return *this;
	}
	Date operator-(int day)
	{
		Date ret(*this);
		ret -= day;
		return ret;
	}
	bool operator<(Date& d)
	{
		if (_year < d._year)
		{
			return true;
		}
		else if (_year == d._year && _month < d._month)
		{
			return true;
		}
		else if (_year == d._year && _month == d._month && _day < d._day)
		{
			return true;
		}
		return false;
	}

	bool operator<=(Date& d)
	{
		return (*this) < d || (*this) == d;
	}

	bool operator!=(Date& d)
	{
		if (_day != d._day && _month != d._month && _year != d._year)
		{
			return true;
		}
	}
private:
	int _year;
	int _month;
	int _day;
};

int main()
{
	Date d1;
	Date d2(2011,2,14);

	/*cout << (d1 > d2) << endl;
	cout << (d1 >= d2) << endl;
	cout << (d1 == d2) << endl;*/
	/*d1 += 50;
	d1.ShowDate();
	(d1 + 50).ShowDate();*/
	d1 -= 10;
	/*d1.ShowDate();
	(d1 - 10).ShowDate();*/
	cout << (d1 > d2) << endl;
	cout << (d1 <=d2) << endl;
	cout << (d1 != d2) << endl;




	//d2.ShowDate();
	return 0;
}