#include <iostream>
#include <string>

using namespace std;

//����֪ʶ��:
					//ʹ�������β��޸�ʵ��
					//ʹ�������βη��ض�����Ϣ
					//����const���ñ��⸴��
					//������ָ��const������
						//��ͨ�ķ�const�����β�ʹ��ʱ��̫���
					//����ָ��ָ�������



void swap(int &v1, int &v2)
{
	int temp;
	temp = v2;
	v2 = v1;
	v1 = temp;
}

int main()
{
	int i = 10;
	int j = 20;
	cout << "before swap()  i=" << i << ", "<<"j=" << j << endl;
	swap(i, j);
	cout << "after swap()   i=" << i <<","<<"j="<< j << endl;
	
	return 0;
}
