#include <iostream>
#include <string>

using namespace std;

//持续做加法运算


int main()
{
	string rep;
	do 
	{
		cout << "please enter two values:";
		int val1, val2;
		cin >> val1 >> val2;
		cout << "the num of" << val1 << " and " << val2
			<< "=" << val1 + val2 << "\n\n"
			<< "more?[yes][no]";
		cin >> rep;

	} while (!rep.empty()&&rep[0]!='n');
	return 0;
}
