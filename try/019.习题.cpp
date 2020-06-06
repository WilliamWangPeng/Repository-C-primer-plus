#include <iostream>
#include <string>

using namespace std;



//比较两个字符是否相等

int main()              
{
	string  a1, a2;
	cout << "enter two string" << endl;
	cin >> a1 >> a2;

	if (a1 == a2)   //非布尔类型,比较要用"=="
	{
		cout << "they are equal" << endl;
	}
	else if (a1 > a2)
	{
		cout << "\"" << a1 << "\""<<"is bigger than"
			<< "\"" << a2 << "\"" << endl;
	}
	else
		cout << "\"" << a2 << "\""<<"is bigger than"
		<< "\"" << a1 << "\"" << endl;

	
	return 0;
}
