#include <iostream>
#include <string>

using namespace std;


void doOp(int x, int y,  int &加法结果,  int &减法结果,  int &乘法结果,  int &除法结果)   //巧妙利用引用,返回值
{
	加法结果 = x + y;
	减法结果 = x - y;
	乘法结果 = x * y;
	除法结果 = x / y;

	return ;
}

bool isShorter(const string &s1, const string &s2)     //直接传引用,不再复制,运算速度更快,const避免修改;
{
	return s1.size() < s2.size();
}



int main()
{
	int a = 10, b = 2;
	int 加法结果,减法结果,乘法结果,除法结果;

	doOp(a, b, 加法结果, 减法结果, 乘法结果, 除法结果);

	cout << 加法结果<<","<<减法结果 <<","<< 乘法结果<<"," <<除法结果 << endl;

	string s1("one");
	string s2("hello");

	if (isShorter(s1,s2))
	{
		cout << "s1 is shorter" << endl;
	}
	else
	{
		cout << "s2 is shorter" << endl;
	}
	
	return 0;
}
