#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	char ch;
	cin >> ch;
	int aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0;

	
		switch (ch)
		{
		case 'a':
			++aCnt;
			break;
		case 'e':
			++eCnt;
			break;
		case 'i':
			++iCnt;
			break;
		case 'o':
			++oCnt;
			break;
		case 'u':
			++uCnt;
			break;
		}
	

	cout << "number of vowel a:\t" << aCnt << endl;
	cout << "number of vowel e:\t" << eCnt << endl;
	cout << "number of vowel i:\t" << iCnt << endl;
	cout << "number of vowel o:\t" << oCnt << endl;
	cout << "number of vowel u:\t" << uCnt << endl;
	return 0;
}
