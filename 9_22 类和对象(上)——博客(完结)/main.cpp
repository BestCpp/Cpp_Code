#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;

struct A
{
	int a;
	double b;
};
void Init(A* pa)//在函数内访问结构体变量内容时，需要指针
{
	pa->a = 5;
	pa->b = 3.0;
}
int main()
{
	A a1;
	Init(&a1);
	return 0;
}


class Date
{
public:
	void Init(Date* this,int year, int month, int day)
	{
		this->_year = year;
		this->_month = month;
		this->_day = day;
	}
	void Print(Date* this)
	{
		cout << this->_year << "-" << this->_month << "-" << this->_day << endl;
	}
private:
	int _year; 
	int _month; 
	int _day;
};

int main()
{
	Date d1;
	Date d2;
	d1.Init(&d1,2022, 9, 22);
	d2.Init(&d2,2022, 9, 23);

	d1.Print(&d1);
	d2.Print(&d2);
	return 0;
}

//// 类中既有成员变量，又有成员函数
//class A1 {
//public:
//	void f1() {}
//private:
//	int _a;
//};
//
//// 类中仅有成员函数
//class A2 {
//public:
//	void f2() {}
//};
//
//// 类中什么都没有---空类
//class A3
//{};


//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int a = 3, b = 4;
//	int A = 6, B = 7;
//	//调用的是同一个函数吗？
//	Add(a, b);
//	Add(A, B);
//	return 0;
//}

//计算A类的大小
//class A
//{
//public:
//	void Print()
//	{
//		cout << x << " " << y << " " << z << endl;
//	}
//private:
//	int x;
//	char y;
//	double z;
//};

//int main()
//{
//	A a1;
//	a1.Print();
//	A a2;
//	a2.Print();
//	//不同的对象调用同一个类的函数，调用的是一个函数
//	return 0;
//}


//使用结构体描述一个学生
//struct Student
//{
//	void Learn()
//	{
//		//如何学习……
//	}
//	void Eat()
//	{
//		//如何吃饭……
//	}
//	void Sleep()
//	{
//		//如何睡觉……
//	}
//	char name[20];//姓名
//	int age;//年龄
//	char id[12];//学号
//};


//class Student1
//{
//public:
//	void ShowSt();
//	char name[20];
//	int age;
//	char tele[12];
//};
//
//void ShowSt()
//{
//	cout << name << " " << age << " " << tele << endl;
//}
//
////int main()
////{
////	Student1 stu1;
////	cin >> stu1.name;
////	cin >> stu1.age;
////	cin >> stu1.tele;
////
////	stu1.ShowSt();
////	return 0;
////}
//
//
//struct Student2
//{
//	char name[20];
//	int age;
//	char tele[12];
//};



