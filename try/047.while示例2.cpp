#include <iostream>
#include <string>

using namespace std;


//Ѱ�����뵥���г��������ظ��������ĵ���

int main()
{
	
	string preWord, currWord;
	string repWord;

	int courrCnt = 0, maxCnt = 1;

	cout << "enter some words(ctrl+z to end)" << endl;
	while (cin>>currWord)
	{
		if (currWord==preWord)
		{
			++courrCnt;
		}
		else
		{
			if (courrCnt>maxCnt)
			{
				maxCnt = courrCnt;
				repWord = preWord;
			}
			currWord = 1;
		}
		preWord = currWord;
	}

	if (courrCnt > maxCnt)    //�����һ�����ʺ�ǰһ���ظ�ʱ,����ִ��else�����,Ҳ���޷���¼maxCnt��repWord,����Ҫ��дһ��
	{
		maxCnt = courrCnt;
		repWord = preWord;
	}
	
	if (maxCnt!=1)
	{
		cout << '"' << repWord << '"' << "�����ظ���" << maxCnt << "��" << endl;

	}
	else
	{
		cout << "û�������ظ��ĵ���" << endl;
	}


	return 0;
}
