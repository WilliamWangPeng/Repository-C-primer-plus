#include <iostream>
#include <vector>

using namespace std;



//����֪ʶ��:
					//��Ҫʹ����ͨ�ķ�����vector�β�

					//Ҫʹ�������βδ���vector

					//��ʵ��,C++����Ա������vector�ĵ�����

//����:
//	˳������:
//	vector  list  deque�ȵ�;
//	��������:
//	map  set �ȵ�

//					//�������β�,��,������ʹ��
//void print(vector<double> v)
//{
//	vector<double>::iterator begin = v.begin();
//	while (begin!=v.end())
//	{
//		cout << *begin << endl;
//		begin++;
//	}
//}  


					//�����β�
void print_2(vector<double>& v)
{
	vector<double>::iterator begin = v.begin();
	while (begin != v.end())
	{
		cout << *begin++ << endl;
	}
}

void print(vector<double>::const_iterator beg, vector<double>::const_iterator end)   //��������������
{
	while (beg!=end)
	{
		cout << *beg++ << endl;
		if (beg!=end)
		{
			cout << " ";
		}
	}
	cout << endl;
}

int main()
{
	vector<double> dvec;
	dvec.push_back(1.1);
	dvec.push_back(2.2);
	dvec.push_back(3.3);

	print_2(dvec);

	//���ø���
	print(dvec.begin(), dvec.end());
	return 0;
}
