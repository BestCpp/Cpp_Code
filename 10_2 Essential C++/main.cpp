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
//	fib[1] = 1;//쳲���������ǰ����
//	static int size = 2;//��ʱ��������������
//	if (pos <= 0 || pos > 1024)//���Ϸ���λ��
//	{
//		return false;
//	}
//	for (size; size< pos; size++)//������е��е�posλ�û�û��ֵ���Ǿͽ��м���
//	{
//		fib[size] = fib[size - 1] + fib[size - 2];
//	}
//	elem = fib[pos - 1];//���������ֵ��ȥ����ֱ�Ӹ�ֵ
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
//			cout << "λ�ò��Ϸ���" << endl;
//		}
//		else
//		{
//			cout << "��" << pos << "��λ�õ�ֵΪ��" << elem << endl;
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


//��ͨ�汾
//bool FibElem(int pos, long long& elem)
//{
//	//���ȶ�λ�������ж�,����ϣ��pos��С��0��������1024
//	if (pos <= 0 || pos > 1024)
//	{
//		return false;//�������λ��
//	}
//	elem = 1;//���ڵ�һ���ڶ���λ�ã�elme��ֵ����1
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
//		bool func = FibElem(pos,elem);//����ϣ��ͨ������λ�ã��жϴ�λ�õ�fibֵ
//		if (!func)
//		{
//			cout << "���Ϸ��Ĵ�ֵ��" << endl;
//			exit(-1);
//		}
//		cout << "��"<<pos<<"��Ԫ��Ϊ�� "<<elem << endl;
//
//	}
//	return 0;
//}
