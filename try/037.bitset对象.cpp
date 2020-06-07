#include <iostream>
#include <string>
#include <bitset>

using namespace std;

//本节知识点: 
				
                //bitset对象(C++):  a.set 置1      a.reset 置0      ; 
				//位操作符(C): ~ 取反   << 比特位左移    >> 比特位右移    & 位与运算   | 位或运算   ^ 位异或运算;
				//重载:     << C++将C语言中的比特位左移重载为输出    >> C++将C语言中的比特位右移重载为输入

int main()
{


//二进制位进行操作记录的方法


	bool status;


//C++的写法;
	bitset<30> a;   //有30位二进制,会自动初始化为0
	a.set(27);   //把27位变为1
	a.reset(22);  //把22 位设为0
	status = a[27];  //读取27位的值


//C语言的写法;
	unsigned long b;   //long类型至少是32位
	b |= (1UL << 27);  //1UL是足够长的1,形为0000000000000000000001
	b &= ~(1UL << 22);  //把22位设为0
	status = b & (1UL << 27); //读取27位的值 
	

	return 0;
}
