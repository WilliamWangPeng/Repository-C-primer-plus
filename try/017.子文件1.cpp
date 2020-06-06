#include <iostream>
#include <string>

using namespace std;

int main()
{
	cout << "please begin your input:" << endl;
	string line;
	while (getline(cin,line))  //每次读一行
	{
		cout << line << endl;
	}

	string word;
	while (cin>>word)  //每次读一个单词
	{
		cout << word << endl;
	}
	
	return 0;
}
