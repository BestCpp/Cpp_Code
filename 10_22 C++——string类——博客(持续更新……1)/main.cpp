#define _CRT_SECURE_NO_WARNINGS 1

#include <string>
#include <iostream>
using namespace std;


int main()
{
	string s1 = "hello world!";
	int size = s1.size();
	int len = s1.length();
	int cap = s1.capacity();
	bool func = s1.empty();
	return 0;
}


//��Ϊstring��һ���࣬����ʹ��ʱ�������ͷ�ļ���������Ҫ���������ռ�
//int main()
//{
//	string s1;//�����Σ�����һ�����ַ���
//	string s2("hello world");
//	string s3 = "hello world";//��ǰ�ߵȼۣ���ʽת������
//	string s4(s2);//��������
//	cout << s1 << endl;
//	cout << s2 << endl;
//	cout << s3 << endl;
//	cout << s4 << endl;
//	return 0;
//}

//int main()
//{
//	char str1[] = "abc123";
//	char str2[] = ",.;";
//	char str3[] = "���";
//	return 0;
//}