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
//for(��ʼ��;ѭ������;���ʽ)
	for (int i = 0; i < 10; ++i)    //��������ÿ�����ֶ�����ʡ��
	{
		cout << i << endl;
	}


//for ���ͷ��ĳЩ���ֿ��Ժ���
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

	cout << endl;



	vector<string> svec;
	svec.push_back("I");
	svec.push_back("love");
	svec.push_back("C++");

	cout << "����Ľ����:" <<'"';
	for (vector<string>::size_type ind=0; ind!=svec.size();++ind)
	{
		cout << svec[ind];   //ind��ʾ�ڼ����ַ���;
		if (ind+1!=svec.size())
		{
			cout << " ";
		}
		
	}
	cout << '"';
	cout << endl;

	const int size = 12;
	int val = 0, ia[size] = { 2,3,4,5,6,7,2,3,5,8,6,4 };
	


//for����еĶ������;
	for (int* pi = ia,& ri = val, ival = 0; ival != size; ++ival)
	{
		cout << ia[ival] <<"'"<<ia[ri]<<","<<ia[val]<<","<<*pi<< endl;   //�˴���������������ͬ
		++pi;
		++ri;   //����ri��val�����ñ���,����ri++����val++

	}
	
	return 0;
}
