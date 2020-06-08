#include <iostream>
#include <string>

using namespace std;

//本节知识点;
					//保证循环体至少执行一次
					//注意:
						//1.要在do语句之前定义变量
						//2.不可以在循环里定义变量！


int main()
{
	
	int i;
	i = 0;
	while (i<10)
	{
		cout << i << endl;
		++i;
	}


	int j;
	j = 0;
	do 
	{
		cout << "j:" << j << endl;
		++j;
	} while (j<10);    //此处有分号


	return 0;
}
