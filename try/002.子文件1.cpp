#include <iostream>

using namespace std;

int main()
{
	char c;  //char仅为一个字节,不能定义中文字符,不一定-待探究;
	c = 'j';

	wchar_t c2;
	c2 = '在';

	bool a;  //bool类型,非0即1;
	bool b;
	a = true;
	b = false;
	cout << "a:" << a << "  " << "b:" << b << endl;

	printf("%d\n", c);
	cout << c << "," << c2 << endl;

	return 0;
}