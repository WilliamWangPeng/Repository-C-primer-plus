#ifndef STACK_H
#define STACK_H

#include <exception>        //�Զ�����һ����ջ
#include <deque>

template<class T>
class Stack
{
protected:
	std::deque<T> c;   //dequeҲ��һ������,��̬�߶�����;

public:
	class ReadEmptySatck : public std::exception
	{
	public:
		virtual const char* what() const throw()  //������дwhat
		{
			return "read empty stack";
		}
	};

	bool empty()
	{
		return c.empty();
	}

	void push(const T& elem)    //�ڶ�ջ�з���Ԫ��
	{
		c.push_back(elem);
	}

	T pop()     //ȡ����ջԪ��
	{
		if (c.empty())
		{
			throw ReadEmptySatck();
		}
		T elem(c.back());
		c.pop_back();
		return elem;
	}

	T& top()     //�鿴��ջԪ��
	{
		if (c.empty())
		{
			throw ReadEmptySatck();

		}
		return c.back();
	}
};

#endif