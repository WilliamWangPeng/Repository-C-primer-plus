#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	bool a;
	a = true;
	a = false;

	a = -10;   //只要不是0,就都是true

	cout << a << endl;

	bool 上课,下雨;
	下雨 = false;
	上课 = false;
	if (下雨||上课)  //逻辑或
	{
		cout << "不能外出" << endl;
	}
	if (!下雨)   //逻辑非
	{
		cout << "可以外出" << endl;
	}
	if (!下雨&&!上课)   //逻辑与
	{
		cout << "好哩" << endl;
	}

	int x = 0;
	vector<int> vec;
	vec.push_back(6);
	vec.push_back(9);

	if (!vec.empty())   //如果为空empty()返回1
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
