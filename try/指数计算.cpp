#include <iostream>
using namespace std;

int main()
{



//��дָ�������㷨

	int base, exponent;
	long result = 1;

	cout << "���������:";
	cin >> base;
	cout << "������ָ��:";
	cin >> exponent;

	for (int i=1;i<=exponent;i++)
	{
		result =result* base;
	}

	cout << base << "��" << exponent << "�η�����:"<<result << endl;


	return 0;
}