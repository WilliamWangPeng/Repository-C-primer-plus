#include <iostream>

using namespace std;

extern const int pi = 3.1415;
						//若要在其他文件使用const常量,必须在定义时也给const加上extern,变量不用

int main()
{




//常量的定义注意

	//常量,定义时必须初始化
	const int bufSize = 512;  //缓冲区大小buffer size,建议用const,速度快

	for (int index=0; index!=bufSize; ++index)
	{

	}

	const int max=18;
	for (int i=1;i<max;i++)  //所有数字最好用常量定义,便于阅读
	{
	}
	
	return 0;
}
