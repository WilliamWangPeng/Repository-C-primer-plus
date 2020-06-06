#include <iostream>
using namespace std;

int main()
{



//编写指数计算算法

	int base, exponent;
	long result = 1;

	cout << "请输入底数:";
	cin >> base;
	cout << "请输入指数:";
	cin >> exponent;

	for (int i=1;i<=exponent;i++)
	{
		result =result* base;
	}

	cout << base << "的" << exponent << "次方等于:"<<result << endl;


	return 0;
}