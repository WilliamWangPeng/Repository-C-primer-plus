#include <iostream>
#include <string>

using namespace std;

//����֪ʶ��;
					//��֤ѭ��������ִ��һ��
					//ע��:
						//1.Ҫ��do���֮ǰ�������
						//2.��������ѭ���ﶨ�������


int main()
{
	
	int i;
	i = 0;
	while (i<10)
	{
		cout << i << endl;
		++i;
	}


	int j;
	j = 0;
	do 
	{
		cout << "j:" << j << endl;
		++j;
	} while (j<10);    //�˴��зֺ�


	return 0;
}
