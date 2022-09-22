#define _CRT_SECURE_NO_WARNINGS 1

#include "Stack.h"

void Stack::StackInit(StackData capacity)
{
	_capacity = capacity;
	_a = (StackData*)malloc(sizeof(StackData) * capacity);
	_top = 0;
	_capacity = capacity;
	assert(_a);
}


static StackData* CreateCapcity(StackData*& a,int& capacity)
{
	int newCapacity = 2*capacity;
	StackData* tmp = (StackData*)realloc(a,sizeof(StackData) * newCapacity);
	assert(tmp);
	capacity = newCapacity;
	a = tmp;
	return tmp;
}
void Stack::StackPush(StackData data)
{
	if (_top == _capacity)
	{
		CreateCapcity(_a,_capacity);
	}
	_a[_top] = data;
	_top++;
}

void Stack::PrintStack()
{
	for (int i = _top-1; i >=0; i--)
	{
		cout << _a[i] << " ";
	}
	cout << endl;
}

StackData Stack::StackTop()
{
	return _a[_top-1];
}

void Stack::StackPop()
{
	_top--;
}

void Stack::StackDestroy()
{
	free(_a);
	_a = nullptr;
	_top = 0;
	_capacity = 0;
}

int Stack::StackSize()
{
	return _top;
}