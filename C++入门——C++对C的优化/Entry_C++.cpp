#define _CRT_SECURE_NO_WARNINGS 1

 
#include <stdio.h>

int printf = 0;//�������ǲ���֪��ͷ�ļ�����printf�������

int main()
{
	return 0;
}


//�ֲ��ſ�std��ĳЩ����
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
//int endl = 0;//�޸�std��ԭ����cout��endlֵ
//
//int main()
//{
//	cout << 0 << endl;//�����޷��������
//	return 0;
//}


//int x = 6;
//int main()
//{
//	int x = 30;
//	
//	//���������Ҫʹ��ȫ�ֱ���x�Ļ���Ӧ����ô��
//	std::cout << ::x << std::endl;
//	return 0;
//}

//namespace entry//namespace�ǹؼ���,����������ռ�����֣�����������Զ����
//{
//	int a = 10;//��entry�����ռ��ж�����һ�����ͱ���a
//	int add(int x, int y)//��entry�����ռ��ж�����һ������
//	{
//		return x + y;
//	}
//	struct Stu//��entry�����ռ���������һ���ṹ��
//	{
//		char name[20];
//		int age;
//	};
//	namespace next//��entry�����ռ����ֽ�����һ�������ռ�
//	{
//		int b = 80;
//	}
//}
//
//int main()
//{
//	int a = 30;//�����������entry�����ռ��ڣ����Բ��������ͻ
//
//	std::cout << a << " " << entry::a << std::endl;
//	std::cout << entry::add(3, 6) << std::endl;
//	std::cout << entry::next::b << std::endl;
//	return 0;
//}


//namespace err
//{
//	int x = 60;
//	int x = 30;//ͬһ�������ռ䲻���ظ�����
//	namespace no
//	{
//		int x = 70;//�����������err�����ռ���no�����ռ䣬�ǺϷ���
//	}
//}


//int main()
//{
//	int test = 0;
//	
//	cout << "hello world" << endl;
//	return 0;
//}