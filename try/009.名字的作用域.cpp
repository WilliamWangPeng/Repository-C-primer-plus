#include <iostream>

using namespace std;


//作用域的区分

int a = 1;
string s2 = "hello";  //全局作用域

int main()
{
	int sum = 0;  //局部作用域

	int a = 1; //局部作用域内,屏蔽全局同名变量

	//C++哪里使用,哪里定义即可,不必全部定义于前面
	int i = 1000;
	for (i=1;i!=10;i++)  //此处'i'在语句作用域内,值为1;
	{
		cout << i << endl;
	}

	return 0;
}
