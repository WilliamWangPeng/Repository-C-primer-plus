#include <iostream>
#include <string>
//#include <ctype.h>  //c语言原生写法,不提倡;
#include <cctype> //C++写法


//字符检查函数

using namespace std;

int main()
{
	string s("hELLo, world!!!!");

	string::size_type punct_cnt = 0;
	
	for (string::size_type index=0; index!=s.size();++index)
	{
		if (ispunct(s[index]))  //ispunct用来判断某个字符是不是标点符号;
			++punct_cnt;
	}
	cout<<"此字符串中有" << punct_cnt <<"个标点符号"<< endl;
	

	for (string::size_type index=0; index!=s.size();++index)
	{
		s[index] = tolower(s[index]);
	}
	cout << s << endl;

	//isalnum(a);  //检查字符是不是字母或数字
	//isalpha(a);  //检查是不是字母
	//iscntrl(a);  //检查是不是控制字符
	//isdigit(a);  //检查是不是数字
	//islower(a);  //检查是不是小写字母
	//ispunct(a);  //检查是不是标点
	//isspace(a);  //检查是不是空格
	//isupper(a);  //检查是不是大写字母
	//isxdigit(a);  //检查是不是十六进制数
	//tolower(a);   //把每个字母变成小写
	//toupper(a);  //把每个字母变成大写



	return 0;
}
