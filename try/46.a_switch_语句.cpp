#include <iostream>
#include <string>

using namespace std;


//����֪ʶ��:
					//ʹ��switch���if
					//ʹ��break����ᴩ
					//default���;
					//switch ���ʽ��case���
					//switch �ڲ��ı�������

int main()
{
	int i;
	cout << "��������������ڼ�" << endl;
	cin >> i;

//ʹ��break����ᴩ,�����дbreak,�Ὣ����������case����֮������ȫ�����
	switch (i)
	{
	case 1:     //case���벻����С��;
		cout << "����һ" << endl;
		break;
	case 2:
		cout << "���ڶ�" << endl;
		break;
	case 3:
		cout << "������" << endl;
		break;
	case 4:
		cout << "������" << endl;
		break;
	case 5:   //�����Ҫ��ǰ���case�ﶨ�����,�������ϴ�����,��ʾ����һ�������,��֮��㲻���ô˱���
	{
		int i;
		cout << "������" << endl;
		break;
	}
	case 6:
		cout << "������" << endl;
		break;
	case 7:
		cout << "������" << endl;
		break;
	//default���,�����볬��ʱ�����ʾ;
	default:
		
		cout << "��������" << endl;    //���Ҫ�������,ֻ���������һ�����涨��
		break;
	}
	
	return 0;
}
