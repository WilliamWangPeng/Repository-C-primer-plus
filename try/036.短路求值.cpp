#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{

//两个输入输出示例
	int val;
	vector<int> vec;

	
	//短路求值-与运算,如果第一个不等式不成立,第二个不等式就不判断了
	while (cin >> val&&val!=42) 
	{
		vec.push_back(val);
	}

	for (vector<int>::const_iterator it=vec.begin();it!=vec.end();++it)
	{
		cout << *it << endl;
	}


	//短路求值-或运算,如果第一个不等式成立,第二个不等式就不判断了
	string s("hello c and c++ programming fun");
	string::iterator it = s.begin();     //iterator是一个迭代器;
	while (it!=s.end()&&!isspace(*it))    
	{
		*it = toupper(*it);
		++it;
	}

	
	return 0;
}
