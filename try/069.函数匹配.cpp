#include <iostream>
#include <string>

using namespace std;

//����֪ʶ��:
					// ����ȷ������������
						// 1.��ѡ����
						// 2.ѡ����к���
						// 3.Ѱ�����ƥ��(����еĻ�)
					// ���ж���βε�����ȷ��

void d()
{
	cout << "d()" << endl;
}
void f()
{
	cout << "f()" << endl;
}
void f(int a)
{
	cout << "f(int a)" << endl;
}
void f(int a, int b)
{
	cout << "f(int a, int b)" << endl;
}
void f(double a, double b)
{
	cout << "f(double a,double b)" << endl;
}
void g(int a)
{
	cout << "g(int a)" << endl;
}

int main()
{
	f(8); 

	//f(42, 2.56);  //������,�����������غ�������ƥ��,���Գ�������
	return 0;
}
