#include <iostream>
#include <cassert>   //引入头文件,从而可以使用 assert 断言

using namespace std;

//使用预处理器进行调试
					//预处理指令
					//#ifndef NDEBUG
						//cerr<<...<<endl;
					//#endif

					//附加选项: /DNDEBUG (加上即可使预处理指令内的代码失效)
					
					//预定义常量
					// _FILE_
					// _LINE_
					// _TIME_
					// _DATE_

					//assert 断言
int 金额 = 60000;

void 取钱(int 数量)
{
	if (数量<0)
	{
		cout << "数量不能小于零" << "文件" << __FILE__<<endl
			<< "行" << __LINE__ << endl
			<< "日期" << __DATE__ << endl
			<<"时间"<<__TIME__ << endl;
		return;
	}
	金额 -= 数量;
}

int add(int x, int y)
{
	return x * y;
}

int main()
{

#ifndef NDEBUG
	cout << "start main" << endl;    //调试用的,在项目属性的命令行里加入  /DNDEBUG  即可
#endif


	取钱(100);

	int 结果;
	结果 = add (1,2);
	assert(结果 == 3);   //如果不满足条件,程序在此结束,并输出相关信息
						//当添加附加信息 /DNDEBUG 之后, assert也失效;

	/*if (结果!=3)
	{
		cout << "结果错了" << endl;
	}*/


#ifndef NDEBUG
	cout << "end" << endl;   //调试用的
#endif


	return 0;
}
