#include <iostream>
#include <locale.h>
#include <wchar.h>
#include <stdlib.h>

using namespace std;

int main()
{  

//������ַ�����������
	setlocale(LC_ALL, "CHS");  //Ҫ�����Ӣ���ַ�,�����ñ���Ϊ"CHS",�����ִ�Сд;

	char x = 'a';	  //char��������д����;
	wchar_t y = L'��';  //���ַ�,"L"��Ϊ��ʾ���ַ�����Ϊ���ַ�
						//�˴�������ͨ��,�����������
	
	printf("%c\n", 'A');   //�˴������ǿ��ַ�

	wprintf(L"%lc\n", L'��');   
	




	return 0;
}