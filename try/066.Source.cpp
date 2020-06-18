#include "066.Header.h"    // 源文件写成员函数的定义

int Dog::sum()
{
	if (this->number)
	{
		return (this->number);
	}
	else
	{
		return 0;
	}
}