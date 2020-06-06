#include <iostream>
#include <string>

using namespace std;

//本节知识点: 
					//多维数组:数组的数组
					//多维数组的初始化
					//多维数组的下标引用
					//指针和多维数组
					//用typedef简化指向多维数组的指针




//用typedef简化指向多维数组的指针
typedef int int_array[4];
							//多维数组:数组的数组
							 //注意此处写法,特别巧妙,[4]用的特别巧妙

int main()
{

//多维数组:数组的数组  多维数组的初始化
	const size_t rowSize = 3;
	const size_t colSize = 4;
	int ia[rowSize][colSize] = {     //三行四列,三行是三个数组,每个数组里有四个元素
		{0,1,2,3},
		{4,5,6,7},		//若未写全,会自动初始化
		{8,9,10,11}    //书写时不要大括号也是正确的,但不好阅读
	};  

	cout << ia[1][2] << endl;


// 多维数组的初始化
	//第一种方式
	for (size_t i=0;i!=rowSize;++i)
	{
		for (size_t j=0;j!=colSize;++j)
		{
			cout << ia[i][j] <<" ";
		}
		cout << endl;
	}

	//第二种方式
	for (int_array *p=ia; p!=ia+3;++p)  //注意细节:大循环指针指向无*的ia,小循环指向有*的p
	{
		for (int *q=*p;q!=*p+4;++q)  
		{
			cout << *q << " ";
		}
		cout << endl;
	}

	//第三种方式
	int(*p)[4];
	for (p=ia;p!=ia+3;++p)
	{
		for (int *q=*p;q!=*p+4;++q)
		{
			cout << *q << " ";
		}
		cout << endl;
	}
	return 0;   //此处return,后面的就不执行了


//指针和多维数组
	int_array* ip;  //和下面这个一样,很巧妙
	//int(*ip)[4];    //定义了一个指向int类型数组的指针
	//int *ip[4]  //这是一个数组,数组内元素为int类型的指针
	ip = ia;  //指向第一行
	ip = &ia[2];  //指向第三行
	for (int *q=*ip;q!=*ip+4;++q)  //输出数组中多个元素必须用循环,直接列举cout不可以
	{
		cout << *q << endl;
	}
	ip = &ia[2];

	return 0;
}
