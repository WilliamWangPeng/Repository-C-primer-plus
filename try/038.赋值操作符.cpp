#include <iostream>
#include <string>

using namespace std;

//本节知识点:
					//左操作数必须是非const的左值
					//赋值操作的右结合性
					//赋值操作具有低优先级
					//谨防混淆相等操作符和赋值操作符
					//复合赋值操作符

int get_value();

int main()
{
	int a;
//左操作数必须是非const的左值   赋值操作的右结合性
	a = 1;  //赋值,不是等于
	a = a + 1;
	cout << a << endl;

	int i, j, ival, jval;
	double d;
	d = i = 3.5;
	cout << d << "," << i << endl;
	i = d = 3.5;
	cout << d << "," << i << endl;
	i = 12;
	const int ci = i;  //此处为初始化,不是赋值

//赋值操作具有低优先级
	int k;
	while ((k = get_value()) != 42)     //赋值运算符优先级低于不等于,所以要加小括号
	{
		cout << "你输入的是:" << k << endl;
	}

	//1025=i;
	//i+j=ival;
	//ci = ival;

	int ia[10];   //数组的名称是不可修改的左值
	//ia=0;
	ia[0] = 0;     //通过下标操作对数组赋值
	*ia = 1;



	
	return 0;
}


int get_value()
{
	int res;
	cout << "请输入一个整数" << endl;
	cin >> res;
	return res;
}