#include <iostream>
#include <bitset>
#include <string>

using namespace std;

int main()
{


//bitset���弰��ʼ��;
	bitset<32> bitvec;     //���������Ǳ��س���,bitvec��С��32λ������,ȫ����0;
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
	bitset<32> f(str, 5, 15);   //�������ң�0,1,2,3,4,5������λ��ʼ �����λ,,��15λ����ʼ��
	cout << f << endl;

	bitset<32> g(str, str.size() - 4);   //�������λ��ʼ��
									//ע��:�Ǵ�С,���������һλ�±�,������ȷ
	cout << g << endl;

	return 0;
}
