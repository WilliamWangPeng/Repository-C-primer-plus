#include <iostream>
#include <string>

using namespace std;


//����֪ʶ��:
					//�����ĵ���
					//��������һ��������
					//�βκ�ʵ��
					//������������
					//�����βα�


void process()
{

}


//x��y�η�;
int power(int x, int y)    //С������ı���Ϊ�β�
{
	//y��x���;
	int result = 1;
	for (int loop=1;loop<=y;++loop)
	{
		result *= x;
	}
	return result;
}


//ȡ����ֵ
int abs(int x)
{
	return x >= 0 ? x : -x;

}


//�����Լ��
int gcd(int v1, int v2)
{
	while (v2)
	{
		int temp = v2;
		v2 = v1 % v2;    //շת���ȡ�෨
		v1 = temp;
	}
	return v1;    //��void��������,���뷵��ֵ,��������
}


class Date
{

};

bool is_present(int* x, int y);   //���ܷ��غ���, ����
Date& calendar(const char* s);


int main()
{
	int a = 15, b = 123;
	cout << gcd(a,b) << endl;   
	cout << abs(-99) << endl;     //�������ʱ,���ܶ಻����,��������
	cout << power(2.1, 10.1) << endl;   //����double����,���Զ�ת��Ϊint����
	return 0;
}

bool is_present(int* x, int y)
{
	return false;
}
