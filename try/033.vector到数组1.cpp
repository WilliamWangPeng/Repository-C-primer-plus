#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	
//vector-->数组


	//把输入到向量里的数据全部copy到动态数组里

	vector<int> ivec;
	int ival;

	cout << "enter numbers:(ctrl+z to finish)" << endl;
	while (cin>>ival)
	{
		ivec.push_back(ival);

	}

	int* parr = new int[ivec.size()];  
	size_t ix = 0;
	for (vector<int>::iterator iter=ivec.begin(); iter != ivec.end();++iter,++ix)
	{
		
		parr[ix] = *iter;
		
	}
	for (ix=0;ix<ivec.size();++ix)
	{
		cout << *(parr + ix) << endl;
	}

	delete[]parr;  //有new就必须有delete
	return 0;
}
