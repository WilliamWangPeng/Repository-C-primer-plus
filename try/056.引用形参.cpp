#include <iostream>
#include <string>

using namespace std;

//本节知识点:
					//使用引用形参修改实参
					//使用引用形参返回额外信息
					//利用const引用避免复制
					//更灵活的指向const的引用
						//普通的非const引用形参使用时不太灵活
					//传递指向指针的引用



void swap(int &v1, int &v2)
{
	int temp;
	temp = v2;
	v2 = v1;
	v1 = temp;
}

int main()
{
	int i = 10;
	int j = 20;
	cout << "before swap()  i=" << i << ", "<<"j=" << j << endl;
	swap(i, j);
	cout << "after swap()   i=" << i <<","<<"j="<< j << endl;
	
	return 0;
}
