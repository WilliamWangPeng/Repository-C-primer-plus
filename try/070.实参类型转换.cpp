#include <iostream>
#include <string>

using namespace std;

//本节知识点:
					//转换等级
						// 1.精确匹配
						// 2.通过类型提升
						// 3.通过标准转换
						// 4.通过类类型转换
					// 参数匹配和枚举类型
					// 重载和const形参

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

			//参数匹配与枚举类型
enum Tokens
{
	INLINE = 128,	VIRTUAL = 129
};
void ff(Tokens f){	cout << "ff(Tokens t)" << endl;}

void newf(unsigned char x){	cout << "newf(unsigned char x)" << endl;}
void newf(int y){ cout << "newf(int y)" << endl;}

		//类类型转换
void lookup(Account& x) { cout << "lookup(Account& x)" << endl; }
void lookup(const Account& y) { cout << "lookup(const Account& y)" << endl; }

		//指针重载
//void f(int* const p) { cout << "f(int *p const)" << endl; }  //指针是const,指向的对象不const
void f(int* p) { cout << "f(int* p)" << endl; }   //C++把此类型和上面的类型等同为一样的类型
//void f(const int* const) { cout << "f(const int* const p)" << endl; }    //C++把此类型和下面的类型等同
void f(const int* p) { cout << "f(const int* p)" << endl; }  //指针不是const,把指向的对象const


int main()
{

	const Account a(0);   //每种定义方式都要有对应的构造函数
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
	newf(VIRTUAL);    //枚举成员是int类型,所以调用newf(int y)

	ff('a');   //字符串类型优先转变为int,所以传入参数时调用void ff(int x)

	manip(3.14);   //long和float优先级无区分,所以存在二义性,double最为匹配;
	return 0;
}
