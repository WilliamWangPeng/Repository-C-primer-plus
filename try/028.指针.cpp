#include <iostream>
#include <string>
#include <vector>

using namespace std;
							//C++�������Բ��õ�ָ��,ָ����Ҫ������������
								//������,ָ����Ƕ���ĵ�ַ





//����֪ʶ��:
					//ʲô��ָ��
					//ָ��Ķ���ͳ�ʼ��
					//ָ�����



int main()
{

//ʲô��ָ��
//ָ�붨��,��ַ,��������
	string s("hello world!");
	string* sp = &s;    //sp��ָ��,*����sp��string���͵�ָ�����

	cout << s << endl;
	cout << *sp << endl;   
	cout << sp << endl;  

	vector<int>* pvec;
	int* ip1,*ip2;


//ָ��Ķ���ͳ�ʼ��
	int ival = 1024;
	int* pi = 0;  //ָ������,��ʾ��ָ���κζ���
	int* pi2 = &ival;
	int* pi3;   //û�г�ʼ��,������,�Ƚ�Σ��
	pi = pi2;  //ָ�����copyֵ

	int ival2;
	int zero = 0;
	const int c_ival = 0;

	//int* pi4 = ival;    //����д�����,�﷨����
	//int* pi5 = zero;     //ָ�����ָ��һ������

	int* pi6 = 0;    //ָ����Ե�����,��Ϊ��ָ���κζ���
	int* pi8 = NULL;   //ͬ��
	//int* pi7 = 123444;     //���ָ�����һ������,��˼��ָ��һ����ַ,�����ǲ������



//ָ�����
//ָ��ָ��ͬ���ͳ���,��ָ��ͬ���͵ĳ���
	double dval;
	double* pd = &dval;   //һ��ָ��ֻ��ָ��һ��ͬ���͵�ָ��
	double* pd2 = pd;

	//int* pi9 = pd;  //���Ͳ�ͬ
	//int* pi10=&dval;   //Ҳ������,���Ͳ�ͬ

	double obj = 3.14;
	int k;
	void* pv = &obj;
	pv = &k;    
	//void����ָ�뱻��Ϊ����ָ��,����ָ��ͬ���͵ı���;			
	//����;����,�������޸�ָ��ı���
	int a = 1;
	int* pa = &a;
	a = a + 2;
	*pa = *pa + 2;




	return 0;
}
