#define _CRT_SECURE_NO_WARNINGS 1


#include <iostream>
#include <vector>
#include <stdio.h>
#include <string>
using namespace std;

template <typename elem>
void display(const vector<elem>& vec)
{
	for (int i = 0; i < vec.size(); i++)
	{
		cout << vec[i] << " ";
	}
	cout << endl;
}
int main()
{
	const char* s[5] = { "hello","world","I love you","Can I help you?","Thanks"};
	vector<string> str(5);
	for (int i = 0; i < 5; i++)
	{
		str.push_back(s[i]);
	}
	int n[5] = { 520,1,3,1,4 };
	vector<int> num;
	for (int i = 0; i < 5; i++)
	{
		num.push_back(n[i]);
	}
	display(str);
	display(num);
	return 0;
}



//bool FibElem(int pos,long long& elem)
//{
//	static long long fib[1024] = { 0 };
//	fib[0] = 1;
//	fib[1] = 1;//斐波那契数列前两个
//	static int size = 2;//此时数列中有两个数
//	if (pos <= 0 || pos > 1024)//不合法的位置
//	{
//		return false;
//	}
//	for (size; size< pos; size++)//如果数列当中的pos位置还没有值，那就进行计算
//	{
//		fib[size] = fib[size - 1] + fib[size - 2];
//	}
//	elem = fib[pos - 1];//如果数列有值，去计算直接赋值
//}
//int main()
//{
//	int pos = 0;
//	long long elem = 0;
//	while (scanf("%d", &pos) != EOF)
//	{
//		bool func = FibElem(pos,elem);
//		if (!func)
//		{
//			cout << "位置不合法！" << endl;
//		}
//		else
//		{
//			cout << "第" << pos << "个位置的值为：" << elem << endl;
//		}
//	}
//	return 0;
//}



//int main()
//{
//	int* p = new int;
//	//*p = 2;
//	cout << *p << endl;
//	delete(p);
//
//	/*int* pa = new int[10];
//	delete pa;*/
//	return 0;
//}


//普通版本
//bool FibElem(int pos, long long& elem)
//{
//	//首先对位置做出判断,我们希望pos不小于0，不大于1024
//	if (pos <= 0 || pos > 1024)
//	{
//		return false;//不合理的位置
//	}
//	elem = 1;//对于第一、第二个位置，elme的值就是1
//	int n1 = 1;
//	int n2 = 1;
//	for (int i = 2; i < pos; i++)
//	{
//		elem = n1 + n2;
//		n1 = n2;
//		n2 = elem;
//
//	}
//	return true;
//}
//int main()
//{
//	int pos = 0;
//	long long elem = 0;
//	while (scanf("%d", &pos) != EOF)
//	{
//		bool func = FibElem(pos,elem);//我们希望通过传入位置，判断此位置的fib值
//		if (!func)
//		{
//			cout << "不合法的传值！" << endl;
//			exit(-1);
//		}
//		cout << "第"<<pos<<"个元素为： "<<elem << endl;
//
//	}
//	return 0;
//}
