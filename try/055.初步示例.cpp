#include <iostream>
#include <string>

using namespace std;


//本节知识点:
					//非引用形参
	/*					1.普通形参
							非const形参
							const形参;
						2.指针形参
							非const指针形参
							const指针形参;
						3.复制实参的局限性								*/
					//引用形参



void AddOne(int x)    //普通形参,非引用形参,传参时只是拷贝
{
	x += 1;
}

void AddTwo(int* px)   //指针形参,由于传入的是地址,传入指针后copy原地址,所以作用和引用形参相似
{
	*px += 1;
}

void AddThree(int& x)  //引用形参
{
	x += 1;
}





int main()
{
	int a, b, c;
	a = 1;
	b = 2;
	c = 3;
	AddOne(a);
	cout << a << endl;

	AddTwo(&b);
	cout << b << endl;
	
	AddThree(c);
	cout << c << endl;


	return 0;
}
