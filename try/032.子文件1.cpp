#include <iostream>
#include <string>

using namespace std;

class Dog
{

};


int main()
{

//C++��̬�����ʼ��
	int* pia = new int[10];     //intΪ�������Ͳ����Զ���ʼ��;

	string* psa = new string[10];        //Ĭ�ϵĹ��캯�����ʼ��

	Dog* pDog = new Dog[10];
	int* pia2 = new int[10]();		//�������žͳ�ʼ��Ϊ��

	cout << *(pia2 + 2) << endl;

	*pia = 9;    //��̬���鲻����ʹ��{}���г�ʼ��,��ʼ����Ҫ��ѭ�����Ԫ�ؽ��г�ʼ��
	*(pia + 1) = 8;
	*(pia2 + 3) = 6;

	cout << *(pia + 1) << endl;
	cout << *(pia2 + 3) << endl;

	for (int *q=pia;q!=pia+10;++q)
	{
		*q = 11;
	}

	for (int*q=pia;q!=pia+10;++q)
	{
		cout << *q << endl;
	}


//const����Ķ�̬����;
	const int* pci_bad = new const int[100];   //������const�޷��޸�

	cout << "�����붯̬�����С" << endl;

	size_t n;
	cin >> n;

	int* p = new int[n];
	for (int*q=p;q!=p+n;++q)
	{
		*p = 22;
		cout << *p << endl;
	}


//��̬�ռ���ͷ�
	delete[] p;
	delete[] pia;
	delete[] pia2;
	delete[]pci_bad;

	return 0;
}

