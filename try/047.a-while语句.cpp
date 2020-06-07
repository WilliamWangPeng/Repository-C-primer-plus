#include <iostream>
#include <string>

using namespace std;

//本节知识点:
					//循环条件中定义变量
					//循环条件中进行赋值
					//简介即是美
						// while(source!=arr1+sz)
							//*dest++ = *source++;

					//寻找输入单词中出现连续重复次数最多的单词

int getNumber()
{
	int num;
	cout << "请输入一个数做循环次数:";
	cin >>num;
	return num;
}


int main()
{
	int i = 0;


	while (i<10)
	{
		cout << i++ << endl;	
	}
	while (int cnt=getNumber())
	{
		if (cnt==0)     //当输入为零时,循环结束
		{
			break;
		}
		for (int m=0;m<cnt;++m)
		{
			cout << m << endl;
		}
	}
	return 0;
}
