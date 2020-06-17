#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;


char& get_val(string &str, string::size_type ix)
{
	return str[ix];
}



int main()
{
	string s("hello");
	char& c = get_val(s, 1);     

	c = 'i';
	cout << s << endl;

	get_val(s, 0) = 'K';		//返回值作左值,错误写法
	cout << s << endl;


	return EXIT_SUCCESS;
	
}
