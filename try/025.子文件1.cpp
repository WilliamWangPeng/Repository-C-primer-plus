#include <iostream>
#include <string>
#include <bitset>

using namespace std;

int main()
{


//bitset自带的查找函数;

	bitset<32> a(156);
	cout << a << endl;

	bool is_set = a.any();   //a.any()用来检查有无任何一位是1
	if (is_set)
	{
		cout << "a里至少有一个1" << endl;
	}

	bool is_not_set = a.none();  //a.none()用来检查是否一个1都没有
	if (is_not_set)
	{
		cout << "a里有1" << endl;
	}
	
	size_t bits_set = a.count();    //a里一共有几个1
	cout << "a里一共有:" << bits_set << "个1" << endl;

	cout << "there are " << a.size() - a.count() << "a" << endl;

	return 0;
}
