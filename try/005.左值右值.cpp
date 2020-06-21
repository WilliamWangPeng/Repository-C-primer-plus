#include <iostream>
using namespace std;

int main()
{



//左值右值区分
	int a;
	a = 12;  //"a"为左值,'12'为右值;

	a = a + 2;  //左值为变量的地址,右值为变量的值
				//左值不能是常量,字面量均为常量

	return 0;
}