#include <iostream>
#include <string>

using namespace std;

void print(const string&);
void print(double);
void print(int);

void fooBar(int ival)
{
	//void print(int);   //局部的函数声明把全局的函数声明屏蔽了
	print("hello");
	print(ival);
	print(3.14);
}



int main()
{
	fooBar(6);
	return 0;
}

void print(const string& s)
{
	cout << "string: " << s << endl;
}

void print(double d)
{
	cout << "double: " << d << endl;
}

void print(int i)
{
	cout << "int: " << i << endl;
}