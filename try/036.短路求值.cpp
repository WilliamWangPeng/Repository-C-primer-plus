#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{

//�����������ʾ��
	int val;
	vector<int> vec;

	
	//��·��ֵ-������,�����һ������ʽ������,�ڶ�������ʽ�Ͳ��ж���
	while (cin >> val&&val!=42) 
	{
		vec.push_back(val);
	}

	for (vector<int>::const_iterator it=vec.begin();it!=vec.end();++it)
	{
		cout << *it << endl;
	}


	//��·��ֵ-������,�����һ������ʽ����,�ڶ�������ʽ�Ͳ��ж���
	string s("hello c and c++ programming fun");
	string::iterator it = s.begin();     //iterator��һ��������;
	while (it!=s.end()&&!isspace(*it))    
	{
		*it = toupper(*it);
		++it;
	}

	
	return 0;
}
