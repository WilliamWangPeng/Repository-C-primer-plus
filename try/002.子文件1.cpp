#include <iostream>

using namespace std;

int main()
{
	char c;  //char��Ϊһ���ֽ�,���ܶ��������ַ�,��һ��-��̽��;
	c = 'j';

	wchar_t c2;
	c2 = '��';

	bool a;  //bool����,��0��1;
	bool b;
	a = true;
	b = false;
	cout << "a:" << a << "  " << "b:" << b << endl;

	printf("%d\n", c);
	cout << c << "," << c2 << endl;

	return 0;
}