#include <iostream>
#include <string>

using namespace std;

//本节知识点:(显式转换 - 强制类型转换运算符)
					//static_cast   对应C语言中的隐式转换,隐式转换遇到不匹配的转换时会报错

					//dynamic_cast    动态转换,用在类继承的时候

					//reinterpret_cast      对应C语言中的不可隐式转换的转换,对应硬转换

					//const_cast     常转换  强制转换const类型,去掉const

					//旧式强制类型转换 —— 传统C风格类型转换
					//避免使用强制类型转换


class Canimal     //基类
{
public:
	virtual void Speak() = 0;   //无此处语句,Cdog* pDog = dynamic_cast<Cdog*>(pAnimal)会出错
};

class Ccat:public Canimal     //类继承,public Canimal是类型相关语句,将Canimal和Ccat设为相关,派生类;
{
public:
	void CatchMice() { cout << "cat: I caught a mouse" << endl; }
	void Speak() { cout << "cat: Meow" << endl; }
};

class Cbook
{

};

class Cdog:public Canimal   //同样继承了Canimal,派生类
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

	int nNum = static_cast<int>(dPi);  //C++写法,会在编译时做一定的检查,不相关的类型不能转换

	int nNum2 = (int)dPi;   //C语言写法,不会做任何检查;

	int nNum3 = dPi;    //C语言中隐式的写法;

	string a = "hello world";
	string* pszString = &a;
	int* pBuf = (int*)pszString;   //C语言强制转换,硬转换;
	//int* pBuf2 = static_cast<int*> pszString;   //不相干类型,显示错误psz

	int* pBuf3 = reinterpret_cast<int*> (pszString);


	Canimal* pAnimal = new Ccat;
	Ccat* pCat = static_cast<Ccat*>(pAnimal);

	//Cbook* pBook = static_cast<Cbook>(pAnimal);   //由于Cbook和panimal不相关,所以会报错
	Cbook* pBook = reinterpret_cast<Cbook*>(pAnimal);   //硬转换



//const_cast     常转换  强制转换const类型,去掉const
	const char* pc_str = "hello world";
	char* pc = const_cast<char*>(pc_str);   //C++写法
	char* pc2 = (char*)pc_str;   //C语言写法;

	return 0;
}
