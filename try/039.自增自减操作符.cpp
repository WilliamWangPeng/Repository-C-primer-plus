#include <iostream>
#include <string>
#include <vector>

using namespace std;

//����֪ʶ��:
					//ǰ�ò����ͺ��ò���  ++a    a++
					//���ò���������δ��1��ֵ
					//ֻ���ڱ�Ҫʱ��ʹ�ú��ò�����
					//�������ʽ�����ʹ�ý����ú���������



int main()
{

//��++��ʹ��
	int a, b;
	a = 2;
	b = ++a;   //++a���ȼӺ�ֵ, a++���ȸ�ֵ���,����++a�ٶȱ�a++��;
	cout << "b=" << b << endl;

	vector<int> ivec;
	int cnt = 10;
	while (cnt>0)
	{
		ivec.push_back(cnt--);
	}

	vector<int>::iterator iter = ivec.begin();
	while (iter != ivec.end())
	{
		cout << "while:" << *iter++ << endl;
	}

	return 0;
}
