#include <iostream>
#include <string>

using namespace std;

//����֪ʶ��:
					//ת���ȼ�
						// 1.��ȷƥ��
						// 2.ͨ����������
						// 3.ͨ����׼ת��
						// 4.ͨ��������ת��
					// ����ƥ���ö������
					// ���غ�const�β�

class Account
{
public:
	Account() { }
	Account(int x) :num(x) 	{ }
public:
	int num;

};

void ff(int x){	cout << "ff(int x)" << endl;}
void ff(short y){ cout << "ff(short y)" << endl;}

void manip(double x){ cout << "manip(double x)" << endl;}
void manip(long x){	cout << "manip(long x)" << endl;}
void manip(float y){ cout << "manip(float y)" << endl;}

			//����ƥ����ö������
enum Tokens
{
	INLINE = 128,	VIRTUAL = 129
};
void ff(Tokens f){	cout << "ff(Tokens t)" << endl;}

void newf(unsigned char x){	cout << "newf(unsigned char x)" << endl;}
void newf(int y){ cout << "newf(int y)" << endl;}

		//������ת��
void lookup(Account& x) { cout << "lookup(Account& x)" << endl; }
void lookup(const Account& y) { cout << "lookup(const Account& y)" << endl; }

		//ָ������
//void f(int* const p) { cout << "f(int *p const)" << endl; }  //ָ����const,ָ��Ķ���const
void f(int* p) { cout << "f(int* p)" << endl; }   //C++�Ѵ����ͺ���������͵�ͬΪһ��������
//void f(const int* const) { cout << "f(const int* const p)" << endl; }    //C++�Ѵ����ͺ���������͵�ͬ
void f(const int* p) { cout << "f(const int* p)" << endl; }  //ָ�벻��const,��ָ��Ķ���const


int main()
{

	const Account a(0);   //ÿ�ֶ��巽ʽ��Ҫ�ж�Ӧ�Ĺ��캯��
	Account b;
	lookup(a);
	lookup(b);
	

	int m = 5, n = 6;
	int* p1 = &m;
	const int* p2 = &n;
	f(p1);
	f(p2);




	Tokens curTok = INLINE;
	ff(curTok);
	ff(128);

	unsigned char uc = 129;
	newf(VIRTUAL);    //ö�ٳ�Ա��int����,���Ե���newf(int y)

	ff('a');   //�ַ�����������ת��Ϊint,���Դ������ʱ����void ff(int x)

	manip(3.14);   //long��float���ȼ�������,���Դ��ڶ�����,double��Ϊƥ��;
	return 0;
}
