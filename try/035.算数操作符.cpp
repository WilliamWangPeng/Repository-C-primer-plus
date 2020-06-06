#include <iostream>
#include <string>

using namespace std;

//本节知识点:
					//5个操作符: +   -    *     /      %取余
					//小心溢出
					//特别注意:		求余操作符    除法操作符
									

int main()
{

//五个基本的算数运算符 +  -  *   /    %的简单使用
	int i = 1024;
	int j = 2;
	cout << i + j << endl;
	cout << i - j << endl;
	cout << i * j << endl;
	cout << i / j << endl;
	cout << i % j << endl;   //取余

	long a;
	double d;
	float f;

	cout << 5 + 10 * 20 / 2 << endl;

	int k = -i;
	cout << k << ","<<endl;

	int m = --i;  //先减后赋值
	cout << m << "," << i << endl;


//小心溢出
	short sv = 32767;   //最大就到32767
	short ival = 1;
	sv = sv + ival;

	cout << "sv 结果是:" << sv << endl;


//求余操作符   除法操作符
	double dval = 10 /3;   //除号是两用的,如果都是整数,就整出;如果有小数,结果才能是才小数
	cout << dval << endl;

	int ival2 = 42;  //求余,不可以对小数做求余运算
	cout << ival2 % 12 << endl;

	cout << -21 / -8 << endl;   //2
	cout << -21 % -8 << endl;  //-5
	cout << -21 / 8 << endl;  //-2
	cout << -21 % 8 << endl;  //-5
	cout << 21 % -8 << endl;  //5 在不同编译器里结果可能不同

	for (int i=1;i<=100;i++)
	{
		cout << i << ",";
		if (i%8==0)
		{
			cout << endl;
		}
	}



	return 0;
}
