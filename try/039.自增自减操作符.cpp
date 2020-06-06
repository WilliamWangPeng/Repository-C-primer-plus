#include <iostream>
#include <string>
#include <vector>

using namespace std;

//本节知识点:
					//前置操作和后置操作  ++a    a++
					//后置操作符返回未加1的值
					//只有在必要时才使用后置操作符
					//单个表达式中组合使用解引用和自增操作



int main()
{

//后++的使用
	int a, b;
	a = 2;
	b = ++a;   //++a是先加后赋值, a++是先赋值后加,而且++a速度比a++快;
	cout << "b=" << b << endl;

	vector<int> ivec;
	int cnt = 10;
	while (cnt>0)
	{
		ivec.push_back(cnt--);
	}

	vector<int>::iterator iter = ivec.begin();
	while (iter != ivec.end())
	{
		cout << "while:" << *iter++ << endl;
	}

	return 0;
}
