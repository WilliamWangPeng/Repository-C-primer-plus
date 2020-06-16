#include <iostream>
#include <string>

using namespace std;

//����֪ʶ��:
					//���ִ��������д��,����д��������
					//�βεĳ��Ȼ��������
					//����ʵ��--��������ĵ�ת��Ϊָ��
					//ͨ�����ô�������
					//��ά����Ĵ���
					//���ݸ�����������Ĵ��� -- ���ַ���


					//xָ������ĵ�һ��Ԫ��;
void printValues(const int* x, const size_t size)     //����ʹ�ô�д��
{
	for (size_t i=0; i!=size; ++i)
	{
		cout << x[i] << endl;
	}
	cout << endl;
}

void printValuse_2(const int x[], const size_t size)
{
	for (size_t i=0; i!=size; ++i)
	{
		cout << x[i] << endl;
	}
	cout << endl;
}

void printValues_3(const int x[10], const size_t size)
{
	for (size_t i=0;i!=size; ++i)
	{
		cout << x[i] << endl;
	}
	cout << endl;
}


void printValues_4(const int(&x)[10])    //���10����д,Ҳ����Ϊ���,����д���Եúܲ����,������
{
	for (size_t i=0;i!=10;++i)
	{
		cout << x[i] <<" ";
		cout << endl;
	}
}

          //x��һ��ָ��,ָ�����һ���кܶ��е�����ĵ�һ��,ÿһ����10����;
		  //һ�� rowsize ��;
void printValues_5(const int(*x)[10], const int rowSize)   //����ָ�봫����
{
	for (int i=0; i!=rowSize; ++i)
	{
		for (int j=0; j!=10; ++j)
		{
			cout << x[i][j] << " ";
		}
		cout << endl;
	}
}

void printValues_6(const int* beg, const int* end)
{
	while (beg!=end)
	{
		cout << *beg++ << " ";
	}
	cout << endl;
}

void printChars(const char* x)
{
	while (*x!=NULL)    //�ַ������һ���ַ���NULL
	{
		cout << *x++;
	}
	cout << endl;
}

int main()
{
	int arr[] = {2,4,6,8,0,1,3,5,7,9};
	char s[] = "Hello C++";

	printValues(arr,10);
	printValuse_2(arr, 10);
	printValues_3(arr, 10);
	printValues_4(arr);

	printValues_6(arr, arr + 8);

	int m[][10] =
	{
		{1,2,3,4,5,6,7,8,9,0},
		{2,3,5,6,2,5,8,4,2,7},
		{2,3,4,3,6,1,7,4,4,7}
	};

	printValues_5(m, 3);
	return 0;
}
