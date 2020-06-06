#include <iostream>
#include <string>
#include <cmath>
#include <bitset>

using namespace std;

int main()
{

//��ƽ����,�Ż��㷨��������
	int const max_number(100);
	int const max_test((int)sqrt((double)max_number));  //��ƽ����,sqrt��Ҫdouble����,������Ҫת��;


//���ڴ�0��ʼ,���Բ������һλ
	bitset<max_number + 1> numbers;  //101��0,���ڼ�������ʹ�0��ʼ����,��һ��Ϊ���ֲ����һλ100
	numbers.set();    //101��1
	numbers[1] = 0;




//�㷨��Ҫ����,Ѱ������
	for (int i(1);i!=max_test;++i)   //�κη�����������һ�����������������ƽ����
	{
		if (numbers[i])  
		{
			for (int j(i*i);j<max_number+1;j+=i)   //i����������,���Գ�2;  
			{									//�Ż���Ϊj��i*i��ʼ,����С���Ѿ�ɸ��,���Բ�����;j(i*i)��ʼ����j=i*i��
				numbers[j] = 0;
			}
		} 
		
	}

	cout << "the number of primes less than" << max_number + 1 << "is" << endl << numbers.count() << endl;   
	//���¶��ٸ�һ���ж��ٸ�����








//����ҵ�����������
		for (int i(1);i!=max_number+1;++i)
		{
			if (numbers[i])
			{
				cout << i << "," << endl;
			}
		}

	return 0;
}
