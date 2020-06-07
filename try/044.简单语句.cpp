#include <iostream>
#include <string>
#include <vector>

using namespace std;


//本节知识点:
					//简单语句
/*						1.表达式语句
						2.空语句                       */
					//声明语句
				    //复合语句(块语句)
				    //语句作用域


int main()
{
	
	int ival = 1;
	ival = ival + 5;

//块语句,不写分号
	for (int i=0; i<19;++i)      
	{
		cout << i;
	}

	for (int j = 0; j < 10; ++j)      //作用同上,无大括号,就要加分号
		;

	int a[9] = { 1,2,3,4,5,6,7,8,9 };
	int i = 0;
	int j = 8;
	int p = a[4];

    //将数组中大于a[4]的放在后面,小于a[4]的放在前面
	do 
	{
//2.空语句
		while (a[++i]<p)   //空循环的巧妙利用
		{
		}
		while (a[--i]>p)
		{
		}
		if (i < j) { swap(a[i], a[j]); }
	} while (i<j);

	vector<string> svec;
	svec.push_back("hello");
	svec.push_back("string");
	svec.push_back("vector");
//1.表达式语句
	vector<string>::iterator iter = svec.begin();
	while (iter!=svec.end())
	{
		++iter;
	}


	return 0;
}
