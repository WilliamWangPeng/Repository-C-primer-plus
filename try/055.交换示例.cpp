#include <iostream>
#include <string>

using namespace std;

int getBigger(int x, const int* y)
{
	return x > * y ? x : *y;
}

void swap(int *x, int *y)
{
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}

int main()
{
	int a = 2, b = 9;

	cout << (getBigger(a, &b)) << endl;
	cout << "before exchange " << a <<"  "<< b << endl;
	swap(&a, &b);
	cout << "after exchange " << a <<"  "<< b <<endl;
	return 0;
}
