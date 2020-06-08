#include <iostream>
#include <string>
#include <vector>

using namespace std;

//输入两个向量,并比较一个是否为另一个的前缀

int main()
{
	vector<int> ivec1, ivec2;
	int ival;

	cout << "enter elements for the first vector:(32767 to end)" << endl;
	cin >> ival;
	while (ival != 32767)
	{
		ivec1.push_back(ival);
		cin >> ival;

	}

	/*while (cin>>ival)
	{
		ivec1.push_back(ival);
	}

	cin.clear();     //注意此处,由于第一次循环用Ctrl+z结束,屏蔽了cin,所以使用cin.clear()取消屏蔽,使下一次cin可以使用

	while (cin>>ival)
	{
		ivec2.push_back(ival);
	}*/


	cout << "enter elements for the second vector:(32767 to end)" << endl;
	cin >> ival;
	while (ival!=32767)
	{
		ivec2.push_back(ival);
		cin >> ival;
	}

	//比较两个数组,看一个向量是否是另一个向量的前缀
	vector<int>::size_type size1, size2;
	size1 = ivec1.size();
	size2 = ivec2.size();
	bool result = true;

	for (vector<int>::size_type ix=0; ix!=(size1>size2 ? size2:size1);++ix)
	{
		if (ivec1[ix]!=ivec2[ix])
		{
			result = false;
			break;
		}
	}

	if (result)
	{
		if (size1<size2)
		{
			cout << "the first vector is prefix of the second one";
		}
		else if (size1==size2)
		{
			cout << "two vectors are equal." << endl;
		}
		else
		{
			cout << "the second vector is prefix of the first one";
		}
	}
	else
	{
		cout << "no vector is prefix of the other one:";
	}
	return 0;
}
