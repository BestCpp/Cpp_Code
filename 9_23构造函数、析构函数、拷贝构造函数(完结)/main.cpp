#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <stdlib.h>
#include <assert.h>
using namespace std;

class Stack
{
public:
	Stack(size_t capacity = 10)
	{
		_a = (int*)malloc(capacity * sizeof(int));
		if (nullptr == _a)
		{
			perror("malloc����ռ�ʧ��");
			return;
		}
		_top = 0;
		_capacity = capacity;
	}
	void Push(int x)
	{
		_a[_top++] = x;
	}
	Stack(const Stack& s)//���ǲ�ϣ���ı�ʵ�Σ�ʹ��const����
	{
		_a = (int*)malloc(sizeof(int) * s._top);
		assert(_a);
		memcpy(_a, s._a, sizeof(int) * s._capacity);
		_top = s._top;
		_capacity = s._capacity;
	}
private:
	int* _a ;
	int _top;
	int _capacity;
};

int main()
{
	Stack s1;
	Stack s2(s1);
	s1.Push(1);//�ı�s1����
	s1.Push(2);

	return 0;
}

//class Date
//{
//public:
//	Date(int year = 2000, int month = 1, int day = 1)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//int main()
//{
//	Date d1(2022,9,24);
//	Date d2(d1);//�������캯����ʹ��
//	return 0;
//}



//class Stack
//{
//public:
//	~Stack()//����������д��
//	{
//		free(_a);
//		_a = nullptr;
//		_top = 0;
//		_capacity = 0;
//		cout << "��������" << endl;
//	}
//private:
//	int* _a=(int*)malloc(sizeof(int)*_capacity);
//	int _top=0;
//	int _capacity=4;
//};
//
//class A
//{
//public:
//	//û����ʾ������������
//private:
//	int _a=0;
//	int _b=0;
//	Stack s1;
//};
//int main()
//{
//	Stack A;
//	return 0;
//}//ջ֡����ʱ������A����Զ������͵���������

//class Date
//{
//public:
//	Date()
//	{
//		_year = 2000;
//		_month = 1;
//		_day = 1;
//	}
//	Date(int year = 2000, int month = 1, int day = 1)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//int main()
//{
//	Date d1;
//	return 0;
//}

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

//class B
//{
//public:
//	B()
//	{
//		_x = 1;
//		_y = 1;
//		cout << _x << " " << _y << endl;
//	}
//private:
//	int _x;
//	int _y;
//};
//
//
//
//class A
//{
//public:
//		//û���ֶ����幹�캯��
//	void Show()
//	{
//		cout << _a << " " << _b << endl;
//	}
//	A(A& x)//�������캯��
//	{
//		_a = x._a;
//		_b = x._b;
//	}
//private:
//	int _a=1;
//	int _b=1;
//	//B b1;
//};
//int main()
//{
//	A a1;
//	A a2(a1);
//	a1.Show();
//	return 0;
//}

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