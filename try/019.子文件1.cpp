#include <iostream>

using namespace std;


//比较两个字符串大小

int main()
{
	string s1, s2;
	cout << "please input two string:" << endl;
	cin >> s1 >> s2;


	string::size_type len1, len2;
	len1 = s1.size();
	len2 = s2.size();

	if (len1 = len2)
	{
		cout << "they have same length1" << endl;
	}
	else if (len1 > len2)
	{
		cout << "\"" << s1 << "\"is bigger than"   //此处加引号的方法比较好
			<< "\"" << s2 << "\"" << endl;

	}
	else
		cout << "\"" << s2 << "\"is bigger than"
		<< "\"" << s1 << "\"" << endl;

	return 0;
}
