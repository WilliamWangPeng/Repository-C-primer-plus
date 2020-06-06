#include <iostream>

using namespace std;

int main()
{
	signed int a;  //默认有符号,正负均可
	short b;
	long c;

	unsigned int a2; //只可保存正数
	unsigned short b2;
	unsigned long c2;

	char m;  //char符号不确定,定义时最好写上;

	unsigned char m1;    //8位二进制,0-255
	signed char m2;    //有符号,2的7次方,  -128~127

	m1 = 222;
	printf("%d\n", m1);
	m1 = 256;  //超出char类型范畴,溢出	
	printf("%d\n", m1);

	m1 = -1;  //无符号类型定义有符号数,内部会把-1对256取模,-1/256取余
	printf("%d\n", m1);



	return 0;
}