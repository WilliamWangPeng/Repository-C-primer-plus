#include <iostream>
#include <string>
#include <vector>

using namespace std;

//����֪ʶ��:
					//for(��ʼ��;ѭ������;���ʽ)
					//for ���ͷ��ĳЩ���ֿ��Ժ���
					//for����еĶ������;

int main()
{
	for (int i = 0; i < 10; ++i)    //��������ÿ�����ֶ�����ʡ��
	{
		cout << i << endl;
	}



	//�����ѭ������,��������ڲ���break
	int i=0;    //��ʼ��ʡ�Կ����ⲿ����
	for (;; ++i)
	{
		
		cout << i << endl;
		if (i>10)
		{
			break;
		}
		
	}

	cout << i << endl;



	vector<string> svec;
	svec.push_back("I");
	svec.push_back("love");
	svec.push_back("C++");

	for (vector<string>::size_type ind=0; ind!=svec.size();++ind)
	{
		cout << svec[ind];

	}

	cout << endl;
	return 0;
}
