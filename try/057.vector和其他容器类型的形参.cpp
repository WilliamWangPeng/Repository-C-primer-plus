#include <iostream>
#include <vector>

using namespace std;



//本节知识点:
					//不要使用普通的非引用vector形参

					//要使用引用形参传递vector

					//事实上,C++程序员更传递vector的迭代器

//补充:
//	顺序容器:
//	vector  list  deque等等;
//	关联容器:
//	map  set 等等

//					//非引用形参,慢,不建议使用
//void print(vector<double> v)
//{
//	vector<double>::iterator begin = v.begin();
//	while (begin!=v.end())
//	{
//		cout << *begin << endl;
//		begin++;
//	}
//}  


					//引用形参
void print_2(vector<double>& v)
{
	vector<double>::iterator begin = v.begin();
	while (begin != v.end())
	{
		cout << *begin++ << endl;
	}
}

void print(vector<double>::const_iterator beg, vector<double>::const_iterator end)   //传入两个迭代器
{
	while (beg!=end)
	{
		cout << *beg++ << endl;
		if (beg!=end)
		{
			cout << " ";
		}
	}
	cout << endl;
}

int main()
{
	vector<double> dvec;
	dvec.push_back(1.1);
	dvec.push_back(2.2);
	dvec.push_back(3.3);

	print_2(dvec);

	//不用复制
	print(dvec.begin(), dvec.end());
	return 0;
}
