#include <iostream>
#include <string>
#include <vector>

using namespace std;


//����֪ʶ��:
					//�����
/*						1.���ʽ���
						2.�����                       */
					//�������
				    //�������(�����)
				    //���������


int main()
{
	
	int ival = 1;
	ival = ival + 5;

//�����,��д�ֺ�
	for (int i=0; i<19;++i)      
	{
		cout << i;
	}

	for (int j = 0; j < 10; ++j)      //����ͬ��,�޴�����,��Ҫ�ӷֺ�
		;

	int a[9] = { 1,2,3,4,5,6,7,8,9 };
	int i = 0;
	int j = 8;
	int p = a[4];

    //�������д���a[4]�ķ��ں���,С��a[4]�ķ���ǰ��
	do 
	{
//2.�����
		while (a[++i]<p)   //��ѭ������������
		{
		}
		while (a[--i]>p)
		{
		}
		if (i < j) { swap(a[i], a[j]); }
	} while (i<j);

	vector<string> svec;
	svec.push_back("hello");
	svec.push_back("string");
	svec.push_back("vector");
//1.���ʽ���
	vector<string>::iterator iter = svec.begin();
	while (iter!=svec.end())
	{
		++iter;
	}


	return 0;
}
