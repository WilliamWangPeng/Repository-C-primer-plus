#include <iostream>
#include <string>

using namespace std;


//本节知识点:
					//递归的是神,迭代的是人
					//自己调用自己
					//老奶奶讲故事
					//计算阶乘
						// 使用递归(递归可以使算法结构简单,但由于中间步骤都需要暂存,所以慢,内存占用大
						// 使用迭代(就是循环,可以用递归的都可以转化为循环)

void doA()
{
	cout << "hello" << endl;
	doA();
}

void 老奶奶讲故事()
{
	cout << "从前有座山,山里有座庙,庙里有个老和尚,老和尚在给小和尚讲故事,讲的是:" << endl;
	老奶奶讲故事();
}

       //迭代算法
long 阶乘(int n)
{
	if (n==0)
	{
		return 1;
	}
	else
	{
		return n * 阶乘(n - 1);
	}
	
}

		//递归算法
long 阶乘2(int n)
{
	long 结果 = 1;
	for (int i = n; i > 0; i--)
	{
		结果 = 结果 * i;
	}
	return 结果;
}


int main()
{
	int  number;
	cin >> number;
	for (int i=0;i!=number;++i)
	{
		cout <<i<<"!= "<< 阶乘(i) << endl;
	}

	
	
	return 0;
}
