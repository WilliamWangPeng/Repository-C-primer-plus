#include <iostream>
#include <string>

//using namespace std;

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
	string name("刘备");

	cout << name << endl;




//string的四种初始化方法;

	string s1;
	string s2("hello");
	string s3(s2);
	string s4(10, 'a');

	string s5 = "hello"; //比较慢,先定义,之后又赋值





//两种读取函数cin,getline
	string c1;
	cout << "please input your name:" << endl;
	cin >> s1;  //遇到第一个空格,停止读取,开头空白字符扔掉,直到第二次读到空白字符,保留的第二次空白字符
	cin >> c1;
	cout << s1 << endl;
	cout << c1 << endl;
	

	getline(cin, name);  //获取输入一行,所有输入都读入,一直读到换行符,然后扔掉换行符
	cout << name << endl;

	
	return 0;
}
