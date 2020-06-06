#include <iostream>
#include <string>
using namespace std;

int main()
{




//size()函数使用

	string st("hello");
	cout << "字符串大小(字符的个数)" << st.size() << endl;

	

	string::size_type size = st.size();  //size_type——C++中专门为size()定义的类型
	




//字符串连接

	string a1("hello,");
	string a2("world");

	string a3 = a1 + a2;
	cout << a3 << endl;

	a1 += a2;  //连接字符串

	//string a4 = "hello" + ",";  //在C++内非法,其他语言或许可以
	string s5 = a1 + "," ;   //字符串字面值之间不能连接,C++中相对严格


	return 0;
}
