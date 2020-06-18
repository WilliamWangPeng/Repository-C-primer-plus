#include <iostream>
#include <string>
#include "066.Header.h"





//Dog a;   //全局对象,会自动初始化

int main()
{
	cout << "hello,构造函数" << endl;

	//Dog a; //局部对象,不会初始化
	static Dog a;    //静态对象,生命周期和全局对象一样

	cout << a.number << endl;
	cout << a.name << endl;


	return 0;
}
