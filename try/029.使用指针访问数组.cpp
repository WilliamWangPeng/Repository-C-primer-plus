#include <iostream>
#include <string>
#include <vector>

using namespace std;

//����֪ʶ��:
					//ָ�����������
					//�����ú�ָ����������֮����໥����
					//�±������
					//����ĳ���ĩ��ָ��
					//�������Ԫ��
					//ָ��������ĵ�����




int main()
{

	//�����ָ����໥��Ӧ
	int ia[]={ 0,2,4,6,8 };

	int* ip = ia;   //��������ƾ���ָ�������һ��Ԫ�ص�ָ��

	cout << *ia << endl;    //*a����ľ���ia[]�������ĵ�һ��Ԫ��;
	cout << *ip << endl;

	ip = &ia[4];   //ȡ�����е����Ԫ�صĵ�ַ
	ip = ia;   //��ip=&ia[0]һ��



//ָ�����������  �����ú�ָ����������֮����໥����  �±������
	

	//ͨ��ָ���������
	int* ip2 = ip + 4;  //�� ip=&ia[4]��һ����,��int *ip2 = ia + 4 Ҳ��һ����
	cout << *ip << endl;

	ptrdiff_t n = ip2 - ip;  //�������δ�꽲,�ڲ���int����
	cout << n << endl;

	int last = *(ip2-3);  //*�����ȼ���"-"�Ÿ�
	cout << last << endl;

	int* p = &ia[2];   //p���ָ��ָ����ia����;
	cout << *p << endl;

	int j = p[1];   //����pָ��ָ����p����,���Կ��Է������ڲ����г�Ա,p[1]��ָp��ָ���Ԫ�صĺ�һ��Ԫ��
	cout << j << endl;
	int k = p[-2];  //�˴�������ĵ�һ��
	cout << k << endl;

	const size_t arr_size = 5;
	int arr[arr_size] = { 1,2,3,4,5 };
	int* p2 = arr;


//  ����ĳ���ĩ��ָ��
	int* p3 = p2 + arr_size;  //����ĩ�˵�ָ��,�������,��ʱ��Ҫ������
	for (int* ptr = p2; ptr != p3; ++ptr)
	{
		cout << *ptr << endl;
	}



//�������Ԫ��
	const size_t arr_sz = 5;    //����ͬ��,д������
	int int_arr[arr_sz] = { 0,1,2,3,4 };
	for (int*pbegin=int_arr,*Pend=int_arr+arr_sz; pbegin != Pend; ++pbegin)
	{
		cout << *pbegin << endl;

	}
	cout << endl;


//ָ��������ĵ����� 
	vector<int> ivec;     //vectorд��������Ա�;
	ivec.push_back(1);
	ivec.push_back(2);
	ivec.push_back(30);
	ivec.push_back(50);

	for (vector<int>::iterator iter=ivec.begin();iter!=ivec.end();++iter)
	{
		cout << *iter << endl;
	}

	return 0;
}
