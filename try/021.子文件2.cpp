#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{


//vectorʹ��ʾ��;

	int a[100];
									//vector�����÷�:�ȶ���һ���յ�vector,Ȼ������Ҫ��push_back();



	vector<int> ivec;  //ivec�ǿյ�,��СΪ��;
	cout << ivec.size() << endl;

	//for (vector<int>::size_type ix=0; ix!=10;++ix)
	//{
	//	cin >> ivec[ix];   //ivec�ǿյ�,�޷����±�;����Ӧ�ð�������������;
	//}


	cout << "�������������"<<endl;
	int k;
	for (vector<int>::size_type ix=0; ix!=5;++ix)
	{
		cin >> k;
		ivec.push_back(k);
	}
	

	cout << "��ʾvector������ݣ�" << endl;
	for (vector<int>::size_type a=0;a!=ivec.size();++a)
	{
		cout << ivec[a] << endl;
	}


	cout << "����������һЩ�ַ���:" << endl;
	string word;
	vector<string> text;
	while (cin>>word)
	{
		text.push_back(word);
	}


	cout << "��������ַ�����:" << endl;
	for (vector<string>::size_type i=0; i!=text.size();++i)
	{
		cout << text[i] << endl;
	}

	return 0;
}
