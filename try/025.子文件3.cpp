#include <iostream>
#include <string>
#include <bitset>

using namespace std;

int main()
{



//bitset ��ʾ��
	bitset<4> fourBits;  //���Զ���ʼ��Ϊ0
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




//bitset�Դ��ļ�������;
	cout << "have" << eight.count() << endl;
	cout << "have" << eight.size() - eight.count()
		<< endl;


	bitset<8> flipInput(eight);
	flipInput.flip();    //��ת,0��1,1��0
	cout << flipInput << endl;

	bitset<8> eightA;
	cout << "enter 8 bits";
	cin >> eightA;
	cout << endl;




//bitset���߼�����;

	cout << (eightA & eight )<< endl;  //λ��
	cout << (eightA | eight) << endl;  //λ��
	cout << (eight ^ eightA) << endl;   //λ���

	//ÿ���ֽ���8λ������

	return 0;
}
