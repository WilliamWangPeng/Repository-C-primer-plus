#include <iostream>
#include <locale.h>
#include <wchar.h>
#include <stdlib.h>

using namespace std;

int main()
{  

//输出宽字符的特殊设置
	setlocale(LC_ALL, "CHS");  //要输出非英文字符,需设置本地为"CHS",不区分大小写;

	char x = 'a';	  //char不能用来写中文;
	wchar_t y = L'中';  //宽字符,"L"作为提示将字符保存为宽字符
						//此处仅定义通过,输出还有问题
	
	printf("%c\n", 'A');   //此处不能是宽字符

	wprintf(L"%lc\n", L'中');   
	




	return 0;
}