#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

int fileToVector(string fileName, vector<string>& svec)
{
	ifstream inFile(fileName.c_str());
	if (!inFile)
		return 1;

	string s;			 //���ֶ�ȡ
	while (inFile>>s)
		svec.push_back(s);
	
	/*while (getline(inFile, s))   //���ж�ȡ
	{
		svec.push_back(s);
	}*/
	inFile.close();

	if (inFile.eof())
		return 4;

	if (inFile.bad())
		return 2;

	if (inFile.fail())
		return 3;
		
	
}

int main()
{
	cout << "����һ��" << endl;

	vector<string> svec;
	string fileName;

	cout << "enter filename ";
	cin >> fileName;

	switch (fileToVector(fileName, svec))
	{
	case 1:
		cout << "can not open file " << endl;
		return -1;
	case 2:
		cout << "error: system  failure " << endl;
		return -1;
	case 3:
		cout << "error: read failure" << endl;
		return -1;
	}

	cout << "����������� " << endl;
	for (vector<string>::iterator iter=svec.begin(); iter != svec.end();++iter)
	{
		cout << *iter << endl;
	}
	
	cout << "in total,there are: " <<svec.size()<< endl;    //svec������Ϊ��λ��ȡ,���Դ�С��������;
	return 0;
}
