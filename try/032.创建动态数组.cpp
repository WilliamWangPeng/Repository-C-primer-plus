#include <iostream>
#include <string>


using namespace std;


//����֪ʶ��: 
					//��(heap) - ���ɴ洢��(free store)
					//C����: malloc �� free;
					//C++����: new �� delete[]
					//��̬����Ķ���
					//��ʼ����̬���������
					//const����Ķ�̬����;
					//����̬���������
					//��̬�ռ���ͷ�
					//��̬�����ʹ��



int main()
{
	int a[10];   //��̬����,��ջ�ϴ�����

	int n;


//C���Դ�����̬����    malloc �� free;
	cout << "you want how big array is" << endl;
	cin >> n;

	int* p =(int*) malloc(n * sizeof(int));
	if (p!=NULL)
	{
		cout << "malloc�����ɹ�;" << endl;
	}

	free(p);    //�ͷ�C���Դ����Ķ�̬����





//C++������̬����		new �� delete[]
	int* pia = new int[n];   //֮�����Ƕ�̬����,������n�Ǳ���,���ǳ���

	if (pia!=NULL)
	{
		cout << "C++ ���鴴���ɹ�" << endl;
	}

	delete[] pia;  //�ͷ�C++�ͷŵ�����





	return 0;
}
