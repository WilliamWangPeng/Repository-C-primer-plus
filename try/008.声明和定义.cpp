#include <iostream>

using namespace std;


//变量声明预定义示例

int i;  //变量定义,分配内存
extern int j;  //外部变量声明,此处不分配内存,不初始化
				//变量位于其他文件或模块
				//变量只可以在一处定义,可在多处声明
				//不可重复定义

extern double pi = 3.1415;  //由于赋值,此处为变量定义,真心不建议


int main()
{
	
	return 0;
}