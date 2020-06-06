#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{

//输入一串数字
	int ival;
	vector<int> ivec;

	cout << "enter numbers(ctrl+z to end):" << endl;
	while (cin >> ival)
	{
		ivec.push_back(ival);
	}




//把一组数值首尾相加
	if (ivec.empty())
	{
		cout << "no element" << endl;
		return -1;
	}
	cout << "sum of each pair of adjacent elements in the vector" << endl;

	vector<int>::size_type first, last;
	for (first=0,last=ivec.size()-1;first<last ; ++first,--last)
	{
		cout << ivec[first] + ivec[last] << endl;
	}
	if (ivec.size()%2!=0)
	{
		cout << "中间的一个数没有相加" << endl;

		cout << first << endl;
	}

	return 0;
}
