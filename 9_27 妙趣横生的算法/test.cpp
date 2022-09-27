#define _CRT_SECURE_NO_WARNINGS 1


#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

//位运算交换
int main()
{
	int a = 3;
	int b = 5;
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	cout << a << " " << b << endl;
	return 0;
}

//矩阵转置
//void Transport(int(*a)[4],int (*b)[3], int m, int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			b[i][j] = a[j][i];
//		}
//	}
//}
//int main()
//{
//	int arr[3][4] = { {1,2,3,4},{5,6,7,8},{9,0,1,2} };
//	int obj[4][3] = { 0 };
//	Transport(arr,obj, 3, 4);
//	for (int i = 0; i < 4; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			printf("%d ", obj[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//switch语句译码器
//int main()
//{
//	char str[13] = "00101110001";
//	int i = 0;
//	while (i < 13)
//	{
//		switch (str[i])
//		{
//		case '1':cout << "l "; break;
//		case '0':
//		{
//			i++;
//			switch (str[i])
//			{
//			case '1':cout << "e "; break;
//			case '0':
//				{
//					i++;
//					switch (str[i])
//					{
//					case '1':cout << "h "; break;
//					case '0':
//					{
//						i++;
//						switch (str[i])
//						{
//						case '1':cout << "o "; break;
//						}
//						break;
//					}
//					}
//					break;
//				}
//			}
//			break;
//		}
//		}
//		i++;
//	}
//
//}

//字符的ASCLL值
//int main()
//{
//	char ch = 0;
//	cin >> ch;
//	printf("%c is %d", ch, ch);
//	return 0;
//}

//统计字符串类型个数
//int main()
//{
//	char ch = 0;
//	int space = 0, tab = 0, enter = 0;
//	cout << "Please Input Your String:>" << endl;
//	scanf("%c", &ch);
//	while (ch != '@')
//	{
//		switch (ch)
//		{
//		case 32:space++; break;
//		case 9:tab++; break;
//		case 10:enter++; break;
//		}
//		scanf("%c", &ch);
//
//	}
//	cout << "space:" << space << " tab:" << tab << " enter:" << enter << endl;
//	getchar();
//	return 0;
//}

//最优装船问题
//void Loading(int* w, int* x, int c)
//{
//	int mini = 0;
//	int index = 0;
//	while (c >= 0)
//	{
//		for (int i = 0; i <5; i++)
//		{
//			if (w[i] != 0)
//			{
//				mini = i;//找最小的重量
//				break;
//			}
//		}
//	
//		for (int j = 0; j < 5; j++)
//		{
//			if (w[j]!=0 && w[mini] > w[j])
//			{
//				mini = j;
//			}
//		}
//		if (w[mini] <= c)
//		{
//			x[index++]=mini+1;
//		}
//		c -= w[mini];
//		w[mini] = 0;
//
//	}
//}
//int main()
//{
//	int maxC = 13;
//	int weight[5] = { 5,7,6,3,2 };
//	int index[10] = { 0 };
//	Loading(weight, index, maxC);
//	for (int& x : index)
//	{
//		if(x!=0)
//		cout << x << " ";
//	}
//	return 0;
//}

//递归阶乘
//int func(int n)
//{
//	if (n == 1)
//	{
//		return 1;
//	}
//	return func(n - 1) * n;
//}
//int main()
//{
//	int n = 5;
//	int ret = func(n);
//	cout << ret << endl;
//	return 0;
//}

//二分查找
//int Search(int* a,int left,int right, int k)
//{
//	if (left > right)//找不到
//	{
//		return -1;
//	}
//	int mid = (left + right) / 2;
//	if (k > a[mid])
//	{
//		return Search(a, mid + 1, right, k);
//	}
//	else if (k < a[mid])
//	{
//		return Search(a, left, mid - 1, k);
//	}
//	else
//	{
//		return mid;
//	}
//
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int ret = Search(arr, 0,9,k);
//	cout << ret << endl;
//	return 0;
//}


//int func(int n, int m)
//{
//	if (m == 1)
//	{
//		return 1;
//	}
//	if (n < m)
//	{
//		return func(n, n);
//	}
//	if (n == m)
//	{
//		return 1 + func(n, m - 1);
//	}
//	return func(n, m - 1) + func(n - m, m);//公式
//}
//int main()
//{
//	cout << "Please Input a Num>";
//	int n = 0;
//	cin >> n;
//	int ret = func(n, n);
//	cout << ret << endl;
//	return 0;
//}