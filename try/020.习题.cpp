#include <iostream>
#include <string>
#include <cctype>

using namespace std;



//��Ŀ:��ȡһ���ַ���,ȥ�����еı�����



int main()
{
	string s, result_str;
	char ch;
	bool has_punct = false;

	cout << "enter a string:" << endl;

	getline(cin, s);

	for (string::size_type index=0; index!=s.size();++index)
	{
		ch = s[index];
		if (ispunct(ch))
			has_punct = true;
		else
			result_str += ch;
	}

	if (has_punct)
		cout << "result:" << result_str << endl;
	else
	{
		cout << "û�б��" << endl;
	}


	return 0;
}
