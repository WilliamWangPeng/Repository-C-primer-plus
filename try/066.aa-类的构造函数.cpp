#include <iostream>
#include <string>

using namespace std;


//本节知识点:
					// 构造函数是特殊的成员函数,可以写在类的外面
					// 构造函数的定义
					// 构造函数的初始化列表
					// 合成的默认构造函数

class Person
{
public:			//用初始化列表初始化
	Person():钱(0),number(299)   //函数定义时无参数,所以是默认构造函数
	{

	}

public:
	int	钱=678;  //可以初始化,不知原因
	int number = 29;
};


int main()
{
	Person a;      //通过调用 Person 的构造函数创建
	Person 我;

	

	cout << a.钱 << endl;
	cout << 我.钱 << endl;
	return 0;
}
