#include <iostream>
#include <string>
using namespace std;  //题目:如果在某机器上short类型占16位,那么可以赋给short类型的最大数是什么,unsigned short类型的最大数又是什么;
                     
int main()
{
	short a;

	cout << "short"<<"类型是:"<<sizeof(a)*8 <<"位"<< endl;

	a = 32768;  //2^15-1
	cout << a << endl;//

	unsigned short b;
	
	b = 65535;  //2^16-1
	cout << b << endl;

	return 0;
}