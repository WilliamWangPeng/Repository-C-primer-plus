#include <iostream>
#include <string>

using namespace std;


//寻找输入单词中出现连续重复次数最多的单词

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

	if (courrCnt > maxCnt)    //当最后一个单词和前一个重复时,不会执行else的语句,也就无法记录maxCnt和repWord,所以要再写一次
	{
		maxCnt = courrCnt;
		repWord = preWord;
	}
	
	if (maxCnt!=1)
	{
		cout << '"' << repWord << '"' << "连续重复了" << maxCnt << "次" << endl;

	}
	else
	{
		cout << "没有连续重复的单词" << endl;
	}


	return 0;
}
