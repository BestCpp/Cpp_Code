#define _CRT_SECURE_NO_WARNINGS 1


void Swap(int* a, int* b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
int Part1(int* a, int n ,int left, int right)//Hoare排序算法
{
	int keyi = left;
	while (left < right)
	{
		while (left < right && a[right] >= a[keyi])
		{
			right--;
		}
		while (left < right && a[left] <= a[keyi])
		{
			left++;
		}
		if (left < right)
		{
			Swap(&a[left], &a[right]);
		}
	}
	Swap(&a[keyi], &a[left]);
	keyi = left;
	return keyi;
}


int QuickSelect(int* a, int n, int left, int right)
{
	int keyi = Part1(a, n, left, right);
	if (keyi == n-1)
	{
		return keyi;
	}
	else if(keyi > n-1)
	{
		return QuickSelect(a, n, left, keyi - 1);
	}
	else
	{
		return QuickSelect(a, n, keyi + 1, right);
	}
	return -1;
}



int main()
{
	int arr[10] = { 45,56,123,56,7,12,6,78,324,775 };
	int ret = QuickSelect(arr,2, 0, 9);//找第n小的数
	return 0;
}