#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{


//vector使用示例;

	int a[100];
									//vector建议用法:先定义一个空的vector,然后有需要便push_back();



	vector<int> ivec;  //ivec是空的,大小为零;
	cout << ivec.size() << endl;

	//for (vector<int>::size_type ix=0; ix!=10;++ix)
	//{
	//	cin >> ivec[ix];   //ivec是空的,无法用下标;所以应该按下面这样输入;
	//}


	cout << "请输入五个整数"<<endl;
	int k;
	for (vector<int>::size_type ix=0; ix!=5;++ix)
	{
		cin >> k;
		ivec.push_back(k);
	}
	

	cout << "显示vector里的数据：" << endl;
	for (vector<int>::size_type a=0;a!=ivec.size();++a)
	{
		cout << ivec[a] << endl;
	}


	cout << "下面请输入一些字符串:" << endl;
	string word;
	vector<string> text;
	while (cin>>word)
	{
		text.push_back(word);
	}


	cout << "你输入的字符串是:" << endl;
	for (vector<string>::size_type i=0; i!=text.size();++i)
	{
		cout << text[i] << endl;
	}

	return 0;
}
