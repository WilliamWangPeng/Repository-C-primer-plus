#include <iostream>
#include <string>

using namespace std;

int main()
{

//stringʹ��ʾ��;

	string str("hello");   //��ʼ��str

	cout << str[0] << endl;
	cout << str[4] << endl;

	for (string::size_type i = 0; i != str.size() ; ++i)  //�����ú�string���׵Ĵ�С����
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


