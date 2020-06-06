#include <iostream>
#include <string>
#include <bitset>

using namespace std;

int main()
{


//bitset自带的置0,置1,翻转函数

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
		a.set(index);    //set()就是把a[index]改为1
	}

	a.set();  //把所有都变成1
	a.reset();  //把所有都变成0

	a.flip();   //把所有反转
	a.flip(8);     

	unsigned long b = a.to_ulong();    //转换为十进制数
	cout << b << endl;

	return 0;
}
