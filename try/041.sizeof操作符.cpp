#include <iostream>
#include <string>

using namespace std;

void print_array(int a[],int n)
{
	for (int i=0;i<n;++i)    //main����֮��ĺ��������ﲻ�ܼ���;
	{
		cout << a[i] << endl;
	}
}

int main()
{
	int a;


	//����Ǹ�������,��ҪдС����;����Ǳ�����,д��д����
	cout
		<< "type\t\t\t" << "size" << endl
		<< "bool\t\t\t" << sizeof(bool) << endl
		<< "char\t\t\t" << sizeof(char) << endl
		<< "wchar_t\t\t\t" << sizeof(wchar_t) << endl
		<<"short\t\t\t"<<sizeof(short)<<endl
		<<"int\t\t\t"<<sizeof(int)<<endl
		<<"long\t\t\t"<<sizeof(long)<<endl
		<<"long long\t\t"<<sizeof(long long)<<endl
		<<"float\t\t\t"<<sizeof(float)<<endl
		<<"double\t\t\t"<<sizeof(double)<<endl
		<<"int\t\t\t"<< sizeof(int) << endl;  

	int x[] = { 2,3,4,5,6,7,8,9 };
	print_array(x, sizeof(x) / sizeof(int));   //����sizeof���������Ԫ�ظ���


	double dval = 1.23;
	double* p = &dval;

	cout << *p << endl;
	cout << sizeof(p) << endl;  //ָ��Ĵ�С,ָ��Ĵ�С��4�ֽ�
	cout << sizeof(*p) << endl;    //ָ��Ķ���Ĵ�С


	return 0;
}
