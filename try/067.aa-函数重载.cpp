#include <iostream>
#include <vector>

using namespace std;

//����֪ʶ��:
					//���غ���:��������ͬ���������������,������ͬ�ββ�ͬ
					//�ô�: ���÷��ĸ�ÿһ������������
					//�������غ��ظ�����������
						// 1.����: �βα���ͬ,�������Ͳ�ͬ
						// 2.�������ܽ������ڲ�ͬ�ķ������Ͷ�ʵ������
					// ��ʱ�����غ�����

void show(int x)
{
	cout << x << endl;
}

void show(vector<int> v)     //��������,�Զ��жϲ�������
{
	for (vector<int>::iterator iter=v.begin();iter!=v.end();++iter)
	{
		cout << *iter << endl;
	}
}
int main()
{
	int a = 89;
	vector<int>b;

	b.push_back(1);
	b.push_back(2);
	b.push_back(3);
	
	show(a);
	show(b);
	
	return 0;
}
