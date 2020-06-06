#include <iostream>
#include <string>

//using namespace std;



//命名空间的用法

using std::cin; //单独使用
using std::string;  
using std::cout;
using std::endl;

int main()
{
	std::cout << "hello,you are handsome1" << endl;   //"::"是作用域操作符,std是名称空间;

	string s;
	cout << "please input  words" << endl;
	cin >> s;
	cout << "you input:" << s << endl;
	return 0;
}
