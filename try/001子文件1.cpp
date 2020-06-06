#include <iostream>


using namespace std;

int main()
{
	cout << "enter two numbers:" << endl;
	int v1, v2;
	cin >> v1 >> v2;

	int lower, upper;
	if (v1<v2)
	{
		lower = v1;
		upper = v2;
		cout << "两个数中比较小的数是:" << lower << endl;
		cout << "两个数中比较大的数是:" << upper << endl;
	} 
	else if(v2<v1)
	{
		lower = v2;
		upper = v1;
		cout << "两个数中比较小的数是:" << lower << endl;
		cout << "两个数中比较大的数是:" << upper << endl;
	}
	else
	{
		lower = v1;
		upper = v1;
		cout << "两个数一样大" << endl;
	}

	if (v1=v2)  //这种判断方式有问题,待探究
	{
		cout << "两个数一样大" << endl;
		
	} 
	else
	{
		return -1;
	}
	

	return 0;
}