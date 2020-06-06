#include <iostream>
#include <string>

using namespace std;

//����֪ʶ��:(��ʽת�� - ǿ������ת�������)
					//static_cast   ��ӦC�����е���ʽת��,��ʽת��������ƥ���ת��ʱ�ᱨ��

					//dynamic_cast    ��̬ת��,������̳е�ʱ��

					//reinterpret_cast      ��ӦC�����еĲ�����ʽת����ת��,��ӦӲת��

					//const_cast     ��ת��  ǿ��ת��const����,ȥ��const

					//��ʽǿ������ת�� ���� ��ͳC�������ת��
					//����ʹ��ǿ������ת��


class Canimal     //����
{
public:
	virtual void Speak() = 0;   //�޴˴����,Cdog* pDog = dynamic_cast<Cdog*>(pAnimal)�����
};

class Ccat:public Canimal     //��̳�,public Canimal������������,��Canimal��Ccat��Ϊ���,������;
{
public:
	void CatchMice() { cout << "cat: I caught a mouse" << endl; }
	void Speak() { cout << "cat: Meow" << endl; }
};

class Cbook
{

};

class Cdog:public Canimal   //ͬ���̳���Canimal,������
{
public:
	void WagTail() { cout << "Dog:I wagged my tail" << endl; }
	void Speak() { cout << "DOG:BOW BOW" << endl; }
};

void DetermineType(Canimal* pAnimal)
{
	Cdog* pDog = dynamic_cast<Cdog*>(pAnimal);
	if (pDog)
	{
		cout << "this is a dog" << endl;
		pDog->WagTail();
	}
	Ccat* pCat = dynamic_cast<Ccat*>(pAnimal);
	if (pCat)
	{
		cout << "this is a cat" << endl;
		pCat->CatchMice();
	}
}

int main()
{
	double dPi = 3.14159;

	int nNum = static_cast<int>(dPi);  //C++д��,���ڱ���ʱ��һ���ļ��,����ص����Ͳ���ת��

	int nNum2 = (int)dPi;   //C����д��,�������κμ��;

	int nNum3 = dPi;    //C��������ʽ��д��;

	string a = "hello world";
	string* pszString = &a;
	int* pBuf = (int*)pszString;   //C����ǿ��ת��,Ӳת��;
	//int* pBuf2 = static_cast<int*> pszString;   //���������,��ʾ����psz

	int* pBuf3 = reinterpret_cast<int*> (pszString);


	Canimal* pAnimal = new Ccat;
	Ccat* pCat = static_cast<Ccat*>(pAnimal);

	//Cbook* pBook = static_cast<Cbook>(pAnimal);   //����Cbook��panimal�����,���Իᱨ��
	Cbook* pBook = reinterpret_cast<Cbook*>(pAnimal);   //Ӳת��



//const_cast     ��ת��  ǿ��ת��const����,ȥ��const
	const char* pc_str = "hello world";
	char* pc = const_cast<char*>(pc_str);   //C++д��
	char* pc2 = (char*)pc_str;   //C����д��;

	return 0;
}
