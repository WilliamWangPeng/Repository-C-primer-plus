#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	bool a;
	a = true;
	a = false;

	a = -10;   //ֻҪ����0,�Ͷ���true

	cout << a << endl;

	bool �Ͽ�,����;
	���� = false;
	�Ͽ� = false;
	if (����||�Ͽ�)  //�߼���
	{
		cout << "�������" << endl;
	}
	if (!����)   //�߼���
	{
		cout << "�������" << endl;
	}
	if (!����&&!�Ͽ�)   //�߼���
	{
		cout << "����" << endl;
	}

	int x = 0;
	vector<int> vec;
	vec.push_back(6);
	vec.push_back(9);

	if (!vec.empty())   //���Ϊ��empty()����1
	{
		x = *vec.begin();
		cout << x << endl;
	}

	string s("hello");
	string::iterator it = s.begin();
	while (it!=s.end())
	{
		*it = toupper(*it);
		++it;
	}
	cout << s << endl;

	return 0;
}
