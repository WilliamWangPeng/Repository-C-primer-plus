#include <iostream>
#include <string>
#include <vector>

using namespace std;


//����֪ʶ��:
		/*            �ɴ���:�����C����ַ���
					  �´���:vector��string;      */
					//�໥ת�� C���<-->string    ����<-->vector;



int main()
{

//string-->C���    ����-->vector

	string st("hello world");
	st = st + "bill";
	cout << st << endl;

	const char* str=st.c_str();    //string����ת��ΪC�������

	cout << str << endl;

	const size_t arr_size = 6;
	int int_arr[arr_size] = { 0,1,2,3,4,5 };

	vector<int> ivec(int_arr, int_arr + arr_size);  //C����ַ���תvector,��int_arr��ʼ����,������int_arr+arr_size(������);
													//ǰ���󲻰�
	vector<int> ivec2(int_arr + 1, int_arr + 4);  //����1,2,3,4
	return 0;
}
