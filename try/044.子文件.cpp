#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
//���������
	int i;
	for ( i=0;i<100;++i)     //������ڶ���ı���,������,������ʧ
	{
		cout << i << endl;
		
	}

	cout << "ѭ����i:" << i << endl;


	vector<int> vec;
	vec.push_back(12);
	vec.push_back(3);
	vec.push_back(8);
	vec.push_back(7);
	vec.push_back(6);

	for (vector<int>::size_type index =0; index!=vec.size();++index)
	{
		int square;
		if (index%2)
		{
			square = index * index;
		}
		vec[index] = square;
	}

	
	return 0;
}
