#include <iostream>
#include <string>

using namespace std;
						//不建议使用数组,建议使用vector
						//特殊情况下才要用

						/*数组缺点:
							不能知道大小,无sizeof函数;
							无push_back()函数;
							无法更改大小;*/

//全局数组会被自动初始化为零
int mai[2] = { 2,3 };

unsigned get_size()
{
	int a = 100;
	int b = 200;
	return a + b;
}



int main()
{




//数组下标的常量与变量要求
	int a[100];   //数组的维数必须是一个常量

	const unsigned buf_size = 512, max_files = 20;
	int staff_size = 27;

	const unsigned sz = get_size();

	char input_buffer[buf_size];
	string fileTable[max_files + 1];

	//double salaries[staff_size];  //staff_size是变量,不能定义数组

	//int test_scoress[get_size()];   //函数get_size()返回一个变量,同样不可以定义数组

	//int vals[sz];   //虽说sz定义的是常量,但未运行函数前,无数值




//数组的初始化细节
	const unsigned array_size = 3;
	int ia[array_size] = {12,4,2};  //函数内部数组不会自动初始化,使用未初始化的数组,会报错
	int aii[] = {2,3,5,6};   //数组维数也可不写
	int cs[4] = { 2,35 };    //未写全的数组,会自动初始化未0
	string str_arr[5] = { "hi","hi" };  //自动初始化为0长度字符串
	char cal[] = { 'c','=','-' };
	char cal0[] = { 'c','=','-','\0' };   //C语言风格;
	char cal2[] = "c";   //字符串会自动初始化'\0'




//数组的溢出
	//char chl3[6] = "Daniel";    //数组小了,放不下,出错

	cout << aii[3] << endl;
	cout << "ok" << endl;


	return 0;
}
