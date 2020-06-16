#include <iostream>
#include <string>

using namespace std;

void ptrswap(int*& v1, int*& v2)     //交换指针指向
{
	int* tmp = v2;
	v2 = v1;
	v1 = tmp;
}

int main()
{
	int i = 10;
	int j = 20;
	int* pi = &i;
	int* pj = &j;
	cout <<"交换前指针  "<< *pi << "," << *pj << endl;
	ptrswap(pi, pj);     //交换两个指针
	cout <<"交换后指针  "<< *pi << "," << *pj << endl;


	return 0;
}
