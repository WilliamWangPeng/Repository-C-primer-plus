#include <iostream>
#include <string>

using namespace std;

//����֪ʶ��:
					//5��������: +   -    *     /      %ȡ��
					//С�����
					//�ر�ע��:		���������    ����������
									

int main()
{

//������������������ +  -  *   /    %�ļ�ʹ��
	int i = 1024;
	int j = 2;
	cout << i + j << endl;
	cout << i - j << endl;
	cout << i * j << endl;
	cout << i / j << endl;
	cout << i % j << endl;   //ȡ��

	long a;
	double d;
	float f;

	cout << 5 + 10 * 20 / 2 << endl;

	int k = -i;
	cout << k << ","<<endl;

	int m = --i;  //�ȼ���ֵ
	cout << m << "," << i << endl;


//С�����
	short sv = 32767;   //���͵�32767
	short ival = 1;
	sv = sv + ival;

	cout << "sv �����:" << sv << endl;


//���������   ����������
	double dval = 10 /3;   //���������õ�,�����������,������;�����С��,��������ǲ�С��
	cout << dval << endl;

	int ival2 = 42;  //����,�����Զ�С������������
	cout << ival2 % 12 << endl;

	cout << -21 / -8 << endl;   //2
	cout << -21 % -8 << endl;  //-5
	cout << -21 / 8 << endl;  //-2
	cout << -21 % 8 << endl;  //-5
	cout << 21 % -8 << endl;  //5 �ڲ�ͬ�������������ܲ�ͬ

	for (int i=1;i<=100;i++)
	{
		cout << i << ",";
		if (i%8==0)
		{
			cout << endl;
		}
	}



	return 0;
}
