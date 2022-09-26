#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <stdlib.h>
#include <assert.h>
using namespace std;

class Stack
{
public:
	Stack(size_t capacity = 10)
	{
		_a = (int*)malloc(capacity * sizeof(int));
		if (nullptr == _a)
		{
			perror("malloc申请空间失败");
			return;
		}
		_top = 0;
		_capacity = capacity;
	}
	void Push(int x)
	{
		_a[_top++] = x;
	}
	Stack(const Stack& s)//我们不希望改变实参，使用const修饰
	{
		_a = (int*)malloc(sizeof(int) * s._top);
		assert(_a);
		memcpy(_a, s._a, sizeof(int) * s._capacity);
		_top = s._top;
		_capacity = s._capacity;
	}
private:
	int* _a ;
	int _top;
	int _capacity;
};

int main()
{
	Stack s1;
	Stack s2(s1);
	s1.Push(1);//改变s1对象
	s1.Push(2);

	return 0;
}

//class Date
//{
//public:
//	Date(int year = 2000, int month = 1, int day = 1)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//int main()
//{
//	Date d1(2022,9,24);
//	Date d2(d1);//拷贝构造函数的使用
//	return 0;
//}



//class Stack
//{
//public:
//	~Stack()//析构函数的写法
//	{
//		free(_a);
//		_a = nullptr;
//		_top = 0;
//		_capacity = 0;
//		cout << "析构函数" << endl;
//	}
//private:
//	int* _a=(int*)malloc(sizeof(int)*_capacity);
//	int _top=0;
//	int _capacity=4;
//};
//
//class A
//{
//public:
//	//没有显示定义析构函数
//private:
//	int _a=0;
//	int _b=0;
//	Stack s1;
//};
//int main()
//{
//	Stack A;
//	return 0;
//}//栈帧销毁时，调用A类的自定义类型的析构函数

//class Date
//{
//public:
//	Date()
//	{
//		_year = 2000;
//		_month = 1;
//		_day = 1;
//	}
//	Date(int year = 2000, int month = 1, int day = 1)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//int main()
//{
//	Date d1;
//	return 0;
//}

//class SeqList
//{
//public:
//	//不给定构造函数
//private:
//	int* a = (int*)malloc(sizeof(int));//并没有实质的开辟空间
//	int size = 20;
//};
//
//int main()
//{
//	SeqList sl;//在定义对象时，对象的成员变量将会使用缺省值
//	return 0;
//}

//class B
//{
//public:
//	B()
//	{
//		_x = 1;
//		_y = 1;
//		cout << _x << " " << _y << endl;
//	}
//private:
//	int _x;
//	int _y;
//};
//
//
//
//class A
//{
//public:
//		//没有手动定义构造函数
//	void Show()
//	{
//		cout << _a << " " << _b << endl;
//	}
//	A(A& x)//拷贝构造函数
//	{
//		_a = x._a;
//		_b = x._b;
//	}
//private:
//	int _a=1;
//	int _b=1;
//	//B b1;
//};
//int main()
//{
//	A a1;
//	A a2(a1);
//	a1.Show();
//	return 0;
//}

//class A
//{
//public:
//	A()//无参构造函数
//	{
//		_a = 0;
//		_b = 0;
//	}
//	A(int a, int b)//有参构造函数
//	{
//		_a = a;
//		_b = b;
//	}
//	void Show()
//	{
//		cout << _a << " " << _b << endl;
//	}
//private:
//	int _a;
//	int _b;
//};
//int main()
//{
//	A a1(1, 2);
//	a1.Show();
//	A a2;//构造函数没有参数时的正确写法
//	a2.Show();
//
//	//A a3();//这种写法是错误的，因为会与函数声明混淆
//	return 0;
//}