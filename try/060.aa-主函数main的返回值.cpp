#include <iostream>
#include <cstdlib>

using namespace std;

//����֪ʶ��:
					//������ʽ
						// return;
						// return ����ֵ;
					//���з���ֵ�ĺ���
						// 1.������main�ķ���ֵ
						// 2.���ط���������
						// 3.��������
						// 4.ǧ��Ҫ���ؾֲ����������
						// 5.���÷�����ֵ
						// 6.ǧ��Ҫ����ָ��ֲ������ָ��

void do_a()
{
	cout << "a" << endl;
	cout << "baa" << endl;
	return;       //return֮�������,������;
	cout << "ala" << endl;
	cout << "Jamaal" << endl;
	return; //����ʡ��,C++���Զ�����return
}

int add(const int& a, const int& b)
{
	int sum = 0;
	sum = a + b;
	return sum;
}

void swap(int& v1, int& v2)
{
	if (v1==v2)
	{
		return;
	}
	int temp = v2;
	v2 = v1;
	v1 = temp;
}

int main()
{
	do_a();

	int a = 1, b = 10;
	cout << "before" << a << ", " << b<<endl;
	cout << "after" << a << "," << b << endl;
	return 0;
}
