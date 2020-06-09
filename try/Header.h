#ifndef STACK_H
#define STACK_H

#include <exception>        //自定义了一个堆栈
#include <deque>

template<class T>
class Stack
{
protected:
	std::deque<T> c;   //deque也是一个数组,动态高端数组;

public:
	class ReadEmptySatck : public std::exception
	{
	public:
		virtual const char* what() const throw()  //覆盖重写what
		{
			return "read empty stack";
		}
	};

	bool empty()
	{
		return c.empty();
	}

	void push(const T& elem)    //在堆栈中放入元素
	{
		c.push_back(elem);
	}

	T pop()     //取出堆栈元素
	{
		if (c.empty())
		{
			throw ReadEmptySatck();
		}
		T elem(c.back());
		c.pop_back();
		return elem;
	}

	T& top()     //查看堆栈元素
	{
		if (c.empty())
		{
			throw ReadEmptySatck();

		}
		return c.back();
	}
};

#endif