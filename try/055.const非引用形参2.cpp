#include <iostream>
#include <string>

using namespace std;

void AddOne(int* ip)
{
	*ip += 1;
}

int add(const int* px, const int* py)
{
	return *px + *py;
}

void fcn(int i)
{
	cout << i << endl;
}

void fcn(const int i)    // ������ĺ���һ����,��������;(C���Ծ������)Ϊ�ľ��Ǻ�C���Լ���
{
	cout << i << endl;
}

int main()
{
	int a, b, c;
	const int a2=10;
	const int b2=20;
	const int c2=30;
	a = 1; b = 2; c = 3;

	AddOne(&a);
	// AddOne(&a2);   //���д����a2,�ᱨ��,��������ʱ,����ͼ��a2ת��Ϊint,��a2Ϊconst����,���Գ���

	add(&a2, &b2);

	cout << "hello " << endl;
	return 0;
}
