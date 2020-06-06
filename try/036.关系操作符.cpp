#include <iostream>
#include <string>

using namespace std;


//本节知识点:

					//关系操作符: < 小于    > 大于     <= 小于等于    >= 大于等于    == 相等    ！= 不等于
					//逻辑操作符: && 与运算     || 或运算    ！非运算
					//特别注意: 短路求值、 不能串接关系操作符、 相等测试与bool字面值

int main()
{

//关系操作符的基本应用
	int a, b;
	cout << "请输入两个整数:";
	cin >> a >> b;
	if (a>b)
	{
		cout << a << "大于" << b << endl;
	}
	if (a<=b)
	{
		cout << a << "小于等于" << b << endl;
	}
	if (a==b)
	{
		cout << a << "等于" << b << endl;
	}
	if (a!=b)
	{
		cout << a << "不等于" << b << endl;
	}

	if (0<a&&a<100)  //不可以写成0<a<100
	{
		cout << "100以内的整数" << endl;
	}

	return 0;
}
