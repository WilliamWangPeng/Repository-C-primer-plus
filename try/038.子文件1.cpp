#include <iostream>
#include <string>

using namespace std;

int main()
{
	int i;

	cout << "������һ������";
	cin >> i;

//����������Ȳ������͸�ֵ������
	if (i==42)
	{
		cout << "���������42" << endl;
	}
	else
	{
		cout << "������Ĳ���42" << endl;
	}

//���ϸ�ֵ������
	int a, b;
	a = 1;
	b = 2;

	a += b;
	a -= b;
	a *= b;
	a /= b;	
	a %= b;
	a <<= 2;
	a >>= 2;
	a &= b;	   //λ��
	a |= b;   //λ��
	a ^= b;   //λ���

	return 0;
}
