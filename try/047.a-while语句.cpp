#include <iostream>
#include <string>

using namespace std;

//����֪ʶ��:
					//ѭ�������ж������
					//ѭ�������н��и�ֵ
					//��鼴����
						// while(source!=arr1+sz)
							//*dest++ = *source++;

					//Ѱ�����뵥���г��������ظ��������ĵ���

int getNumber()
{
	int num;
	cout << "������һ������ѭ������:";
	cin >>num;
	return num;
}


int main()
{
	int i = 0;


	while (i<10)
	{
		cout << i++ << endl;	
	}
	while (int cnt=getNumber())
	{
		if (cnt==0)     //������Ϊ��ʱ,ѭ������
		{
			break;
		}
		for (int m=0;m<cnt;++m)
		{
			cout << m << endl;
		}
	}
	return 0;
}
