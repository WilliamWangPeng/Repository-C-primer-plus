#include <iostream>

using namespace std;

int main()
{
	signed int a;  //Ĭ���з���,��������
	short b;
	long c;

	unsigned int a2; //ֻ�ɱ�������
	unsigned short b2;
	unsigned long c2;

	char m;  //char���Ų�ȷ��,����ʱ���д��;

	unsigned char m1;    //8λ������,0-255
	signed char m2;    //�з���,2��7�η�,  -128~127

	m1 = 222;
	printf("%d\n", m1);
	m1 = 256;  //����char���ͷ���,���	
	printf("%d\n", m1);

	m1 = -1;  //�޷������Ͷ����з�����,�ڲ����-1��256ȡģ,-1/256ȡ��
	printf("%d\n", m1);



	return 0;
}