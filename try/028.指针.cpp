#include <iostream>
#include <string>
#include <vector>

using namespace std;
							//C++开发可以不用到指针,指针主要用来操作数组
								//简单来讲,指针就是对象的地址





//本节知识点:
					//什么是指针
					//指针的定义和初始化
					//指针操作



int main()
{

//什么是指针
//指针定义,地址,对象区分
	string s("hello world!");
	string* sp = &s;    //sp是指针,*代表sp是string类型的指针变量

	cout << s << endl;
	cout << *sp << endl;   
	cout << sp << endl;  

	vector<int>* pvec;
	int* ip1,*ip2;


//指针的定义和初始化
	int ival = 1024;
	int* pi = 0;  //指针是零,表示不指向任何对象
	int* pi2 = &ival;
	int* pi3;   //没有初始化,不可用,比较危险
	pi = pi2;  //指针可以copy值

	int ival2;
	int zero = 0;
	const int c_ival = 0;

	//int* pi4 = ival;    //这样写会出错,语法错误
	//int* pi5 = zero;     //指针必须指向一个常量

	int* pi6 = 0;    //指针可以等于零,意为不指向任何对象
	int* pi8 = NULL;   //同上
	//int* pi7 = 123444;     //如果指针等于一个数字,意思是指向一个地址,这样是不允许的



//指针操作
//指针指向同类型常量,与指向不同类型的常量
	double dval;
	double* pd = &dval;   //一个指针只能指向一个同类型的指针
	double* pd2 = pd;

	//int* pi9 = pd;  //类型不同
	//int* pi10=&dval;   //也不可以,类型不同

	double obj = 3.14;
	int k;
	void* pv = &obj;
	pv = &k;    
	//void类型指针被称为万能指针,可以指向不同类型的变量;			
	//但用途有限,不可以修改指向的变量
	int a = 1;
	int* pa = &a;
	a = a + 2;
	*pa = *pa + 2;




	return 0;
}
