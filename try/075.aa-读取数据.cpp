#include <iostream>
#include <fstream>    //ifstream�����ļ���;
#include <string>
#include "075.Header.h"

using namespace std;

//����֪ʶ��:     ����ϰ��

int main()
{
	cout << "���ļ���ȡ���� " << endl;
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
	cout << "���������������� " << endl;
	get(cin);

	cout << "continue using cin " << endl;
	cin >> dval;
	cout << "you have input " << dval << endl;
	
	return 0;
}
