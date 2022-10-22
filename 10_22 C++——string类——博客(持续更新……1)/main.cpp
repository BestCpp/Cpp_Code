#define _CRT_SECURE_NO_WARNINGS 1

#include <string>
#include <iostream>
using namespace std;


int main()
{
	string s1 = "hello world!";
	int size = s1.size();
	int len = s1.length();
	int cap = s1.capacity();
	bool func = s1.empty();
	return 0;
}


//因为string是一个类，所以使用时必须包含头文件，并且需要操作命名空间
//int main()
//{
//	string s1;//不传参，构造一个空字符串
//	string s2("hello world");
//	string s3 = "hello world";//与前者等价，隐式转换问题
//	string s4(s2);//拷贝构造
//	cout << s1 << endl;
//	cout << s2 << endl;
//	cout << s3 << endl;
//	cout << s4 << endl;
//	return 0;
//}

//int main()
//{
//	char str1[] = "abc123";
//	char str2[] = ",.;";
//	char str3[] = "你好";
//	return 0;
//}