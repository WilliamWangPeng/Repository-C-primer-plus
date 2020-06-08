#include <iostream>
#include <string>
#include <vector>
#include <ctime>    //包含时间头文件

using namespace std;

//本节知识点:
					//break语句;
						// 1.打断while
						// 2.打断do while
						// 3.打断for
						// 4.打断 switch
					//continue 语句 - 提前结束当次迭代,继续循环
					//goto 语句- 禁止使用


int main()
{
	//产生0-100的随机数
	vector<int> vec;
	int r;

	srand((unsigned)time(NULL));     //利用时间产生随机数种子

	for (int i=0;i<10000;++i)
	{
		r = rand() % 101;
		vec.push_back(r);
		cout << r << endl;
	}


	//产生的随机数,从中寻找100
	cout << "检查一下有没有人考了100分" << endl;
	vector<int>::iterator iter = vec.begin();
	while (iter!=vec.end())
	{
		if (*iter==100)
		{
			break;
		}
		else
		{
			++iter;
		}
	}
	if (iter!=vec.end())
	{
		cout << "有人考了100"<<endl;
	}
	else 
	{
		cout << "没有人" << endl;
	}



	//for (int k=0;k<100;++k)
	//{
	//	for (int j=0;j<100;++j)
	//	{
	//		if (vec[j]==100)
	//		{
	//			break;       //若有嵌套循环,break只可以打断本循环;
	//		}
	//	}
	//}

	return 0;
}
