#include <iostream>
#include <string>

using namespace std;

int main()
{
//ָ������õ�����:
		//ָ������ʱ���Բ����г�ʼ��,������֮��ͨ����ֵ���г�ʼ��;����֮����Ըı�
		//����������ʱ,������г�ʼ��;����֮�����ٸı�
	int ival = 1024, ival2 = 2048;

	int* pi = &ival, * pi2 = &ival2;
	int& ri = ival, & ri2 = ival2;
	
	    


//ָ���ָ��Ķ���
	int** ppi = &pi;  //ָ���ָ��,pi��һ��ָ��,ppi����ָ��piָ���ָ��;����ָ��ival

	cout << ival << "," << *pi << "," << ri << endl;   //���������ival(1024)
	
	return 0;
}
