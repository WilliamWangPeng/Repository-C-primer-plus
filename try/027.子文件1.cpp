#include <iostream>
#include <string>

using namespace std;

int main()
{

//����ĳ�ʼ��    ��Ҫ:size_t���Ͷ���
	const size_t array_size = 7;
	int ia1[]={1,2,3,4,5,6,7};
	int ia2[array_size];

	for (size_t ix=0;ix!=7;++ix)   //size_tר���������������±�
	{
		cout << ia1[ix] << endl;
	}



//�����copy
	//ia2 = ia1;  //�����ia1�������copy��ia2��;
	for (size_t ix=0;ix!=array_size;++ix)
	{
		ia2[ix] = ia1[ix];
	}

	return 0;
}
