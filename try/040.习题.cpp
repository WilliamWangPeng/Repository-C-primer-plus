#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{

//ָ�������Ĳ���

	vector<string*> spvec;    //������ȫ��ָ��
	string str;
	cout << "enter two strings(ctrl+z to end)" << endl;
	while (cin>>str)
	{
		string* pstr = new string;
		*pstr = str;
		spvec.push_back(pstr);   //ָ��ŵ���������
	}

	vector<string*>::iterator iter = spvec.begin();    //����������ָ��,������Ҳ��ָ��
	while (iter!=spvec.end())
	{
		cout << **iter <<" "<<(*iter)->size()<< endl;
		++iter;
	}


	iter = spvec.begin();
	while (iter!=spvec.end())    //��ɾ����̬����������������������ڴ�й©
	{
		delete* iter;
		iter++;
	}


	return 0;
}
