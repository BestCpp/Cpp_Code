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
////����ģ���ⶨ���Ա��������Ҫָ���˺��������ĸ���ģ��
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
//class ��ģ����
//{
//	// ���ڳ�Ա����
//};
//int main()
//{
//
//	return 0;
//}
////��ģ�庯��
//int Add(int a, int b)
//{
//	return a + b;
//}
//
////ͬ����ģ�庯��
//template <typename T1,typename T2>
//T1 Add(T1 a, T2 b)
//{
//	return a + b;
//}
//int main()
//{
//	Add(1, 3);//ֱ��ѡ���ģ�庯��
//	Add(5, 3.1);//����ģ�庯�����ӷ���
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
//	��ʾʵ������ȷ��ģ�����������
//	��ʵ����ģ����������Ͳ�һ����ᷢ������ת��
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