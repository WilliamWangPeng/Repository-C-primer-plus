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
	for (int i = 0; i < 10; ++i)    //三个部分每个部分都可以省略
	{
		cout << i << endl;
	}



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



	vector<string> svec;
	svec.push_back("I");
	svec.push_back("love");
	svec.push_back("C++");

	for (vector<string>::size_type ind=0; ind!=svec.size();++ind)
	{
		cout << svec[ind];

	}

	cout << endl;
	return 0;
}
