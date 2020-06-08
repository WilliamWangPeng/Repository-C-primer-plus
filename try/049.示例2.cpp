#include <iostream>
#include <string>

using namespace std;

//持续判断两个字符串的大小

int main()
{
	string str1, str2, str3;
	do 
	{
		cout << "enter two strings:" << endl;
		cin >> str1 >> str2;
		if (str1<str2)
		{
			cout << "the first is bigger" << endl;

		}
		else if(str1<str2)
		{
			cout << "the second is bigger" << endl;

		}
		else
		{
			cout << "they are equal" << endl;
		}

		cout << "continue?(y-yes,n-no)" << endl;
		cin >> str3;
	} while (str3[0]!='n'&&str3[0]!='N');

	return 0;
}
