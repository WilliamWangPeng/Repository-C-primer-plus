#include <iostream>
#include <string>
#include "066.Header.h"





//Dog a;   //ȫ�ֶ���,���Զ���ʼ��

int main()
{
	cout << "hello,���캯��" << endl;

	//Dog a; //�ֲ�����,�����ʼ��
	static Dog a;    //��̬����,�������ں�ȫ�ֶ���һ��

	cout << a.number << endl;
	cout << a.name << endl;


	return 0;
}
