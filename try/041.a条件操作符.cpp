#include <iostream>
#include <string>

using namespace std;


//����֪ʶ��:
					//����������
					//sizeof������;
					//���Ų�����



int main()
{
	int val1, val2;

	cout << "enter two integers:" << endl;
	cin >> val1 >>val2;

	if(val1<val2)
	{
		cout << val1 <<"С"<< endl;
	}
	else if(val1>val2)
	{
		cout << val2 << "С" << endl;
	}
	else
	{
		cout << "same" << endl;
	}
	



//����������Ҳ����Ԫ������
	cout << "the smaller one is" << ((val1 < val2) ? val1 : val2) << endl;     //ע��Ҫ�������������
	

	int i, j, k, max;
	cout << "enter three integers:" << endl;
	cin >> i >> j >> k;

	/*max = i;
	if (j>max){	max = j;}
	if (k>max){	max = k;}*/

	max = i > j ? (i > k ? i : k) : (j > k ? j : k);   //���⽫��������������Ƕ��,��д���Ų��ᱨ��,���ɶ���̫��

	return 0;
}
