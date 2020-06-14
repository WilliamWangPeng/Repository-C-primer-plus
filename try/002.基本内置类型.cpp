#include <iostream>

using namespace std;

void doA(void)  //void无返回值;
{

}

int doB(int a)  //返回值为int类型,必须返回值
{
	return 0;
}


//本节知识点:
					//void类型;
					//整型
						//有符号和无符号
						//整型值的表示
						//整型的赋值
							//把一个大数赋值给一个小类型
							//把一个大数赋值给一个无符号类型
					//浮点型

int main()
{


//内置的基本算数类型

	int a;  //int 为内置类型,class定义的内容,为自定义类型;
	
	cout << "bool\t\t" << sizeof(bool) << endl;
	cout << "short\t\t" << sizeof(short) << endl;
	cout << "wchar_t\t\t" << sizeof(wchar_t) << endl;
	cout << "int\t\t" << sizeof(int) << endl;  //整型速度远比浮点型速度快
	cout << "float\t\t" << sizeof(float) << endl;
	cout << "double\t\t" << sizeof(double) << endl; 
	cout << "long\t\t" << sizeof(long) << endl;
	cout << "long double\t\t" << sizeof(long double) << endl;
	cout << "long long\t\t" << sizeof(long long) << endl;



	cout << "测试" << endl;

	return 0;
}