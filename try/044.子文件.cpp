#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
//语句作用域
	int i;
	for ( i=0;i<100;++i)     //在语句内定义的变量,语句结束,变量消失
	{
		cout << i << endl;
		
	}

	cout << "循环后i:" << i << endl;


	vector<int> vec;
	vec.push_back(12);
	vec.push_back(3);
	vec.push_back(8);
	vec.push_back(7);
	vec.push_back(6);

	for (vector<int>::size_type index =0; index!=vec.size();++index)
	{
		int square;
		if (index%2)
		{
			square = index * index;
		}
		vec[index] = square;
	}

	
	return 0;
}
