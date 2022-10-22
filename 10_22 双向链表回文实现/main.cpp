#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;

template <typename T>
class List
{
public:
	List(T val=0)//���캯��
		:_val(val)
	{
		_next = this;
		_prev = this;
	}

	void Push_Back(T x) //β�壬���ֻ����ͷ�ڵ㣬��ôβ��ͻ�ı�this������
	{
		List* newnode = new List(x);
		_prev->_next = newnode;
		newnode->_prev = _prev;
		_prev = newnode;
		newnode->_next = this;
	}

	void Pop_Back() //βɾ
	{
		List* del = _prev;
		if (del == this)
		{
			cout << "�������޽ڵ㣡" << endl;
			return;
		}
		_prev = del->_prev;
		_prev->_next = this;
		delete del;
	}

	//����������
	friend ostream& operator<<(ostream& out, const List& l)
	{
		List* tmp = l._next;
		cout << "head" << "<->";
		while (tmp != &l)
		{
			out << tmp->_val << "<->";
			tmp = tmp->_next;
		}
		cout << "head";
		return out;
	}

	//�ж��Ƿ�Ϊ����
	friend bool Func(const List& l)//��Ϊ��Ԫ��������
	{
		List* begin = l._next;
		List* end = l._prev;
		while (begin->_next != end && end->_prev != begin)
		{
			if (begin->_val != end->_val)
			{
				return false;
			}
			begin = begin->_next;
			if (begin->_next == end)
			{
				break;
			}
			end = end->_prev;
		}
		return true;
	}
private:
	T _val;
	List* _next;
	List* _prev;
};

int main()
{
	//List<int> l1;
	//l1.Push_Back(1);
	//l1.Push_Back(2);
	//l1.Push_Back(2);
	//l1.Push_Back(2);
	//cout << l1<<endl;
	//cout << Func(l1) << endl;

	List<char> l2;
	l2.Push_Back('a');
	l2.Push_Back('b');
	l2.Push_Back('b');
	l2.Push_Back('a');
	l2.Push_Back('c');

	l2.Pop_Back();

	cout << l2 << endl;
	cout << Func(l2) << endl;
	return 0;
}