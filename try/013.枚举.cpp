#include <iostream>

using namespace std;

int m;
const int n = 8;
//const int input = 0;
//const int output = 1;
//const int append = 2;


//ö��"enum"��ʹ��ʾ��



enum open_modes  //�ڲ������Զ���ʼ��Ϊ0,1,2
{
	input, output, append
};

int main()
{
	open_modes o;  //o ��ö��open_modes����;

	o = input;  //oֻ����ȡö���е�ĳ����ֵ;

	cout << o << endl;
	
	return 0;
}
