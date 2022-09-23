#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

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

class B
{
public:
	B()
	{
		_x = 1;
		_y = 1;
		cout << _x << " " << _y << endl;
	}
private:
	int _x;
	int _y;
};



class A
{
public:
		//没有手动定义构造函数
	void Show()
	{
		cout << _a << " " << _b << endl;
	}
	A(A& x)//拷贝构造函数
	{
		_a = x._a;
		_b = x._b;
	}
private:
	int _a=1;
	int _b=1;
	//B b1;
};
int main()
{
	A a1;
	A a2(a1);
	a1.Show();
	return 0;
}

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