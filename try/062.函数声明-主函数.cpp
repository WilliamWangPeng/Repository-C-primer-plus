#include <iostream>
#include "myfunc.h"

using namespace std;

//本节知识点:
					//一个函数只能定义一次,但是可以多次声明
					//函数原型: 函数返回类型、函数名、形参列表
						// -可以省略形参名,必须有形参类型
					//函数在头文件中声明,在源文件中定义
						 // -定义函数的源文件中也要包含函数声明头文件
					//默认实参
						// -既可以在函数声明也可以在函数定义中指定默认实参,但不可重复定义
						// -通常是在函数声明中提供默认实参


int sum(int a = 1, int b = 2)
{
	return a + b;
}


int main()
{
	int m[] = { 2,4,6,7,2,2,3,5,2,6 };
	print(m, 10);


	cout << endl << endl;
	cout << sum(10,20) << endl;
	
	return 0;
}



