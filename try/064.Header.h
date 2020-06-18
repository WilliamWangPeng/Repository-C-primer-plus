#ifndef demo_h
#define demo_h

#include <string>
using namespace std;      //头文件using namespace std; 源文件就不用写了


		//内联函数必须在头文件中有完整定义,不可以像普通函数一样,头文件声明,源文件定义
			//因为内联函数在编译时编译器就需要知道其完整定义,并将其替换到调用点
			//而普通函数编译时编译器只需要知道函数声明即可,执行时再切换到函数定义位置执行

inline int sum(int a, int b)    //内联函数,编译时便在调用的地方展开,直接被替换成 x[i]+y[i]
{
	return a + b;
}

inline const string& shortString(const string& s1, const string& s2)
{
	return s1.size() < s2.size() ? s1 : s2;
}

#endif
