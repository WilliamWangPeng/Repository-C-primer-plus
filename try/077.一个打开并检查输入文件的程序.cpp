#include <iostream>
#include <fstream>
#include "075.Header.h"

using namespace std;

//����֪ʶ��:
					//���� open_file(...)
					// �ص�ϰ����

ifstream& open_file(ifstream& in, const string& file)
{
	in.close();   //�������ղ���
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
