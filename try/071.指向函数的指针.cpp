#include <iostream>
#include <string>
#include <vector>

using namespace std;

//����֪ʶ��:

					//��typedef�򻯺���ָ��Ķ���
					//ָ������ָ��ĳ�ʼ���͸�ֵ
					//ͨ��ָ����ú���
					//����ָ���β�
					//����ָ������ָ��
					//ָ�����غ�����ָ��



//��typedef�򻯺���ָ��Ķ���
typedef bool (*cmpFcn)(const string&, const string&);
typedef int (*PF)(int*, int);   //��typedef�� ����ָ������ָ��



bool lengthCompare(const string& s1, const string& s2)
{
	return s1.size() == s2.size();
}

void useBigger(const string& s1, const string& s2, bool(*pf)(const string&, const string&))
{
	cout << pf(s1, s2) << endl;
}


//����ָ������ָ��
int demo(int* p, int a)
{
	return 12;
}
int (*ff(int x))(int*, int)   //ff��һ������,��һ���β�x,���ؽ����һ������ָ�� int(*)(int *,int)
{
	cout << x << endl;
	return demo;
}
PF ff(int x)    //ͬ��
{
	cout << x << endl;
	return demo;
}

//ָ�����غ�����ָ��
void ff(vector<double> vec)
{
	cout << "ff(vector<double> vec)" << endl;
}
void ff(unsigned int x)
{
	cout << "ff(unsigned int x)" << endl;
}



int main()
{
	//void (*pf5)(int) = ff;    //�������ͱ��뾫ȷƥ��,������Ѱ�����ƥ�������


	int oo = 8;
	cout << ff(2)(&oo, oo) << endl;


	int a = 5;
	int* pa;

	cmpFcn pf2;
	pf2 = lengthCompare;

	useBigger("hi", "function", pf2);   //Ҳ���Դ��������������ָ��,��Ϊ����������ָ������ָ��

	bool (*pf)(const string&, const string&);   //����һ��ָ��,pf��һ��ָ��,ָ������ָ��;
												//����ָ��ͬ���͵ĺ����Һ�������ֵ������ָ������ƥ��;

	//pf = &lengthCompare;   //ȡ������ַ
	pf = lengthCompare;   //���������ƾ���ָ������ַ��ָ��,���Կ���ֱ�Ӹ�ֵ
	pa = &a;

	cout << lengthCompare("hello", "pointer");   //ֱ�ӵ��ú���

	//cout << (*pf)("hello", "pointer");   //����ָ����ú���
	cout << pf("hello", "pointer");    //*Ҳ����ʡ��

	return 0;
}
