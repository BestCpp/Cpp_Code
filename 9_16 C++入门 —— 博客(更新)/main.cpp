#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;

void ContactInit(int size = 0)
{
	//������������
	;
}
int main()
{
	ContactInit();//�����ǲ�ȷ��ͨѶ¼����ϵ�˸���ʱ
	ContactInit(100);//������ȷ��ͨѶ¼����ϵ�˸���Ϊ100ʱ
	return 0;
}

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