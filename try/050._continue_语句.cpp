#include <iostream>
#include <string>
#include <cctype>    //�жϴ�Сд

using namespace std;

//����һЩ�����ж����ַ��Ƿ��д

int main()
{
	string word;
	cout << "enter some words:(ctrl+z to end)" << endl;
	while (cin>>word)
	{
		if (islower(word[0]))
		{
			continue;         //��������ѭ��,����ִ����һ��ѭ��
		}
		else
		{
			cout << "�ҵ�һ����д����" ;
			cout << word;
			cout << ", �䳤����";
			cout << word.size() << endl;
		}
	}
	return 0;
}
