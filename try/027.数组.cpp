#include <iostream>
#include <string>

using namespace std;
						//������ʹ������,����ʹ��vector
						//��������²�Ҫ��

						/*����ȱ��:
							����֪����С,��sizeof����;
							��push_back()����;
							�޷����Ĵ�С;*/

//ȫ������ᱻ�Զ���ʼ��Ϊ��
int mai[2] = { 2,3 };

unsigned get_size()
{
	int a = 100;
	int b = 200;
	return a + b;
}



int main()
{




//�����±�ĳ��������Ҫ��
	int a[100];   //�����ά��������һ������

	const unsigned buf_size = 512, max_files = 20;
	int staff_size = 27;

	const unsigned sz = get_size();

	char input_buffer[buf_size];
	string fileTable[max_files + 1];

	//double salaries[staff_size];  //staff_size�Ǳ���,���ܶ�������

	//int test_scoress[get_size()];   //����get_size()����һ������,ͬ�������Զ�������

	//int vals[sz];   //��˵sz������ǳ���,��δ���к���ǰ,����ֵ




//����ĳ�ʼ��ϸ��
	const unsigned array_size = 3;
	int ia[array_size] = {12,4,2};  //�����ڲ����鲻���Զ���ʼ��,ʹ��δ��ʼ��������,�ᱨ��
	int aii[] = {2,3,5,6};   //����ά��Ҳ�ɲ�д
	int cs[4] = { 2,35 };    //δдȫ������,���Զ���ʼ��δ0
	string str_arr[5] = { "hi","hi" };  //�Զ���ʼ��Ϊ0�����ַ���
	char cal[] = { 'c','=','-' };
	char cal0[] = { 'c','=','-','\0' };   //C���Է��;
	char cal2[] = "c";   //�ַ������Զ���ʼ��'\0'




//��������
	//char chl3[6] = "Daniel";    //����С��,�Ų���,����

	cout << aii[3] << endl;
	cout << "ok" << endl;


	return 0;
}
