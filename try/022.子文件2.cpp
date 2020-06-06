#include <iostream>
#include <string>
#include <vector>

using namespace std;


//读一段文本到vector对象,打印每个单词

int main()
{
	string str;
	vector<string> svec;

	cout << "enter text(ctrl+z to end):" << endl;
	while (cin>>str)
	{
		svec.push_back(str);
	}
	if (svec.size()==0)
	{
		cout << "no string!" << endl;
		return -1;

	}


	cout << "transformed elements from the vector:"
		<< endl;


//此处用到了迭代数组	

	for (vector<string>::size_type ix=0;ix!=svec.size();++ix)  
	{
		for (string::size_type index=0;index !=svec[ix].size();++index)
		{
			if (islower(svec[ix][index]))
			{
				svec[ix][index] = toupper(svec[ix][index]);
			}
		}
		cout << svec[ix] << " ";
		if ((ix+1)%8==0)
		{
			cout << endl;    //此处换行,每八个单词一行
		}
	}              
	return 0;

									//补充:生成可执行文件后,用cmd进入文件根目录,执行程序同时反定向相应文本,可批量读入文本
}
