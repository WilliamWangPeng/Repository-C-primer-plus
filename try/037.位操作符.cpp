#include <iostream>
#include <string>

using namespace std;

int main()
{


//C语言的比特位操作符;


	//int a = -127;   //  C\C++无明确标准表明位操作符如何处理有符号位,所以不要将位操作符用在有符号变量上

	unsigned char bits = 0227;   //0开头,所以是八进制数,010010111,由于char是一个字节,8比特位,所以二进制应是10010111

//比特位取反操作
	bits = ~bits;   //取反操作,01101000
	cout << (int)bits << endl;


//比特位向左移动
	bits = 1;   //00000001
	unsigned char 结果;
	结果 = bits << 1;   //00000010,向左移动一位
	cout << (int)结果 << endl;
	结果 = bits << 2;    //00000100,向左移动两位
	cout << (int)结果 << endl;


//比特位向右移动
	bits = 64; //01000000
	结果 = bits >> 3;   //00001000
	cout << (int)结果 << endl;

//比特位与运算
	unsigned char b1 = 0145;   //01100101
	unsigned char b2 = 0257;     //10101111
	unsigned char result = b1 & b2;     //00100101
	cout << (int)result << endl;

//比特位或运算
	result = b1 | b2;
	cout << (int)result << endl;

//比特位异或
	result = b1 ^ b2;
	cout << (int)result << endl;
	return 0;


	return 0;
}
