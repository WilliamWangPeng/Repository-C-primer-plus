#include <iostream>
#include <string>
#include <vector>
#include <fstream>

using namespace std;

void process(string s)
{
	cout << s << endl;
}
		//读取三个文件
int main()
{
	vector<string> files;
	files.push_back("one.txt");
	files.push_back("two.txt");
	files.push_back("three.txt");

	string s;
	vector<string>::const_iterator it = files.begin();
	while (it!=files.end())
	{
		ifstream input(it->c_str());
		if (!input)
		{
			cerr << "error:can not open file: " <<*it<< endl;
			input.clear();
			++it;
			continue;
		}
		while (input>>s)
		{
			process(s);
		}
		input.close();
		input.clear();
		++it;
	}
	
	return 0;
}
