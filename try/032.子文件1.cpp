#include <iostream>
#include <string>

using namespace std;

class Dog
{

};


int main()
{

//C++动态数组初始化
	int* pia = new int[10];     //int为内置类型不会自动初始化;

	string* psa = new string[10];        //默认的构造函数会初始化

	Dog* pDog = new Dog[10];
	int* pia2 = new int[10]();		//加上括号就初始化为零

	cout << *(pia2 + 2) << endl;

	*pia = 9;    //动态数组不可以使用{}进行初始化,初始化需要用循环逐个元素进行初始化
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


//const对象的动态数组;
	const int* pci_bad = new const int[100];   //由于是const无法修改

	cout << "请输入动态数组大小" << endl;

	size_t n;
	cin >> n;

	int* p = new int[n];
	for (int*q=p;q!=p+n;++q)
	{
		*p = 22;
		cout << *p << endl;
	}


//动态空间的释放
	delete[] p;
	delete[] pia;
	delete[] pia2;
	delete[]pci_bad;

	return 0;
}

