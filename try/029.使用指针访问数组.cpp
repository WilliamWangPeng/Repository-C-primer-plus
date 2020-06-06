#include <iostream>
#include <string>
#include <vector>

using namespace std;

//本节知识点:
					//指针的算数操作
					//解引用和指针算数操作之间的相互作用
					//下标和引用
					//数组的超出末端指针
					//输出数组元素
					//指针是数组的迭代器




int main()
{

	//数组和指针的相互对应
	int ia[]={ 0,2,4,6,8 };

	int* ip = ia;   //数组的名称就是指向数组第一个元素的指针

	cout << *ia << endl;    //*a输出的就是ia[]这个数组的第一个元素;
	cout << *ip << endl;

	ip = &ia[4];   //取数组中第五个元素的地址
	ip = ia;   //和ip=&ia[0]一样



//指针的算数操作  解引用和指针算数操作之间的相互作用  下标和引用
	

	//通过指针操作数组
	int* ip2 = ip + 4;  //和 ip=&ia[4]是一样的,和int *ip2 = ia + 4 也是一样的
	cout << *ip << endl;

	ptrdiff_t n = ip2 - ip;  //这个定义未详讲,内部是int类型
	cout << n << endl;

	int last = *(ip2-3);  //*的优先级比"-"号高
	cout << last << endl;

	int* p = &ia[2];   //p这个指针指向了ia数组;
	cout << *p << endl;

	int j = p[1];   //由于p指针指向了p数组,所以可以访问其内部所有成员,p[1]是指p所指向的元素的后一个元素
	cout << j << endl;
	int k = p[-2];  //此处是数组的第一个
	cout << k << endl;

	const size_t arr_size = 5;
	int arr[arr_size] = { 1,2,3,4,5 };
	int* p2 = arr;


//  数组的超出末端指针
	int* p3 = p2 + arr_size;  //超出末端的指针,是允许的,有时需要这样做
	for (int* ptr = p2; ptr != p3; ++ptr)
	{
		cout << *ptr << endl;
	}



//输出数组元素
	const size_t arr_sz = 5;    //作用同上,写法区别
	int int_arr[arr_sz] = { 0,1,2,3,4 };
	for (int*pbegin=int_arr,*Pend=int_arr+arr_sz; pbegin != Pend; ++pbegin)
	{
		cout << *pbegin << endl;

	}
	cout << endl;


//指针是数组的迭代器 
	vector<int> ivec;     //vector写法与数组对比;
	ivec.push_back(1);
	ivec.push_back(2);
	ivec.push_back(30);
	ivec.push_back(50);

	for (vector<int>::iterator iter=ivec.begin();iter!=ivec.end();++iter)
	{
		cout << *iter << endl;
	}

	return 0;
}
