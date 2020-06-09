#include <iostream>
#include <string>
#include "Header.h"

using namespace std;

//��С���ص���ͷ�ļ���

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
		cerr << "�����쳣" << e.what() << endl;
	}
	cout << "hello stack" << endl;
	return 0;
}
