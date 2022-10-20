#define _CRT_SECURE_NO_WARNINGS 1

#include "func.h"

//#include <iostream>
//using namespace std;
//#pragma once

int main()
{
	A<int> a1;
	/*int a = 3, b = 4;
	Add<int>(a, b);*/
	return 0;
}


//template <typename StackDate>
//class Stack
//{
//public:
//	Stack(int capacity=4,int top=0)
//		:_a(new StackDate[capacity])
//		,_top(top)
//		,_capacity(capacity)
//	{}
//	~Stack()
//	{
//		delete[] _a;
//		_top = _capacity = 0;
//	}
//	void Push(StackDate x);
//	void Show()
//	{
//		for (int i = 0; i < _top; i++)
//		{
//			cout << _a[i] << " ";
//		}
//	}
//private:
//	StackDate* _a;
//	int _top;
//	int _capacity;
//};
//
////在类模板外定义成员函数，需要指明此函数属于哪个类模板
//template <typename StackDate>
//void Stack<StackDate>::Push(StackDate x)
//{
//	_a[_top++] = x;
//}
//
//int main()
//{
//	Stack<int> s1;
//	Stack<char> s2;
//	Stack<double> s3;
//	return 0;
//}


//class Stack_Int
//{
//	//...
//public:
//	void Push(int x);
//};
//
//class Stack_Char
//{
//	//...
//public:
//	void Push(char x);
//};
//
////...

//template<class T1, class T2, ..., class Tn>
//class 类模板名
//{
//	// 类内成员定义
//};
//int main()
//{
//
//	return 0;
//}
////非模板函数
//int Add(int a, int b)
//{
//	return a + b;
//}
//
////同名的模板函数
//template <typename T1,typename T2>
//T1 Add(T1 a, T2 b)
//{
//	return a + b;
//}
//int main()
//{
//	Add(1, 3);//直接选择非模板函数
//	Add(5, 3.1);//调用模板函数更加方便
//	return 0;
//}
//template <typename T>
//void Swap(const T& a, const T& b)
//{
//	T tmp = a;
//	a = b;
//	b = tmp;
//}
//int main()
//{
//	int a = 1, b = 3;
//	char c = '5', d = '10';
//	显示实例化先确定模板参数的类型
//	若实参与模板参数的类型不一致则会发生类型转换
//	Swap<int>(a, c);
//	Swap<char>(b, d);
//	return 0;
//}

//void Swap(int& a, int& b)
//{
//	int tmp = a;
//	a = b;
//	b = tmp;
//}
//
//void Swap(char& a, char& b)
//{
//	char tmp = a;
//	a = b;
//	b = tmp;
//}
//
//void Swap(double& a, double& b)
//{
//	double tmp = a;
//	a = b;
//	b = tmp;
//}