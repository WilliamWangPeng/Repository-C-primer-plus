#include <iostream>
#include <string>

using namespace std;


//����֪ʶ��:
					//ָ��const�����ָ��
					//constָ��;
					//ָ��const�����constָ��
					//ָ���typedef
					//��⸴�ӷ��Ƶ�const��������



void doA(const int*p)  //��ָ�򳣶����ָ����Ԥ�������ڲ��Զ�������޸�
{

}


//ָ���typedef
typedef string* pstring;

int main()
{

//��⸴�ӷ��Ƶ�const��������
    //ָ��const�����ָ��
	double a = 1.2;
	double* p = &a;

	//һ����ָ�򳣶����ָ�봫�ݲ���
	const double pi = 3.14;
	//double* pppp = &pi;  //�˴�����,��������ָͨ��ָ��һ��������
	const double* cptr = &pi;  //Ҫ����ָ��ָ��һ��������,�ͱ�����һ��ָ�򳣶����ָ��

	cptr = &a;   /*������ָ�򳣶����ָ��ָ����ͨ����
					cptr = 1.5;   �������Զ����޸�*/




//constָ��;
	int errNum = 0;
	int* const curErr=&errNum;   //��ָ��,һ��ָ����޷�ָ����������,���Զ���ʱ������г�ʼ��




//ָ��const�����constָ��
	const double* const pi_ptr = &pi;  //�޷���ָ����������,�����޷���ָ��Ķ�������޸�




//����const��ǰ������ϸ��;

					//����const����ʱ,const���Է�ǰ,Ҳ���Էź�;
	const string s1;  
	string const s2;

	string cs = "a";
	//const pstring cstr;  //�˴���cstr�������cstr3һ��,��cstr1Ҳһ��
	//pstring const cstr1;

	const string* cstr2;
	//string* const cstr3=&cs;
	


	return 0;
}
