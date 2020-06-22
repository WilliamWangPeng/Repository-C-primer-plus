#include <iostream>
#include <string>

using namespace std;

int main()
{
	int sum = 0, value;
	
	//简单方法,括号里隐含3个条件eof(), bad(), fail() 
	/*while (cin>>value)
	{
		sum += value;
		cout << "sum is" << sum << endl;
	}*/

	//更好的方法
	while (cin>>value,!cin.eof())     //后面的条件是循环继续的条件
	{
		if (cin.bad())	 //条件满足,打断循环,并抛出异常
		{
			throw runtime_error("IO stream corrupted");   
		}
		if (cin.fail())
		{
			cerr << "bad data, try again" << endl;
			cin.clear();    //恢复流的状态
			cin.ignore(200, '\n');    //防止cin里的数据影响之后输入,清除 \n 以前的数据,如果没有 \n ,就清除200个对象
			continue;
		}
		sum += value;
		cout << "sum is" << endl;
	}
	
	return 0;
}
