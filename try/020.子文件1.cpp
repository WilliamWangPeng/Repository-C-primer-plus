#include <iostream>
#include <string>
//#include <ctype.h>  //c����ԭ��д��,���ᳫ;
#include <cctype> //C++д��


//�ַ���麯��

using namespace std;

int main()
{
	string s("hELLo, world!!!!");

	string::size_type punct_cnt = 0;
	
	for (string::size_type index=0; index!=s.size();++index)
	{
		if (ispunct(s[index]))  //ispunct�����ж�ĳ���ַ��ǲ��Ǳ�����;
			++punct_cnt;
	}
	cout<<"���ַ�������" << punct_cnt <<"��������"<< endl;
	

	for (string::size_type index=0; index!=s.size();++index)
	{
		s[index] = tolower(s[index]);
	}
	cout << s << endl;

	//isalnum(a);  //����ַ��ǲ�����ĸ������
	//isalpha(a);  //����ǲ�����ĸ
	//iscntrl(a);  //����ǲ��ǿ����ַ�
	//isdigit(a);  //����ǲ�������
	//islower(a);  //����ǲ���Сд��ĸ
	//ispunct(a);  //����ǲ��Ǳ��
	//isspace(a);  //����ǲ��ǿո�
	//isupper(a);  //����ǲ��Ǵ�д��ĸ
	//isxdigit(a);  //����ǲ���ʮ��������
	//tolower(a);   //��ÿ����ĸ���Сд
	//toupper(a);  //��ÿ����ĸ��ɴ�д



	return 0;
}
