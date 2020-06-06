#include <iostream>
#include <string>

using namespace std;

int main()
{
	int i;

	cout << "请输入一个整数";
	cin >> i;

//谨防混淆相等操作符和赋值操作符
	if (i==42)
	{
		cout << "你输入的是42" << endl;
	}
	else
	{
		cout << "你输入的不是42" << endl;
	}

//复合赋值操作符
	int a, b;
	a = 1;
	b = 2;

	a += b;
	a -= b;
	a *= b;
	a /= b;	
	a %= b;
	a <<= 2;
	a >>= 2;
	a &= b;	   //位与
	a |= b;   //位或
	a ^= b;   //位异或

	return 0;
}
