#include <iostream>
#include <string>
#include <vector>
#include <cstring>

using namespace std;

int main()
{

//����������ַ�����ֵ��������

	vector<string> svec;
	string str;
	cout << "enter strings:(ctrl+z to end)" << endl;
	while (cin>>str)
	{
		svec.push_back(str);
	}

	char** parr = new char* [svec.size()];  //�����ﶼ��ָ��

	size_t ix = 0;
	for (vector<string>::iterator iter=svec.begin();iter!=svec.end();++iter,++ix)
	{
		char* p = new char[(*iter).size() + 1];
		
		strcpy(p, (*iter).c_str());  //��iterָ���Ԫ��ת��Ϊc����,Ȼ��ֵ��p��
									//strcpy�����б仯,��������ʹ��;
		parr[ix] = p;
		delete p;
	}


//����ַ���
	cout << "content of vector:" << endl;
	for (vector<string>::iterator iter=svec.begin();iter!=svec.end();++iter)
	{
		cout << *iter << endl;
	}

	cout << "content of character arrays:" << endl;
	for (ix=0;ix!=svec.size();++ix)
	{
		cout << parr[ix] << endl;
	}

//ɾ�����ֵ����ж�̬����
	//for (ix=0;ix!=svec.size();++ix)  
	//{
	//	delete[] parr[ix];    //ѭ���ڲ������Ķ�̬���������ֶ�ɾ��,����ѭ���ڲ���ֵ��ȫ�ֶ�̬����������ɾ��
	//}
	delete[] parr;
	return 0;
}
