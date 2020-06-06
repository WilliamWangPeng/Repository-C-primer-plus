#include <iostream>

using namespace std;
                                  //此节过于复杂,以后使用中理解,此处注释可能不准确
int main()
{


//引用"&"的用法
	int a = 1024;
	int& b = a; //通俗理解,引用就是别名

	int ival = 299;
	int& ival = ival; //定义引用时就要初始化,这是非const引用
						//只能指向同类型的

	const int ii = 9299;  //const引用 是引用const常量的引用;
	const int& iwhd = ii;  //且只能指向 const同类型;
							//非const不能引用const常量


	int i = 42;
	const int& r = 42;
	const int& r2 = r + i; //const引用可以指向不同类型;

	return 0;
}
