#include <iostream>
#include <string>

using namespace std;

int main()
{
// << 和>> 

	int a;
	cin >> a;
	cout << "hello world" << endl;

	cout << 42 + 10;
	cout << endl;

	//优先级不对
	//cout<<10<42<<endl;
	cout << (10 < 42) << endl;
	return 0;
}
 