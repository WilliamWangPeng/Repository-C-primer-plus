#include <iostream>
#include <string>

using namespace std;

int main()
{

//ָ��Ͷ�·�����������
	char s[] = { "hello world" };
	char* cp = s;
	while (cp&&*cp)     //���cp���ǿ�ָ��,���Ҽ��cpָ����ַ�����null
	{
		cout << *cp << endl;
		++cp;
	}
	return 0;
}
