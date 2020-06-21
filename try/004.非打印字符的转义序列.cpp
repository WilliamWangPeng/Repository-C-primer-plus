#include <iostream>

using namespace std;

int main()
{

//非打印字符的转义字符使用

	cout << "我说:\"我在学习C++\"" << endl;  //加上"\"起到转义作用
	cout << "我的文件夹是:c:\\bit\\test" << endl;   //此处"\"为"\"转义
	cout << "hello\n";
	cout << "here\r\n";

	cout << "M\12 2" << endl;  //此处\12相当于\n,\n的ASCLL码为012,转换为八进制,即为\12
	cout << "2\xaM" << endl;  //"\12"中不能用十进制;八进制,十六进制可以

	cout << "\062\012\115" << endl;  //八进制转义
	cout << "\x032\x00A\x04D" << endl;  //十六进制编号大小写均可

	cout << '2';
	cout << '\n';
	cout << 'M';
	cout << endl;

	cout << '\062';
	cout << '\012';
	cout << '\115';
	cout << endl;

	cout << '\x032';
	cout << '\x00a';
	cout << '\x04d';
	cout << endl;

	return 0;
}