#include <iostream>
#include <string>

using namespace std;



//�Ƚ������ַ��Ƿ����

int main()              
{
	string  a1, a2;
	cout << "enter two string" << endl;
	cin >> a1 >> a2;

	if (a1 == a2)   //�ǲ�������,�Ƚ�Ҫ��"=="
	{
		cout << "they are equal" << endl;
	}
	else if (a1 > a2)
	{
		cout << "\"" << a1 << "\""<<"is bigger than"
			<< "\"" << a2 << "\"" << endl;
	}
	else
		cout << "\"" << a2 << "\""<<"is bigger than"
		<< "\"" << a1 << "\"" << endl;

	
	return 0;
}
