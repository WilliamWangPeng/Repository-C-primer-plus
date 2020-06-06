#include <iostream>
#include <string>
#include <vector>

using namespace std;


//本节知识点:
		/*            旧代码:数组和C风格字符串
					  新代码:vector和string;      */
					//相互转换 C风格<-->string    数组<-->vector;



int main()
{

//string-->C风格    数组-->vector

	string st("hello world");
	st = st + "bill";
	cout << st << endl;

	const char* str=st.c_str();    //string类型转换为C风格数组

	cout << str << endl;

	const size_t arr_size = 6;
	int int_arr[arr_size] = { 0,1,2,3,4,5 };

	vector<int> ivec(int_arr, int_arr + arr_size);  //C风格字符串转vector,从int_arr开始包含,包含到int_arr+arr_size(不包含);
													//前包后不包
	vector<int> ivec2(int_arr + 1, int_arr + 4);  //包含1,2,3,4
	return 0;
}
