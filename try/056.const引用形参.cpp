#include <iostream>
#include <string>

using namespace std;


void doOp(int x, int y,  int &�ӷ����,  int &�������,  int &�˷����,  int &�������)   //������������,����ֵ
{
	�ӷ���� = x + y;
	������� = x - y;
	�˷���� = x * y;
	������� = x / y;

	return ;
}

bool isShorter(const string &s1, const string &s2)     //ֱ�Ӵ�����,���ٸ���,�����ٶȸ���,const�����޸�;
{
	return s1.size() < s2.size();
}



int main()
{
	int a = 10, b = 2;
	int �ӷ����,�������,�˷����,�������;

	doOp(a, b, �ӷ����, �������, �˷����, �������);

	cout << �ӷ����<<","<<������� <<","<< �˷����<<"," <<������� << endl;

	string s1("one");
	string s2("hello");

	if (isShorter(s1,s2))
	{
		cout << "s1 is shorter" << endl;
	}
	else
	{
		cout << "s2 is shorter" << endl;
	}
	
	return 0;
}
