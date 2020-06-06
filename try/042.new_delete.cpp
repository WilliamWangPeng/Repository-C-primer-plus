#include <iostream>
#include <string>

using namespace std;


//本节知识点:
					//动态创建数组:自由存储区

					//new:动态创建数组
/*                   1.动态创建对象的初始化
					 2.动态创建对象的默认初始化
					 3.耗尽内存                       */

					//delete:撤销动态创建的对象
/*					 1.零值指针的删除
					 2.在delete之后,重设指针的值			*/

				    //const 对象的动态分配和回收


	//静态创建的对象是在堆栈上编译时创建的,动态创建的对象是在内存中运行时创建的

class Dog
{
	//类的成员
};



// 1.动态创建对象的初始化   2.动态创建对象的默认初始化    3.耗尽内存
void demo()
{
	int i(1024);
	int* pi = new int(1024);

	string s(10, '9');
	string* ps = new string(10, '9');   //初始化

	Dog dog;    //写不写括号,都会调用默认的构造函数初始化
	Dog dog2();
	Dog* pdog = new Dog;
	Dog* pdog2 = new Dog();

	delete pi;
	delete ps;
	delete pdog;
	delete pdog2;
}

void demo2()
{
	int* pi = new int;   //没括号就没初始化,有括号就有初始化
	int* pi2 = new int();

	delete pi;
	delete pi2;
}

//1.零值指针的删除
//2.在delete之后, 重设指针的值
void demo3()
{
	int i;   
	int* pi = &i;
	string str = "hello";
	double* pd = new double(33);


	//delete str;   //这是一个错误,非动态对象无法delete
	//delete pi;    //编译可通过,但同样是一个错误
	delete pd;   //delete 少了多了都会出现严重问题
	            //pd还是保存原来的地址;
	pd = 0;     //delete 动态对象之后将指针指向0

}


//const 对象的动态分配和回收
void demo5()
{
	const int* pci = new const int(1024);
	const string* pcs = new const string;

	delete pci;
	delete pcs;
}

int main()
{
	int i;   //静态创建对象
	int* pi = new int;   //动态创建对象,没名,使用new动态创建的对象必须用指针

	i = 12;
	*pi = 12;

	string* ps = new string;  //使用默认的构造函数进行初始化

	delete pi;
	delete ps;
	return 0;
}
