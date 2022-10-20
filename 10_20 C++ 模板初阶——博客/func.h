#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;
#pragma once

//template <class T>
//T Add(T& a, T& b);

template <class T>
class A
{
public:
	A(int size = 4);
private:
	T* _a;
	int _size;
};