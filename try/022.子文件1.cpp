#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{

//����һ������
	int ival;
	vector<int> ivec;

	cout << "enter numbers(ctrl+z to end):" << endl;
	while (cin >> ival)
	{
		ivec.push_back(ival);
	}




//��һ����ֵ��β���
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
		cout << "�м��һ����û�����" << endl;

		cout << first << endl;
	}

	return 0;
}
