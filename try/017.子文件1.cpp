#include <iostream>
#include <string>

using namespace std;

int main()
{
	cout << "please begin your input:" << endl;
	string line;
	while (getline(cin,line))  //ÿ�ζ�һ��
	{
		cout << line << endl;
	}

	string word;
	while (cin>>word)  //ÿ�ζ�һ������
	{
		cout << word << endl;
	}
	
	return 0;
}
