#include <iostream>
#include <string>

using namespace std;

int main()
{
	char ch;
	int aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0;

	while (cin>>ch)    //�ر�ע��:cin����Ԫ��ʱ,�Կո��س���Ϊ�������������;
	{
		switch (ch)   //switch �ж�ʱ���Ԫ�ؽ���
		{
		case 'A':    //�������ùᴩ��A��aͳһ����
		case 'a':
			++aCnt;
			break;
		case 'E':
		case 'e':
			++eCnt;
			break;
		case 'I':
		case 'i':
			++iCnt;
			break;
		case 'O':
		case 'o':
			++oCnt;
			break;
		case 'U':
		case 'u':
			++uCnt;
			break;
		}
	}

	cout << "number of vowel a:\t" << aCnt << endl;
	cout << "number of vowel e:\t" << eCnt << endl;
	cout << "number of vowel i:\t" << iCnt << endl;
	cout << "number of vowel o:\t" << oCnt << endl;
	cout << "number of vowel u:\t" << uCnt << endl;
	return 0;
}
