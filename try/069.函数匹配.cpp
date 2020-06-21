#include <iostream>
#include <string>

using namespace std;

//本节知识点:
					// 重载确定的三个步骤
						// 1.候选函数
						// 2.选择可行函数
						// 3.寻找最佳匹配(如果有的话)
					// 含有多个形参的重载确定

void d()
{
	cout << "d()" << endl;
}
void f()
{
	cout << "f()" << endl;
}
void f(int a)
{
	cout << "f(int a)" << endl;
}
void f(int a, int b)
{
	cout << "f(int a, int b)" << endl;
}
void f(double a, double b)
{
	cout << "f(double a,double b)" << endl;
}
void g(int a)
{
	cout << "g(int a)" << endl;
}

int main()
{
	f(8); 

	//f(42, 2.56);  //二义性,存在两个重载函数可以匹配,所以出现问题
	return 0;
}
