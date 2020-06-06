#include <iostream>
#include <string>
#include <bitset>

using namespace std;

int main()
{


//bitset�Դ�����0,��1,��ת����

	bitset<32> a;
	cout << 1 << endl;

	a[5] = 1;
	cout << a << endl;

	for (int index=0; index !=32; index+=2)
	{
		a[index] = 1;
	}
	cout << a << endl;

	for (int index=0; index!=32;index+=2)
	{
		a.set(index);    //set()���ǰ�a[index]��Ϊ1
	}

	a.set();  //�����ж����1
	a.reset();  //�����ж����0

	a.flip();   //�����з�ת
	a.flip(8);     

	unsigned long b = a.to_ulong();    //ת��Ϊʮ������
	cout << b << endl;

	return 0;
}
