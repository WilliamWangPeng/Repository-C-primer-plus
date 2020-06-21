#include <iostream>
#include <string>
#include <vector>

using namespace std;

//本节知识点:

					//用typedef简化函数指针的定义
					//指向函数的指针的初始化和赋值
					//通过指针调用函数
					//函数指针形参
					//返回指向函数的指针
					//指向重载函数的指针



//用typedef简化函数指针的定义
typedef bool (*cmpFcn)(const string&, const string&);
typedef int (*PF)(int*, int);   //用typedef简化 返回指向函数的指针



bool lengthCompare(const string& s1, const string& s2)
{
	return s1.size() == s2.size();
}

void useBigger(const string& s1, const string& s2, bool(*pf)(const string&, const string&))
{
	cout << pf(s1, s2) << endl;
}


//返回指向函数的指针
int demo(int* p, int a)
{
	return 12;
}
int (*ff(int x))(int*, int)   //ff是一个函数,有一个形参x,返回结果是一个函数指针 int(*)(int *,int)
{
	cout << x << endl;
	return demo;
}
PF ff(int x)    //同上
{
	cout << x << endl;
	return demo;
}

//指向重载函数的指针
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
	//void (*pf5)(int) = ff;    //参数类型必须精确匹配,不存在寻找最佳匹配的问题


	int oo = 8;
	cout << ff(2)(&oo, oo) << endl;


	int a = 5;
	int* pa;

	cmpFcn pf2;
	pf2 = lengthCompare;

	useBigger("hi", "function", pf2);   //也可以传函数名替代函数指针,因为函数名就是指向函数的指针

	bool (*pf)(const string&, const string&);   //定义一个指针,pf是一个指针,指向函数的指针;
												//必须指向同类型的函数且函数返回值必须与指针类型匹配;

	//pf = &lengthCompare;   //取函数地址
	pf = lengthCompare;   //函数的名称就是指向函数地址的指针,所以可以直接赋值
	pa = &a;

	cout << lengthCompare("hello", "pointer");   //直接调用函数

	//cout << (*pf)("hello", "pointer");   //函数指针调用函数
	cout << pf("hello", "pointer");    //*也可以省略

	return 0;
}
