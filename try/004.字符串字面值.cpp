#include <iostream>

using namespace std;

int main()
{


//字符串字面值,宽字符串

	cout << "hello world" << endl;  //单引号为字符,双引号为字符串

	cout << "A" << endl;   //字符串:"A"='A','\0'


	setlocale(LC_ALL, "CHS");  //设置本地为宽类型

	wprintf(L"%ls\n", L"宽字符串");

	return 0;
}