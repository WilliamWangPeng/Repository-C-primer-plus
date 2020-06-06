#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{

//指针向量的操作

	vector<string*> spvec;    //向量里全是指针
	string str;
	cout << "enter two strings(ctrl+z to end)" << endl;
	while (cin>>str)
	{
		string* pstr = new string;
		*pstr = str;
		spvec.push_back(pstr);   //指针放到了向量里
	}

	vector<string*>::iterator iter = spvec.begin();    //迭代器就是指针,向量里也是指针
	while (iter!=spvec.end())
	{
		cout << **iter <<" "<<(*iter)->size()<< endl;
		++iter;
	}


	iter = spvec.begin();
	while (iter!=spvec.end())    //不删除动态数组可能引发臭名昭著的内存泄漏
	{
		delete* iter;
		iter++;
	}


	return 0;
}
