#include <iostream>
#include <string>
#include <cstring>   //C�����ַ���ͷ�ļ�;

using namespace std;				//C���ԵĶ������ݲ�����������д,���Ķ�����ʱ��Ҫʹ��;


//����֪ʶ��: 
					//C����ַ�����ʹ��: const char*cp="some value"
					//C����ַ����ı�׼�⺯��;
					//��Զ��Ҫ�����ַ���������null
					//ʹ��strn��������C����ַ���
					//������ʹ�ñ�׼������string





int main()
{



	//C���Ժ�C++���Ե��ַ�����д���ʾ��������ע�������С�ж�
	string s("hello");

	char s2[] = "hello";      //C���Ե��ַ���ʵ������һ���ַ�����;
	const char* cp = "hello";
	while (*cp)    //�ַ���������һλ��0
	{
		cout << *cp << endl;
		++cp;
	}


//��Զ��Ҫ�����ַ���������null
	char ca1[] = { 'c','++' };    //����C�����ַ���,ֻ��һ���ַ�����,���ڽ�βδ��\0Ҳ����null,�������������
	char ca2[] = { 'c','+','+','\0' };     //C�����ַ���;
	char ca3[] = "C++";      //C���Է����ַ���;

	

	char* cp1 = ca1;
	char* cp2 = ca2;


	const char* co1 = "C string example";
	
	string ss1("A string example");

	cout << strlen(cp1) << endl;      //strlen��C���Եı�׼�⺯��,�������ַ�����,����������һλ�Դ���0
										//strlen()Ĭ����Ϊcp1�����\0������־,���û�лᱨ��

	cout << ss1.size() << endl;	     //C++�ļ�������

	char a[] = { 'C','+','+' };   //����û�м�'\0',���Ի�������ش���
	cout << string(a) << endl;    //��������е��ַ�

	printf("hello C language!\n");
	cout << "hello C++!" << endl;





	//C���Ժ�C++���Զ��ַ�����copy�����ӡ���ֵ

	string b1 = "bill";
	string b2 = "Mary";
	b1 = b2;      //C++�´��b1��ֵ
	b1 += b2;

	//cp1 = "bill";
	//cp2 = "Mary";
	//cp1=cp2;    //��C����ֻ�ǰ�cp2�ĵ�ַ������cp1


	//strcpy_s����strcpy��̽��,���Ҵ˳�����ڴ���

//C����ַ����ı�׼�⺯��;
	char large[10];
	strcpy_s(large, cp1);   //��������;  C���ԵĿ⺯��strcpy_s()����ʵ�ֿ���ֵ�Ĺ���;cp1��һ��ָ��   
	strcat_s(large, cp2);   //ƴ�ӹ���;   ʵ���ַ���ƴ�ӵ�����


//ʹ��strn��������C����ַ���
	strncpy_s(large, cp1, 2);  //��'n'�ĺ�������ȫ,����ʹ��,2��ָֻ���Կ���ȥ2���ַ�;
	strncat_s(large, " ", 1);  //C�����мӿո�ķ�ʽ;
	strncat_s(large, cp2, 3);

	string largeS;
	largeS = b1;    //C++��copy
	largeS = largeS + b2;   //C++������

	



//����strcmp����ֵ�жϴ�С

	int i = strcmp(cp1, cp2);    //C�����ڵ��ַ��ȽϺ���,cp1����cp2,����0;cp1����cp2,����1;cp1С��cp2,����-1;

	if(i>0)     
	{
		cout << "cp1��" << endl;
	}
	else if(i<0)
	{
		cout << "cp2��" << endl;
	}
	else
	{
		cout << "һ����" << endl;
	}




//C++�Դ����жϷ���
	if(b1>b2)      
	{
		cout << "b1��" << endl;
	}
	else if(b1<b2)
	{
		cout << "b1��" << endl;
	}
	else
	{
		cout << "һ����" << endl;
	}

	return 0;
}
