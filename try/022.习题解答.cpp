#include <iostream>
#include <string>
#include <vector>

using namespace std;
								
int main()
{
	int ival;
	vector<int> ivec;

	cout << "enter two numbers(ctrl+z to end):" << endl;
	while (cin>>ival)
	{
		ivec.push_back(ival);
	}
	
	//计算相邻两个数之和
	if (ivec.empty())
	{
		cout << "no element" << endl;
		return -1;
	}
	cout << "sum of each pair of adjacent elements in the vector" << endl;
	for (vector<int>::size_type ix=0; ix<ivec.size()-1 ; ix+=2)   
										//相邻相加的写法,注意结束条件"ivec.size()-1",每次递加2
	{
		cout << ivec[ix] + ivec[ix + 1] << endl;
	}

	if (ivec.size()%2!=0)
	{
		cout << "the last element is not been summed" << endl;
		cout << "the last element is :" << ivec[ivec.size() - 1] << endl;
	}

	return 0;
}
