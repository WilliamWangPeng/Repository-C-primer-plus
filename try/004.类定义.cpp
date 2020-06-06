// C++primer中级.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

class Screen;
//struct Glue;//此处定义不完整，会报错;
			//类声明，C语言流传下来的写法，在C++中，用法与class一致,仅默认对象类型不同,class默认为private,struct默认为public

class LinkScreen     //可在类定义内部定义指向自己的指针、对象
{
	Screen* window;
	LinkScreen* next;
	LinkScreen* prev;
	LinkScreen* o;
};

class Record   //类声明，内部为类定义
{

public:
	typedef size_t size;
	size get_count() const
	{
		return byte_count;
	}
	string get_name() const
	{
		return name;
	}
	Record() :byte_count(0)
	{

	}
	Record(size s) :byte_count(s)
	{

	}
	Record(string s) :name(s), byte_count(0)
	{

	}


private:  //私有成员,类的外部完全无法直接访问

	size byte_count;
	string name;     //记录名称
} dog;   //此处也可定义对象


struct Glue
	//类声明，内部为类定义
{

public:
	typedef size_t size;
	size get_count() const
	{
		return byte_count;
	}
	string get_name() const
	{
		return name;
	}
	Glue() :byte_count(0)
	{

	}
	Glue(size s) :byte_count(s)
	{

	}
	Glue(string s) :name(s), byte_count(0)
	{

	}


private:

	size byte_count;
	string name;     //记录名称
};


int main()
{
	Glue c;
	Record q;
	Record* p = new Record;      //在堆栈上动态地创建类的对象
	delete p;   //用完之后需要删除
	Record r;
	cout << " " << endl;
	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
