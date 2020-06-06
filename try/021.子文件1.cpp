#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	vector<int> v1;
	v1.push_back(10);
	v1.push_back(11);
	v1.push_back(12);



//vector初始化

	vector<int> v2(v1);   //传入v1
	//vector<string> v3(v1);  //必须同类型的

	vector<int> v4(10, -1);
	vector<string> v5(10, "hi!");

	vector<int> v6(10);  //C++自动初始化,是个零
	vector<string> v7(10);  //是个空串

	cout << v1[0] << endl;
	cout << v2[0] << endl;
	cout << v4[0] << endl;
	cout << v5[0] << endl;
	cout << v6[0] << endl;
	cout << v7[0] << endl;
	
	
	

	return 0;
}
