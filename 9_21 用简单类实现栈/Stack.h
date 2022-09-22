#define _CRT_SECURE_NO_WARNINGS 1

#include <stdlib.h>
#include <assert.h>
#include <iostream>
using std::cout;
using std::endl;


typedef int StackData;

class Test
{
public:
	Test()
	{
		_a = 3;
		cout << _a << endl;
	}
private:
	int _a;
};
class Stack
{
public:
	//¹¹Ôìº¯Êý
	/*Stack(int capacity = 4)
	{
		 _a = (StackData*)malloc(sizeof(StackData) * capacity);
		assert(_a);
		_top = 0;
		_capacity = capacity;
	}*/
	~Stack()
	{
		free(_a);
		_a = nullptr;
		_top = 0;
		_capacity = 0;
	}
public:
	void StackInit(StackData capacity = 4);
	void StackPush(StackData data);
	void PrintStack();
	StackData StackTop();
	void StackPop();
	void StackDestroy();
	int StackSize();
private:
	StackData* _a;
	int _capacity;
	int _top;
	Test _t;
};