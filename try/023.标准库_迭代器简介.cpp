#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{



//迭代器的操作;

	vector<int> v(10, 8);
											//begin操作返回一个迭代器,指向第一个数据元素;
	vector<int>::iterator iter = v.begin();

	vector<int>::iterator end = v.end();  //通过迭代器修改数据,所以不能用常迭代器
	while (iter!=end)
	{
		*iter = 9;
		++iter;
	}
			//迭代器实际上是一个指针

	*iter = 9;

	iter++;   //指针加一就指向下一个地址
	*iter = 10;   

	for (vector<int>::const_iterator i=v.begin();i!=v.end();++i)  //用迭代器就是为了替代数组下标
															//v.begin()指向第一个
															//v.end()指向最后一个的下一个
	{
		cout << "迭代器" << *i << endl;  //不修改数据,所以最好用常迭代器,"const_iterator"
	}


	return 0;
}
