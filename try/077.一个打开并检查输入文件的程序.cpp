#include <iostream>
#include <fstream>
#include "075.Header.h"

using namespace std;

//本节知识点:
					//函数 open_file(...)
					// 重点习题解答

ifstream& open_file(ifstream& in, const string& file)
{
	in.close();   //两步保险操作
	in.clear();
	in.open(file.c_str());
	return in;
}

int main()
{
	string fileName, s;
	ifstream inFile;
	if (!open_file(inFile,"074.test.txt"))
	{
		cout << "error: can not open file "<<fileName << endl;
		return -1;
	}
	else
	{
		get(inFile);
	}

	
	
	return 0;
}
