#include <iostream>
#include <string>
#include <bitset>

using namespace std;

int main()
{


//bitset�Դ��Ĳ��Һ���;

	bitset<32> a(156);
	cout << a << endl;

	bool is_set = a.any();   //a.any()������������κ�һλ��1
	if (is_set)
	{
		cout << "a��������һ��1" << endl;
	}

	bool is_not_set = a.none();  //a.none()��������Ƿ�һ��1��û��
	if (is_not_set)
	{
		cout << "a����1" << endl;
	}
	
	size_t bits_set = a.count();    //a��һ���м���1
	cout << "a��һ����:" << bits_set << "��1" << endl;

	cout << "there are " << a.size() - a.count() << "a" << endl;

	return 0;
}
