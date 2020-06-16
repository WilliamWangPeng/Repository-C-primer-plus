#include <iostream>
#include <string>

using namespace std;


//本节知识点:
					//函数的调用
					//函数体是一个作用域
					//形参和实参
					//函数返回类型
					//函数形参表


void process()
{

}


//x的y次方;
int power(int x, int y)    //小括号里的被称为形参
{
	//y个x相乘;
	int result = 1;
	for (int loop=1;loop<=y;++loop)
	{
		result *= x;
	}
	return result;
}


//取绝对值
int abs(int x)
{
	return x >= 0 ? x : -x;

}


//求最大公约数
int gcd(int v1, int v2)
{
	while (v2)
	{
		int temp = v2;
		v2 = v1 % v2;    //辗转相除取余法
		v1 = temp;
	}
	return v1;    //非void函数类型,必须返回值,否则会出错
}


class Date
{

};

bool is_present(int* x, int y);   //不能返回函数, 数组
Date& calendar(const char* s);


int main()
{
	int a = 15, b = 123;
	cout << gcd(a,b) << endl;   
	cout << abs(-99) << endl;     //传入参数时,不能多不能少,否则会出错
	cout << power(2.1, 10.1) << endl;   //传入double类型,会自动转换为int类型
	return 0;
}

bool is_present(int* x, int y)
{
	return false;
}
