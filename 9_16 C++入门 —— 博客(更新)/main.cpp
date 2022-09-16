#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;

void ContactInit(int size = 0)
{
	//函数具体内容
	;
}
int main()
{
	ContactInit();//当我们不确定通讯录的联系人个数时
	ContactInit(100);//当我们确定通讯录的联系人个数为100时
	return 0;
}

////全缺省
//void test1(int x = 10, int y = 20, int z = 30)
//{
//	cout << x << " " << y << " " << z << endl;
//}
//
////半缺省
//void test2(int x, int y = 20, int z = 30)
//{
//	cout << x << " " << y << " " << z << endl;
//}
//
////错误示范
//void test3(int x = 10, int y, int z = 30)
//{
//	cout << x << " " << y << " " << z << endl;
//
//}
//int main()
//{
//	test1();
//	test1(100, 200);//此时只存在形参z缺省，不能让形参y为缺省参数
//
//	test2();//形参x并不是缺省参数，语法错误
//	test2(100);//给定形参x的值，形参y和z缺省
//
//	return 0;
//}


//void test(int x = 10)
//{
//	cout << x << endl;
//}
//int main()
//{
//	test();//没有指定实参
//	test(80);//指定实参
//	return 0;
//}


//using namespace std;//放开std命名空间中的所有变量、函数、类型等
//using std::cout;
//using std::endl;

//int main()
//{
//	std::cout << "hello world" << std::endl;
//	return 0;
//}



//#include <stdio.h>
//
//namespace B
//{
//	int x = 30;//定义变量
//	void Swap(int* p1, int* p2)//定义函数
//	{
//		int tmp = *p1;
//		*p1 = *p2;
//		*p2 = tmp;
//	}
//	struct Stu//定义类型
//	{
//		char name[20];
//		int age;
//	};
//	namespace C//嵌套定义命名空间
//	{
//		int x = 10;
//	}
//}
//
//namespace B
//{
//	int y = 30;
//}
//
//int main()
//{
//	printf("%d %d\n", B::x, B::y);
//	return 0;
//}


//int x = 10;
//int main()
//{
//	int x = 30;
//	printf("%d\n", x);//使用的是局部变量
//	printf("%d\n", ::x);//使用全局变量
//	return 0;
//}

//namespace A//定义命名空间，空间的昵称是自定义的
//{
//	int printf = 10;//此时printf变量被命名空间A修饰，与头文件中的函数不冲突
//}
//
//int main()
//{
//	printf("%d", A::printf);//要使用A命名空间中的变量必须指明命名空间
//	// :: 是一个作用域限定符
//	return 0;
//}


//int printf;//假设我们不知道头文件中有printf这个函数
//此时就会编译报错
//
//int main()
//{
//	return 0;
//}