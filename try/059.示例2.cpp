#include <iostream>
#include <string>

using namespace std;

int main(int argc, char* argv[])
{
	if (argc!=3)
	{
		cout << "you should use three arguments!" << endl;
		return -1;

	}
	cout << "the sum of these two numbers is"
		<< (atof(argv[1]) + atof(argv[2])) << endl;


	return 0;
}
