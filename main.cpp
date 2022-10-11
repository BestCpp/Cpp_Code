#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;


class Date
{
public:
	Date(int year = 1, int month = 1, int day = 1)
		:_year(year)
		,_month(month)
		,_day(day)
	{}
	void Display()
	{
		cout << _year << "." << _month << "." << _day << endl;
	}
	bool operator==(Date& d)
	{
		return _year == d._year && _month == d._month && _day == d._day;
	}
	bool operator!=(Date& d)
	{
		return _year != d._year || _month != d._month || _day != d._day;
	}
	bool operator>=(Date& d)
	{
		return _year >= d._year && _month >= d._month && _day >= d._day;
	}
	bool operator<(Date& d)
	{
		return !(*this >= d);//尽可能复用
	}
	int GetMonthDay(int year, int month)
	{
		static int monthday[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
		if (month == 2 && ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0))
		{
			return 29;
		}
		else
		{
			return monthday[month];
		}
	}
	Date& operator+=(int x)
	{
		_day += x;
		while (_day > GetMonthDay(_year, _month))
		{
			_day -= GetMonthDay(_year, _month);
			_month++;
			if (_month == 13)
			{
				_year++;
				_month = 1;
			}
		}
		return *this;
	}
	Date operator+(int x)
	{
		Date tmp(*this);
		tmp += x;
		return tmp;
	}
	Date& operator++()
	{
		*this += 1;
		return *this;
	}
	Date operator++(int)//后置++
	{
		//后置++的特性为先使用后++
		//所以返回值this++之前的变量
		Date tmp(*this);
		*this += 1;
		return tmp;
	}
	friend ostream& operator<<(ostream& out, Date& d);
	friend istream& operator>>(istream& in, Date& d);

private:
	int _year;
	int _month;
	int _day;
};

ostream& operator<<(ostream& out, Date& d)
{
	out << d._year << "." << d._month << "." << d._day << endl;
	return out;
}
istream& operator>>(istream& in, Date& d)
{
	in >> d._year >> d._month >> d._day;
	return in;
}
int main()
{
	Date d1(2022, 10, 11);
	cout << d1;//想要输出d1
	Date d2;
	cin >> d2;//想要输入d2
	cout << d2;
	return 0;
}





//class A
//{
//public:
//	A(int x)
//		:_x(x)
//		,__x(x)
//	{}
//	void Show()
//	{
//		cout << _x;
//	}
//private:
//	int _x;
//	int& __x;
//};
//class B
//{
//public:
//	B(int x=5)
//		:_x(x)
//		,_a(1)//显式初始化
//	{}
//	void Show()
//	{
//		cout << _x << " ";
//		_a.Show();
//	}
//private:
//	int _x;
//	A _a;
//};

//class C
//{
//public:
//	C(int x=1)
//		:_y(x)//2.   _y初始化为1
//		,_x(_y)//1.  _y未初始化，是一个随机值，所以_x也是一个随机值
//	{}
//	void Show()
//	{
//		cout << _x << " " << _y << endl;
//	}
//private:
//	int _x;//初始化的顺序是按照声明的顺序来的
//	int _y;
//};

//class D
//{
//public:
//	D(int size=4)
//		:_size(size)
//	{
//		_a = (int*)malloc(sizeof(int) * _size);
//		if (!_a)
//		{
//			perror("malloc fail");
//			exit(-1);
//		}
//	}
//private:
//	int* _a;
//	int _size;
//};
//int main()
//{
//	C c1;
//	c1.Show();
//	return 0;
//}