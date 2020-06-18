#include <iostream>
#include <vector>

using namespace std;

class Account
{

};

class Phone
{

};

class Name
{

};

class Record
{
public:
	Account a;
	Phone b;
	Name c;

};

void lookup(const Account& acct)
{
	cout << "use account" << endl;
}

void lookup(const Phone& phone)
{
	cout << "use phone" << endl;
}

void lookup(const Name& name)
{
	cout << "use name" << endl;
}

int main()
{
	Account x;
	Phone y;
	Name z;
	lookup(x);
	lookup(y);
	lookup(z);
	
	return 0;
}
