#include <iostream>
#include <string>

using namespace std;


//����֪ʶ��:
					// ���캯��������ĳ�Ա����,����д���������
					// ���캯���Ķ���
					// ���캯���ĳ�ʼ���б�
					// �ϳɵ�Ĭ�Ϲ��캯��

class Person
{
public:			//�ó�ʼ���б��ʼ��
	Person():Ǯ(0),number(299)   //��������ʱ�޲���,������Ĭ�Ϲ��캯��
	{

	}

public:
	int	Ǯ=678;  //���Գ�ʼ��,��֪ԭ��
	int number = 29;
};


int main()
{
	Person a;      //ͨ������ Person �Ĺ��캯������
	Person ��;

	

	cout << a.Ǯ << endl;
	cout << ��.Ǯ << endl;
	return 0;
}
