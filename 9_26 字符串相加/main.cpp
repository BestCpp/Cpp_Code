#define _CRT_SECURE_NO_WARNINGS 1

#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <iostream>

void StringRreverse(char* str)
{
	int left = 0;
	int right = strlen(str) - 1;
	while (left < right)
	{
		char tmp = str[left];
		str[left] = str[right];
		str[right] = tmp;
		left++;
		right--;
	}
}
char* StringAdd(char* a, char* b)
{
	int lena = strlen(a)-1;
	int lenb = strlen(b)-1;
	int max_len = lena > lenb ? lena : lenb;
	char* ret = (char*)malloc(sizeof(char) * (max_len + 3));
	assert(ret);
	int i = 0;//控制ret数组下标
	int carry = 0;//进位
	while (lena >= 0 && lenb >= 0)
	{
		int sum = a[lena] - '0' + b[lenb] - '0' + carry;
		carry = sum / 10;
		sum %= 10;
		ret[i++] = sum + '0';
		lena--;
		lenb--;
	}
	while (lena >= 0)
	{
		int sum = a[lena] - '0' + carry;
		carry = sum / 10;
		sum %= 10;
		ret[i++] = sum + '0';
		lena--;
	}
	while (lenb >= 0)
	{
		int sum =  b[lenb] - '0' + carry;
		carry = sum / 10;
		sum %= 10;
		ret[i++] = sum + '0';
		lenb--;
	}
	if (carry > 0)
	{
		ret[i++] = carry + '0';
	}
	ret[i] = '\0';
	StringRreverse(ret);
	return ret;
}
int main()
{
	char str1[] = "999999999";
	char str2[] = "1";
	char* ret = StringAdd(str1, str2);
	std::cout << ret << std::endl;
	return 0;
}