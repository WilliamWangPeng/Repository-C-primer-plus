#include <iostream>
#include <cassert>   //����ͷ�ļ�,�Ӷ�����ʹ�� assert ����

using namespace std;

//ʹ��Ԥ���������е���
					//Ԥ����ָ��
					//#ifndef NDEBUG
						//cerr<<...<<endl;
					//#endif

					//����ѡ��: /DNDEBUG (���ϼ���ʹԤ����ָ���ڵĴ���ʧЧ)
					
					//Ԥ���峣��
					// _FILE_
					// _LINE_
					// _TIME_
					// _DATE_

					//assert ����
int ��� = 60000;

void ȡǮ(int ����)
{
	if (����<0)
	{
		cout << "��������С����" << "�ļ�" << __FILE__<<endl
			<< "��" << __LINE__ << endl
			<< "����" << __DATE__ << endl
			<<"ʱ��"<<__TIME__ << endl;
		return;
	}
	��� -= ����;
}

int add(int x, int y)
{
	return x * y;
}

int main()
{

#ifndef NDEBUG
	cout << "start main" << endl;    //�����õ�,����Ŀ���Ե������������  /DNDEBUG  ����
#endif


	ȡǮ(100);

	int ���;
	��� = add (1,2);
	assert(��� == 3);   //�������������,�����ڴ˽���,����������Ϣ
						//����Ӹ�����Ϣ /DNDEBUG ֮��, assertҲʧЧ;

	/*if (���!=3)
	{
		cout << "�������" << endl;
	}*/


#ifndef NDEBUG
	cout << "end" << endl;   //�����õ�
#endif


	return 0;
}
