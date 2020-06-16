#include <iostream>
#include <string>

using namespace std;

int add(int x, int y)
{
	return x + y;
}

int add_2(const int x, const int y)
{
	return x + y;
}

void addone(const int x)
{
	// x = x + 1;      //此处报错,因为const形参传入之后,不可以修改
}
int main()
{
	int a, b;
	a = 1;
	b = 2;
	const int m = 8, n = 9;

	int k = add(a, b);
	cout << k << endl;
	
	k = add(m, n);
	cout << k << endl;
	return 0;
}
