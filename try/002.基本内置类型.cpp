#include <iostream>

using namespace std;

void doA(void)  //void�޷���ֵ;
{

}

int doB(int a)  //����ֵΪint����,���뷵��ֵ
{
	return 0;
}


//����֪ʶ��:
					//void����;
					//����
						//�з��ź��޷���
						//����ֵ�ı�ʾ
						//���͵ĸ�ֵ
							//��һ��������ֵ��һ��С����
							//��һ��������ֵ��һ���޷�������
					//������

int main()
{


//���õĻ�����������

	int a;  //int Ϊ��������,class���������,Ϊ�Զ�������;
	
	cout << "bool\t\t" << sizeof(bool) << endl;
	cout << "short\t\t" << sizeof(short) << endl;
	cout << "wchar_t\t\t" << sizeof(wchar_t) << endl;
	cout << "int\t\t" << sizeof(int) << endl;  //�����ٶ�Զ�ȸ������ٶȿ�
	cout << "float\t\t" << sizeof(float) << endl;
	cout << "double\t\t" << sizeof(double) << endl; 
	cout << "long\t\t" << sizeof(long) << endl;
	cout << "long double\t\t" << sizeof(long double) << endl;
	cout << "long long\t\t" << sizeof(long long) << endl;



	cout << "����" << endl;

	return 0;
}