#include <iostream>
#include <string>
using namespace std;  //��Ŀ:�����ĳ������short����ռ16λ,��ô���Ը���short���͵��������ʲô,unsigned short���͵����������ʲô;
                     
int main()
{
	short a;

	cout << "short"<<"������:"<<sizeof(a)*8 <<"λ"<< endl;

	a = 32768;  //2^15-1
	cout << a << endl;//

	unsigned short b;
	
	b = 65535;  //2^16-1
	cout << b << endl;

	return 0;
}