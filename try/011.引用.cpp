#include <iostream>

using namespace std;
                                  //�˽ڹ��ڸ���,�Ժ�ʹ�������,�˴�ע�Ϳ��ܲ�׼ȷ
int main()
{


//����"&"���÷�
	int a = 1024;
	int& b = a; //ͨ�����,���þ��Ǳ���

	int ival = 299;
	int& ival = ival; //��������ʱ��Ҫ��ʼ��,���Ƿ�const����
						//ֻ��ָ��ͬ���͵�

	const int ii = 9299;  //const���� ������const����������;
	const int& iwhd = ii;  //��ֻ��ָ�� constͬ����;
							//��const��������const����


	int i = 42;
	const int& r = 42;
	const int& r2 = r + i; //const���ÿ���ָ��ͬ����;

	return 0;
}
