#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{



//�������Ĳ���;

	vector<int> v(10, 8);
											//begin��������һ��������,ָ���һ������Ԫ��;
	vector<int>::iterator iter = v.begin();

	vector<int>::iterator end = v.end();  //ͨ���������޸�����,���Բ����ó�������
	while (iter!=end)
	{
		*iter = 9;
		++iter;
	}
			//������ʵ������һ��ָ��

	*iter = 9;

	iter++;   //ָ���һ��ָ����һ����ַ
	*iter = 10;   

	for (vector<int>::const_iterator i=v.begin();i!=v.end();++i)  //�õ���������Ϊ����������±�
															//v.begin()ָ���һ��
															//v.end()ָ�����һ������һ��
	{
		cout << "������" << *i << endl;  //���޸�����,��������ó�������,"const_iterator"
	}


	return 0;
}
