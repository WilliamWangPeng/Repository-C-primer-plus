#include <iostream>
using namespace std;

int main()
{


//两种字符串字面值连接方式
	cout << "a multi-line"
		"string literal"
		"using concatenates"
		<< endl;    //C++会自动连接

	cout << "a multi - line\
 string literal\
 using concatenates"<< endl;  //斜杠之间不要加空格,否则会显示出来

	return 0;
}