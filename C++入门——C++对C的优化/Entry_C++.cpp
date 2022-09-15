#define _CRT_SECURE_NO_WARNINGS 1

 
#include <stdio.h>

int printf = 0;//假设我们并不知道头文件中有printf这个函数

int main()
{
	return 0;
}


//局部放开std中某些变量
//using std::cout;
//using std::endl;
//
//int main()
//{
//	cout << "hello world" << endl;
//	return 0;
//}

//using namespace std;
//
//int cout = 0;
//int endl = 0;//修改std中原本的cout、endl值
//
//int main()
//{
//	cout << 0 << endl;//导致无法正常输出
//	return 0;
//}


//int x = 6;
//int main()
//{
//	int x = 30;
//	
//	//如果我们想要使用全局变量x的话，应该这么做
//	std::cout << ::x << std::endl;
//	return 0;
//}

//namespace entry//namespace是关键字,后面跟命名空间的名字，这个名字是自定义的
//{
//	int a = 10;//在entry命名空间中定义了一个整型变量a
//	int add(int x, int y)//在entry命名空间中定义了一个函数
//	{
//		return x + y;
//	}
//	struct Stu//在entry命名空间中声明了一个结构体
//	{
//		char name[20];
//		int age;
//	};
//	namespace next//在entry命名空间中又建立了一个命名空间
//	{
//		int b = 80;
//	}
//}
//
//int main()
//{
//	int a = 30;//这个变量不在entry命名空间内，所以不会引起冲突
//
//	std::cout << a << " " << entry::a << std::endl;
//	std::cout << entry::add(3, 6) << std::endl;
//	std::cout << entry::next::b << std::endl;
//	return 0;
//}


//namespace err
//{
//	int x = 60;
//	int x = 30;//同一个命名空间不能重复定义
//	namespace no
//	{
//		int x = 70;//这个变量属于err命名空间中no命名空间，是合法的
//	}
//}


//int main()
//{
//	int test = 0;
//	
//	cout << "hello world" << endl;
//	return 0;
//}