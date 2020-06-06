#include <iostream>
#include <string>

using namespace std;

int main()
{
	int x[] = { 2,3,4,5,6,7,8,5,2 };
	for (int j=0,cnt=10;j<sizeof(x)/sizeof(int);++j,--cnt)    //逗号操作符,其分隔作用
	{
		cout << x[j] << endl;
		x[j] = cnt;
	}
	return 0;
}
