#include <iostream>


using namespace std;

int main()
{
	cout << "enter two numbers:" << endl;
	int v1, v2;
	cin >> v1 >> v2;

	int lower, upper;
	if (v1<v2)
	{
		lower = v1;
		upper = v2;
		cout << "�������бȽ�С������:" << lower << endl;
		cout << "�������бȽϴ������:" << upper << endl;
	} 
	else if(v2<v1)
	{
		lower = v2;
		upper = v1;
		cout << "�������бȽ�С������:" << lower << endl;
		cout << "�������бȽϴ������:" << upper << endl;
	}
	else
	{
		lower = v1;
		upper = v1;
		cout << "������һ����" << endl;
	}

	if (v1=v2)  //�����жϷ�ʽ������,��̽��
	{
		cout << "������һ����" << endl;
		
	} 
	else
	{
		return -1;
	}
	

	return 0;
}