#include <iostream>
#include <string>
#include <vector>
#include <cstring>

using namespace std;

int main()
{

//把向量里的字符串赋值到数组里

	vector<string> svec;
	string str;
	cout << "enter strings:(ctrl+z to end)" << endl;
	while (cin>>str)
	{
		svec.push_back(str);
	}

	char** parr = new char* [svec.size()];  //数组里都是指针

	size_t ix = 0;
	for (vector<string>::iterator iter=svec.begin();iter!=svec.end();++iter,++ix)
	{
		char* p = new char[(*iter).size() + 1];
		
		strcpy(p, (*iter).c_str());  //将iter指向的元素转换为c风格的,然后赋值到p里
									//strcpy函数有变化,不再这样使用;
		parr[ix] = p;
		delete p;
	}


//输出字符串
	cout << "content of vector:" << endl;
	for (vector<string>::iterator iter=svec.begin();iter!=svec.end();++iter)
	{
		cout << *iter << endl;
	}

	cout << "content of character arrays:" << endl;
	for (ix=0;ix!=svec.size();++ix)
	{
		cout << parr[ix] << endl;
	}

//删除出现的所有动态数组
	//for (ix=0;ix!=svec.size();++ix)  
	//{
	//	delete[] parr[ix];    //循环内部创建的动态数组无需手动删除,但在循环内部赋值的全局动态数组必须逐个删除
	//}
	delete[] parr;
	return 0;
}
