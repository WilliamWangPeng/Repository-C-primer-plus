#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main()
{



//C���ԵĶ�̬�����ʼ��;
	const char* pc = "a very long literal string" ;
	const size_t len = strlen(pc) ;
	for (size_t ix=0;ix!=100;++ix)
	{
		char opp[10000] = { 's','g' };
		char* pc3 = opp;
		char* pc5 = opp;
		char* pc2 = new char[len + 1];    //��̬����ķ�ʽ������C���Ĳ���
		
		//strcpy_s(pc2, pc);     //Ŀǰstrcpy�Ѿ����ܽ�ָ����������һ��ָ��copy

		cout << pc3 << endl;

		delete[] pc2;
	}
	


//C++��̬���鸳ֵ
	string str("a very long literal string");
	for (int ix=0;ix!=100;++ix)
	{
		string str2 = str;
		cout << str2 << endl;
	}


	return 0;
}
