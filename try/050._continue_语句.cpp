#include <iostream>
#include <string>
#include <cctype>    //判断大小写

using namespace std;

//输入一些单词判断首字符是否大写

int main()
{
	string word;
	cout << "enter some words:(ctrl+z to end)" << endl;
	while (cin>>word)
	{
		if (islower(word[0]))
		{
			continue;         //跳过本次循环,继续执行下一次循环
		}
		else
		{
			cout << "找到一个大写单词" ;
			cout << word;
			cout << ", 其长度是";
			cout << word.size() << endl;
		}
	}
	return 0;
}
