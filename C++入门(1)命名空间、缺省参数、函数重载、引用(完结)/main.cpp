#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;

int main()
{
	int x = 0;
	int& rx = x;
	rx = 3;
	//二者完成的功能一致
	//但在语法层面上，引用不占用内存空间
	int* px = &x;
	*px = 3;
	return 0;
}

//int main()
//{
//	double x = 2.55;
//	int& rx = x;//x隐式转换生成的变量具有常属性,报错
//	const int& rrx = x;//合法匹配
//	return 0;
//}

//int main()
//{
//	double x = 3.14;
//	int y = x;//x发生隐式转换，产生一个int类型的临时变量
//	return 0;
//}

//int& func()
//{
//	static int n = 0;
//	n++;
//	int& rn = n;
//	return rn;
//}
//int& test()
//{
//	int n = 3;
//	n++;
//	int& rn = n;
//	return rn;
//}
//
//int main()
//{
//	int& ret = func();
//	cout << ret << endl;
//	cout << ret << endl;
//	ret = test();//不能保证原有的空间不被新的变量覆盖
//	cout << ret << endl;
//	return 0;
//}


//int main()
//{
//	//可能会出现三种情况
//	//原来的值 随机值 被篡改的值
//	int& ret = func();
//	cout << ret << endl;//原有的值
//	
//	cout << ret << endl;//随机值
//
//	ret = test();
//	cout << ret << endl;//被篡改的值
//	return 0;
//}

//int func()
//{
//	int n = 0;
//	n++;
//	return n;
//}
//int main()
//{
//	int ret = func();//为什么ret能够接收n的值？
//	return 0;
//}



//void Swap(int& x, int& y)
//{
//	int tmp = x;
//	x = y;
//	y = tmp;
//}
////构成函数重载
//void Swap(int* x, int* y)
//{
//	int tmp = *x;
//	*x = *y;
//	*y = tmp;
//}
//
//
//int add(const int& x, int& y)//实体b的引用权限被放大，报错
//{
//	return x + y;
//}
//int main()
//{
//	int a = 10;
//	const int b = 30;
//	add(a, b);
//	return 0;
//}

//int main()
//{
//	const int x = 3;
//	int& rx = x;//引用类型与实体类型不一致，报错
//	const int& rrx = x;//必须保证两边类型一致
//
//	int y = 6;
//	int& ry = y;
//	const int& rry = y;//权限可以被缩小
//	int& rrry = rry;//但是不能被放大，此处报错
//	return 0;
//}


//int main()
//{
//	int n = 0;
//	int m = 0;
//	int& rn = n;
//	int& rn = m;
//	return 0;
//}

//int main()
//{
//	int x = 0;
//	int& rx = x;
//	int& rrx;//定义引用必须初始化
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	int& rn = n;
//	int& rrn = n;
//	int& rrrn = rrn;//即使是对rrn取别名，但rrn也是实体
//	return 0;
//}

//int main()
//{
//	int x = 0;
//	int& rx = x;
//	rx = 3;
//	cout << x << endl;
//	return 0;
//}

//void Print(int x = 10)
//{
//	cout << x << endl;
//}
//
//void Print()
//{
//	cout << "hello world" << endl;
//}
//
//int main()
//{
//	Print(20);
//	//Print();//如果实参为空，那么会调用哪个Print函数呢？
//	return 0;
//}



////交换整型数据
//void Swap(int* p1, int* p2)
//{
//	int tmp = *p1;
//	*p1 = *p2;
//	*p2 = tmp;
//}
////交换字符数据
//void Swap(char* p1, char* p2)
//{
//	char tmp = *p1;
//	*p1 = *p2;
//	*p2 = tmp;
//}
////交换浮点型数据
//void Swap(double* p1, double* p2)
//{
//	double tmp = *p1;
//	*p1 = *p2;
//	*p2 = tmp;
//}
//int main()
//{
//	int a = 1, b = 2;
//	Swap(&a, &b);
//
//	char x = 'w', y = 'v';
//	Swap(&x, &y);
//
//	double n = 1.123, m = 2.345;
//	Swap(&n, &m);
//	return 0;
//}



//void Print(int x, int y, int z);
//void Print(char x, char y, char z);
//void Print(double x, double y);
//
//void Print(int x, char y, double z);
//void Print(char y, int x, double z);
//void Pirnt(double z, int x, char y);
//
//int main()
//{
//	return 0;
//}

//void Swap(int* p1, int* p2)
//{
//	;
//}
//
////不构成重载
//void Swap(int* p2, int* p1)
//{
//	;
//}
//
//int main()
//{
//	return 0;
//}



////当我们要计算两个数之和时，处理的数据不可能总为整数或总为浮点数
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//double Add(double x, double y)
//{
//	return x + y;
//}
//
//int main()
//{
//	Add(1, 2);//调用形参都为整数的函数
//	Add(1.2, 1.4);//调用形参都为浮点数的函数
//	return 0;
//}


//void ContactInit(int size = 0)
//{
//	//函数具体内容
//	;
//}
//int main()
//{
//	ContactInit();//当我们不确定通讯录的联系人个数时
//	ContactInit(100);//当我们确定通讯录的联系人个数为100时
//	return 0;
//}

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