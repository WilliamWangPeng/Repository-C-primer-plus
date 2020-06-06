#include <iostream>
#include <string>


using namespace std;


//本节知识点: 
					//堆(heap) - 自由存储区(free store)
					//C语言: malloc 和 free;
					//C++语言: new 和 delete[]
					//动态数组的定义
					//初始化动态分配的数组
					//const对象的动态数组;
					//允许动态分配空数组
					//动态空间的释放
					//动态数组的使用



int main()
{
	int a[10];   //静态数组,堆栈上创建的

	int n;


//C语言创建动态数组    malloc 和 free;
	cout << "you want how big array is" << endl;
	cin >> n;

	int* p =(int*) malloc(n * sizeof(int));
	if (p!=NULL)
	{
		cout << "malloc创建成功;" << endl;
	}

	free(p);    //释放C语言创建的动态数组





//C++创建动态数组		new 和 delete[]
	int* pia = new int[n];   //之所以是动态数组,是由于n是变量,不是常量

	if (pia!=NULL)
	{
		cout << "C++ 数组创建成功" << endl;
	}

	delete[] pia;  //释放C++释放的数组





	return 0;
}
