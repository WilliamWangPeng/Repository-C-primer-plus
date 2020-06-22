#include <iostream>
#include <istream>


using namespace std;

//本节知识点:
			/*		strm::iostate          
					strm::badbit
					strm::failbit
					strm::eofbit

					s.eof()
					s.fail()
					s.bad()
					s.good()
					s.clear()
					s.clear(flag)
					s.setstate(flag)
					s.rdstate()							*/

void check_cin_state(istream& is)
{
	if (is.bad())   //判断cin是否有严重的错误
	{
		cout << "cin bad()" << endl;
	}
	else
	{
		cout << "cin not bad()" << endl;
	}

	if (is.fail())
	{
		cout << "cin fail()" << endl;
	}
	else
	{
		cout << "cin not fail()" << endl;
	}

	if (is.eof())    //是否结束
	{
		cout << "cin eof()" << endl;
	}
	else
	{
		cout << "cin not eof()" << endl;
	}

	if (is.good())
	{
		cout << "cin good()" << endl;
	}
	else
	{
		cout << "cin not good()" << endl;
	}
}

int main()
{
	cout << "检查cin的状态" << endl;
	//cin.setstate(istream::badbit);   //强制转变cin的状态为bad
	//cin.setstate(istream::failbit);
	cin.setstate(istream::badbit | istream::failbit);   //状态转变也可同时写
	//cin.clear();    //清除所有状态
	//cin.clear(istream::badbit);   //清除一个
	check_cin_state(cin);

	cout << "请输入一个整数" << endl;

	int n;
	cin >> n;     //如果输入不是整数,会使cin进入fail状态
	cout << "再检查一次" << endl;
	check_cin_state(cin);

	//使用流的状态
	istream::iostate old_state = cin.rdstate();
	cin.clear(old_state);   //记得要clear,方便后人使用
	
	return 0;
}
