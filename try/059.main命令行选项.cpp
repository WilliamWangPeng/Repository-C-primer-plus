#include <iostream>

using namespace std;


//����֪ʶ��:
					//int main(int argc, char **argv)   ������ѡ��
						
		    //����   �ַ�������
int main(int argc, char **argv)     //���Գ��ִ���,ԭ��δ֪
{
	cout << argv[0] << endl;   //argv[0]����������ѡ��
	cout << argv[1] << endl;
	cout << argv[2] << endl;

	for (int i = 0; i < argc; ++i)
	{
		cout << "ѭ��" << argv[i] << endl;
	}

	int start, end, step;
	start = atoi(argv[1]);   //atoi�Ὣargv[i]ת��Ϊ����;
	end = atoi(argv[2]);
	step = atoi(argv[3]);

	for (int k = start; k <= end; k += step)
	{
		cout << k << endl;
	}
	return 0;
}
