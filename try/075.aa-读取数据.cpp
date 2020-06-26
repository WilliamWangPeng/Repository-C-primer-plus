#include <iostream>
#include <fstream>    //ifstream所在文件夹;
#include <string>
#include "075.Header.h"

using namespace std;

//本节知识点:     两个习题

int main()
{
	cout << "从文件读取数据 " << endl;
	string fileName;
	cout << "enter fileName " << endl;
	cin >> fileName;
	ifstream inFile(fileName.c_str());
	if (!inFile)
	{
		cerr << "error: can not open input file " << fileName;
		return -1;
	}
	get(inFile);



	double dval;
	cout << "接下来是数字输入 " << endl;
	get(cin);

	cout << "continue using cin " << endl;
	cin >> dval;
	cout << "you have input " << dval << endl;
	
	return 0;
}
