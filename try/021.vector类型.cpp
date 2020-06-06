#include <iostream>
#include <vector>
#include <string>			
				//vector是一个动态数组,大小不定,可伸缩;

using std::vector;
using namespace std;

int main()
{


//vector基本操作;

	vector<int> ivec;	      //保存int类型数据的一个vector
	vector<double> devc;
	vector<string> svec;
	//vector<Dog> dogvec;     //保存dog类型数据的一个vector


	vector<int> a;        //a是一个空的容器;
	vector<int> b(10, 3);		//b是一个容器,里面有10个3;

	a.push_back(1);
	a.push_back(2);
	a.push_back(3);

	b.push_back(29);
	b.push_back(23);

	cout << a.size() << endl;
	cout << b.size() << endl;

	for (vector<int>::size_type i = 0; i != a.size(); ++i)   //此处vector也有size_type,vector不甚懂;
		cout << a[i] << endl;

	return 0;
}
