#include <iostream>
#include <string>

using namespace std;

void ptrswap(int*& v1, int*& v2)     //����ָ��ָ��
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
	cout <<"����ǰָ��  "<< *pi << "," << *pj << endl;
	ptrswap(pi, pj);     //��������ָ��
	cout <<"������ָ��  "<< *pi << "," << *pj << endl;


	return 0;
}
