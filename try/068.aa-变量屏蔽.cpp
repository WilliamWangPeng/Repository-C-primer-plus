#include <iostream>
#include <string>

using namespace std;

//本节知识点:
					//变量屏蔽(变量隐藏)
					//函数屏蔽(函数隐藏), 而不是函数重载
					//每一个版本的函数重载都应该在同一个作用域中声明
					//注意: 局部的函数声明是一种不明智的做法
						// 函数的声明应摆放在头文件中

string init()
{
	return "hello";

}

void fcn()
{
	//int init = 0;   //变量init把函数init()屏蔽了
	string s = init();
	cout << s << endl;
}


int main()
{

	
	return 0;
}
