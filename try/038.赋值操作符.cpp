#include <iostream>
#include <string>

using namespace std;

//����֪ʶ��:
					//������������Ƿ�const����ֵ
					//��ֵ�������ҽ����
					//��ֵ�������е����ȼ�
					//����������Ȳ������͸�ֵ������
					//���ϸ�ֵ������

int get_value();

int main()
{
	int a;
//������������Ƿ�const����ֵ   ��ֵ�������ҽ����
	a = 1;  //��ֵ,���ǵ���
	a = a + 1;
	cout << a << endl;

	int i, j, ival, jval;
	double d;
	d = i = 3.5;
	cout << d << "," << i << endl;
	i = d = 3.5;
	cout << d << "," << i << endl;
	i = 12;
	const int ci = i;  //�˴�Ϊ��ʼ��,���Ǹ�ֵ

//��ֵ�������е����ȼ�
	int k;
	while ((k = get_value()) != 42)     //��ֵ��������ȼ����ڲ�����,����Ҫ��С����
	{
		cout << "���������:" << k << endl;
	}

	//1025=i;
	//i+j=ival;
	//ci = ival;

	int ia[10];   //����������ǲ����޸ĵ���ֵ
	//ia=0;
	ia[0] = 0;     //ͨ���±���������鸳ֵ
	*ia = 1;



	
	return 0;
}


int get_value()
{
	int res;
	cout << "������һ������" << endl;
	cin >> res;
	return res;
}