#include <iostream>
#include <string>

using namespace std;

//����֪ʶ��: 
					//��ά����:���������
					//��ά����ĳ�ʼ��
					//��ά������±�����
					//ָ��Ͷ�ά����
					//��typedef��ָ���ά�����ָ��




//��typedef��ָ���ά�����ָ��
typedef int int_array[4];
							//��ά����:���������
							 //ע��˴�д��,�ر�����,[4]�õ��ر�����

int main()
{

//��ά����:���������  ��ά����ĳ�ʼ��
	const size_t rowSize = 3;
	const size_t colSize = 4;
	int ia[rowSize][colSize] = {     //��������,��������������,ÿ�����������ĸ�Ԫ��
		{0,1,2,3},
		{4,5,6,7},		//��δдȫ,���Զ���ʼ��
		{8,9,10,11}    //��дʱ��Ҫ������Ҳ����ȷ��,�������Ķ�
	};  

	cout << ia[1][2] << endl;


// ��ά����ĳ�ʼ��
	//��һ�ַ�ʽ
	for (size_t i=0;i!=rowSize;++i)
	{
		for (size_t j=0;j!=colSize;++j)
		{
			cout << ia[i][j] <<" ";
		}
		cout << endl;
	}

	//�ڶ��ַ�ʽ
	for (int_array *p=ia; p!=ia+3;++p)  //ע��ϸ��:��ѭ��ָ��ָ����*��ia,Сѭ��ָ����*��p
	{
		for (int *q=*p;q!=*p+4;++q)  
		{
			cout << *q << " ";
		}
		cout << endl;
	}

	//�����ַ�ʽ
	int(*p)[4];
	for (p=ia;p!=ia+3;++p)
	{
		for (int *q=*p;q!=*p+4;++q)
		{
			cout << *q << " ";
		}
		cout << endl;
	}
	return 0;   //�˴�return,����ľͲ�ִ����


//ָ��Ͷ�ά����
	int_array* ip;  //���������һ��,������
	//int(*ip)[4];    //������һ��ָ��int���������ָ��
	//int *ip[4]  //����һ������,������Ԫ��Ϊint���͵�ָ��
	ip = ia;  //ָ���һ��
	ip = &ia[2];  //ָ�������
	for (int *q=*ip;q!=*ip+4;++q)  //��������ж��Ԫ�ر�����ѭ��,ֱ���о�cout������
	{
		cout << *q << endl;
	}
	ip = &ia[2];

	return 0;
}
