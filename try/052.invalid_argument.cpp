#include <iostream>
#include <string>
#include <bitset>
#include <stdexcept>   //invalid_argument�쳣��stdexceptͷ�ļ���

using namespace std;

int main()
{
	try
	{
		string s("10ad110010");    //ad ������bitset��ʼ��
		bitset<10> b(s);
		cout << "bitset ok" << endl;
	}
	catch (invalid_argument err)
	{
		cout << "bitset error: " <<err.what()<< endl;
	}
		

	return 0;
}
