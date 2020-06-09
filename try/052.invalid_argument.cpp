#include <iostream>
#include <string>
#include <bitset>
#include <stdexcept>   //invalid_argument异常在stdexcept头文件里

using namespace std;

int main()
{
	try
	{
		string s("10ad110010");    //ad 不能来bitset初始化
		bitset<10> b(s);
		cout << "bitset ok" << endl;
	}
	catch (invalid_argument err)
	{
		cout << "bitset error: " <<err.what()<< endl;
	}
		

	return 0;
}
