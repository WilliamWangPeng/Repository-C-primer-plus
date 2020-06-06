#include <iostream>
#include <string>
#include <bitset>

using namespace std;

int main()
{



//bitset 的示例
	bitset<4> fourBits;  //会自动初始化为0
	cout << fourBits << endl;

	bitset<5> fiveBits(string("10101"));
	cout << fiveBits << endl;

	bitset<8> eightBits(255);
	cout << eightBits << endl;

	bitset<8> eight;
	cout << "enter 8 bit" ;
	cin >> eight;
	cout << endl;

	cout << eight << endl;




//bitset自带的计数类型;
	cout << "have" << eight.count() << endl;
	cout << "have" << eight.size() - eight.count()
		<< endl;


	bitset<8> flipInput(eight);
	flipInput.flip();    //翻转,0变1,1变0
	cout << flipInput << endl;

	bitset<8> eightA;
	cout << "enter 8 bits";
	cin >> eightA;
	cout << endl;




//bitset的逻辑运算;

	cout << (eightA & eight )<< endl;  //位与
	cout << (eightA | eight) << endl;  //位或
	cout << (eight ^ eightA) << endl;   //位异或

	//每个字节是8位二进制

	return 0;
}
