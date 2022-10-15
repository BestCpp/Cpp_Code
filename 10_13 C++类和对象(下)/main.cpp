#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;
class Date
{
public:
	explicit Date(int year=1,int month=1,int day=1)
		:_year(year)
		,_month(month)
		,_day(day)
	{
		cout << "我调用了构造函数" << endl;
	}
	/*~Date()
	{
		cout << "我调用了析构函数" << endl;
	}*/
	Date (const Date& d)
	{
		cout << "我调用了拷贝构造" << endl;
	}
	void Display()
	{
		cout << _year << "." << _month << "." << _day << endl;
	}
private:
	int _year;
	int _month;
	int _day;
};

void f1(Date d)
{}

Date f2()
{
	Date tmp;
	return tmp;
}
Date f3()
{
	return Date();
}
int main()
{
	Date ret = f3();
	return 0;
}


//class A
//{
//public:
//	static int Get()
//	{
//		//只能访问类中的静态成员变量
//		return _a;
//	}
//private:
//	static int _a;
//	int _b;
//};

//int A::_a = 1;


//class A
//{
//	friend class B;
//private:
//	int _a;
//	int _b;
//};
//
//class B
//{
//public:
//	void Display()
//	{
//		//可以直接访问A类的所有成员
//		cout << a._a << " " << a._b << endl;
//	}
//private:
//	A a;
//};

