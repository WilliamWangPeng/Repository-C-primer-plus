#include <iostream>
#include <string>

using namespace std;

int main()
{


//C���Եı���λ������;


	//int a = -127;   //  C\C++����ȷ��׼����λ��������δ����з���λ,���Բ�Ҫ��λ�����������з��ű�����

	unsigned char bits = 0227;   //0��ͷ,�����ǰ˽�����,010010111,����char��һ���ֽ�,8����λ,���Զ�����Ӧ��10010111

//����λȡ������
	bits = ~bits;   //ȡ������,01101000
	cout << (int)bits << endl;


//����λ�����ƶ�
	bits = 1;   //00000001
	unsigned char ���;
	��� = bits << 1;   //00000010,�����ƶ�һλ
	cout << (int)��� << endl;
	��� = bits << 2;    //00000100,�����ƶ���λ
	cout << (int)��� << endl;


//����λ�����ƶ�
	bits = 64; //01000000
	��� = bits >> 3;   //00001000
	cout << (int)��� << endl;

//����λ������
	unsigned char b1 = 0145;   //01100101
	unsigned char b2 = 0257;     //10101111
	unsigned char result = b1 & b2;     //00100101
	cout << (int)result << endl;

//����λ������
	result = b1 | b2;
	cout << (int)result << endl;

//����λ���
	result = b1 ^ b2;
	cout << (int)result << endl;
	return 0;


	return 0;
}
