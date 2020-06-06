#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main()
{



//C语言的动态数组初始化;
	const char* pc = "a very long literal string" ;
	const size_t len = strlen(pc) ;
	for (size_t ix=0;ix!=100;++ix)
	{
		char opp[10000] = { 's','g' };
		char* pc3 = opp;
		char* pc5 = opp;
		char* pc2 = new char[len + 1];    //动态数组的方式适用于C风格的操作
		
		//strcpy_s(pc2, pc);     //目前strcpy已经不能将指针内容向另一个指针copy

		cout << pc3 << endl;

		delete[] pc2;
	}
	


//C++动态数组赋值
	string str("a very long literal string");
	for (int ix=0;ix!=100;++ix)
	{
		string str2 = str;
		cout << str2 << endl;
	}


	return 0;
}
