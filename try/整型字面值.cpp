#include <iostream>

using namespace std;

int main()
{


//各种类型的整形字面值

	short x;
	long y;
	long long m;
	int a, b;
	unsigned int p;

	a = 2;
	b = 3;
	cout << a + b << endl;
	cout << 2 + 3 << endl;

						//字面值默认是int或long
	cout << 20LL << endl;  //前面不加0,为十进制,"L"代表long,用来改变算术类型
	cout << 024U << endl;  //前面加0,为八进制,"U"代表unsigned
	cout << 0x14 << endl;  //前面加0x,为十六进制,字面值无short类型   
							//大小写均可
	return 0;
}