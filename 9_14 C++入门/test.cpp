#define _CRT_SECURE_NO_WARNINGS 1
#include "test.h"

using std::cout;
using std::endl;

//КЏЪ§жиди
int add(int x, int y)
{
	return x + y;
}
double add(double x, double y)
{
	return x + y;
}
int main()
{
	Test(8);
	cout << add(1, 2) << " " << add(1.2, 1.4) << endl;
	return 0;
}

