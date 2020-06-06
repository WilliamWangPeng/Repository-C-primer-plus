#include <iostream>
#include <bitset>
#include <string>

using namespace std;

int main()
{


//bitset定义及初始化;
	bitset<32> bitvec;     //尖括号里是比特长度,bitvec大小是32位二进制,全部是0;
	cout << bitvec << endl;

	bitset<16> b(0xffff);
	cout << b << endl;

	bitset<32> c(0xffff);
	cout << c << endl;

	bitset<128>  d(0xffff);
	cout << d << endl;

	bitset<32> e(156);
	cout << e << endl;

	string str("111111110000000010101101");
	bitset<32> f(str, 5, 15);   //从左往右（0,1,2,3,4,5）第五位开始 算第五位,,用15位来初始化
	cout << f << endl;

	bitset<32> g(str, str.size() - 4);   //用最后四位初始化
									//注意:是大小,而不是最后一位下标,所以正确
	cout << g << endl;

	return 0;
}
