#include <iostream>

using namespace std;

int main()
{
//各种类型的浮点字面值
							
	cout << 3.14159 << endl;    //浮点字面值 默认类型为double
	cout << 3.14159f << endl;  //加"f"代表单精度浮点型float
	cout << 3.14159L << endl;   //"L"代表long double

	cout << 3.141592E2 << endl;   //科学计数法
	cout << 3.14159e-3f << endl;    //f为单精度;

	return 0;
}