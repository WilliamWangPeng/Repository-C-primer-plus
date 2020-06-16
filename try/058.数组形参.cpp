#include <iostream>
#include <string>

using namespace std;

//本节知识点:
					//三种传递数组的写法,三种写法无区别
					//形参的长度会引起误解
					//数组实参--数组会悄悄地转换为指针
					//通过引用传递数组
					//多维数组的传递
					//传递给函数的数组的处理 -- 三种方法


					//x指向数组的第一个元素;
void printValues(const int* x, const size_t size)     //建议使用此写法
{
	for (size_t i=0; i!=size; ++i)
	{
		cout << x[i] << endl;
	}
	cout << endl;
}

void printValuse_2(const int x[], const size_t size)
{
	for (size_t i=0; i!=size; ++i)
	{
		cout << x[i] << endl;
	}
	cout << endl;
}

void printValues_3(const int x[10], const size_t size)
{
	for (size_t i=0;i!=size; ++i)
	{
		cout << x[i] << endl;
	}
	cout << endl;
}


void printValues_4(const int(&x)[10])    //这个10必须写,也正因为如此,这种写法显得很不灵活,不常用
{
	for (size_t i=0;i!=10;++i)
	{
		cout << x[i] <<" ";
		cout << endl;
	}
}

          //x是一个指针,指向的是一个有很多行的数组的第一行,每一行是10个数;
		  //一共 rowsize 行;
void printValues_5(const int(*x)[10], const int rowSize)   //利用指针传数组
{
	for (int i=0; i!=rowSize; ++i)
	{
		for (int j=0; j!=10; ++j)
		{
			cout << x[i][j] << " ";
		}
		cout << endl;
	}
}

void printValues_6(const int* beg, const int* end)
{
	while (beg!=end)
	{
		cout << *beg++ << " ";
	}
	cout << endl;
}

void printChars(const char* x)
{
	while (*x!=NULL)    //字符串最后一个字符是NULL
	{
		cout << *x++;
	}
	cout << endl;
}

int main()
{
	int arr[] = {2,4,6,8,0,1,3,5,7,9};
	char s[] = "Hello C++";

	printValues(arr,10);
	printValuse_2(arr, 10);
	printValues_3(arr, 10);
	printValues_4(arr);

	printValues_6(arr, arr + 8);

	int m[][10] =
	{
		{1,2,3,4,5,6,7,8,9,0},
		{2,3,5,6,2,5,8,4,2,7},
		{2,3,4,3,6,1,7,4,4,7}
	};

	printValues_5(m, 3);
	return 0;
}
