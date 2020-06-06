#include <iostream>
#include <string>

using namespace std;

int main()
{
//指针和引用的区别:
		//指针声明时可以不进行初始化,可以在之后通过赋值进行初始化;而且之后可以改变
		//引用在声明时,必须进行初始化;而且之后不能再改变
	int ival = 1024, ival2 = 2048;

	int* pi = &ival, * pi2 = &ival2;
	int& ri = ival, & ri2 = ival2;
	
	    


//指针的指针的定义
	int** ppi = &pi;  //指针的指针,pi是一个指针,ppi则是指向pi指针的指针;最终指向ival

	cout << ival << "," << *pi << "," << ri << endl;   //结果都等于ival(1024)
	
	return 0;
}
