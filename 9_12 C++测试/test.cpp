#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <iostream>

namespace test
{
	char printf[] = "hello world";
}
int main()
{
	std::cout <<test::printf << std::endl;
	return 0;
}