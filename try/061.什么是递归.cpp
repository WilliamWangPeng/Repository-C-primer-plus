#include <iostream>
#include <string>

using namespace std;


//����֪ʶ��:
					//�ݹ������,����������
					//�Լ������Լ�
					//�����̽�����
					//����׳�
						// ʹ�õݹ�(�ݹ����ʹ�㷨�ṹ��,�������м䲽�趼��Ҫ�ݴ�,������,�ڴ�ռ�ô�
						// ʹ�õ���(����ѭ��,�����õݹ�Ķ�����ת��Ϊѭ��)

void doA()
{
	cout << "hello" << endl;
	doA();
}

void �����̽�����()
{
	cout << "��ǰ����ɽ,ɽ��������,�����и��Ϻ���,�Ϻ����ڸ�С���н�����,������:" << endl;
	�����̽�����();
}

       //�����㷨
long �׳�(int n)
{
	if (n==0)
	{
		return 1;
	}
	else
	{
		return n * �׳�(n - 1);
	}
	
}

		//�ݹ��㷨
long �׳�2(int n)
{
	long ��� = 1;
	for (int i = n; i > 0; i--)
	{
		��� = ��� * i;
	}
	return ���;
}


int main()
{
	int  number;
	cin >> number;
	for (int i=0;i!=number;++i)
	{
		cout <<i<<"!= "<< �׳�(i) << endl;
	}

	
	
	return 0;
}
