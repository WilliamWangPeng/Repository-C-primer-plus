#include <iostream>

using namespace std;

int main()
{


//�������͵���������ֵ

	short x;
	long y;
	long long m;
	int a, b;
	unsigned int p;

	a = 2;
	b = 3;
	cout << a + b << endl;
	cout << 2 + 3 << endl;

						//����ֵĬ����int��long
	cout << 20LL << endl;  //ǰ�治��0,Ϊʮ����,"L"����long,�����ı���������
	cout << 024U << endl;  //ǰ���0,Ϊ�˽���,"U"����unsigned
	cout << 0x14 << endl;  //ǰ���0x,Ϊʮ������,����ֵ��short����   
							//��Сд����
	return 0;
}