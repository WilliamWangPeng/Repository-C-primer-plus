#include <iostream>
#include <vector>

using namespace std;

//本节知识点:
					//重载函数:出现在相同作用域的两个函数,名字相同形参不同
					//好处: 不用费心给每一个函数起名字
					//函数重载和重复声明的区别
						// 1.错误: 形参表相同,返回类型不同
						// 2.函数不能仅仅基于不同的返回类型而实现重载
					// 何时不重载函数名

void show(int x)
{
	cout << x << endl;
}

void show(vector<int> v)     //函数重载,自动判断参数类型
{
	for (vector<int>::iterator iter=v.begin();iter!=v.end();++iter)
	{
		cout << *iter << endl;
	}
}
int main()
{
	int a = 89;
	vector<int>b;

	b.push_back(1);
	b.push_back(2);
	b.push_back(3);
	
	show(a);
	show(b);
	
	return 0;
}
