#include <iostream>
#include <cstdlib>

using namespace std;

//本节知识点:
					//两种形式
						// return;
						// return 返回值;
					//具有返回值的函数
						// 1.主函数main的返回值
						// 2.返回非引用类型
						// 3.返回引用
						// 4.千万不要返回局部对象的引用
						// 5.引用返回左值
						// 6.千万不要返回指向局部对象的指针

void do_a()
{
	cout << "a" << endl;
	cout << "baa" << endl;
	return;       //return之后的内容,会屏蔽;
	cout << "ala" << endl;
	cout << "Jamaal" << endl;
	return; //可以省掉,C++会自动补充return
}

int add(const int& a, const int& b)
{
	int sum = 0;
	sum = a + b;
	return sum;
}

void swap(int& v1, int& v2)
{
	if (v1==v2)
	{
		return;
	}
	int temp = v2;
	v2 = v1;
	v1 = temp;
}

int main()
{
	do_a();

	int a = 1, b = 10;
	cout << "before" << a << ", " << b<<endl;
	cout << "after" << a << "," << b << endl;
	return 0;
}
