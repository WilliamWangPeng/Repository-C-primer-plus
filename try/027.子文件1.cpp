#include <iostream>
#include <string>

using namespace std;

int main()
{

//数组的初始化    主要:size_t类型定义
	const size_t array_size = 7;
	int ia1[]={1,2,3,4,5,6,7};
	int ia2[array_size];

	for (size_t ix=0;ix!=7;++ix)   //size_t专门用来定义数组下标
	{
		cout << ia1[ix] << endl;
	}



//数组的copy
	//ia2 = ia1;  //不会把ia1里的数据copy到ia2里;
	for (size_t ix=0;ix!=array_size;++ix)
	{
		ia2[ix] = ia1[ix];
	}

	return 0;
}
