#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

//class SeqList
//{
//public:
//	//���������캯��
//private:
//	int* a = (int*)malloc(sizeof(int));//��û��ʵ�ʵĿ��ٿռ�
//	int size = 20;
//};
//
//int main()
//{
//	SeqList sl;//�ڶ������ʱ������ĳ�Ա��������ʹ��ȱʡֵ
//	return 0;
//}

class B
{
public:
	B()
	{
		_x = 1;
		_y = 1;
		cout << _x << " " << _y << endl;
	}
private:
	int _x;
	int _y;
};



class A
{
public:
		//û���ֶ����幹�캯��
	void Show()
	{
		cout << _a << " " << _b << endl;
	}
	A(A& x)//�������캯��
	{
		_a = x._a;
		_b = x._b;
	}
private:
	int _a=1;
	int _b=1;
	//B b1;
};
int main()
{
	A a1;
	A a2(a1);
	a1.Show();
	return 0;
}

//class A
//{
//public:
//	A()//�޲ι��캯��
//	{
//		_a = 0;
//		_b = 0;
//	}
//	A(int a, int b)//�вι��캯��
//	{
//		_a = a;
//		_b = b;
//	}
//	void Show()
//	{
//		cout << _a << " " << _b << endl;
//	}
//private:
//	int _a;
//	int _b;
//};
//int main()
//{
//	A a1(1, 2);
//	a1.Show();
//	A a2;//���캯��û�в���ʱ����ȷд��
//	a2.Show();
//
//	//A a3();//����д���Ǵ���ģ���Ϊ���뺯����������
//	return 0;
//}