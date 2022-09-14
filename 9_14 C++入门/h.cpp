#pragma once
#include "test.h"
using std::cout;
using std::endl;

//缺省函数的缺省值不能在 源文件 和 头文件重复定义
void Test(int x)
{
	cout << x << endl;
}