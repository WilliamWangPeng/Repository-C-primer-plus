#include <iostream>
#include <string>
#include <cstring>   //C语言字符串头文件;

using namespace std;				//C语言的多数内容不建议用来编写,但阅读代码时需要使用;


//本节知识点: 
					//C风格字符串的使用: const char*cp="some value"
					//C风格字符串的标准库函数;
					//永远不要忘记字符串结束符null
					//使用strn函数处理C风格字符串
					//尽可能使用标准库类型string





int main()
{



	//C语言和C++语言的字符串书写风格示例、定义注意事项、大小判断
	string s("hello");

	char s2[] = "hello";      //C语言的字符串实际上是一个字符数组;
	const char* cp = "hello";
	while (*cp)    //字符数组的最后一位是0
	{
		cout << *cp << endl;
		++cp;
	}


//永远不要忘记字符串结束符null
	char ca1[] = { 'c','++' };    //不是C风格的字符串,只是一个字符数组,由于结尾未加\0也就是null,所以输出有问题
	char ca2[] = { 'c','+','+','\0' };     //C风格的字符串;
	char ca3[] = "C++";      //C语言风格的字符串;

	

	char* cp1 = ca1;
	char* cp2 = ca2;


	const char* co1 = "C string example";
	
	string ss1("A string example");

	cout << strlen(cp1) << endl;      //strlen是C语言的标准库函数,用来数字符长度,不会计入最后一位自带的0
										//strlen()默认以为cp1最后有\0结束标志,如果没有会报错

	cout << ss1.size() << endl;	     //C++的计数函数

	char a[] = { 'C','+','+' };   //由于没有加'\0',所以会出现严重错误
	cout << string(a) << endl;    //输出数组中的字符

	printf("hello C language!\n");
	cout << "hello C++!" << endl;





	//C语言和C++语言对字符串的copy、连接、赋值

	string b1 = "bill";
	string b2 = "Mary";
	b1 = b2;      //C++会拷贝b1的值
	b1 += b2;

	//cp1 = "bill";
	//cp2 = "Mary";
	//cp1=cp2;    //但C语言只是把cp2的地址赋给了cp1


	//strcpy_s还是strcpy待探究,而且此程序存在错误

//C风格字符串的标准库函数;
	char large[10];
	strcpy_s(large, cp1);   //拷贝功能;  C语言的库函数strcpy_s()可以实现拷贝值的功能;cp1是一个指针   
	strcat_s(large, cp2);   //拼接功能;   实现字符串拼接的作用


//使用strn函数处理C风格字符串
	strncpy_s(large, cp1, 2);  //有'n'的函数更安全,建议使用,2是指只可以拷进去2个字符;
	strncat_s(large, " ", 1);  //C语言中加空格的方式;
	strncat_s(large, cp2, 3);

	string largeS;
	largeS = b1;    //C++的copy
	largeS = largeS + b2;   //C++的连接

	



//利用strcmp返回值判断大小

	int i = strcmp(cp1, cp2);    //C语言内的字符比较函数,cp1等于cp2,返回0;cp1大于cp2,返回1;cp1小于cp2,返回-1;

	if(i>0)     
	{
		cout << "cp1大" << endl;
	}
	else if(i<0)
	{
		cout << "cp2大" << endl;
	}
	else
	{
		cout << "一样大" << endl;
	}




//C++自带的判断方法
	if(b1>b2)      
	{
		cout << "b1大" << endl;
	}
	else if(b1<b2)
	{
		cout << "b1大" << endl;
	}
	else
	{
		cout << "一样大" << endl;
	}

	return 0;
}
