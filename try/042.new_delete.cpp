#include <iostream>
#include <string>

using namespace std;


//����֪ʶ��:
					//��̬��������:���ɴ洢��

					//new:��̬��������
/*                   1.��̬��������ĳ�ʼ��
					 2.��̬���������Ĭ�ϳ�ʼ��
					 3.�ľ��ڴ�                       */

					//delete:������̬�����Ķ���
/*					 1.��ֵָ���ɾ��
					 2.��delete֮��,����ָ���ֵ			*/

				    //const ����Ķ�̬����ͻ���


	//��̬�����Ķ������ڶ�ջ�ϱ���ʱ������,��̬�����Ķ��������ڴ�������ʱ������

class Dog
{
	//��ĳ�Ա
};



// 1.��̬��������ĳ�ʼ��   2.��̬���������Ĭ�ϳ�ʼ��    3.�ľ��ڴ�
void demo()
{
	int i(1024);
	int* pi = new int(1024);

	string s(10, '9');
	string* ps = new string(10, '9');   //��ʼ��

	Dog dog;    //д��д����,�������Ĭ�ϵĹ��캯����ʼ��
	Dog dog2();
	Dog* pdog = new Dog;
	Dog* pdog2 = new Dog();

	delete pi;
	delete ps;
	delete pdog;
	delete pdog2;
}

void demo2()
{
	int* pi = new int;   //û���ž�û��ʼ��,�����ž��г�ʼ��
	int* pi2 = new int();

	delete pi;
	delete pi2;
}

//1.��ֵָ���ɾ��
//2.��delete֮��, ����ָ���ֵ
void demo3()
{
	int i;   
	int* pi = &i;
	string str = "hello";
	double* pd = new double(33);


	//delete str;   //����һ������,�Ƕ�̬�����޷�delete
	//delete pi;    //�����ͨ��,��ͬ����һ������
	delete pd;   //delete ���˶��˶��������������
	            //pd���Ǳ���ԭ���ĵ�ַ;
	pd = 0;     //delete ��̬����֮��ָ��ָ��0

}


//const ����Ķ�̬����ͻ���
void demo5()
{
	const int* pci = new const int(1024);
	const string* pcs = new const string;

	delete pci;
	delete pcs;
}

int main()
{
	int i;   //��̬��������
	int* pi = new int;   //��̬��������,û��,ʹ��new��̬�����Ķ��������ָ��

	i = 12;
	*pi = 12;

	string* ps = new string;  //ʹ��Ĭ�ϵĹ��캯�����г�ʼ��

	delete pi;
	delete ps;
	return 0;
}
