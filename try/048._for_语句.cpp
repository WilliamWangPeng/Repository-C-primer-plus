#include <iostream>
#include <string>
#include <vector>

using namespace std;

//本节知识点:
					//for(初始化;循环条件;表达式)
					//for 语句头的某些部分可以忽略
					//for语句中的多个定义;

int main()
{
//for(初始化;循环条件;表达式)
	for (int i = 0; i < 10; ++i)    //三个部分每个部分都可以省略
	{
		cout << i << endl;
	}


//for 语句头的某些部分可以忽略
	//如果无循环条件,则必须在内部有break
	int i=0;    //初始化省略可以外部定义
	for (;; ++i)
	{
		
		cout << i << endl;
		if (i>10)
		{
			break;
		}
		
	}

	cout << i << endl;

	cout << endl;



	vector<string> svec;
	svec.push_back("I");
	svec.push_back("love");
	svec.push_back("C++");

	cout << "输出的结果是:" <<'"';
	for (vector<string>::size_type ind=0; ind!=svec.size();++ind)
	{
		cout << svec[ind];   //ind表示第几个字符串;
		if (ind+1!=svec.size())
		{
			cout << " ";
		}
		
	}
	cout << '"';
	cout << endl;

	const int size = 12;
	int val = 0, ia[size] = { 2,3,4,5,6,7,2,3,5,8,6,4 };
	


//for语句中的多个定义;
	for (int* pi = ia,& ri = val, ival = 0; ival != size; ++ival)
	{
		cout << ia[ival] <<"'"<<ia[ri]<<","<<ia[val]<<","<<*pi<< endl;   //此处四种输出结果均相同
		++pi;
		++ri;   //由于ri是val的引用变量,所以ri++便是val++

	}
	
	return 0;
}
