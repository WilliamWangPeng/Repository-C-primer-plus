#include <iostream>
#include <string>

using namespace std;


//����֪ʶ��:
					//�������β�
	/*					1.��ͨ�β�
							��const�β�
							const�β�;
						2.ָ���β�
							��constָ���β�
							constָ���β�;
						3.����ʵ�εľ�����								*/
					//�����β�



void AddOne(int x)    //��ͨ�β�,�������β�,����ʱֻ�ǿ���
{
	x += 1;
}

void AddTwo(int* px)   //ָ���β�,���ڴ�����ǵ�ַ,����ָ���copyԭ��ַ,�������ú������β�����
{
	*px += 1;
}

void AddThree(int& x)  //�����β�
{
	x += 1;
}





int main()
{
	int a, b, c;
	a = 1;
	b = 2;
	c = 3;
	AddOne(a);
	cout << a << endl;

	AddTwo(&b);
	cout << b << endl;
	
	AddThree(c);
	cout << c << endl;


	return 0;
}
