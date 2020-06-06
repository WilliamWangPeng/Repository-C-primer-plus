#include <iostream>
#include <string>

using namespace std;

int main()
{

//string使用示例;

	string str("hello");   //初始化str

	cout << str[0] << endl;
	cout << str[4] << endl;

	for (string::size_type i = 0; i != str.size() ; ++i)  //建议用和string配套的大小类型
	{
		cout << str[i] << ' ' << endl;

	}

	for (string::size_type i=2;i!=str.size();++i)
	{
		str[i] = '*';
	}
	cout << str << endl;
	return 0;
}


