#include <iostream>

using namespace std;

int main()
{


//�ַ�������ֵ,���ַ���

	cout << "hello world" << endl;  //������Ϊ�ַ�,˫����Ϊ�ַ���

	cout << "A" << endl;   //�ַ���:"A"='A','\0'


	setlocale(LC_ALL, "CHS");  //���ñ���Ϊ������

	wprintf(L"%ls\n", L"���ַ���");

	return 0;
}