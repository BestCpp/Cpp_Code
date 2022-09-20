#define _CRT_SECURE_NO_WARNINGS 1


#include <iostream>
using namespace std;

//void f(int)
//{
//	cout << "f(int)" << endl;
//}
//
//void f(int*)
//{
//	cout << "f(int*)" << endl;
//}
//
//int main()
//{
//	f(0);
//	f(NULL);
//	f(nullptr);
//	return 0;
//}
// 
// 
int main()
{
	int arr[] = { 123,45,124,56,123,67,76,234,758,234,65,246 };
	for (auto tmp : arr)
	{
		cout << tmp << " ";
	}
	cout<<endl;
	for (auto& x : arr)
	{
		x *= 2;
	}
	for (auto tmp : arr)
	{
		cout << tmp << " ";
	}
	return 0;
}

//void f(auto x)
//{
//
//}
//void f(double x)
//{
//
//}
//int main()
//{
//	double a = 5;
//	f(a);
//	return 0;
//}


//int main()
//{
//	auto a = 10;
//	auto b = a;
//	auto& c = a;
//	cout << typeid(a).name() << endl;
//	cout << typeid(b).name() << endl;
//	cout << typeid(c).name() << endl;
//
//	auto x = 1.55;
//	auto px = &x;
//	cout << typeid(x).name() << endl;
//	cout << typeid(px).name() << endl;
//
//	//auto z;//未初始化将无法推导z的类型
//	return 0;
//}

//inline void Swap(int* p1, int* p2)
//{
//	int tmp = *p1;
//	*p1 = *p2;
//	*p2 = tmp;
//}
//void QuickSort_Hoare()
//{
//	int x = 1000;
//	//...
//	while (x--)
//	{
//		int left = 3;
//		int right = 5;
//		Swap(&left, &right);//Swap函数规模小，且被频繁调用
//	}
//
//	//...
//}
//int main()
//{
//	QuickSort_Hoare();
//	return 0;
//}
//inline int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	cout << Add(1, 2) << endl;
//	return 0;
//}

//#define ADD(x,y) ((x)+(y))
//int main()
//{
//	cout << ADD(1, 2) << endl;
//	return 0;
//}