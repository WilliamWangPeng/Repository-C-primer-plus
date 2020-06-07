#include <iostream>
#include <string>
#include <vector>

using namespace std;


//本节知识点:
					//if
					//if...else
					//嵌套的if
					//悬垂的else(if 和else的配对)
					//if语句中总是使用大括号(块语句);

int compute_value()
{
	return 6;
}




int main()
{
	int score=88;
	if (score>=60)
	{
		cout << "合格" << endl;
	}

	if (int ival=compute_value())
	{
		cout << "hello" << endl;
	}
	else
	{
		cout << "no hello" << endl;
	}

	int a[] = { 9,7,5,3,1,2,4,6,8,9,8,5,2,1,3,2,1 };
	vector<int> ivec;
	for (int i=0;i<sizeof(a)/sizeof(int);++i)
	{
		ivec.push_back(a[i]);
		cout << a[i] << endl;
	}


	//寻找数组中最小的元素,并计数
	int minVal = ivec[0];
	int occurs = 1;
	for (int i=1;i<ivec.size();++i)
	{
		if (minVal==ivec[i])			
		{								
			++occurs;
		}
		else if (minVal>ivec[i])
		{
			minVal = ivec[i];
			occurs = 1;
		}
	}




//嵌套的if
	//	作用同上,不同的写法
	for (int i = 1; i < ivec.size(); ++i)
	{
		if (minVal >= ivec[i])
		{
			if (minVal == ivec[i])
			{
				++occurs;
			}
			//悬垂的else(if 和else的配对)
			else
			{
				minVal = ivec[i];
				occurs = 1;
			}
		}
	}					

	//四个if语句嵌套在一起
	if (score >= 90)
	{
		cout << "great" << endl;
	}
	else if (score >= 80)
	{
		cout << "good" << endl;
	}
	else if (score >= 70)
	{
		cout << "ok" << endl;
	}
	else if (score >= 60)
	{
		cout << "fine" << endl;
	}
	else
		cout << "bad" << endl;

	cout << endl;
	cout << minVal << endl;
	cout << occurs;
	cout << endl;
	
	return 0;
}
