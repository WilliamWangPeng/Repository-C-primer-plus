#include <iostream>
#include <string>

using namespace std;

int main()
{
	string currWord, preWord;
	cout << "enter some words:(ctrl+z to end)" << endl;
	while (cin>>currWord)
	{
#ifdef NDEBUG
		cout << currWord << endl;
#endif
		if (!isupper(currWord[0]))  //只比较大写
		{
			continue;
		}
		if (currWord==preWord)
		{
			break;
		}
		else
		{
			preWord = currWord;
		}
	}


	if (currWord==preWord&&!currWord.empty())
	{
		cout << "the repeated  word  " << currWord << endl;
	}
	else
	{
		cout << "no repeated word" << endl;
	}
	return 0;
}
