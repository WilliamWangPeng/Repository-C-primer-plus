#include <iostream>
#include <string>
#include <vector>
#include <ctime>    //����ʱ��ͷ�ļ�

using namespace std;

//����֪ʶ��:
					//break���;
						// 1.���while
						// 2.���do while
						// 3.���for
						// 4.��� switch
					//continue ��� - ��ǰ�������ε���,����ѭ��
					//goto ���- ��ֹʹ��


int main()
{
	//����0-100�������
	vector<int> vec;
	int r;

	srand((unsigned)time(NULL));     //����ʱ��������������

	for (int i=0;i<10000;++i)
	{
		r = rand() % 101;
		vec.push_back(r);
		cout << r << endl;
	}


	//�����������,����Ѱ��100
	cout << "���һ����û���˿���100��" << endl;
	vector<int>::iterator iter = vec.begin();
	while (iter!=vec.end())
	{
		if (*iter==100)
		{
			break;
		}
		else
		{
			++iter;
		}
	}
	if (iter!=vec.end())
	{
		cout << "���˿���100"<<endl;
	}
	else 
	{
		cout << "û����" << endl;
	}



	//for (int k=0;k<100;++k)
	//{
	//	for (int j=0;j<100;++j)
	//	{
	//		if (vec[j]==100)
	//		{
	//			break;       //����Ƕ��ѭ��,breakֻ���Դ�ϱ�ѭ��;
	//		}
	//	}
	//}

	return 0;
}
