#define _CRT_SECURE_NO_WARNINGS 1

#include "func.h"

template <class T>
A<T>::A(int size)
{
	//……
}

//显示实例化
template class A<int>;

//#include <iostream>
//using namespace std;
//#pragma once
//
//template <class T>
//T Add(T& a, T& b)
//{
//	return a + b;
//}
//
////显示实例化：告诉编译器有类型
//template int Add<int>(int&,int&);