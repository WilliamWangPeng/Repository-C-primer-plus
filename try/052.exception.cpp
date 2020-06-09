#include <iostream>
#include <string>
#include "Header.h"

using namespace std;

//本小节重点在头文件里

int main()
{
	try
	{
	Stack<int> st;
		st.push(1);
		st.push(2);
		st.push(3);
		cout <<"pop:"<<st.pop() << endl;
		cout <<"top:"<< st.top() << endl;
		cout <<"pop:"<< st.pop() << endl;
		cout <<"pop:"<< st.pop() << endl;
		cout <<"top:"<< st.top() << endl;
		cout <<"pop:"<< st.pop() << endl;
	}
	catch (const exception& e)
	{
		cerr << "发生异常" << e.what() << endl;
	}
	cout << "hello stack" << endl;
	return 0;
}
