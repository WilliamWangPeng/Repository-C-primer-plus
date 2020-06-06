#include <iostream>
#include <string>

using namespace std;


//字符串的合并-去除空字符串


int main()
{
	string str, result_str;
	
	cout << "enter string(ctrl+z to end):" << endl;   //ctrl+z 可用于跳出循环
	while (cin>>str)
	{
		if (result_str.empty())   //empty用来判断字符是否为空;
		{
			result_str = result_str  + str;
		} 
		else
		{
			result_str = result_str + ' ' + str;
		}
		
	}
	cout << "最后的字符串:" << result_str << endl;
	return 0;
}
