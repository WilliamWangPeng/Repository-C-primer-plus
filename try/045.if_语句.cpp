#include <iostream>
#include <string>
#include <vector>

using namespace std;


//����֪ʶ��:
					//if
					//if...else
					//Ƕ�׵�if
					//������else(if ��else�����)
					//if���������ʹ�ô�����(�����);

int compute_value()
{
	return 6;
}




int main()
{
	int score=88;
	if (score>=60)
	{
		cout << "�ϸ�" << endl;
	}

	if (int ival=compute_value())
	{
		cout << "hello" << endl;
	}
	else
	{
		cout << "no hello" << endl;
	}

	int a[] = { 9,7,5,3,1,2,4,6,8,9,8,5,2,1,3,2,1 };
	vector<int> ivec;
	for (int i=0;i<sizeof(a)/sizeof(int);++i)
	{
		ivec.push_back(a[i]);
		cout << a[i] << endl;
	}


	//Ѱ����������С��Ԫ��,������
	int minVal = ivec[0];
	int occurs = 1;
	for (int i=1;i<ivec.size();++i)
	{
		if (minVal==ivec[i])			
		{								
			++occurs;
		}
		else if (minVal>ivec[i])
		{
			minVal = ivec[i];
			occurs = 1;
		}
	}




//Ƕ�׵�if
	//	����ͬ��,��ͬ��д��
	for (int i = 1; i < ivec.size(); ++i)
	{
		if (minVal >= ivec[i])
		{
			if (minVal == ivec[i])
			{
				++occurs;
			}
			//������else(if ��else�����)
			else
			{
				minVal = ivec[i];
				occurs = 1;
			}
		}
	}					

	//�ĸ�if���Ƕ����һ��
	if (score >= 90)
	{
		cout << "great" << endl;
	}
	else if (score >= 80)
	{
		cout << "good" << endl;
	}
	else if (score >= 70)
	{
		cout << "ok" << endl;
	}
	else if (score >= 60)
	{
		cout << "fine" << endl;
	}
	else
		cout << "bad" << endl;

	cout << endl;
	cout << minVal << endl;
	cout << occurs;
	cout << endl;
	
	return 0;
}
