#include <iostream>
#include <string>

using namespace std;


//�ַ����ĺϲ�-ȥ�����ַ���


int main()
{
	string str, result_str;
	
	cout << "enter string(ctrl+z to end):" << endl;   //ctrl+z ����������ѭ��
	while (cin>>str)
	{
		if (result_str.empty())   //empty�����ж��ַ��Ƿ�Ϊ��;
		{
			result_str = result_str  + str;
		} 
		else
		{
			result_str = result_str + ' ' + str;
		}
		
	}
	cout << "�����ַ���:" << result_str << endl;
	return 0;
}
