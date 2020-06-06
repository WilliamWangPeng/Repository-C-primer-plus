#include <iostream>
#include <string>

using namespace std;

int main()
{

//指针和短路运算的巧妙结合
	char s[] = { "hello world" };
	char* cp = s;
	while (cp&&*cp)     //检查cp不是空指针,并且检查cp指向的字符不是null
	{
		cout << *cp << endl;
		++cp;
	}
	return 0;
}
