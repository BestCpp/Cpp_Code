#define _CRT_SECURE_NO_WARNINGS 1

#include <stdlib.h>
#include <iostream>
using namespace std;

class A
{
public:
	A(int x=0)
		:_x(0)
		,_pt((int*)malloc(sizeof(int)*10))
	{
		cout << "�ҵ����˹��캯��" << endl;
	}
	~A()
	{
		free(_pt);
		_pt = nullptr;
		cout << "�ҵ�������������" << endl;
	}
private:
	int* _pt;
	int _x;
};

int main()
{
	/*A* p = new A;
	delete p;*/

	int* pt = new int[10];
	delete pt;
	return 0;
}
//int main()
//{
//	/*A* p1 = (A*)malloc(sizeof(A));
//	free(p1);*/
//
	/*A* p1 = new A[10];
	delete p1;*/
//	return 0;
//}


//int main()
//{
//	int* p1 = new int;
//	//�ȼ���
//	int* p1 = (int*)malloc(sizeof(int));
//
//	delete p1;
//	//�ȼ���
//	free(p1);
//
//	int* p2 = new int(20);
//	//�ȼ���
//	int* p2 = (int*)malloc(sizeof(int));
//	*p2 = 20;
//
//	int* p3 = new int[10];
//	//�ȼ���
//	int* p3 = (int*)malloc(sizeof(int)*10);
//
//	delete[] p3;
//	//�ȼ���
//	free(p3);
//
//	int* p4 = new int[10]{ 1,2,3,4 };
//	//�ȼ���
//	int* p4 = (int*)malloc(sizeof(int) * 10);
//	for (int i = 0; i < 10; i++)
//	{
//		if (i < 4)
//		{
//			p4[i]=i;
//		}
//		else
//		{
//			p4[i]=0;
//		}
//	}
//
//	return 0;
//}

//int main()
//{
//	int* p1 = (int*)malloc(sizeof(int) * 10);
//	
//	//��������ռ��СΪ sizeof(char)*10 �Ŀռ�
//	char* p2 = (char*)calloc(3, sizeof(char) * 10);
//	char* p3 = (char*)realloc(p2, sizeof(char*) * 20);
//	free(p1);
//	//�Ƿ���Ҫ�ͷ�p2?
//	free(p2);
//	free(p3);
//	return 0;
//}

//int globalVar = 1;
//static int staticGlobalVar = 1;
//void Test()
//{
//	static int staticVar = 1;
//	int localVar = 1;
//	int num1[10] = { 1, 2, 3, 4 };
//	char char2[] = "abcd";
//	const char* pChar3 = "abcd";
//	int* ptr1 = (int*)malloc(sizeof(int) * 4);
//	int* ptr2 = (int*)calloc(4, sizeof(int));
//	int* ptr3 = (int*)realloc(ptr2, sizeof(int) * 4);
//	free(ptr1);
//	free(ptr3);
//}