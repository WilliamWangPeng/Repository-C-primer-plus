#include <iostream>
#include <string>

using namespace std;

void AddOne(int* ip)
{
	*ip += 1;
}

int add(const int* px, const int* py)
{
	return *px + *py;
}

void fcn(int i)
{
	cout << i << endl;
}

void fcn(const int i)    // 和上面的函数一样的,不算重载;(C语言就是如此)为的就是和C语言兼容
{
	cout << i << endl;
}

int main()
{
	int a, b, c;
	const int a2=10;
	const int b2=20;
	const int c2=30;
	a = 1; b = 2; c = 3;

	AddOne(&a);
	// AddOne(&a2);   //如果写传入a2,会报错,函数传入时,会试图将a2转变为int,但a2为const类型,所以出错

	add(&a2, &b2);

	cout << "hello " << endl;
	return 0;
}
