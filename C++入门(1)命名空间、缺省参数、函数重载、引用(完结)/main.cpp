#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;

int main()
{
	int x = 0;
	int& rx = x;
	rx = 3;
	//������ɵĹ���һ��
	//�����﷨�����ϣ����ò�ռ���ڴ�ռ�
	int* px = &x;
	*px = 3;
	return 0;
}

//int main()
//{
//	double x = 2.55;
//	int& rx = x;//x��ʽת�����ɵı������г�����,����
//	const int& rrx = x;//�Ϸ�ƥ��
//	return 0;
//}

//int main()
//{
//	double x = 3.14;
//	int y = x;//x������ʽת��������һ��int���͵���ʱ����
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
//	ret = test();//���ܱ�֤ԭ�еĿռ䲻���µı�������
//	cout << ret << endl;
//	return 0;
//}


//int main()
//{
//	//���ܻ�����������
//	//ԭ����ֵ ���ֵ ���۸ĵ�ֵ
//	int& ret = func();
//	cout << ret << endl;//ԭ�е�ֵ
//	
//	cout << ret << endl;//���ֵ
//
//	ret = test();
//	cout << ret << endl;//���۸ĵ�ֵ
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
//	int ret = func();//Ϊʲôret�ܹ�����n��ֵ��
//	return 0;
//}



//void Swap(int& x, int& y)
//{
//	int tmp = x;
//	x = y;
//	y = tmp;
//}
////���ɺ�������
//void Swap(int* x, int* y)
//{
//	int tmp = *x;
//	*x = *y;
//	*y = tmp;
//}
//
//
//int add(const int& x, int& y)//ʵ��b������Ȩ�ޱ��Ŵ󣬱���
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
//	int& rx = x;//����������ʵ�����Ͳ�һ�£�����
//	const int& rrx = x;//���뱣֤��������һ��
//
//	int y = 6;
//	int& ry = y;
//	const int& rry = y;//Ȩ�޿��Ա���С
//	int& rrry = rry;//���ǲ��ܱ��Ŵ󣬴˴�����
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
//	int& rrx;//�������ñ����ʼ��
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	int& rn = n;
//	int& rrn = n;
//	int& rrrn = rrn;//��ʹ�Ƕ�rrnȡ��������rrnҲ��ʵ��
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
//	//Print();//���ʵ��Ϊ�գ���ô������ĸ�Print�����أ�
//	return 0;
//}



////������������
//void Swap(int* p1, int* p2)
//{
//	int tmp = *p1;
//	*p1 = *p2;
//	*p2 = tmp;
//}
////�����ַ�����
//void Swap(char* p1, char* p2)
//{
//	char tmp = *p1;
//	*p1 = *p2;
//	*p2 = tmp;
//}
////��������������
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
////����������
//void Swap(int* p2, int* p1)
//{
//	;
//}
//
//int main()
//{
//	return 0;
//}



////������Ҫ����������֮��ʱ����������ݲ�������Ϊ��������Ϊ������
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
//	Add(1, 2);//�����βζ�Ϊ�����ĺ���
//	Add(1.2, 1.4);//�����βζ�Ϊ�������ĺ���
//	return 0;
//}


//void ContactInit(int size = 0)
//{
//	//������������
//	;
//}
//int main()
//{
//	ContactInit();//�����ǲ�ȷ��ͨѶ¼����ϵ�˸���ʱ
//	ContactInit(100);//������ȷ��ͨѶ¼����ϵ�˸���Ϊ100ʱ
//	return 0;
//}

////ȫȱʡ
//void test1(int x = 10, int y = 20, int z = 30)
//{
//	cout << x << " " << y << " " << z << endl;
//}
//
////��ȱʡ
//void test2(int x, int y = 20, int z = 30)
//{
//	cout << x << " " << y << " " << z << endl;
//}
//
////����ʾ��
//void test3(int x = 10, int y, int z = 30)
//{
//	cout << x << " " << y << " " << z << endl;
//
//}
//int main()
//{
//	test1();
//	test1(100, 200);//��ʱֻ�����β�zȱʡ���������β�yΪȱʡ����
//
//	test2();//�β�x������ȱʡ�������﷨����
//	test2(100);//�����β�x��ֵ���β�y��zȱʡ
//
//	return 0;
//}


//void test(int x = 10)
//{
//	cout << x << endl;
//}
//int main()
//{
//	test();//û��ָ��ʵ��
//	test(80);//ָ��ʵ��
//	return 0;
//}


//using namespace std;//�ſ�std�����ռ��е����б��������������͵�
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
//	int x = 30;//�������
//	void Swap(int* p1, int* p2)//���庯��
//	{
//		int tmp = *p1;
//		*p1 = *p2;
//		*p2 = tmp;
//	}
//	struct Stu//��������
//	{
//		char name[20];
//		int age;
//	};
//	namespace C//Ƕ�׶��������ռ�
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
//	printf("%d\n", x);//ʹ�õ��Ǿֲ�����
//	printf("%d\n", ::x);//ʹ��ȫ�ֱ���
//	return 0;
//}

//namespace A//���������ռ䣬�ռ���ǳ����Զ����
//{
//	int printf = 10;//��ʱprintf�����������ռ�A���Σ���ͷ�ļ��еĺ�������ͻ
//}
//
//int main()
//{
//	printf("%d", A::printf);//Ҫʹ��A�����ռ��еı�������ָ�������ռ�
//	// :: ��һ���������޶���
//	return 0;
//}


//int printf;//�������ǲ�֪��ͷ�ļ�����printf�������
//��ʱ�ͻ���뱨��
//
//int main()
//{
//	return 0;
//}