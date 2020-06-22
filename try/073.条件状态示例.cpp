#include <iostream>
#include <string>

using namespace std;

int main()
{
	int sum = 0, value;
	
	//�򵥷���,����������3������eof(), bad(), fail() 
	/*while (cin>>value)
	{
		sum += value;
		cout << "sum is" << sum << endl;
	}*/

	//���õķ���
	while (cin>>value,!cin.eof())     //�����������ѭ������������
	{
		if (cin.bad())	 //��������,���ѭ��,���׳��쳣
		{
			throw runtime_error("IO stream corrupted");   
		}
		if (cin.fail())
		{
			cerr << "bad data, try again" << endl;
			cin.clear();    //�ָ�����״̬
			cin.ignore(200, '\n');    //��ֹcin�������Ӱ��֮������,��� \n ��ǰ������,���û�� \n ,�����200������
			continue;
		}
		sum += value;
		cout << "sum is" << endl;
	}
	
	return 0;
}
