#include <iostream>

using namespace std;

int m;
const int n = 8;
//const int input = 0;
//const int output = 1;
//const int append = 2;


//枚举"enum"的使用示例



enum open_modes  //内部变量自动初始化为0,1,2
{
	input, output, append
};

int main()
{
	open_modes o;  //o 是枚举open_modes类型;

	o = input;  //o只可以取枚举中的某个数值;

	cout << o << endl;
	
	return 0;
}
